/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:48:25 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/05/06 12:52:34 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// CONSTRUCTORS

RPN::RPN() {
}

RPN::RPN( std::string input ) {
	this->_size = 0;
	parseInput(input);
	//std::cout << this->_size;
}

RPN::RPN( RPN const & src ) {
	*this = src;
}

// DESTRUCTORS

RPN::~RPN() {
}

// PRIVATE MB FCS

void	RPN::performOperation( char c ) {

	double	first;	
	double	second;
	double	result;

	second = this->_stack.top();
	this->_stack.pop();
	this->_size--;
	first = this->_stack.top();
	this->_stack.pop();
	this->_size--;
	switch(c) {
		case '+':
			result = first + second;
			this->_stack.push(result);
			this->_size++;
			break ;
		case '-':
			result = first - second;
			this->_stack.push(result);
			this->_size++;
			break ;
		case '*':
			result = first * second;
			this->_stack.push(result);
			this->_size++;
			break ;
		case '/':
			result = first / second;
			this->_stack.push(result);
			this->_size++;
			break ;
	}
}

void	RPN::parseInput( std::string input ) {

	std::istringstream	inputStream(input);
	std::string			buffer;
	unsigned int		countNb = 0;
	unsigned int		countOp = 0;
	long				result;

	while (getline(inputStream, buffer, ' ')) {
		// std::cout << "buffer: " << buffer << std::endl;
		//if digit, put into stack, increment size,
		if (buffer.size() == 1 && isdigit(buffer[0])) {
			countNb++;
			this->_stack.push(stof(buffer));
			this->_size++;
		}
		//if operator, check size, pop elements, perform operation, push result,
		else if (buffer.size() == 1 && isOperator(buffer[0])) {
			countOp++;
			if (this->_size >= 2) {
				performOperation( buffer[0] );
			}
			else {
				inputStream.clear();
				std::cout << "Error\n";
				return ;
			}
		}
		//else, return error
		else {
			inputStream.clear();
			std::cout << "Error\n";
			return ;
		}
	}
	if (countNb != countOp + 1) {
		inputStream.clear();
		std::cout << "Error\n";
			return ;
	}
	else {
		if (isinf(this->_stack.top())) {
			std::cout << "Not possible to divide by 0\n";
			return ;
		}
		else if (isnan(this->_stack.top())){
			std::cout << "Not possible to divide 0 by 0\n";
			return ;
		}
		else {
			result = static_cast<long>(this->_stack.top());
			std::cout << result << std::endl;
			return ;
		}
	}
}

//OPERATOR SURCHARGE

RPN		& RPN::operator=( RPN const & rhs ) {
	
	if (this != &rhs)
		*this = rhs;
	return (*this);
}
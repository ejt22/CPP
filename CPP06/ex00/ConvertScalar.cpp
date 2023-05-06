/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalar.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:43:48 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:04:26 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalar.hpp"

// CONSTRUCTORS

ConvertScalar::ConvertScalar() : _input(""), _c(0), _i(0), _f(0), _d(0) {
}

ConvertScalar::ConvertScalar( const std::string input ) : _input(input), _c(0), _i(0), _f(0), _d(0) {
	
	this->detectType();
	this->makeConversion();
}

ConvertScalar::ConvertScalar( ConvertScalar const & src ) {

	*this = src;
}

// DESTRUCTOR

ConvertScalar::~ConvertScalar () {
}

// ASSIGNMENT OPERATOR SURCHARGE

ConvertScalar	& ConvertScalar::operator=( ConvertScalar const & rhs ) {

	if (this != &rhs) {
		this->_input = rhs._input;
		this->_c = rhs._c;
		this->_i = rhs._i;
		this->_f = rhs._f;
		this->_d = rhs._d;
	}
	return (*this);
}

// ANNEX FUNCTIONS

static bool	is_char( std::string input) {

	return (input.length() == 1 && !isdigit(input[0]));
}

static bool	is_int( std::string input ) {
	
	size_t	i = 0;

	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < input.length()) {
		if (!isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	is_float( std::string input ) {

	int	dot = 0;
	
	if (!input.compare("inff") || !input.compare("+inff") || !input.compare("-inff") || !input.compare("nanf"))
		return(true);
	for (size_t i = 0; i < input.length() - 1; i++) {
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue ;
		if (!isdigit(input[i]) && input[i] != '.')
			return (false);
		if (input[i] == '.')
			dot += 1;
	}
	return ((dot == 1) && (input[input.length() - 1] == 'f'));
}

static bool	is_double( std::string input ) {

	int	dot = 0;
	
	if (!input.compare("inf") || !input.compare("+inf") || !input.compare("-inf") || !input.compare("nan"))
		return(true);
	for (size_t i = 0; i < input.length(); i++) {
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue ;
		if (!isdigit(input[i]) && input[i] != '.')
			return (false);
		if (input[i] == '.')
			dot += 1;
	}
	return (dot == 1);
}

// PRIVATE MB FUNCTIONS

void	ConvertScalar::detectType( void ) {

	if (is_char(this->_input))
		this->_c = static_cast<char>(this->_input[0]);
	else if (is_int(this->_input))
		this->_i = stoi(this->_input);
	else if (is_float(this->_input))
		this->_f = stof(this->_input);
	else if (is_double(this->_input))
		this->_d = stof(this->_input);
	else
		throw NonValidType();
}

void	ConvertScalar::makeConversion(void) {
	if (this->_c) {
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
	}
	else if (this->_i) {
		this->_c = static_cast<char>(this->_i);
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else if (this->_f) {
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		this->_d = static_cast<double>(this->_f);
	}
	else if (this->_d) {
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
	}
}

// PUBLIC MB FUNCTIONS

char	ConvertScalar::getChar( void ) const {

	if (isnan(this->_d) || isinf(this->_d))
		throw(Impossible());
	else if (isnan(this->_f) || isinf(this->_f))
		throw(Impossible());
	else if (!isprint(this->_c))
		throw(NonDisplayable());
	else
		return (this->_c);
}

int	ConvertScalar::getInt(void) const {
	
	if (isnan(this->_d) || isinf(this->_d))
		throw(Impossible());
	else if (isnan(this->_f) || isinf(this->_f))
		throw(Impossible());
	return (this->_i);
}

float	ConvertScalar::getFloat( void ) const {

	return (this->_f);
}

double	ConvertScalar::getDouble( void ) const {

	return (this->_d);
}

// OTHER OPERATOR SURCHARGE

std::ostream &	operator<<(std::ostream & o, ConvertScalar const & in) {

	o <<  "char: ";
	try {
		in.getChar();
		o << "'" << in.getChar() << "'\n";
	}
	catch (std::exception & e){
		o << e.what() << std::endl;
	}
	try {
		o << "int: " << in.getInt() << "\n";
	}
	catch (std::exception & e) {
		o << e.what() << std::endl;
	}
	o << std::fixed << std::setprecision(1);
	o << "float: " << in.getFloat() << "f" << std::endl;
	o << "double: " << in.getDouble() << std::endl;
	return (o);
}
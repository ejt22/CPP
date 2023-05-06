/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:19:11 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/31 15:25:26 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template < typename T >
class MutantStack : public std::stack<T> {

	private:
		
	public:

		typedef  typename std::stack<T>::container_type::iterator				iterator;
		typedef  typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef  typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef  typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		
		MutantStack() : std::stack<T>() {};
		MutantStack( MutantStack const & src ) : std::stack<T>(src) {};
		~MutantStack() {};

		MutantStack	& operator=( MutantStack const & rhs ) {
			if (*this != rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}

		iterator				begin() { return (std::stack<T>::c.begin());};
		iterator				end() { return (std::stack<T>::c.end());};
		const_iterator			cbegin() const { return (std::stack<T>::c.begin());};
		const_iterator			cend() const { return (std::stack<T>::c.end());};
		reverse_iterator		rbegin() { return (std::stack<T>::c.rbegin());};
		reverse_iterator		rend() { return (std::stack<T>::c.rend());};
		const_reverse_iterator	rcbegin() const { return (std::stack<T>::c.rbegin());};
		const_reverse_iterator	rcend() const { return (std::stack<T>::c.rend());};
};

#endif
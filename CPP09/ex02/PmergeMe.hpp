/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:39:03 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/27 10:20:09 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <vector>
# include <deque>
# include <ctime>
# include "utils.hpp"
# include "algo.hpp"

class PmergeMe {

	private:

	std::vector<int>	_vector;
	std::deque<int>		_deque;
	double				_timeVect;
	double				_timeDeque;

	PmergeMe();
	PmergeMe( PmergeMe const & src );

	PmergeMe	& operator=( PmergeMe const & rhs );
	
	void	performVect( int argc, char * argv[] );
	void	performDeque( int argc, char * argv[] );
	void	display( int argc, char * argv[] ) const;
	
	public: 

	PmergeMe( int argc, char * argv[] );
	~PmergeMe();
};

#endif
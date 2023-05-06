/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:29:36 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/06 17:31:54 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <map>
# include <fstream>
# include <string>
# include <stdexcept>
# include "utils.hpp"


class BitcoinExchange {

	private:
		
		std::map<std::string, float>	_data;

		BitcoinExchange();
		void	initialiseMap( std::string dataFile );
		void	treatInput( std::string inputFile ) const;
		float	getRate( std::string date ) const;
		void	displayMap() const;

	public:
	
		BitcoinExchange( std::string dataFile, std::string inputFile );
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

		BitcoinExchange	& operator=( BitcoinExchange const & rhs );

		class fileOpenException : public std::exception {

			public:

			virtual const char	* what() const throw() {
				return ("Error : file couldn't open");
			}
		};
		class emptyFileException : public std::exception {

			public:

			virtual const char	* what() const throw() {
				return ("Error : file is empty");
			}
		};
};

#endif
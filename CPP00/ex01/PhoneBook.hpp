/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:21:46 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/22 16:14:11 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {

	private:

		Contact	_PhoneBook[8];
		int		_nbrContacts;
		int		_current;

		int		_askFirstName(void);
		int		_askLastName(void);
		int		_askNickname(void);
		int		_askPhoneNumber(void);
		int		_askDarkSecret(void);
		void	_printAll(void) const;

	public:

		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
};

#endif
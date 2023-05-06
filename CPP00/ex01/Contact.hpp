/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:08:20 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/10 10:29:11 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
	
private:

	std::string	_FirstName;
	std::string	_LastName;
	std::string	_Nickname;
	std::string	_PhoneNumber;
	std::string	_DarkSecret;
	
public:

	Contact(void);
	~Contact(void);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkSecret(void) const;
	void	setFirstName(std::string FirstName);
	void	setLastName(std::string LastName);
	void	setNickname(std::string Nickname);
	void	setPhoneNumber(std::string PhoneNumber);
	void	setDarkSecret(std::string DarkSecret);
	void	display(void) const;
};

#endif
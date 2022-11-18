/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:45:04 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 10:05:58 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		bool		setFisrtName(std::string fisrtName);
		bool		setLastName(std::string lastName);
		bool		setNickName(std::string nickName);
		bool		setPhoneNumber(std::string phoneNumber);
		bool		setDarkestSecret(std::string darkestSecret);
		std::string	getFisrtName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		void		contactInfo();
        bool        containOnlyWhitespaces(std::string s);
	private:
	    std::string	fisrtName;
	    std::string	lastName;
	    std::string	nickName;
	    std::string	phoneNumber;
	    std::string	darkestSecret;
};

#endif
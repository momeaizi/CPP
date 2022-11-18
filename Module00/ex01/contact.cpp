/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:49:12 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 12:02:22 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::contactInfo()
{
	std::cout << "firstname     : ";
	std::cout << getFisrtName() << std::endl;
	std::cout << "lasttname     : ";
	std::cout << getLastName() << std::endl;
	std::cout << "nicktname     : ";
	std::cout << getNickName() << std::endl;
	std::cout << "phonenumber   : ";
	std::cout << getPhoneNumber() << std::endl;
	std::cout << "darkestsecret : ";
	std::cout << getDarkestSecret() << std::endl;
}
bool	Contact::setFisrtName(std::string fisrtName)
{
	if (!containOnlyWhitespaces(fisrtName))
		return false;
	this->fisrtName = fisrtName;
	return true;
}
bool	Contact::setLastName(std::string lastName)
{
	if (!containOnlyWhitespaces(lastName))
		return false;
	this->lastName = lastName;
	return true;
}
bool	Contact::setNickName(std::string nickName)
{
	if (!containOnlyWhitespaces(nickName))
		return false;
	this->nickName = nickName;
	return true;
}
bool	Contact::setPhoneNumber(std::string phoneNumber)
{
	if (!containOnlyWhitespaces(phoneNumber))
		return false;
	this->phoneNumber = phoneNumber;
	return true;
}
bool	Contact::setDarkestSecret(std::string darkestSecret)
{
	if (!containOnlyWhitespaces(darkestSecret))
		return false;
	this->darkestSecret = darkestSecret;
	return true;
}

std::string	Contact::getFisrtName()
{
	return fisrtName;
}
std::string	Contact::getLastName()
{
	return lastName;
}
std::string	Contact::getNickName()
{
	return nickName;
}
std::string	Contact::getPhoneNumber()
{
	return phoneNumber;
}
std::string	Contact::getDarkestSecret()
{
	return darkestSecret;
}


bool	Contact::containOnlyWhitespaces(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!std::isspace(s[i]))
			return true;
	return false;
}

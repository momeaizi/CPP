/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:12:23 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/16 23:01:58 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>


bool	containOnlyWhitespaces(std::string s);


/***********************************************************************/
/*							Contact									   */ 	
/***********************************************************************/

class Contact
{
	private:
	    std::string	fisrtName;
	    std::string	lastName;
	    std::string	nickName;
	    std::string	phoneNumber;
	    std::string	darkestSecret;
	public:
		bool	setFisrtName(std::string fisrtName);
		bool	setLastName(std::string lastName);
		bool	setNickName(std::string nickName);
		bool	setPhoneNumber(std::string phoneNumber);
		bool	setDarkestSecret(std::string darkestSecret);
		void	contactInfo();
};
void	Contact::contactInfo()
{
	std::cout << fisrtName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickName << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
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








/***********************************************************************/
/*							Phonebook								   */ 	
/***********************************************************************/





class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook();
		
};

PhoneBook::PhoneBook()
{
	index = 0;
}






















bool	containOnlyWhitespaces(std::string s)
{
	int	length = s.length();
	for (int i = 0; i < length; i++)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' \
		&& s[i] != '\v' && s[i] != '\f' && s[i] != '\r')
			return true;
	}
	return false;
}

int	main()
{
	Contact contact;
	std::string	s;
	std::cin >> s;
	if (!contact.setFisrtName(s))
		std::cout << "empty str\n";
	std::cin >> s;
	if (!contact.setLastName(s))
		std::cout << "empty str\n";
	std::cin >> s;
	if (!contact.setPhoneNumber(s))
		std::cout << "empty str\n";
	std::cin >> s;
	if (!contact.setNickName(s))
		std::cout << "empty str\n";
	std::cin >> s;
	if (!contact.setDarkestSecret(s))
		std::cout << "empty str\n";
	contact.contactInfo();
}
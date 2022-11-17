/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:12:23 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/17 23:07:41 by momeaizi         ###   ########.fr       */
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
};
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


bool	containOnlyWhitespaces(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (!std::isspace(s[i]))
			return true;
	return false;
}



/***********************************************************************/
/*							Phonebook								   */ 	
/***********************************************************************/


class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
		int		size;
	public:
		void	search();
		void	addContact();
		void	displayContacts();
		void	displayContact(int i);
		void	displayAndTruncate(std::string s);
		void	displayColumns();
		PhoneBook(){index = 0;size = 0;}
		
};


void	PhoneBook::addContact()
{
	std::string	s;
	bool		notEmpty = false;

	std::cout << "Enter your firstname:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setFisrtName(s);
		if (!notEmpty)
			std::cerr << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your lastname:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setLastName(s);
		if (!notEmpty)
			std::cerr << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your nickname:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setNickName(s);
		if (!notEmpty)
			std::cerr << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your phone number:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setPhoneNumber(s);
		if (!notEmpty)
			std::cerr << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your darkest secret:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setDarkestSecret(s);
		if (!notEmpty)
			std::cerr << "Field cannot be empty!\n";
	}
	std::cout << "the contact is succesfully added !\n";
	index++;
	size++;
	if (index >= 8)
		index = 0;
}





void	PhoneBook::displayColumns()
{
	std::cout << '*';
	for (int i = 0; i < 65; i++)
		std::cout << '-';
	std::cout << "*\n";
	std::cout << "|index     |";
	std::cout << "firstname |";
	std::cout << "lastname  |";
	std::cout << "nickname  |";
	std::cout << "phonenumb.|";
	std::cout << "darkestse.|";
	std::cout << '\n';
	std::cout << '*';
	for (int i = 0; i < 65; i++)
		std::cout << '-';
	std::cout << "*\n";
	
}

void	PhoneBook::displayAndTruncate(std::string s)
{
	int	length = s.length();
	int	i;
	
	for (i = 0; i < length; i++)
	{
		if (i == 9 && length > 10)
		{
			std::cout << '.';
			return ;
		}
		else
			std::cout << s[i];
	}
	while (i++ < 10)
		std::cout << ' ';
}

void	PhoneBook::displayContact(int i)
{
	std::cout << '|';
	displayAndTruncate(std::to_string(i));
	std::cout << '|';
	displayAndTruncate(contacts[i].getFisrtName());
	std::cout << '|';
	displayAndTruncate(contacts[i].getLastName());
	std::cout << '|';
	displayAndTruncate(contacts[i].getNickName());
	std::cout << '|';
	displayAndTruncate(contacts[i].getPhoneNumber());
	std::cout << '|';
	displayAndTruncate(contacts[i].getDarkestSecret());
	std::cout << "|\n";
	//
	std::cout << '*';
	for (int i = 0; i < 65; i++)
		std::cout << '-';
	std::cout << "*\n";
}

void	PhoneBook::displayContacts()
{
	displayColumns();
	for (int i = 0; i < size && i < 8; i++)
	{
		displayContact(i);
	}
}

bool	containOnlyDigits(std::string index)
{
	for (size_t i = 0; i < index.length(); i++)
	{
		if (!std::isdigit(index[i]))
			return false;
	}
	return true;
}

void	PhoneBook::search()
{
	int			i = -1;
	std::string	s;

	displayContacts();
	std::cout << "Enter an index : ";
	std::getline(std::cin, s);
	if (containOnlyDigits(s))
		i = stoi(s);
	if (i >= size || i < 0)
	{
		std::cerr << "Invalid index!\n";
		return ;
	}
	contacts[i].contactInfo();
}



int	main()
{
	PhoneBook	motorola;
	std::string	line;

	while (1)
	{
		std::cout << ">>";
		std::getline(std::cin, line);
		if (line == "ADD")
			motorola.addContact();
		else if (line == "SEARCH")
			motorola.search();
		else if (line == "EXIT")
			return (2);
	}
}

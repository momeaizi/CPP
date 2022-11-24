/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:50:07 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/24 16:05:49 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iomanip>

void	PhoneBook::addContact()
{
	std::string	s;
	bool		notEmpty = false;

	while (!notEmpty && !std::cin.eof())
	{
		std::cout << "Enter your firstname: ";
		std::getline(std::cin, s);
		notEmpty = contacts[index].setFisrtName(s);
		if (!notEmpty && !std::cin.eof())
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	while (!notEmpty && !std::cin.eof())
	{
		std::cout << "Enter your lastname: ";
		std::getline(std::cin, s);
		notEmpty = contacts[index].setLastName(s);
		if (!notEmpty && !std::cin.eof())
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	while (!notEmpty && !std::cin.eof())
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, s);
		notEmpty = contacts[index].setNickName(s);
		if (!notEmpty && !std::cin.eof())
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	while (!notEmpty && !std::cin.eof())
	{
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, s);
		notEmpty = contacts[index].setPhoneNumber(s);
		if (!notEmpty && !std::cin.eof())
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	while (!notEmpty && !std::cin.eof())
	{
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, s);
		notEmpty = contacts[index].setDarkestSecret(s);
		if (!notEmpty && !std::cin.eof())
			std::cout << "Field cannot be empty!\n";
	}
	if (!std::cin.eof())
		std::cout << "the contact is succesfully added !\n";
	index++;
	size++;
	if (index >= 8)
		index = 0;
}

void	PhoneBook::displayColumns()
{
	std::cout << '*';
	for (int i = 0; i < 43; i++)
		std::cout << '-';
	std::cout << "*\n";
	std::cout << "|     index| firstname|  lastname|  nickname|\n*";
	for (int i = 0; i < 43; i++)
		std::cout << '-';
	std::cout << "*\n";
	
}

void	PhoneBook::displayAndTruncate(std::string s)
{
	std::cout << std::setw(10);
	if(s.size() > 10)
	{	
		s.resize(9);
		s.append(".");
	}
	std::cout << s;
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
	std::cout << "|\n";
	//
	std::cout << '*';
	for (int i = 0; i < 43; i++)
		std::cout << '-';
	std::cout << "*\n";
}

void	PhoneBook::displayContacts()
{
	displayColumns();
	for (int i = 0; i < size && i < 8; i++)
		displayContact(i);
}

bool	PhoneBook::containOnlyDigits(std::string index)
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
	std::cout << "Enter an index -> ";
	std::getline(std::cin, s);
	if (std::cin.eof())
		return ;
	if (containOnlyDigits(s) && s.length())
		i = stoi(s);
	if (i < 0 || i >= size || i >= 8)
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	contacts[i].contactInfo();
}

PhoneBook::PhoneBook()
{
    index = 0;
    size = 0;
}

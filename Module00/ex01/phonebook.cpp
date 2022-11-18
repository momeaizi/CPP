/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:50:07 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 12:02:23 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your lastname:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setLastName(s);
		if (!notEmpty)
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your nickname:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setNickName(s);
		if (!notEmpty)
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your phone number:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setPhoneNumber(s);
		if (!notEmpty)
			std::cout << "Field cannot be empty!\n";
	}
	notEmpty = false;
	std::cout << "Enter your darkest secret:\n";
	while (!notEmpty)
	{
		std::getline(std::cin, s);
		notEmpty = contacts[index].setDarkestSecret(s);
		if (!notEmpty)
			std::cout << "Field cannot be empty!\n";
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
	std::cout << "Enter an index : ";
	std::getline(std::cin, s);
	if (containOnlyDigits(s))
		i = stoi(s);
	if (i >= size || i < 0)
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
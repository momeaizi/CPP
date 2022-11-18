/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:08:32 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 11:57:26 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook
{
	public:
		void	search();
		void	addContact();
		void	displayColumns();
		void	displayContacts();
		void	displayContact(int i);
		void	displayAndTruncate(std::string s);
        bool	containOnlyDigits(std::string index);
		        PhoneBook();
	private:
		Contact contacts[8];
		int		index;
		int		size;
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:11 by fras          #+#    #+#                 */
/*   Updated: 2024/05/14 17:50:32 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
	public:
		enum class Status
		{
			STARTUP,
			HOME,
			ADD,
			SEARCH,
			EXIT
		};
		PhoneBook();
		void setStatusByUserInput(std::istream& command);
		Status operate();
		Status getStatus();
		void setStatus(PhoneBook::Status status);
		void addContact();
		void searchContacts();
		void printContactsOverview();
		const std::string& make_column(const std::string& test);
		void printContact(int id);
		void printMenuText();
	private:
		Contacts	contacts_[8];
		Status		status_;
		int			indexer_;
		std::string	print_column_;
};

#endif
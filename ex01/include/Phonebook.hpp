/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:11 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 19:44:55 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>
#include <iostream>

class Phonebook
{
	public:
		enum class Status
		{
			STARTUP,
			ADD,
			SEARCH,
			EXIT
		};
		Phonebook();
		~Phonebook();
		Status getStatus();
		void setStatusByUserInput(std::istream& command);
		void operate();
		void setStatus(Phonebook::Status status);
		void addContact();
		void searchContacts();
		void printContactsOverview();
		const std::string& make_column(const std::string& test);
		void printContact(int id);
	private:
		Contacts	contacts_[8];
		Status		status_;
		int			indexer_;
		std::string	print_column_;
};

#endif
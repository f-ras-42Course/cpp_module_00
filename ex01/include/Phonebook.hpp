/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:11 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 11:54:28 by fras          ########   odam.nl         */
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
			WRONG_INPUT,
			ADD,
			SEARCH,
			EXIT
		};
		Phonebook(/* args */);
		~Phonebook();
		Status getStatus();
		void setStatus(Phonebook::Status status);
		void addContact();
		void searchContacts();
		void printContactsOverview();
		void printContact(int id);
		void operate();
		void exit();
	private:
		Contacts	contacts_[8];
		Status		status_;
		int			indexer_;
};

#endif
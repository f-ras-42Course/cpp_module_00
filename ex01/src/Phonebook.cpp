/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 19:44:52 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
	
Phonebook::Phonebook()
: status_(Status::STARTUP)
{
	indexer_ = -1;
}

Phonebook::~Phonebook()
{
}

void Phonebook::setStatusByUserInput(std::istream& command)
{
	std::string	input;

	while (input != "ADD" && input != "SEARCH" && input != "EXIT")
	{
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(command, input);
	}
	if (input == "ADD")
	{
		setStatus(Status::ADD);
	}
	if (input == "SEARCH")
	{
		setStatus(Status::SEARCH);
	}
	if (input == "EXIT")
	{
		setStatus(Status::EXIT);
	}
}

void Phonebook::operate()
{
	switch (status_)
	{
		case Status::STARTUP:
			std::cout << "\nWelcome to the Mighty Phonebook!\n"
					"This phonebook is phenomenal -\n"
					"It can temporary store up to eight phone numbers!\n";
			std::cout << "———————————————————————————————————————\n";
			break;
		case Status::ADD:
			addContact();
			break;
		case Status::SEARCH:
			searchContacts();
			break;
		case Status::EXIT:
			std::cout << "Thank you for using the mighty Phonebook\n"
				<< "Enjoy your day :)\n";
			break;
	}
}

Phonebook::Status Phonebook::getStatus()
{
	return (status_);
}

void Phonebook::setStatus(Phonebook::Status status)
{
	status_ = status;
}

void Phonebook::addContact()
{
	if (indexer_ == 8)
	{
		indexer_ = 0;
	}
	else
	{
		indexer_++;
	}
	contacts_[indexer_].setFirstName(std::cin);
	contacts_[indexer_].setLastName(std::cin);
	contacts_[indexer_].setNickname(std::cin);
	contacts_[indexer_].setPhoneNumber(std::cin);
	contacts_[indexer_].setDarkestSecret(std::cin);
	std::cout << "Contact " << contacts_[indexer_].getFirstName() << " added.\n";
}

void Phonebook::searchContacts()
{
	int id = 0;
	
	if (indexer_ == -1)
	{
		std::cout << "No entries found. Add contact(s) first.\n";
		return ;
	}
	printContactsOverview();
	std::cout << "Choose a contact number: ";
	while (!(std::cin >> id) || id > indexer_ + 1 || id <= 0)
	{
		std::cin.clear(); clearerr(stdin);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Non-valid number number entered.\n";
		std::cout << "Choose a contact number: ";
	}
	std::cout << '\n';
	printContact(id);
}

void Phonebook::printContactsOverview()
{
	std::string	input;

	for (int i = 0; i < indexer_ + 1; i++)
	{
		std::cout << make_column(contacts_[indexer_].getIndexString()) << "|";
		std::cout << make_column(contacts_[indexer_].getFirstName()) << "|";
		std::cout << make_column(contacts_[indexer_].getLastName()) << "|";
		std::cout << make_column(contacts_[indexer_].getNickname()) << "|\n";
	}
}

const std::string& Phonebook::make_column(const std::string& input)
{
	size_t		size;

	print_column_ = input;
	size = input.size();
	if (size < 10)
	{
		print_column_.insert(0, 10 - size, ' ');
	}
	else if (size == 10)
	{
		print_column_.resize(10);
	}
	else
	{
		print_column_.resize(9);
		print_column_ += '.';
	}
	return (print_column_);
}

void Phonebook::printContact(int id)
{
	std::cout << contacts_[id - 1].getFirstName() << '\n';
	std::cout << contacts_[id - 1].getLastName() << '\n';
	std::cout << contacts_[id - 1].getNickname() << '\n';
	std::cout << contacts_[id - 1].getPhoneNumber() << '\n';
	std::cout << contacts_[id - 1].getDarkestSecret() << '\n';
}

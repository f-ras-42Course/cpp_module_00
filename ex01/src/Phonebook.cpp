/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 23:24:52 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
	
Phonebook::Phonebook(/* args */)
: status_(Status::STARTUP)
{
	indexer_ = 1;
	operate();
}
Phonebook::~Phonebook()
{
}
void Phonebook::operate()
{
	switch (status_)
	{
		case Status::STARTUP:
			std::cout << "Welcome to the mighty Phonebook\n"
					"This Phonebook is phenomenal and can temporary store "
					<< "eight phonenumbers\n"
					"Use one of the following commands: ADD, SEARCH, EXIT\n";
			break;
		case Status::WRONG_INPUT:
			std::cout << "WRONG COMMAND!!!\n"
					"Use one of the following commands: ADD, SEARCH, EXIT\n";
			break;
		case Status::ADD:
			addContact();
			break;
		case Status::SEARCH:
			// printContacts();
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
void Phonebook::exit()
{
	status_ = Status::EXIT;
}
void Phonebook::addContact()
{
	if (indexer_ == 9)
	{
		indexer_ = 1;
	}
	else
	{
		indexer_++;
	}
	contacts_[indexer_].setFirstName(std::cin);
	contacts_[indexer_].setLastName(std::cin);
	contacts_[indexer_].setPhoneNumber(std::cin);
	contacts_[indexer_].setDarkestSecret(std::cin);
}

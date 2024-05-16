/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/16 12:35:10 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
	
PhoneBook::PhoneBook()
: status_(Status::STARTUP)
{
	indexer_ = -1;
}

void PhoneBook::setStatusByUserInput(std::istream& command)
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

PhoneBook::Status PhoneBook::operate()
{
	switch (status_)
	{
		case Status::STARTUP:
			printMenuText();
			setStatus(Status::HOME);
			break;
		case Status::HOME:
			printMenuText();
			setStatusByUserInput(std::cin);
			break;
		case Status::ADD:
			addContact();
			break;
		case Status::SEARCH:
			searchContacts();
			break;
		case Status::EXIT:
			printMenuText();
			break;
	}
	return (status_);
}

PhoneBook::Status PhoneBook::getStatus()
{
	return (status_);
}

void PhoneBook::setStatus(PhoneBook::Status status)
{
	status_ = status;
}

void PhoneBook::addContact()
{
	if (indexer_ == 7)
	{
		indexer_ = 0;
	}
	else
	{
		indexer_++;
	}
	contacts_[indexer_].setIndex(indexer_ + 1);
	contacts_[indexer_].setFirstName(std::cin);
	contacts_[indexer_].setLastName(std::cin);
	contacts_[indexer_].setNickname(std::cin);
	contacts_[indexer_].setPhoneNumber(std::cin);
	contacts_[indexer_].setDarkestSecret(std::cin);
	std::cout << "Contact " << contacts_[indexer_].getFirstName() << " added.\n";
	setStatus(Status::HOME);
}

void PhoneBook::searchContacts()
{
	int id = 0;
	
	if (indexer_ == -1)
	{
		std::cout << "No entries found. Add contact(s) first.\n";
		setStatus(Status::HOME);
		return ;
	}
	printContactsOverview();
	std::cout << "Choose a contact number: ";
	while (!(std::cin >> id) || id > indexer_ + 1 || id <= 0)
	{
		std::cin.clear(); clearerr(stdin);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Choose a valid contact number: ";
	}
	std::cout << '\n';
	printContact(id);
	setStatus(Status::HOME);
}

void PhoneBook::printContactsOverview()
{
	int i = 0;
	
	while (contacts_[i].getIndex() != 0 && i < 8)
	{
		std::cout << make_column(contacts_[i].getIndexString()) << "|";
		std::cout << make_column(contacts_[i].getFirstName()) << "|";
		std::cout << make_column(contacts_[i].getLastName()) << "|";
		std::cout << make_column(contacts_[i].getNickname()) << "|\n";
		i++;
	}
}

const std::string& PhoneBook::make_column(const std::string& input)
{
	size_t		size;

	print_column_ = input;
	size = input.size();
	if (size < 10)
	{
		print_column_.insert(0, 10 - size, ' ');
	}
	if (size > 10)
	{
		print_column_.resize(9);
		print_column_ += '.';
	}
	return (print_column_);
}

void PhoneBook::printContact(int id)
{
	std::cout << "First name:      ";
	std::cout << contacts_[id - 1].getFirstName() << '\n';
	std::cout << "Last name:       ";
	std::cout << contacts_[id - 1].getLastName() << '\n';
	std::cout << "Nickname:        ";
	std::cout << contacts_[id - 1].getNickname() << '\n';
	std::cout << "Phonenumber:     ";
	std::cout << contacts_[id - 1].getPhoneNumber() << '\n';
	std::cout << "Darkest secret:  ";
	std::cout << contacts_[id - 1].getDarkestSecret() << '\n';
}

void PhoneBook::printMenuText()
{
	switch (status_)
	{
		case Status::STARTUP:
			std::cout << "\nWelcome to The Mighty Phonebook!\n"
			"This phonebook is phenomenal -\n"
			"It can temporary store up to eight phone numbers!\n"
			"———————————————————————————————————————\n";
			break;
		case Status::HOME:
			std::cout << '\n';
			std::cout.width(30); std::cout << std::right << "HOME MENU\n";
			std::cout << 
			"Use one of the following commands: ADD, SEARCH, EXIT.\n";
			break;
		case Status::EXIT:
			std::cout << "Thank you for using The Mighty Phonebook\n"
			<< "Enjoy your day :)\n";
			break;
		default:
			break;
	}
}

// -- Varriant on searchContacts (able to exit from search menu) --

// void PhoneBook::searchContacts()
// {
//     std::stringstream ss;
//     std::string line;
//     int id;
    
//     if (indexer_ == -1)
//     {
//         std::cout << "No entries found. Add contact(s) first.\n";
//         setStatus(Status::HOME);
//         return ;
//     }
//     printContactsOverview();
//     std::cout << "Choose a contact number: ";
//     getline(std::cin, line);
//     ss << line;
//     if (ss.str() == "EXIT")
//     {
//         setStatus(Status::EXIT);
//         return ;
//     }
//     while (!(ss >> id) || id > indexer_ + 1 || id <= 0)
//     {
//         std::cin.clear(); clearerr(stdin);
//         std::stringstream().swap(ss);
//         std::cout << "Choose a valid contact number: ";
//         getline(std::cin, line);
//         ss << line;
//         if (ss.str() == "EXIT")
//         {
//             setStatus(Status::EXIT);
//             return ;
//         }
//     }
//     std::cout << '\n';
//     printContact(id);
//     setStatus(Status::HOME);
// }
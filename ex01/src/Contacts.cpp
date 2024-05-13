/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contacts.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:53:52 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 11:27:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
	static int id = 1;
	
	id_ = id++;
}

Contacts::~Contacts()
{
}

void Contacts::setFirstName(std::istream& first_name)
{
	std::string	input;

	std::cout << "First Name: ";
	while (input.empty())
	{
		getline(first_name, input);
		if (input.empty())
			std::cout << "No input given, please provide First Name.\n";
	}
	first_name_ = input;
}

void Contacts::setLastName(std::istream& last_name)
{
	std::string	input;

	std::cout << "Last Name: ";
	while (input.empty())
	{
		getline(last_name, input);
		if (input.empty())
			std::cout << "No input given, please provide Last Name.\n";
	}
	last_name_ = input;
}

void Contacts::setNickname(std::istream& nickname)
{
	std::string	input;

	std::cout << "Nickname: ";
	while (input.empty())
	{
		getline(nickname, input);
		if (input.empty())
			std::cout << "No input given, please provide Nickname.\n";
	}
	nickname_ = input;
}

void Contacts::setPhoneNumber(std::istream& phone_number)
{
	std::string	input;

	std::cout << "Phone Number: ";
	while (input.empty())
	{
		getline(phone_number, input);
		if (input.empty())
			std::cout << "No input given, please provide Phone Number.\n";
	}
	phone_number_ = input;
}

void Contacts::setDarkestSecret(std::istream& darkest_secret)
{
	std::string	input;

	std::cout << "Darkest Secret: ";
	while (input.empty())
	{
		getline(darkest_secret, input);
		if (input.empty())
			std::cout << "No input given, please provide Darkest Secret.\n";
	}
	darkest_secret_ = input;
}

const std::string& Contacts::getFirstName()
{
	return(first_name_);
}

const std::string& Contacts::getLastName()
{
	return(last_name_);
}

const std::string& Contacts::getNickname()
{
	return(nickname_);
}

const std::string& Contacts::getPhoneNumber()
{
	return(phone_number_);
}

const std::string& Contacts::getDarkestSecret()
{
	return(darkest_secret_);
}

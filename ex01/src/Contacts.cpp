/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contacts.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:53:52 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 19:40:04 by fras          ########   odam.nl         */
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

	while (input.empty())
	{
		std::cout << "First Name: ";
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(first_name, input);
		if (input.empty())
		{
			std::cout << "No input given, please provide First Name.\n";
		}
	}
	first_name_ = input;
}

void Contacts::setLastName(std::istream& last_name)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << "Last Name: ";
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(last_name, input);
		if (input.empty())
		{
			std::cout << "No input given, please provide Last Name.\n";
		}
	}
	last_name_ = input;
}

void Contacts::setNickname(std::istream& nickname)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << "Nickname: ";
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(nickname, input);
		if (input.empty())
		{
			std::cout << "No input given, please provide Nickname.\n";
		}
	}
	nickname_ = input;
}

void Contacts::setPhoneNumber(std::istream& phone_number)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << "Phone Number: ";
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(phone_number, input);
		if (input.empty())
		{
			std::cout << "No input given, please provide Phone Number.\n";
		}
	}
	phone_number_ = input;
}

void Contacts::setDarkestSecret(std::istream& darkest_secret)
{
	std::string	input;


	while (input.empty())
	{
		std::cout << "Darkest Secret: ";
		if ((std::cin.eof()))
		{
			std::cin.clear(); clearerr(stdin);
		}
		getline(darkest_secret, input);
		if (input.empty())
		{
			std::cout << "No input given, please provide Darkest Secret.\n";
		}
	}
	darkest_secret_ = input;
}

const std::string& Contacts::getIndexString()
{
	if (id_string_.empty())
		id_string_ = std::to_string(id_);
	return (id_string_);
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

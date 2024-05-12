/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 13:36:23 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(/* args */)
: status_(Status::STARTUP)
{
	print_status();
}

void Phonebook::print_status()
{
	switch (status_)
	{
		case Status::STARTUP:
			std::cout << "Welcome to the mighty Phonebook\n"
					"This Phonebook is phenomenal and can temporary store "
					<< "eight phonenumbers\n"
					"Use one of the following commands: ADD, SEARCH, EXIT\n";
			break;
		case Status::EXIT:
			std::cout << "Thank you for using the mighty Phonebook\n"
				<< "Enjoy your day!\n";
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 12:36:45 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::messages(Message type)
{
	switch (type)
	{
		case Message::STARTUP:
			std::cout << "Thank you for opening the mighty Phonebook";
			break;
	}
}

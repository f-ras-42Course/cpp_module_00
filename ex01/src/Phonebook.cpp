/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:39 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 11:18:23 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::messages(message type)
{
	switch (type)
	{
		case STARTUP:
			std::cout << "Thank you for opening the mighty 8-storing Phonebook"
			break;
	}
}

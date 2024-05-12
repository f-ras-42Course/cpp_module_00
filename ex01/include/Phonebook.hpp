/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:11 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 11:15:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>

enum class message
{
	STARTUP
};

class Phonebook
{
	private:
		Contacts contacts[8];
	public:
		Phonebook(/* args */);
		~Phonebook();
		void messages(message type);
};

#endif
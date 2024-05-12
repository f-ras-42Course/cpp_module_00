/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:11 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 13:34:23 by fras          ########   odam.nl         */
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
			EXIT
		};
		Phonebook(/* args */);
		Status getStatus();
		void setStatus(Phonebook::Status status);
		void print_status();
		void exit();
	private:
		Contacts	contacts_[8];
		Status		status_;
};

#endif
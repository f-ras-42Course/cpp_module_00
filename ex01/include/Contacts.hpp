/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contacts.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:53:54 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 23:12:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>
#include <iostream>

class Contacts
{
	private:
		int			id_;
		std::string	first_name_;
		std::string last_name_;
		std::string	phone_number_;
		std::string	darkest_secret_;
	public:
		Contacts();
		~Contacts();
		void setFirstName(std::istream& first_name);
		void setLastName(std::istream& last_name);
		void setPhoneNumber(std::istream& phone_number);
		void setDarkestSecret(std::istream& darkest_secret);
		const std::string& getFirstName();
		const std::string& getLastName();
		const std::string& getPhoneNumber();
		const std::string& getDarkestSecret();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contacts.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:53:54 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 20:34:01 by fras          ########   odam.nl         */
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
		std::string id_string_;
		std::string	first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string	phone_number_;
		std::string	darkest_secret_;
	public:
		Contacts();
		~Contacts();
		void setIndex(int index);
		void setFirstName(std::istream& first_name);
		void setLastName(std::istream& last_name);
		void setNickname(std::istream& nickname);
		void setPhoneNumber(std::istream& phone_number);
		void setDarkestSecret(std::istream& darkest_secret);
		int getIndex();
		const std::string& getIndexString();
		const std::string& getFirstName();
		const std::string& getLastName();
		const std::string& getNickname();
		const std::string& getPhoneNumber();
		const std::string& getDarkestSecret();
};

#endif
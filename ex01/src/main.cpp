/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:53 by fras          #+#    #+#                 */
/*   Updated: 2024/05/14 17:45:57 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook PhoneBook;
	while (PhoneBook.operate() != PhoneBook::Status::EXIT)
	{ 
		// ** Running program **
	}
	PhoneBook.printMenuText();
	return 0;
}

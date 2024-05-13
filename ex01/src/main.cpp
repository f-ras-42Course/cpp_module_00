/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:53 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 19:51:07 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	while (phonebook.operate() != Phonebook::Status::EXIT)
	{
		std::cout << '\n';
		std::cout.width(30); std::cout << std::right << "HOME MENU\n";
		std::cout << "Use one of the following commands: ADD, SEARCH, EXIT.\n";
		phonebook.setStatusByUserInput(std::cin);
	}
	return 0;
}

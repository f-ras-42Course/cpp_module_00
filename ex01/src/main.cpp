/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:53 by fras          #+#    #+#                 */
/*   Updated: 2024/05/13 19:16:56 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	while (phonebook.getStatus() != Phonebook::Status::EXIT)
	{
		phonebook.operate();
		std::cout << '\n';
		std::cout.width(30); std::cout << std::right << "HOME MENU\n";
		std::cout << "Use one of the following commands: ADD, SEARCH, EXIT.\n";
		phonebook.setStatusByUserInput(std::cin);
	}
	return 0;
}

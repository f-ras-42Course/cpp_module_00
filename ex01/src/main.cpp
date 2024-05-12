/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/12 08:52:53 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 13:37:01 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	while (phonebook.getStatus() != Phonebook::Status::EXIT)
	{
		phonebook.setStatus(Phonebook::Status::EXIT);
	}
	return 0;
}

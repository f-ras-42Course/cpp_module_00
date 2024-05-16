/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 16:52:55 by fras          #+#    #+#                 */
/*   Updated: 2024/05/16 23:29:31 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (char *c = argv[i]; *c != '\0'; c++)
			{
				std::cout << (char)std::toupper(*c);
			}
		}
	}
	std::cout << '\n';
	return EXIT_SUCCESS;
}

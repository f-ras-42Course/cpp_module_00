/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 16:52:55 by fras          #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2024/05/29 11:22:29 by fras          ########   odam.nl         */
=======
/*   Updated: 2024/05/16 23:29:31 by fras          ########   odam.nl         */
>>>>>>> ebc7c44f8679dfa24a5206219679923a9a94a5d1
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
<<<<<<< HEAD
				std::cout << static_cast<char>(std::toupper(*c));
=======
				std::cout << (char)std::toupper(*c);
>>>>>>> ebc7c44f8679dfa24a5206219679923a9a94a5d1
			}
		}
	}
	std::cout << '\n';
	return EXIT_SUCCESS;
}

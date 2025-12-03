/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/03 17:30:14 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>


int main()
{
	std::string command;
	PhoneBook phoneBook;

	std::cout << "Input command [ADD, SEARCH or EXIT]: ";
	std::getline(std::cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.search();
		std::cout << "Input command [ADD, SEARCH or EXIT]: ";
		std::getline(std::cin, command);
	}
	exit(0);
	return (0);
}
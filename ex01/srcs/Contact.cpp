/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:51:15 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/03 18:25:16 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

std::string	Contact::prompt(std::string message) {
	std::string input;

	while (true) {
		std::cout << message;
		std::getline(std::cin, input);
		if (!input.empty())
			return (input);
		std::cout << "Field cannot be empty. Please try again.\n";
	}
}

void	Contact::setFields() {
	
	this->firstName = this->prompt("Enter first name: ");
	this->lastName = this->prompt("Enter last name: ");
	this->nickName = this->prompt("Enter nickname: ");
	this->phoneNumber = this->prompt("Enter phone number: ");
	this->darkSecret = this->prompt("Enter darkest secret: ");
}

void	Contact::printField(std::string str, int flag) {
	size_t	len = str.size();

	if (flag == 1)
		std::cout << str << std::endl;
	else
	{
		if (len > 10)
		{
			str.resize(9);
			str.push_back('.');
			std::cout << str;
		}
		else
		{
			for (size_t i = 0; i < 10 - len; i++)
				std::cout << " ";
			std::cout << str;
		}
	}
}

void	Contact::displayRow() {
	printField(this->firstName, 0);
	std::cout << "|";
	printField(this->lastName, 0);
	std::cout << "|";
	printField(this->nickName, 0);
	std::cout << "|";
	printField(this->phoneNumber, 0);
	std::cout << "|";
	printField(this->darkSecret, 0);
	std::cout << "\n";
}

void	Contact::displaySearch() {
	printField(this->firstName, 1);
	printField(this->lastName, 1);
	printField(this->nickName, 1);
	printField(this->phoneNumber, 1);
	printField(this->darkSecret, 1);
}

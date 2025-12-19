/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:51:15 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 11:57:45 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

std::string	Contact::_prompt(std::string message) const {
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
	
	this->_firstName = this->_prompt("Enter first name: ");
	this->_lastName = this->_prompt("Enter last name: ");
	this->_nickName = this->_prompt("Enter nickname: ");
	this->_phoneNumber = this->_prompt("Enter phone number: ");
	this->_darkSecret = this->_prompt("Enter darkest secret: ");
}

void	Contact::printField(std::string str, int flag) const {
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

void	Contact::displayRow() const {
	printField(this->_firstName, 0);
	std::cout << "|";
	printField(this->_lastName, 0);
	std::cout << "|";
	printField(this->_nickName, 0);
	std::cout << "\n";
}

void	Contact::displaySearch() const {
	printField(this->_firstName, 1);
	printField(this->_lastName, 1);
	printField(this->_nickName, 1);
	printField(this->_phoneNumber, 1);
	printField(this->_darkSecret, 1);
}

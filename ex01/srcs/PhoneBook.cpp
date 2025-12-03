/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:26:16 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/03 17:41:54 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	this->index = 0;
    this->currentSize = 0;
    this->maxSize = 8;
}

void    PhoneBook::addContact(void) {
    this->contactList[this->index].setFields();
    
    if (this->currentSize < this->maxSize)
        this->currentSize++;
    
    this->index++;
    if (this->index >= this->maxSize)
		this->index = 0;
}

void    PhoneBook::displayTable(void) {
    for (int i = 0; i < this->currentSize; i++)
        this->contactList[i].displayRow();
}

bool    PhoneBook::isNumber(std::string str) {
    for (size_t i = 0; i < str.size(); i++) 
    {
        if (!isdigit(str[i]))
            return false;
    }
    return (true);
}

int PhoneBook::getIndex() {
    std::string input;

	while (true) 
    {
		std::cout << "Enter contact index number: ";
		std::getline(std::cin, input);
		if (input.empty())
            std::cout << "Field cannot be empty. Please try again.\n";
        else if (!isNumber(input)) 
            std::cout << "Field has to be a number. Please try again.\n";
        else
        {
            int index = atoi(input.c_str());
            if (index > this->currentSize || !index)
                std::cout << "Index number should range from 1 - " << this->currentSize << ". Please try again.\n";
            else
                return (index);
        }
    }
}

void    PhoneBook::search(void) {
    displayTable();
    int index = getIndex();
    this->contactList[index - 1].displaySearch();
}

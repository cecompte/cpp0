/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:26:16 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 11:55:19 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(void) {
	this->_index = 0;
    this->_currentSize = 0;
    this->_maxSize = 8;
}

void    PhoneBook::addContact(void) {
    this->_contactList[this->_index].setFields();
    
    if (this->_currentSize < this->_maxSize)
        this->_currentSize++;
    
    this->_index++;
    if (this->_index >= this->_maxSize)
		this->_index = 0;
}

void    PhoneBook::displayTable(void) const {
    for (int i = 0; i < this->_currentSize; i++)
    {
        std::cout << "         " << i + 1 << "|";
        this->_contactList[i].displayRow();
    }
}

bool    PhoneBook::_isNumber(std::string str) const {
    for (size_t i = 0; i < str.size(); i++) 
    {
        if (!isdigit(str[i]))
            return false;
    }
    return (true);
}

int PhoneBook::_getIndex() const {
    std::string input;

	while (true) 
    {
		std::cout << "Enter contact index number: ";
		std::getline(std::cin, input);
		if (input.empty())
            std::cout << "Field cannot be empty. Please try again.\n";
        else if (!_isNumber(input)) 
            std::cout << "Field has to be a number. Please try again.\n";
        else
        {
            int index = atoi(input.c_str());
            if (index > this->_currentSize || !index)
                std::cout << "Index number should range from 1 - "
                    << this->_currentSize << ". Please try again.\n";
            else
                return (index);
        }
    }
}

void    PhoneBook::search(void) const {
    displayTable();
    int index = _getIndex();
    this->_contactList[index - 1].displaySearch();
}

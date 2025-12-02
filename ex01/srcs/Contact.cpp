/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:51:15 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/02 17:58:20 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(std::string pfirst, std::string plast, std::string pnick, 
	std::string pphone, std::string psecret) : first(pfirst), last(plast), nick(pnick), 
		phone(pphone), secret(psecret) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "first name: " << this->first << std::endl;
	std::cout << "last name: " << this->last << std::endl;
    return ;
}
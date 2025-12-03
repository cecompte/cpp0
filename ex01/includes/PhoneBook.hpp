/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:25:12 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/03 17:25:34 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	Contact		contactList[8];
	int			index;
	int			currentSize;
	int			maxSize;
	bool		isNumber(std::string str);
	int			getIndex();
public:
	PhoneBook(void);
	void 		addContact();
	void 		displayTable();
	void 		search();
};

#endif
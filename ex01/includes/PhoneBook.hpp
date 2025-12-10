/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:25:12 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/10 15:16:15 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	Contact		_contactList[8];
	int			_index;
	int			_currentSize;
	int			_maxSize;
	bool		_isNumber(std::string str) const;
	int			_getIndex() const;
public:
	PhoneBook(void);
	void 		addContact();
	void 		displayTable() const;
	void 		search() const;
};

#endif
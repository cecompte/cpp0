/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:43:05 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/02 17:55:37 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
public:
	Contact(std::string pfirst, std::string plast, std::string pnick,
		std::string pphone, std::string psecret);
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;
};

#endif
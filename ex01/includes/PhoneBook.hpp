/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:33:33 by danslav1e         #+#    #+#             */
/*   Updated: 2026/02/15 16:06:29 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        int contactsCount;
        Contact contacts[8];

        PhoneBook( void );

        void addContact( const Contact &pcontact );
        void printContacts( void );
        void printContact( void );
        void printColumn( const std::string &text );
};

#endif
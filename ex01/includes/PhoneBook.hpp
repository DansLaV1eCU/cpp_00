/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:33:33 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/25 22:31:38 by danslav1e        ###   ########.fr       */
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
        void printContact(int input );
        void printColumn( const std::string &text );
};

#endif
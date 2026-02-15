/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:25:07 by danslav1e         #+#    #+#             */
/*   Updated: 2026/02/15 16:14:28 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include "PhoneBook.hpp"

namespace {
    std::string from_int_to_str( int value ) {
        std::stringstream ss;
        ss << value;
        return ss.str();
    }
}

PhoneBook::PhoneBook( void ) {
    this->contactsCount = 0;
}

void PhoneBook::addContact( const Contact &p_contact ) {
    if (this->contactsCount < 8) {
        this->contacts[this->contactsCount] = p_contact;
        this->contactsCount++;
    } else {
        for (int i = 0; i < 7; i++) {
            this->contacts[i] = this->contacts[i + 1];
        }
        this->contacts[7] = p_contact;
    }
}

void PhoneBook::printContacts( void ) {
    for ( int i = 0; i < this->contactsCount; i++ ) {
        this->printColumn( from_int_to_str( i + 1 ) );
        std::cout << "|";
        this->printColumn( this->contacts[i].getFirstName() );
        std::cout << "|";
        this->printColumn( this->contacts[i].getLastName() );
        std::cout << "|";
        this->printColumn( this->contacts[i].getNickname() );
        std::cout << std::endl;
    }
}

void PhoneBook::printColumn( const std::string &text ) {
    if ( text.length() > 10 ) {
        std::cout << std::setw( 10 ) << text.substr( 0, 9 ) + ".";
    } else {
        std::cout << std::setw( 10 ) << text;
    }
}

void PhoneBook::printContact( void ) {
    int input;
    
    if ( !( std::cin >> input ) ) {
        std::cout << "That was not a number!" << std::endl;
        std::cin.clear();
        std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        return;
    }
    
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

    if ( input < 1 || input > this->contactsCount ) {
        std::cout << "Wrong index!" << std::endl;
        return;
    }

    std::cout << this->contacts[input - 1].getFirstName() << std::endl;
    std::cout << this->contacts[input - 1].getLastName() << std::endl;
    std::cout << this->contacts[input - 1].getNickname() << std::endl;
    std::cout << this->contacts[input - 1].getPhoneNumber() << std::endl;
    std::cout << this->contacts[input - 1].getDarkestSecret() << std::endl;
}
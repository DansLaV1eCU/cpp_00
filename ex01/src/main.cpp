/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:45:36 by danslav1e         #+#    #+#             */
/*   Updated: 2026/02/15 16:08:51 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void create_contact(PhoneBook &pb)
{
    Contact new_contact;
    std::string input;

    std::cout << "Enter the first name of the new contact:" << std::endl;
    std::getline( std::cin, input );
    if ( input.empty() ) {
        std::cout << "Wrong input!";
        return;
    }
    new_contact.addFirstName( input );

    std::cout << "Enter the last name of the new contact:" << std::endl;
    std::getline( std::cin, input );
    if ( input.empty() ) {
        std::cout << "Wrong input!";
        return;
    }
    new_contact.addLastName( input );

    std::cout << "Enter the nickname of the new contact:" << std::endl;
    std::getline( std::cin, input );
    if ( input.empty() ) {
        std::cout << "Wrong input!";
        return;
    }
    new_contact.addNickname( input );

    std::cout << "Enter the phone number of the new contact:" << std::endl;
    std::getline( std::cin, input );
    if ( input.empty( ) ) {
        std::cout << "Wrong input!";
        return;
    }
    new_contact.addPhoneNumber( input );

    std::cout << "Enter the darkest secret of the new contact:" << std::endl;
    std::getline( std::cin, input );
    if (input.empty()) {
        std::cout << "Wrong input!";
        return;
    }
    new_contact.addDarkestSecret( input );

    pb.addContact( new_contact );
    std::cout << "Contact was added to the phonebook" << std::endl;
}

int main(void)
{
    std::string input;
    PhoneBook pb;

    while ( true ) {
        std::cout << "Write a command" << std::endl;
        std::getline( std::cin, input );
        if (input == "ADD") {
            create_contact( pb );
        } else if (input == "SEARCH") {
            if ( pb.contactsCount > 0 ) {
                pb.printContacts();
                std::cout << "Write contact index" << std::endl;
                pb.printContact();
            } else {
                std::cout << "There is no contacts in the phonebook yet" << std::endl;
            }
        } else if ( input == "EXIT" ) {
            break;
        }
    }
    return 0;
}

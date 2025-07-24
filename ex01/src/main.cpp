/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:45:36 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/24 23:48:53 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void create_contact(PhoneBook &pb)
{
    Contact new_contact;
    std::string input;

    std::cout << "Enter the first name of the new contact:" << std::endl;
    std::getline(std::cin, input);
    new_contact.add_first_name(input);

    std::cout << "Enter the last name of the new contact:" << std::endl;
    std::getline(std::cin, input);
    new_contact.add_last_name(input);

    std::cout << "Enter the nickname of the new contact:" << std::endl;
    std::getline(std::cin, input);
    new_contact.add_nickname(input);

    std::cout << "Enter the phone number of the new contact:" << std::endl;
    std::getline(std::cin, input);
    new_contact.add_phone_number(input);

    std::cout << "Enter the darkest secret of the new contact:" << std::endl;
    std::getline(std::cin, input);
    new_contact.add_darkest_secret(input);

    pb.add_contact(new_contact);
    std::cout << "Contact was added to the phonebook" << std::endl;
}

int main(void)
{
    std::string input;
    PhoneBook pb;

    while (true)
    {
        std::cout << "Write a command" << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            create_contact(pb);
        }
        else if (input == "SEARCH")
        {
            if (pb.contacts_count > 0) {
                pb.print_contacts();
                std::cout << "Write contact index" << std::endl;
                pb.print_contact();
            }
            else {
                std::cout << "There is no contacts in the phonebook yet" << std::endl;
            }
        }
        else if (input == "EXIT")
        {
            break ;
        }
    }
}

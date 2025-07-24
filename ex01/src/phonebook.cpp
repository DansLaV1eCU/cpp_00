/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:25:07 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/24 23:43:21 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

namespace {
    std::string from_int_to_str(int value) {
        std::stringstream ss;
        ss << value;
        return ss.str();
    }
}

PhoneBook::PhoneBook()
{
    this->contacts_count = 0;
}

void PhoneBook::add_contact(const Contact &pcontact) {
    if (this->contacts_count < 8) {
        this->contacts[this->contacts_count] = pcontact;
        this->contacts_count++;
    }
    else {
        for (int i = 0; i < 7; i++) {
            this->contacts[i] = this->contacts[i + 1];
        }
        this->contacts[7] = pcontact;
    }
}

void PhoneBook::print_contacts() {
    for (int i = 0; i < this->contacts_count; i++) {
        this->print_column(from_int_to_str(i + 1));
        std::cout << "|";
        this->print_column(this->contacts[i].first_name);
        std::cout << "|";
        this->print_column(this->contacts[i].last_name);
        std::cout << "|";
        this->print_column(this->contacts[i].nickname);
        std::cout << std::endl;
    }
}

void PhoneBook::print_column(const std::string &text) {
    if (text.length() > 10)
        std::cout << std::setw(10) << text.substr(0, 9) + ".";
    else
        std::cout << std::setw(10) << text;
}

void PhoneBook::print_contact()
{
    int c_nb;

    if (!(std::cin >> c_nb)) {
        std::cout << "That was not a number!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    if (c_nb < 1 || c_nb > this->contacts_count) {
        std::cout << "Wrong index!" << std::endl;
        return ;
    }
    std::cout << this->contacts[c_nb - 1].first_name << std::endl;
    std::cout << this->contacts[c_nb - 1].last_name << std::endl;
    std::cout << this->contacts[c_nb - 1].nickname << std::endl;
    std::cout << this->contacts[c_nb - 1].phone_number << std::endl;
    std::cout << this->contacts[c_nb - 1].darkest_secret << std::endl;
}
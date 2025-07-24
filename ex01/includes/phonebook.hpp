/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:33:33 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/24 23:42:23 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include "contact.hpp"

class PhoneBook
{
    public:
        int contacts_count;
        Contact contacts[8];
        void add_contact(const Contact &pcontact);
        void print_contacts();
        void print_contact();
        PhoneBook();
    private:
        void print_column(const std::string &text);
};

#endif
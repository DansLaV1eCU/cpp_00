/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:35:52 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/24 22:57:31 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        void add_first_name(std::string &pfirst_name);
        void add_last_name(std::string &plast_name);
        void add_nickname(std::string &pnickname);
        void add_phone_number(std::string &pphone_number);
        void add_darkest_secret(std::string &pdarkest_secret);

        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif

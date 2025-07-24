/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:53:11 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/24 23:16:16 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::add_first_name(std::string &pfirst_name) {
	first_name = pfirst_name;
}

void Contact::add_last_name(std::string &plast_name) {
    last_name = plast_name;
}

void Contact::add_nickname(std::string &pnickname) {
    nickname = pnickname;
}

void Contact::add_phone_number(std::string &pphone_number) {
    phone_number = pphone_number;
}

void Contact::add_darkest_secret(std::string &pdarkest_secret) {
    darkest_secret = pdarkest_secret;
}

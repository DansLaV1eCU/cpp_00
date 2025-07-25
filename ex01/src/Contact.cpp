/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:53:11 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/25 22:20:15 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::addFirstName( std::string &pfirst_name ) {
	_firstName = pfirst_name;
}

void Contact::addLastName( std::string &plast_name ) {
    _lastName = plast_name;
}

void Contact::addNickname( std::string &pnickname ) {
    _nickname = pnickname;
}

void Contact::addPhoneNumber( std::string &pphone_number ) {
    _phoneNumber = pphone_number;
}

void Contact::addDarkestSecret( std::string &pdarkest_secret ) {
    _darkestSecret = pdarkest_secret;
}

std::string Contact::getFirstName( void ) const {
    return this->_firstName;
}

std::string Contact::getLastName( void ) const {
    return this->_lastName;
}

std::string Contact::getNickname( void ) const {
    return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const {
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const {
    return this->_darkestSecret;
}
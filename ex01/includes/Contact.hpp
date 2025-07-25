/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:35:52 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/25 22:21:01 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        void addFirstName( std::string &pfirst_name );
        void addLastName( std::string &plast_name );
        void addNickname( std::string &pnickname );
        void addPhoneNumber( std::string &pphone_number );
        void addDarkestSecret( std::string &pdarkest_secret );

        std::string getFirstName( void ) const;
        std::string getLastName( void ) const;
        std::string getNickname( void ) const;
        std::string getPhoneNumber( void ) const;
        std::string getDarkestSecret( void ) const;
        
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

#endif

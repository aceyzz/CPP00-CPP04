/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:11:49 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/11 15:15:57 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "tools.hpp"
# include "PhoneBook.hpp"

class Contact
{
	public:
		Contact();
		~Contact();
		void	setValue(int value, string content);
		string	getValue(int value);
	private:
		string	_firstName;
		string	_lastName;
		string	_nickName;
		string	_phoneNumber;
		string	_darkestSecret;
};

#endif

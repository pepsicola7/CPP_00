#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
class	Contact
{
	public:
	void	add_index(int i);
	void	add_firstName();
	void	add_lastName();
	void	add_nickName();
	void	add_phonenumber();
	void	add_darkestsecret();
	void	get_firstname();
	void	get_lastname();
	std::string	get_nickname();
	void	search_solo();

	private:
	std::string	m_contact[6];
	std::string	m_firstname;
	std::string	m_lastname;
	std::string	m_nickname;
	std::string	m_phonenumber;
	std::string	m_darkestsecret;
};

#endif
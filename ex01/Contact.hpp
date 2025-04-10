#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>
#include <dirent.h>
class	Contact
{

	public:
	void	add_index(int i);
	void	add_firstName();
	void	add_lastName();
	void	add_nickName()
	{
		std::cout << "Nickname : ";
		while (!std::getline(std::cin, m_nickname))
			std::cout << "Nickname : ";
		m_contact[3] = m_nickname;
	}
	void	add_phonenumber()
	{
		std::cout << "Phone number : ";
		while (!std::getline(std::cin, m_phonenumber))
			std::cout << "Phone number : ";
		m_contact[4] = m_phonenumber;
	}
	void	add_darkestsecret()
	{
		std::cout << "Darkest secret : ";
		while(!std::getline(std::cin, m_darkestsecret))
			std::cout << "Darkest secret : ";
	}
	void afficher()
	{
		std::cout << "Index       : " << m_contact[0] << std::endl;
		std::cout << "Firstname   : " << m_contact[1] << std::endl;
		std::cout << "Lastname    : " << m_contact[2] << std::endl;
		std::cout << "Nickname    : " << m_contact[3] << std::endl;
		std::cout << "Phone number: " << m_contact[4] << std::endl;
		std::cout << "Secret      : " << m_darkestsecret << std::endl;
	}
	private:
	std::string	m_contact[5];
	std::string	m_firstname;
	std::string	m_lastname;
	std::string	m_nickname;
	std::string	m_phonenumber;
	std::string	m_darkestsecret;
};
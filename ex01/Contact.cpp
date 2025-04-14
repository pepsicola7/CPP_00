
#include "Contact.hpp"

void	Contact::add_index(int i)
{
	m_contact[0] = i;
}
void	Contact::add_firstName()
{
	std::cout << "Firstname : ";
	while (!std::getline(std::cin, m_firstname))
		std::cout << "Firstname : ";
	m_contact[1] = m_firstname;
}
void	Contact::add_lastName()
{
	std::cout << "Lastname : ";
	while (!std::getline(std::cin, m_lastname))
		std::cout << "Lastname : ";
	m_contact[2] = m_lastname;
}
void	Contact::add_nickName()
{
	std::cout << "Nickname : ";
	while (!std::getline(std::cin, m_nickname))
		std::cout << "Nickname : ";
	m_contact[3] = m_nickname;
}
void	Contact::add_phonenumber()
{
	std::cout << "Phone number : ";
	while (!std::getline(std::cin, m_phonenumber))
		std::cout << "Phone number : ";
	m_contact[4] = m_phonenumber;
}
void	Contact::add_darkestsecret()
{
	std::cout << "Darkest secret : ";
	while(!std::getline(std::cin, m_darkestsecret))
		std::cout << "Darkest secret : ";
	m_contact[5] = m_darkestsecret;
}

void	Contact::get_firstname()
{
	std::cout << m_contact[1] << std::endl;
	if (m_firstname.length() > 10)
		std::cout << m_firstname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_firstname ;
	std::cout << "|" ; 
}

void	Contact::get_lastname()
{
	if (m_lastname.length() > 10)
		std::cout << m_lastname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_lastname ;
	std::cout << "|" ; 
}

void	Contact::get_nickname()
{
	if (m_nickname.length() > 10)
		std::cout << m_nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_nickname ;
	std::cout << "|" << std::endl; 
}

void Contact::search_solo(int i)
{
	std::cout << "Index       : " << i << std::endl;
	std::cout << "Firstname   : " << m_contact[1] << std::endl;
	std::cout << "Lastname    : " << m_contact[2] << std::endl;
	std::cout << "Nickname    : " << m_contact[3] << std::endl;
	std::cout << "Phone number: " << m_contact[4] << std::endl;
	std::cout << "Secret      : " << m_darkestsecret << std::endl;
}

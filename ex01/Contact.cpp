
#include "Contact.hpp"

void	Contact::add_index(int i)
{
	m_contact[0] = i + '0';
}
void	Contact::add_firstName()
{
	std::cout << "Firstname : ";
	std::getline(std::cin, m_firstname);
	while (m_firstname.empty())
	{
		std::cout << "Firstname : ";
		std::getline(std::cin, m_firstname);
	}
	m_contact[1] = m_firstname;
}
void	Contact::add_lastName()
{
	std::cout << "Lastname : ";
	std::getline(std::cin, m_lastname);
	while (m_lastname.empty())
	{
		std::cout << "Lastname : ";
		std::getline(std::cin, m_lastname);
	}
	m_contact[2] = m_lastname;
}
void	Contact::add_nickName()
{
	std::cout << "Nickname : ";
	std::getline(std::cin, m_nickname);
	while (m_nickname.empty())
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, m_nickname);
	}
	m_contact[3] = m_nickname;
}
void	Contact::add_phonenumber()
{
	std::cout << "Phone number : ";
	std::getline(std::cin, m_phonenumber);
	while (m_phonenumber.empty())
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, m_phonenumber);
	}
	m_contact[4] = m_phonenumber;
}
void	Contact::add_darkestsecret()
{
	std::cout << "Darkest secret : ";
	std::getline(std::cin, m_darkestsecret);
	while (m_darkestsecret.empty())
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, m_darkestsecret);
	}
	m_contact[5] = m_darkestsecret;
}

void	Contact::get_firstname()
{
	std::cout << std::setw(10) << m_contact[0] << "|";
	if (m_firstname.length() > 10)
		std::cout << m_contact[1].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_contact[1] ;
	std::cout << "|" ; 
}

void	Contact::get_lastname()
{
	if (m_lastname.length() > 10)
		std::cout << m_contact[2].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_contact[2] ;
	std::cout << "|" ; 
}

std::string	Contact::get_nickname()
{
	if (m_nickname.length() > 10)
		std::cout << m_contact[3].substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << m_contact[3] << std::endl;
	return m_nickname;
}

void Contact::search_solo()
{
	std::cout << "Index       : " << m_contact[0] << std::endl;
	std::cout << "Firstname   : " << m_contact[1] << std::endl;
	std::cout << "Lastname    : " << m_contact[2] << std::endl;
	std::cout << "Nickname    : " << m_contact[3] << std::endl;
	std::cout << "Phone number: " << m_contact[4] << std::endl;
	std::cout << "Secret      : " << m_contact[5] << std::endl;
}

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

void Phonebook::add_contact(int index)
{
	Contacts[index - 1].add_index(index);
	Contacts[index - 1].add_firstName();
	Contacts[index - 1].add_lastName();
	Contacts[index - 1].add_nickName();
	Contacts[index - 1].add_phonenumber();
	Contacts[index - 1].add_darkestsecret();
}
void Phonebook::display_contact(int index)
{
	int i;

	i = 0;
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	while (i < index - 1)
	{
		Contacts[i].get_firstname();
		Contacts[i].get_lastname();
		Contacts[i].get_nickname();
		i++;
	}
}
void Phonebook::search_contact(int i)
{
	Contacts[i - 1].search_solo();
}
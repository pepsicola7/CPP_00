#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

void Phonebook::add_contact(int index)
{
	Contact[index - 1].add_index(index);
	Contact[index - 1].add_firstName();
	Contact[index - 1].add_lastName();
	Contact[index - 1].add_nickName();
	Contact[index - 1].add_phonenumber();
	Contact[index - 1].add_darkestsecret();
}
void Phonebook::display_contact(int index)
{
	int i;

	i = 0;
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	while (i < index - 1)
	{
		Contact[i].get_firstname();
		Contact[i].get_lastname();
		Contact[i].get_nickname();
		i++;
	}
}
void Phonebook::search_contact(int i)
{
	std::cout << "index : " << i - 1 << Contact[i - 1].get_nickname() << std::endl;
	Contact[i - 1].search_solo();
}
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

	Phonebook::Phonebook() : index(1) {}
	void	Phonebook::add_contact()
	{
		if (index > 8)
			index = 1;
		if (index < 8)
		{
			Contact[index].add_index(index);
			Contact[index].add_firstName();
			Contact[index].add_lastName();
			Contact[index].add_nickName();
			Contact[index].add_phonenumber();
			Contact[index].add_darkestsecret();
			index++;
		}
	}
	void	Phonebook::display_contact()
	{
		int	i;
		
		i = 0;
		std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
		while (i < index)
		{
			Contact[i].get_firstname();
			Contact[i].get_lastname();
			Contact[i].get_nickname();
			i++;
		}
	}
	void	Phonebook::search_contact(int i)
	{
		Contact[i].search_solo(i);
	}
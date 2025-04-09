#include <string>
#include <iostream>
#include <dirent.h>

class	Contact
{
	//Tout ce qui suit est public
	//Les methodes
	public:
	void	add_contact()
	{
		
	}

	void	show_contact()
	{
		
	}
	//Tout ce qui suit est prive (inaccessible de l'exterieur)
	//Les attributs
	private:
	int			index;
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName; 
};
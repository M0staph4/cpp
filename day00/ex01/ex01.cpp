#include "ex01.hpp"

int check_nb(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return(1);
		i++;
	}
	return 0;
}

phonebook add_data(phonebook data, std::string str, int i)
{
	std::cout<<"Please enter your first name : ";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"Please enter a valid input : ";
		getline(std::cin ,str);
	}
	data.data[i].set_name(str);
	std::cout<<"Please enter your last name : ";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"Please enter a valid input : ";
		getline(std::cin ,str);
	}
	data.data[i].set_last_name(str);
	std::cout<<"Please enter your nickname : ";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"Please enter a valid input : ";
		getline(std::cin ,str);
	}
	data.data[i].set_nickname(str);
	std::cout<<"Please enter your phone numbe : ";
	getline(std::cin ,str);
	while(str[0] == '\0' || check_nb(str))
	{
		std::cout<<"Please enter a valid input : ";
		getline(std::cin ,str);
	}
	data.data[i].set_phone_nb(str);
	std::cout<<"Please enter darkest secre : ";
	getline(std::cin ,str);
	data.data[i].set_darkest_secret(str);
	return(data);
}

void print_name(contact data)
{
	std::string name;

	int i = -1;
	name = data.get_name();
	int x = name.length();
	if(x > 10)
	{
		while(++i < 9)
			std::cout<<name[i];
		std::cout<<".|";
	}
	else if(x <= 10)
	{
		std::cout<<name<<std::setw(11 - x)<<"|";
	}
}

void print_nickname(contact data)
{
	std::string nickname;

	int i = -1;
	nickname = data.get_nickname();
	int x = nickname.length();
	if(x > 10)
	{
		while(++i < 9)
			std::cout<<nickname[i];
		std::cout<<".|"<<std::endl;
	}
	else if(x <= 10)
	{
		std::cout<<nickname<<std::setw(11 - x)<<"|"<<std::endl;
	}
}

void print_lastname(contact data)
{
	std::string last_name;
	int i = -1;
	last_name = data.get_last_name();
	int x = last_name.length();
	if(x > 10)
	{
		while(++i < 9)
			std::cout<<last_name[i];
		std::cout<<".|";
	}
	else if(x <= 10)
		std::cout<<last_name<<std::setw(11 - x)<<"|";

}

void add_search(phonebook data, std::string str, int y)
{
	int x = -1;
	
	while(y > ++x)
	{
		std::cout<<x<<"         |";
		print_name(data.data[x]);
		print_lastname(data.data[x]);
		print_nickname(data.data[x]);
	}
	std::cout<<"Please choose one of the following values : ";
	getline(std::cin ,str);
	while(str.length() > 1 || !isdigit(str[0]) || x - 1 < stoi(str))
	{
		std::cout<<"Please enter a valid input : ";
		getline(std::cin ,str);
	}
	std::cout<<"****************************************************************"<<std::endl;
	std::cout<<"************************** PHONEBOOK ***************************"<<std::endl;
	std::cout<<"* Name               : - "<<data.data[stoi(str)].get_name()<<std::endl;
	std::cout<<"* Last name          : - "<<data.data[stoi(str)].get_last_name()<<std::endl;
	std::cout<<"* Nickname           : - "<<data.data[stoi(str)].get_nickname()<<std::endl;
	std::cout<<"* Phone number       : - "<<data.data[stoi(str)].get_phone_nb()<<std::endl;
	std::cout<<"* Darkest secret     : - "<<data.data[stoi(str)].get_darkest_secret()<<std::endl;
	std::cout<<"****************************************************************"<<std::endl;
}

int main ()
{
    std::string str;
	phonebook data;
	int i = 0;
	int x = 0;

	while(!std::cin.eof())
	{
    	std::cout<<"1 - ADD\n"<<"2 - SEARCH\n"<<"3 - EXIT\n"<< "Please choose one of this options : ";
    	getline(std::cin ,str);
		if(str == "ADD" || str == "1")
		{
			data = add_data(data, str, i);
			i++;
			if(x < i)
				x++;
		}
		else if(str == "SEARCH" || str == "2")
			add_search(data, str, x);
		else if(str == "EXIT" || str == "3")
			exit(0);
		if(i == 8)
			i = 0;
	}
	return(0);
}
#include "ex01.hpp"

phonebook add_data(phonebook data, std::string str, int i)
{
	std::cout<<"please enter your first name : \n";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	data.data[i].set_name(str);
	std::cout<<"please enter your last name : \n";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	data.data[i].set_last_name(str);
	std::cout<<"please enter your nickname : \n";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	data.data[i].set_nickname(str);
	std::cout<<"please enter your phone numbe : \n";
	getline(std::cin ,str);
	while(str[0] == '\0')
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	data.data[i].set_phone_nb(str);
	std::cout<<"please enter darkest secre : \n";
	getline(std::cin ,str);
	data.data[i].set_darkest_secret(str);
	return(data);
}

void add_search(phonebook data, std::string str, int y)
{
	int x = -1;
	
	while(y > ++x)
		std::cout<<x<<"|"<<data.data[x].get_name()<<"|"<<data.data[x].get_last_name()<<"|"<<data.data[x].get_nickname()<<std::endl;
	getline(std::cin ,str);
	while(str.length() > 1)
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	while(x - 1 < stoi(str))
	{
		std::cout<<"please enter a valid input : \n";
		getline(std::cin ,str);
	}
	std::cout<<"name : "<<data.data[stoi(str)].get_name()<<std::endl;
	std::cout<<"last name : "<<data.data[stoi(str)].get_last_name()<<std::endl;
	std::cout<<"nickname : "<<data.data[stoi(str)].get_nickname()<<std::endl;
	std::cout<<"phone number : "<<data.data[stoi(str)].get_phone_nb()<<std::endl;
	std::cout<<"darkest secret : "<<data.data[stoi(str)].get_darkest_secret()<<std::endl;
}

int main ()
{
    std::string str;
	phonebook data;
	int i = 0;
	int x = 0;

	while(1)
	{
    	std::cout<<"1  -ADD\n";
    	std::cout<<"2  -SEARCH\n";
    	std::cout<<"3  -EXIT\n";
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
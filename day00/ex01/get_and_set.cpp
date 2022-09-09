#include"ex01.hpp"
void contact::set_name(std::string str)
{
	name = str;
}

void contact::set_last_name(std::string str)
{
	last_name = str;
}

void contact::set_nickname(std::string str)
{
	nickname = str;
}

void contact::set_phone_nb(std::string str)
{
	phone_nb = str;
}

void contact::set_darkest_secret(std::string str)
{
	darkest_secret = str;
}

std::string contact::get_name()
{
	return name;
}

std::string contact::get_phone_nb()
{
	return phone_nb;
}

std::string contact::get_last_name()
{
	return last_name;
}

std::string contact::get_nickname()
{
	return nickname;
}

std::string contact::get_darkest_secret()
{
	return darkest_secret;
}
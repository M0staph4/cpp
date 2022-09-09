#include <string.h>
#include <iostream>
class contact{
    private:
        std::string name;
        std::string last_name;
        std::string phone_nb;
        std::string nickname;
        std::string darkest_secret;
    public:
        void set_name(std::string name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string phone_nb);
        void set_phone_nb(std::string nickname);
        void set_darkest_secret(std::string darcksecret);
        std::string get_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_nb();
        std::string get_darkest_secret();
};

class phonebook{
    public:
        contact data[8];
};
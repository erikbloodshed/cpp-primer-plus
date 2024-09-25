#include <iostream>
#include <string>

struct Name
{
    public:
        std::string first_name;
        std::string last_name;

        void print_fullname()
        {
            std::cout << last_name + ", " + first_name << std::endl;
        }
};

int main()
{
    Name name {"Eric", "Matulac"};
    name.print_fullname();
    return 0;
}

#include <iostream>
#include<string>
class Restaurant
{
public:
    std::string menu;
    std::string charge;
    std::string quantity;

     void intro()
    {
        std::cout << "The " << menu << " " << charge  << " " << quantity <<  std::endl;
    }
};


int main()
{
    Restaurant menu;
    menu.menu = "Pizza";
    menu.charge = "$10";
    menu.quantity = "2 pieces";

    Restaurant menu2;
    menu2.menu = "Burger";
    menu2.charge = "$8";
    menu2.quantity = "1 piece";

    Restaurant menu3;
    menu3.menu = "Salad";
    menu3.charge = "$6";
    menu3.quantity = "1 portion";
    std::cout << "Family Members:" << std::endl;
    menu.intro(); 
    menu2.intro();
    menu3.intro();
 
    return 0;
}
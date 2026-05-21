#include <iostream>

void ChangeItems(std::string &item1, std::string &item2)
{
    std::string temp = item1;

    item1 = item2;
    item2=temp;
}

int main()
{

    std::string item1 = "Sword";
    std::string item2 = "Bow";

    ChangeItems(item1, item2);

    std::cout<<"Player 1 has: " << item1 <<std::endl;
    std::cout<<"player 2 has: "<< item2<<std::endl;
    return 0;
}

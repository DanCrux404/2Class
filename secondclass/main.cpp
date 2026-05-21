#include <iostream>

void BuffItems(int items[], int size)
{
    for(int i = 0; i < size; i++)
    {
        items[i] += 10;
    }
}

int main()
{
    int inventory[5]= {10, 20, 30, 60, 66};
    
    BuffItems(inventory, 5);

    std::cout<<inventory[0]<<std::endl;
    std::cout<<inventory[1]<<std::endl;
    std::cout<<&inventory[2]<<std::endl;

    for(int i = 0; i< 5; i++)
    {
        std::cout<<inventory[i]<<" ";
    }

    return 0;
}

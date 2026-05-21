#include <iostream>

void LevelUp(int level)
{
    level ++;
    std::cout<<"the new level is: "<< level<<std::endl;
}

int main()
{
    int currentLevel = 0;
    std::cout<<"Give me your current level"<<std::endl;
    std::cin>>currentLevel;

    LevelUp(currentLevel);

    std::cout<<"Your level is: "<<currentLevel<<std::endl;
}

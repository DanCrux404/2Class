#include <iostream>

void Unlock(char password[], int size)
{
    for(int i = 0; i< size; i++)
    {
        password[i] += 2;
    }
}

int main()
{
    char password[5] = {'?', '?', '?', '?', '?'};
    
    Unlock(password, 5);

    for(int i = 0; i < 5; i++)
    {
        std::cout<<password[i] <<", ";
    }
   
    char value = '!';
    std::cout<<value;
    return 0;
}

#include <iostream>


int Func(int val)
{
    return val * 2;
}

int main()
{
    int val = 0;
    std::cin >> val;
    std::cout<<"Hello World: " << Func(val) <<"\n";

    return 0;
}
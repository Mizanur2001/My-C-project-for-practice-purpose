#include <iostream>

void squre1(int b)
{

    std::cout << "The squrae is\n ";
    std::cout << b * b;
    std::cout << "\n";
}
int squre(int c, int d)
{
    int a = 1;
    while (d > 0)
    {
        a = a * c;
        d--;
    }

    return a;
}

int main()
{
    //takeing the instraction
    int a, b, c, d;
    std::cout << "Enter 1 for square power\n";
    //  std::cin>>b;
    std::cout << "Enter 2 for other power\n";
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "Enter the number whose squrae do you need\n";
        std::cin >> b;
        squre1(b);
    }
    else if (a == 2)
    {
        std::cout << "Enter the number\n";
        std::cin >> c;
        std::cout << "Enter the power\n";
        std::cin >> d;
        std::cout << "The answer is\n";

        std::cout << squre(c, d);
        std::cout << "\n";
    }
    else
    {
        std::cout << "You have entered a invalid choice\n";
    }

    return 0;
}

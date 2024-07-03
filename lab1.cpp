#include <iostream>

int main()
{
    int num;

    std::cout << "Please enter a number 1..10: " << "\n";
    std::cin >> num;

    if (num == 1)
    {
        std::cout << "The roman numeral for 1 is I." << "\n";
    }
    else if (num == 2)
    {
        std::cout << "The roman numeral for 2 is II." << "\n";
    }
    else if (num == 3)
    {
        std::cout << "The roman numeral for 3 is III." << "\n";
    }
    else if (num == 4)
    {
        std::cout << "The roman numeral for 4 is IV." << "\n";
    }
    else if (num == 5)
    {
        std::cout << "The roman numeral for 5 is V." << "\n";
    }
    else if (num == 6)
    {
        std::cout << "The roman numeral for 6 is VI." << "\n";
    }
    else if (num == 7)
    {
        std::cout << "The roman numeral for 7 is VII." << "\n";
    }
    else if (num == 8)
    {
        std::cout << "The roman numeral for 8 is VIII." << "\n";
    }
    else if (num == 9)
    {
        std::cout << "The roman numeral for 9 is IX." << "\n";
    }
    else if (num == 10)
    {
        std::cout << "The roman numeral for 10 is X." << "\n";
    }
    else
    {
        std::cout << "That's not a valid number." << "\n";
    }

    return 0;
}
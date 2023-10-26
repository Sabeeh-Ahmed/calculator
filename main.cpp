#include <iostream>

int main()
{
    double first;
    double second;
    char operation;

    std::cout << "Choose an operation i.e. + , - , * , / , %" << std::endl;
    std::cin >> operation;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    if (operation == '+')
    {
        double sum = first + second;
        std::cout << first << "+" << second << "=" << sum << std::endl;
    }
    else if (operation == '-')
    {
        double subtract = first - second;
        std::cout << first << "-" << second << "=" << subtract << std::endl;
    }
    else if (operation == '*')
    {
        double product = first * second;
        std::cout << first << "*" << second << "=" << product << std::endl;
    }
    else if (operation == '/')
    {
        double division = first / second;
        std::cout << first << "/" << second << "=" << division << std::endl;
    }

    else if (operation == '%')
    {
        double modulus = int(first) % int(second);
        std::cout << first << "%" << second << "=" << modulus << std::endl;
    }
    else
    {
        std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}

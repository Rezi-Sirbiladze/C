// https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode
// https://cplusplus.com/reference/

#include <iostream>

// 9, 10
#include <cmath>
//* 9, 10

// 5 Typedef and type aliases
#include <vector>
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
// same
using text_t = std::string;
using number_t = int;
//* 5 Typedef and type aliases

// 4 Namespaces
namespace first
{
    int sameName = 1;
}
namespace second
{
    int sameName = 2;
}
//* 4 Namespaces

int main()
{
    // 12 switches
    std::cout << std::endl
              << 12 << std::endl;
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is February";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    case 6:
        std::cout << "It is June";
        break;
    case 7:
        std::cout << "It is July";
        break;
    case 8:
        std::cout << "It is August";
        break;
    case 9:
        std::cout << "It is September";
        break;
    case 10:
        std::cout << "It is October";
        break;
    case 11:
        std::cout << "It is November";
        break;
    case 12:
        std::cout << "It is December";
        break;
    default:
        std::cout << "Invalid month";
        break;
    }
    std::cout << std::endl
              << 12 << std::endl;
    //* 12 switches

    // 11 if statements
    std::cout << std::endl
              << 11 << std::endl;
    int age11;
    std::cout << "Enter your age: ";
    std::cin >> age11;
    if (age11 >= 18 && age11 <= 50)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age11 < 0)
    {
        std::cout << "You haven't been born yet!";
    }
    else if (age11 >= 100)
    {
        std::cout << "You are too old to enter this site!";
    }
    else
    {
        std::cout << "You are not old enough to enter";
    }
    std::cout << std::endl
              << 11 << std::endl;
    //* 11 if stataments

    // 10 Hypotenuse calculator practice
    std::cout << std::endl
              << 10 << std::endl;
    double a;
    double b;
    double c;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side A: ";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Side C: " << c;
    std::cout << std::endl
              << 10 << std::endl;
    //* 10 Hypotenuse calculator practice

    // 9 Useful math related functions
    std::cout << std::endl
              << 9 << std::endl;
    double x9 = 3.14;
    double y9 = 4.59;
    double z9;
    z9 = std::max(x9, y9);
    z9 = std::min(x9, y9);
    z9 = pow(x9, y9);
    z9 = sqrt(x9);
    z9 = abs(x9);
    z9 = ceil(x9);
    z9 = round(x9);
    z9 = floor(x9);
    std::cout << z9;
    std::cout << std::endl
              << 9 << std::endl;
    //* 9 Useful math related functions

    // 8 User input
    std::cout << std::endl
              << 8 << std::endl;
    int age8;
    std::string name8;
    std::cout << "What's your name?: ";
    // "std::ws" to clear buffer
    std::getline(std::cin >> std::ws, name8);
    std::cout << "What's your age?: ";
    std::cin >> age8;
    std::cout << "Hello " << name8 << '\n';
    std::cout << "you are " << age8 << " years old";
    std::cout << std::endl
              << 8 << std::endl;
    //* 8 User input

    // 7 Type conversion
    std::cout << std::endl
              << 7 << std::endl;
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    std::cout << score << '%';
    std::cout << std::endl
              << 7 << std::endl;
    //* 7 Type conversion

    // 6 Arithmetic operators
    std::cout << std::endl
              << 6 << std::endl;
    int students = 20;
    students = students + 1;
    students += 1;
    students /= 2;
    students++;
    int remainder = students % 2;
    std::cout << students;
    std::cout << std::endl
              << 6 << std::endl;
    //* 6 Arithmetic operators

    // 5 Typedef and type aliases
    std::cout << std::endl
              << 5 << std::endl;
    pairlist_t pairlist;
    text_t firstName = "Rezi";
    number_t age = 22;
    std::cout << "typedef " << firstName << ' ' << age;
    std::cout << std::endl
              << 5 << std::endl;
    //* 5 Typedef and type aliases

    // 4 Namespaces
    std::cout << std::endl
              << 4 << std::endl;
    using namespace first;
    using std::cout;
    int sameName = 3;
    cout << "Namespace " << sameName << ' ' << second::sameName;
    std::cout << std::endl
              << 4 << std::endl;
    //* 4 Namespaces

    // 3 Const
    std::cout << std::endl
              << 3 << std::endl;
    const double PI = 3.1415;
    std::cout << PI;
    std::cout << std::endl
              << 3 << std::endl;
    //* 3 Const

    // 2 Variables and basic data types
    std::cout << std::endl
              << 2 << std::endl;
    int x = 5;
    int y = 4;
    int sum = 5 + 4;
    std::cout << "Sum of " << x << " and " << y << " = " << sum << '\n';

    double temperature = 25.1;
    char grade = 'A';
    bool power = true;
    std::string name = "Rezi";
    std::cout << name;

    std::cout << std::endl
              << 2 << std::endl;
    //* 2 Variables and basic data types

    // 1
    std::cout << std::endl
              << 1 << std::endl;
    std::cout << "Hello" << '\n';
    std::cout << "world";
    std::cout << std::endl
              << 1 << std::endl;
    //* 1

    return 0;
}
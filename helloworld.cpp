// https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode

#include <iostream>

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
    std::cout << "suma de " << x << " y " << y << " = " << sum << '\n';

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
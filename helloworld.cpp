// https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode
// https://cplusplus.com/reference/

#include <iostream>
#include <string>

// Functions
void helloWord_1();
void VariablesAndBasicDataTypes_2();
void const_3();
void namespaces_4();
void typedefAndTypeAliases_5();
void arithmeticOperators_6();
void typeConversion_7();
void userInput_8();
void usefulMathRelatedFunctions_9();
void hypotenuseCalculatorPractice_10();
void ifStataments_11();
void switches_12();
//* Functions

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
    switches_12();
    return 0;
}

void helloWord_1()
{
    std::cout << "Hello" << '\n';
    std::cout << "world";
}

void VariablesAndBasicDataTypes_2()
{
    int x = 5;
    int y = 4;
    int sum = 5 + 4;
    std::cout << "Sum of " << x << " and " << y << " = " << sum << '\n';

    double temperature = 25.1;
    std::cout << temperature << '\n';

    char grade = 'A';
    std::cout << grade << '\n';

    bool power = true;
    std::cout << power << '\n';

    std::string name = "Rezi";
    std::cout << name << '\n';
}

void const_3()
{
    const double PI = 3.1415;

    std::cout << PI;
}

void namespaces_4()
{
    using namespace first;
    using std::cout;
    int sameName = 3;

    cout << "Namespace " << sameName << ' ' << second::sameName;
}

void typedefAndTypeAliases_5()
{
    pairlist_t pairlist;
    text_t firstName = "Rezi";
    number_t age = 22;

    std::cout << "typedef " << firstName << ' ' << age;
}

void arithmeticOperators_6()
{
    int students = 20;
    students = students + 1;
    students += 1;
    students /= 2;
    students++;
    int remainder = students % 2;

    std::cout << students;
}

void typeConversion_7()
{
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << '%';
}

void userInput_8()
{
    int age;
    std::string name;

    std::cout << "What's your name?: ";
    // "std::ws" to clear buffer
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "you are " << age << " years old";
}

void usefulMathRelatedFunctions_9()
{
    double x = 3.14;
    double y = 4.59;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(x);
    z = abs(x);
    z = ceil(x);
    z = round(x);
    z = floor(x);

    std::cout << z;
}

void hypotenuseCalculatorPractice_10()
{
    double a;
    double b;
    double c;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Side C: " << c;
}

void ifStataments_11()
{
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
}

void switches_12()
{
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
}
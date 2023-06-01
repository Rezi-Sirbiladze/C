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
void console_calculator_program_13();
void ternaryOperator_14();
void logicalOperators_15();
void temperatureConversionProgram_16();
void usefulStringMethodsInC_17();
void whileLoops_18();
void dowhileloops_19();
void forLoops_20();
void breakContinue_21();
void nestedLoops_22();
void randomNumberGenerator_23();
void randomEventGenerator_24();
void numberGuessingGame_25();
void userDefinedFunctions_26(std::string name, int age);
double returnKeyword_27();
void overloadedFunctions_28();
void overloadedFunctions_28(std::string name);
void variableScope_29();
void bankingPracticaProgram_30();
//* Functions

//
#include <iomanip>
//

// 29
int globalNum = 100;
int globalNum2 = 200;
//* 29

// 23, 24
#include <ctime>
//* 23, 24

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
    std::string name = "Rezi";
    int age = 23;

    bankingPracticaProgram_30();

    // std::cout << "Result: " << returnKeyword_27() << "";

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

void console_calculator_program_13()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << '\n'
              << "************** CALCULATOR **************" << '\n';

    std::cout << "Enter either (+ - * /)" << '\n';
    std::cin >> op;

    std::cout << "Enter #1" << '\n';
    std::cin >> num1;

    std::cout << "Enter #2" << '\n';
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            result = 0;
        }
        break;
    default:
        std::cout << "That wasn't a valid response" << '\n';
        break;
    }

    std::cout << "result: " << result << '\n';

    std::cout << "****************************************";
}

void ternaryOperator_14()
{
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n';

    int number = 9;
    number % 2 ? std::cout << "ODD" << '\n' : std::cout << "EVEN" << '\n';

    bool hungry = true;
    hungry ? std::cout << "You are hungry" << '\n' : std::cout << "You are full" << '\n';

    hungry = false;
    std::cout << (hungry ? "You are hungry" : "You are full");
}

void logicalOperators_15()
{
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: " << '\n';
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!" << '\n';
    }
    else
    {
        std::cout << "The temperature is bad!" << '\n';
    }

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "The temperature is bad!" << '\n';
    }
    else
    {
        std::cout << "The temperature is good!" << '\n';
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!" << '\n';
    }
    else
    {
        std::cout << "It is sunny outside!" << '\n';
    }
}

void temperatureConversionProgram_16()
{
    double temp;
    char unit;
    double result;

    std::cout << '\n'
              << "************** Temperature conversion **************" << '\n';

    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';

    std::cout << "What unit would you like to convert to: " << '\n';
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;
        result = (temp * 9 / 5) + 32;
        std::cout << "Temperature is: " << result << 'F' << '\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: " << '\n';
        std::cin >> temp;
        result = (temp - 32) * 5 / 9;
        std::cout << "Temperature is: " << result << 'C' << '\n';
    }
    else
    {
        std::cout << "Please enter in only C or F" << '\n';
    }

    std::cout << "****************************************************" << '\n';
}

void usefulStringMethodsInC_17()
{
    std::string name;

    std::cout << "Enter your name: " << '\n';
    std::getline(std::cin, name);

    if (name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters" << '\n';
    }
    else
    {
        std::cout << "Welcome " << name << '\n';
    }

    if (name.empty())
    {
        std::cout << "You didn't enter your name" << '\n';
    }
    else
    {
        std::cout << "Hello " << name << '\n';
    }

    name.append("@gmail.com");
    std::cout << "Your username is now: " << name << '\n';

    std::cout << name.at(0) << '\n';

    name.insert(0, "C_");
    std::cout << "Your username is now: " << name << '\n';

    std::cout << "Find spaces: " << name.find(' ') << '\n';

    name.erase(0, 2);
    std::cout << "Your username is now: " << name << '\n';

    name.clear();
    std::cout << "Hello " << name << '\n';
}

void whileLoops_18()
{
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: " << '\n';
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';
}

void dowhileloops_19()
{
    int number;

    do
    {
        std::cout << "Enter a positive number: " << '\n';
        std::cin >> number;
    } while (number < 0);

    std::cout << "The positive number is: " << number << '\n';
}

void forLoops_20()
{
    for (int i = 0; i <= 10; i++ /*or i-- , i+=2*/)
    {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!" << '\n';
}

void breakContinue_21()
{
    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }

        if (i == 15)
        {
            break;
        }
        std::cout << i << '\n';
    }
}

void nestedLoops_22()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: " << '\n';
    std::cin >> rows;

    std::cout << "How many columns?: " << '\n';
    std::cin >> columns;

    std::cout << "Enter a symbol to use: " << '\n';
    std::cin >> symbol;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
}

void randomNumberGenerator_23()
{
    srand(time(NULL));

    int num1 = rand() % 6 + 1;
    int num2 = rand() % 20 + 6;
    int num3 = rand() % 100 + 20;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
}

void randomEventGenerator_24()
{
    srand(time(NULL));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumper sticker!" << '\n';
        break;
    case 2:
        std::cout << "You win a t-shirt!" << '\n';
        break;
    case 3:
        std::cout << "You win a free lunch!" << '\n';
        break;
    case 4:
        std::cout << "You win a gift card!" << '\n';
        break;
    case 5:
        std::cout << "You win a concert ticket!" << '\n';
        break;
    default:
        std::cout << "You lose!" << '\n';
        break;
    }
}

void numberGuessingGame_25()
{
    srand(time(NULL));

    int num = rand() % 100 + 1;
    int guess;
    int tries;
    bool correct = false;

    std::cout << '\n'
              << "************** Number guessing game **************" << '\n';
    do
    {
        std::cout << "What number am I thinking of?: " << '\n';
        std::cin >> guess;

        if (num == guess)
        {
            std::cout << "You'r right King!" << '\n';
            std::cout << "You only needed " << tries << " tries" << '\n';
            correct = true;
        }
        else if (num > guess)
        {
            std::cout << "Higher" << '\n';
            tries++;
        }
        else
        {
            std::cout << "Lower" << '\n';
            tries++;
        }

    } while (!correct);

    std::cout << "**************************************************" << '\n';
}

void userDefinedFunctions_26(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << '!' << '\n';
    std::cout << "Happy Birthday to " << name << '!' << '\n';
    std::cout << "Happy Birthday dear " << name << '!' << '\n';
    std::cout << "Happy Birthday to " << name << '!' << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
}

double returnKeyword_27()
{
    double length = 5.2;
    double result = length * length;

    return result;
}

void overloadedFunctions_28()
{
    std::cout << "Hello" << '\n';
}

void overloadedFunctions_28(std::string name)
{
    std::cout << "Hello " << name << '\n';
}

void variableScope_29()
{
    int num = 1;
    int globalNum2 = 2;

    std::cout << num << '\n';
    std::cout << globalNum << '\n';
    std::cout << globalNum2 << '\n';
    std::cout << ::globalNum2 << '\n';
}

void showBalance_30(double balance)
{
    std::cout << '\n'
              << "*******************" << '\n';
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << '$' << '\n';
    std::cout << "*******************" << '\n';
}

double deposit_30()
{
    double deposit;
    std::cout << '\n'
              << "*******************" << '\n';
    std::cout << "Enter amount to be deposited: " << '\n';
    std::cout << "*******************" << '\n';
    std::cin >> deposit;
    return deposit;
}

double withdraw_30(double balance)
{
    double withdraw;
    std::cout << '\n'
              << "*******************" << '\n';
    std::cout << "Enter amount to be withdrawn: " << '\n';
    std::cout << "*******************" << '\n';
    std::cin >> withdraw;
    return balance - withdraw;
}

void bankingPracticaProgram_30()
{
    double balance = 125.05;
    int choice = 0;

    std::cout << '\n'
              << "************** Bank **************" << '\n';

    do
    {
        std::cout << '\n'
                  << "*******************" << '\n';
        std::cout << "Enter your choice: " << '\n';
        std::cout << "*******************" << '\n';

        std::cout << '\n'
                  << "*******************" << '\n';
        std::cout << "1. Show Balance" << '\n';
        std::cout << "2. Deposit Money" << '\n';
        std::cout << "3. Withdraw Money" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cout << "*******************" << '\n';
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance_30(balance);
            break;
        case 2:
            balance += deposit_30();
            showBalance_30(balance);
            break;
        case 3:
            balance = withdraw_30(balance);
            showBalance_30(balance);
            break;
        default:
            break;
        }
    } while (choice != 4);

    std::cout << '\n'
              << "*******************" << '\n';
    std::cout << "Thanks for visiting" << '\n';
    std::cout << "*******************" << '\n';

    std::cout << "**********************************" << '\n';
}

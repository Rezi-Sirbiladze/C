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
void rockPaperScissorsGame_31();
void arrays_32();
void sizeOfOperator_33();
void iterateOverAnArray_34();
void foreachLoop_35();
void passArrayToAFunction_36();
void searchAnArrayForAnElement_37();
void sortAnArray_38();
void fillFunction_39();
void fillAnArrayWithUserInput_40();
void multidimensionalArrays_41();
void quizGame_42();
void memoryAddresses_43();
void passByValueVsPassByReferences_44();
void constParameters_45();
void creditCradValidatorProgram_46();
void pointers_47();
void nullPointers_48();
void ticTacToeGame_49();
void dinamicMemory_50();
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

    dinamicMemory_50();

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
        std::cout << "You win a gift carsd!" << '\n';
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

char getUserChoice_31()
{
    char player;

    do
    {
        std::cout << '\n'
                  << "Choose on of the following" << '\n';
        std::cout << "*******************" << '\n';
        std::cout << "'r' for rock" << '\n';
        std::cout << "'p' for paper" << '\n';
        std::cout << "'s' for scissors" << '\n';
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice_31()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';

    default:
        break;
    }
    return 0;
}

void showChoice_31(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << '\n';
        break;
    case 'p':
        std::cout << "Paper" << '\n';
        break;
    case 's':
        std::cout << "Scissors" << '\n';
        break;
    default:
        break;
    }
}

void chooseWinner_31(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie!" << '\n';
        }
        else if (computer == 'p')
        {
            std::cout << "You win" << '\n';
        }
        else
        {
            std::cout << "You lose" << '\n';
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You win" << '\n';
        }
        else if (computer == 'p')
        {
            std::cout << "It's a tie!" << '\n';
        }
        else
        {
            std::cout << "You lose" << '\n';
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You lose" << '\n';
        }
        else if (computer == 'p')
        {
            std::cout << "You win" << '\n';
        }
        else
        {
            std::cout << "It's a tie!" << '\n';
        }
        break;
    default:
        break;
    }
}

void rockPaperScissorsGame_31()
{
    std::cout << '\n'
              << "************** ROCK PAPER SCISSORS **************" << '\n';

    char player = getUserChoice_31();
    std::cout << '\n'
              << "Your choice: " << '\n';
    showChoice_31(player);
    char computer = getComputerChoice_31();
    std::cout << '\n'
              << "Compiuter choice: " << '\n';
    showChoice_31(computer);

    chooseWinner_31(player, computer);

    std::cout << "*************************************************" << '\n';
}

void arrays_32()
{
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    std::cout << '\n';

    cars[0] = "Camaro";
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    std::cout << '\n';

    double prices[4];
    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';
}

void sizeOfOperator_33()
{
    std::string name = "Rezi";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(name) << " bytes" << '\n';
    std::cout << sizeof(gpa) << " bytes" << '\n';
    std::cout << sizeof(grade) << " bytes" << '\n';
    std::cout << sizeof(student) << " bytes" << '\n';
    std::cout << sizeof(grades) << " bytes" << '\n';
    std::cout << sizeof(grades) / sizeof(char) << " elements" << '\n';
    std::cout << sizeof(students) / sizeof(std::string) << " elements" << '\n';
}

void iterateOverAnArray_34()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }
}

void foreachLoop_35()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    for (std::string student : students)
    {
        std::cout << student << '\n';
    }
}

double getTotal_36(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

void passArrayToAFunction_36()
{
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal_36(prices, size);

    std::cout << '$' << total << '\n';
}

int searchArray_37(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void searchAnArrayForAnElement_37()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray_37(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << '\n';
    }
    else
    {
        std::cout << myNum << " is not in array" << '\n';
    }
}

void sort_38(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j] + 1;
                array[j + 1] = temp;
            }
        }
    }
}

void sortAnArray_38()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    // bubble sort | not efficient
    sort_38(array, size);

    for (int element : array)
    {
        std::cout << element << '\n';
    }
}

void fillFunction_39()
{
    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + SIZE / 3, "Pizza");
    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "Hamburger");
    fill(foods + (SIZE / 3) * 2, foods + SIZE, "Hotdog");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }
}

void fillAnArrayWithUserInput_40()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": " << '\n';
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods: " << '\n';

    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }
}

void multidimensionalArrays_41()
{
    std::string cars[][4]{{"Mustang", "Escape", "F-150"},
                          {"Corvette", "Equinox", "Silverado"},
                          {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << '\n';
        }
    }
}

void quizGame_42()
{
    std::cout << '\n'
              << "************** Quiz Game **************" << '\n';

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?"};

    std::string options[][4] = {
        {
            "A. 1969",
            "B. 1975",
            "C. 1985",
            "D. 1989",
        },
        {
            "A. Guido van Rossum",
            "B. Bjarne Stroustrup",
            "C. Honh Carmack",
            "D. Mark Zuckerburg",
        },
        {
            "A. C",
            "B. C+",
            "C. C--",
            "D. B++",
        },
        {
            "A. Yes",
            "B. No",
            "C. Sometimes",
            "D. What's Earth?",
        }};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {

        std::cout << '\n'
                  << "*******************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "*******************" << '\n';
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == answerKey[i])
        {
            std::cout << "Correct" << '\n';
            score++;
        }
        else
        {
            std::cout << "Wrong" << '\n';
            std::cout << "Answer is: " << answerKey[i] << '\n';
        }
        std::cout << "*******************" << '\n';
    }

    std::cout << '\n'
              << "*******************" << '\n';
    std::cout << "Correct guesses:" << score << '\n';
    std::cout << "# of questions:" << size << '\n';
    std::cout << "Score: " << (score / (double)size) * 100 << '%' << '\n';
    std::cout << "*******************" << '\n';

    std::cout << "***************************************" << '\n';
}

void memoryAddresses_43()
{
    std::string name = "Rezi";
    int age = 23;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
}

void swapValues_44(std::string x, std::string y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

void swapReferences_44(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

void passByValueVsPassByReferences_44()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swapValues_44(x, y);
    std::cout << "Values" << '\n';
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    std::cout << '\n';

    swapReferences_44(x, y);
    std::cout << "References" << '\n';
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
}

void printInfo_45(const std::string name, const int age)
{
    std::cout << name << '\n';
    std::cout << age << '\n';
}

void constParameters_45()
{
    const std::string name = "Rezi";
    const int age = 23;

    printInfo_45(name, age);
}

int getDigit_46(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits_46(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit_46(cardNumber[i] - '0');
    }

    return sum;
}

int sumEvenDigits_46(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit_46((cardNumber[i] - '0') * 2);
    }

    return sum;
}

void creditCradValidatorProgram_46()
{
    // Luhn Algorithm
    std::cout << '\n'
              << "************** Credit card validator **************" << '\n';

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: " << '\n';
    // 6011 0009 9013 9424
    std::cin >> cardNumber;

    result = sumEvenDigits_46(cardNumber) + sumOddDigits_46(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << '\n'
                  << cardNumber << " is valid" << '\n';
    }
    else
    {
        std::cout << '\n'
                  << cardNumber << " is not valid" << '\n';
    }

    std::cout << "***************************************************" << '\n';
}

void pointers_47()
{
    std::string name = "Rezi";
    std::string *pName = &name;
    int age = 23;
    int *pAge = &age;
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';
    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    std::cout << pFreePizzas << '\n';
    std::cout << *pFreePizzas << '\n';
}

void nullPointers_48()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Address was not assigned!" << '\n';
    }
    else
    {
        std::cout << "Address was assigned: " << *pointer << '\n';
    }
}

void drawBoard_49(char *spaces)
{
    std::cout << "__________________" << '\n';
    for (int i = 0; i < sizeof(spaces) / sizeof(spaces[0]); i += 3)
    {
        std::cout << "|     |     |     |" << '\n';
        std::cout << "|  " << spaces[i] << "  |  " << spaces[i + 1] << "  |  " << spaces[i + 2] << "  |" << '\n';
        std::cout << "|_____|_____|_____|" << '\n';
    }
}

void playerMove_49(char *spaces, char player)
{
    int number;

    do
    {
        std::cout << "Enter a spot to place a marker (1-9): " << '\n';
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        else
        {
            number = 0;
        }
    } while (!number > 0 || !number < 8);
}

void computerMove_49(char *spaces, char computer)
{
    int number;
    srand(time(NULL));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
        else
        {
            number = 0;
        }
    }
}

bool checkWinner_49(char *spaces, char player, char computer)
{
    // Check horizontal lines
    for (int i = 0; i < 3; i++)
    {
        if (spaces[i] != ' ' && spaces[i] == spaces[i + 1] && spaces[i] == spaces[i + 2])
        {
            spaces[i] == player ? std::cout << "YOU WIN 1" << '\n' : std::cout << "YOU LOSE 1" << '\n';
            return true;
        }
    }

    // Check vertical lines
    for (int i = 0; i < 3; i++)
    {
        if (spaces[i] != ' ' && spaces[i] == spaces[i + 3] && spaces[i] == spaces[i + 6])
        {
            spaces[i] == player ? std::cout << "YOU WIN 2" << '\n' : std::cout << "YOU LOSE 2" << '\n';
            return true;
        }
    }

    // Check diagonals
    if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[0] == spaces[8])
    {
        spaces[0] == player ? std::cout << "YOU WIN 3" << '\n' : std::cout << "YOU LOSE 3" << '\n';
        return true;
    }
    if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[2] == spaces[6])
    {
        spaces[2] == player ? std::cout << "YOU WIN 4" << '\n' : std::cout << "YOU LOSE 4" << '\n';
        return true;
    }

    return false;
}

bool checkTie_49(char *spaces)
{

    for (int i = 0; i < sizeof(spaces) / sizeof(spaces[0]); i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "It's a TIE!" << '\n';
    return true;
}

void ticTacToeGame_49()
{
    std::cout << '\n'
              << "************** TIC CAC TOE Game **************" << '\n';
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard_49(spaces);

    while (running)
    {
        playerMove_49(spaces, player);
        drawBoard_49(spaces);
        if (checkWinner_49(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie_49(spaces))
        {
            running = false;
            break;
        }

        computerMove_49(spaces, computer);

        drawBoard_49(spaces);
        if (checkWinner_49(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie_49(spaces))
        {
            running = false;
            break;
        }
    }
    std::cout << "Thanks for playing!";
    std::cout << "**********************************************" << '\n';
}

void dinamicMemory_50()
{
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    std::cout << "Addres: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';
    delete pNum;

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enterin?: " << '\n';
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": " << '\n';
        std::cin >> pGrades[i];
    }

    std::cout << '\n';

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << '\n';
    }

    delete[] pGrades;
}

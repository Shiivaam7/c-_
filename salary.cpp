//1. Rajesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
#include <iostream>
using namespace std;

int main() {
    float basic_salary, da, hra, gross_salary;

    cout << "Enter Rajesh's basic salary: ";
    cin >> basic_salary;

    da = 0.40f * basic_salary;   
    hra = 0.20f * basic_salary;  

    gross_salary = basic_salary + da + hra;

    cout << "Rajesh's gross salary is: " << gross_salary << endl;

    return 0;
}
// 2. The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters. 
#include <iostream>
using namespace std;

int main() {
    float km, meters, feet, inches, centimeters;

    cout << "Enter distance between two cities (in km): ";
    cin >> km;

    meters = km * 1000;
    centimeters = meters * 100;
    inches = meters * 39.3701;
    feet = meters * 3.28084;

    cout << "Distance in meters: " << meters << endl;
    cout << "Distance in feet: " << feet << endl;
    cout << "Distance in inches: " << inches << endl;
    cout << "Distance in centimeters: " << centimeters << endl;

    return 0;
}
//3.If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
#include <iostream>
using namespace std;
void sumOfDigits() {
    int num, sum = 0;
    cout << "Enter a five-digit number: ";
    cin >> num;
    for (int i = 0; i < 5; i++) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}
//4.If a five-digit number is input through the keyboard, write a program to reverse the number.
#include <iostream>
using namespace std;
void reverseNumber() {
    int num, rev = 0;
    cout << "Enter a five-digit number: ";
    cin >> num;
    for (int i = 0; i < 5; i++) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed number: " << rev << endl;
}
//5.If a four-digit number is input through the keyboard, write a program to obtain the sum of thefirst and last digit of this number.
#include <iostream>
using namespace std;
void sumFirstLastDigit() {
    int num, first, last;
    cout << "Enter a four-digit number: ";
    cin >> num;
    last = num % 10;
    first = num / 1000;
    cout << "Sum of first and last digit: " << (first + last) << endl;
}
// 6. Celsius to Fahrenheit
#include <iostream>
using namespace std;
void celsiusToFahrenheit() {
    float c, f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (c * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << f << endl;
}

// 7. Area and perimeter of a circle
#include <iostream>
using namespace std;
void circleAreaPerimeter() {
    float r, area, perimeter;
    cout << "Enter radius of the circle: ";
    cin >> r;
    area = 3.14159f * r * r;
    perimeter = 2 * 3.14159f * r;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

// 8. Decimal to octal and hexadecimal
#include <iostream>
using namespace std;
void decimalToOctHex() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Octal: " << oct << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << dec; // Reset to decimal
}

// 9. Remainder after dividing five-digit number by 3
#include <iostream>
using namespace std;
void remainderBy3() {
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;
    cout << "Remainder after dividing by 3: " << (num % 3) << endl;
}

// 10. Sum or difference of two numbers
#include <iostream>
using namespace std;
void sumOrDifference() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << "Sum: " << (a + b) << endl;
    else
        cout << "Difference: " << (a - b) << endl;
}

// 11. Using ternary operator
#include <iostream>
using namespace std;
void ternarySumOrDifference() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = (a > b) ? (a + b) : (a - b);
    cout << "Result: " << result << endl;
}

// 12. Simple interest
#include <iostream>
using namespace std;
void simpleInterest() {
    float principal, rate, years, si;
    cout << "Enter principal, rate, and number of years: ";
    cin >> principal >> rate >> years;
    si = (principal * rate * years) / 100;
    cout << "Simple Interest: " << si << endl;
}

// 13. Percentage marks in five subjects
#include <iostream>
using namespace std;
void percentageMarks() {
    float marks[5], total = 0;
    cout << "Enter marks in five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    cout << "Total Percentage: " << (total / 5) << "%" << endl;
}
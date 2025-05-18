#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // 1. Gross Salary
    float basic, da, hra, gross;
    cout << "1. Enter Basic Salary: ";
    cin >> basic;
    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;
    cout << "Gross Salary: " << gross << endl << endl;

    // 2. Distance conversion
    float km;
    cout << "2. Enter distance in kilometers: ";
    cin >> km;
    cout << "Meters: " << km * 1000 << endl;
    cout << "Feet: " << km * 3280.84 << endl;
    cout << "Inches: " << km * 39370.1 << endl;
    cout << "Centimeters: " << km * 100000 << endl << endl;

    // 3. Sum of digits of a five-digit number
    int num, sum = 0;
    cout << "3. Enter a 5-digit number: ";
    cin >> num;
    int temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "Sum of digits: " << sum << endl << endl;

    // 4. Reverse a five-digit number
    int rev = 0;
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed number: " << rev << endl << endl;

    // 5. Sum of first and last digit of four-digit number
    int fourDigit;
    cout << "5. Enter a 4-digit number: ";
    cin >> fourDigit;
    int last = fourDigit % 10;
    int first = fourDigit / 1000;
    cout << "Sum of first and last digit: " << first + last << endl << endl;

    // 6. Celsius to Fahrenheit
    float celsius, fahrenheit;
    cout << "6. Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl << endl;

    // 7. Area and perimeter of circle
    float radius, area, perimeter;
    cout << "7. Enter radius of circle: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    perimeter = 2 * 3.14159 * radius;
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl << endl;

    // 8. Decimal to Octal and Hexadecimal
    int decimal;
    cout << "8. Enter a decimal number: ";
    cin >> decimal;
    cout << "Octal: " << oct << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl << endl;

    // 9. Remainder after dividing by 3
    int fiveDigit;
    cout << "9. Enter a 5-digit number: ";
    cin >> fiveDigit;
    cout << "Remainder when divided by 3: " << fiveDigit % 3 << endl << endl;

    // 10. Sum or Difference based on comparison
    int a, b;
    cout << "10. Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << "Sum: " << a + b << endl;
    else
        cout << "Difference: " << b - a << endl << endl;

    // 11. Ternary version
    cout << "11. Using Ternary: " << ((a > b) ? a + b : b - a) << endl << endl;

    // 12. Simple Interest
    float principal, rate, time, interest;
    cout << "12. Enter principal, rate and time (years): ";
    cin >> principal >> rate >> time;
    interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << interest << endl << endl;

    // 13. Percentage Marks
    float m1, m2, m3, m4, m5;
    cout << "13. Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    float total = m1 + m2 + m3 + m4 + m5;
    cout << "Total: " << total << ", Percentage: " << (total / 5) << "%" << endl;

    return 0;
}

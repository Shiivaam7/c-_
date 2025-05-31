// 1. Profit or Loss
#include <iostream>
#include <cmath>
using namespace std;
void profitOrLoss()
{
    float cp, sp;
    cout << "Enter cost price and selling price: ";
    cin >> cp >> sp;
    if (sp > cp)
        cout << "Profit: " << sp - cp << endl;
    else if (cp > sp)
        cout << "Loss: " << cp - sp << endl;
    else
        cout << "No profit, no loss." << endl;
    // Output example: Profit: 20
}

// 2. Odd or Even
#include <iostream>
using namespace std;
void oddOrEven()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    // Output: Even
}

// 3. Leap Year
#include <iostream>
using namespace std;
void leapYear()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap year" << endl;
    else
        cout << "Not a leap year" << endl;
    // Output: Leap year
}

// 4. Day on 1st January of a year
#include <iostream>
using namespace std;
void dayOfFirstJan()
{
    int year, days = 0;
    cout << "Enter year: ";
    cin >> year;
    for (int y = 1900; y < year; y++)
    {
        days += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;
    }
    string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "1st January " << year << " is " << week[days % 7] << endl;
    // Output: 1st January 2024 is Monday
}

// 5. Reverse and check palindrome
#include <iostream>
using namespace std;
void reverseAndPalindrome()
{
    int num, rev = 0, temp;
    cout << "Enter a five-digit number: ";
    cin >> num;
    temp = num;
    for (int i = 0; i < 5; i++)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed: " << rev << endl;
    if (num == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;
    // Output: Reversed: 12345, Not palindrome
}

// 6. Youngest of three
#include <iostream>
using namespace std;
void youngestOfThree()
{
    int ram, shyam, ajay;
    cout << "Enter ages of Ram, Shyam, Ajay: ";
    cin >> ram >> shyam >> ajay;
    if (ram <= shyam && ram <= ajay)
        cout << "Ram is youngest" << endl;
    else if (shyam <= ram && shyam <= ajay)
        cout << "Shyam is youngest" << endl;
    else
        cout << "Ajay is youngest" << endl;
    // Output: Shyam is youngest
}

// 7. Valid triangle
#include <iostream>
using namespace std;
void validTriangle()
{
    int a, b, c;
    cout << "Enter three angles: ";
    cin >> a >> b >> c;
    if (a + b + c == 180)
        cout << "Valid triangle" << endl;
    else
        cout << "Invalid triangle" << endl;
    // Output: Valid triangle
}

// 8. Absolute value
#include <iostream>
using namespace std;
void absoluteValue()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Absolute value: " << abs(n) << endl;
    // Output: Absolute value: 5
}

// 9. Area vs Perimeter

void areaVsPerimeter()
{
    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    int area = l * b, peri = 2 * (l + b);
    if (area > peri)
        cout << "Area is greater" << endl;
    else
        cout << "Perimeter is greater or equal" << endl;
    // Output: Area is greater
}

// 10. Collinear points
#include <iostream>
using namespace std;
void collinearPoints()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter three points (x1 y1 x2 y2 x3 y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        cout << "Collinear" << endl;
    else
        cout << "Not collinear" << endl;
    // Output: Collinear
}

// 11. Prime numbers 1 to 99
#include <iostream>
using namespace std;
void primes1to99()
{
    cout << "Prime numbers from 1 to 99: ";
    for (int i = 2; i < 100; i++)
    {
        bool prime = true;
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        if (prime)
            cout << i << " ";
    }
    cout << endl;
    // Output: 2 3 5 7 ... 97
}

// 12. Reverse a number
#include <iostream>
using namespace std;
void reverseNumber()
{
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reverse: " << rev << endl;
    // Output: Reverse: 54321
}

// 13. Digit count in number
#include <iostream>
using namespace std;
void digitCount()
{
    int num, digit, count = 0;
    cout << "Enter number and digit: ";
    cin >> num >> digit;
    int temp = num;
    while (temp)
    {
        if (temp % 10 == digit)
            count++;
        temp /= 10;
    }
    if (count)
        cout << "Digit " << digit << " occurs " << count << " times." << endl;
    else
        cout << "Digit not found." << endl;
    // Output: Digit 2 occurs 2 times.
}

// 14. Sum of squares up to n
#include <iostream>
using namespace std;
void sumOfSquares()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i * i;
    cout << "Sum of squares: " << sum << endl;
    // Output: Sum of squares: 55
}

// 15. Cubes divisible by 3 up to n
#include <iostream>
using namespace std;
void cubesDivBy3()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Cubes divisible by 3: ";
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0)
            cout << i * i * i << " ";
    cout << endl;
    // Output: 27 216 ...
}

// 16. Sum even, multiply odd digits (6-digit)
#include <iostream>
using namespace std;
void sumEvenMulOdd()
{
    int num, sum = 0, mul = 1;
    cout << "Enter a six-digit number: ";
    cin >> num;
    int temp = num;
    while (temp)
    {
        int d = temp % 10;
        if (d % 2 == 0)
            sum += d;
        else
            mul *= d;
        temp /= 10;
    }
    cout << "Sum of even digits: " << sum << endl;
    cout << "Multiplication of odd digits: " << mul << endl;
    // Output: Sum of even digits: 12, Multiplication of odd digits: 15
}

// 17. x^y
#include <iostream>
using namespace std;
void powerXY()
{
    int x, y, res = 1;
    cout << "Enter x and y: ";
    cin >> x >> y;
    for (int i = 0; i < y; i++)
        res *= x;
    cout << "x^y = " << res << endl;
    // Output: x^y = 8
}

// 18. Number in words (up to 6 digits)
#include <iostream>
using namespace std;
void numberInWords()
{
    int num, arr[6], i = 0;
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter a number (up to 6 digits): ";
    cin >> num;
    int temp = num;
    while (temp)
    {
        arr[i++] = temp % 10;
        temp /= 10;
    }
    cout << "In words: ";
    for (int j = i - 1; j >= 0; j--)
        cout << words[arr[j]] << " ";
    cout << endl;
    // Output: one two six five
}

// 18b. Fibonacci check
#include <iostream>
using namespace std;
void isFibonacci()
{
    int n, a = 0, b = 1, c = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (n == 0 || n == 1 || c == n)
        cout << "Fibonacci number" << endl;
    else
        cout << "Not a Fibonacci number" << endl;
    // Output: Fibonacci number
}

// 19. Pythagorean triplets < 50
#include <iostream>
using namespace std;
void pythagoreanTriplets()
{
    cout << "Pythagorean triplets less than 50:" << endl;
    for (int x = 1; x < 50; x++)
        for (int y = x + 1; y < 50; y++)
            for (int z = y + 1; z < 50; z++)
                if (x * x + y * y == z * z)
                    cout << x << " " << y << " " << z << endl;
    // Output: 3 4 5 ...
}

// 20. Worker efficiency
#include <iostream>
using namespace std;
void workerEfficiency()
{
    float time;
    cout << "Enter time taken (in hours): ";
    cin >> time;
    if (time >= 2 && time < 3)
        cout << "Highly efficient" << endl;
    else if (time >= 3 && time < 4)
        cout << "Improve speed" << endl;
    else if (time >= 4 && time <= 5)
        cout << "Training required" << endl;
    else if (time > 5)
        cout << "Leave the company" << endl;
    else
        cout << "Invalid input" << endl;
    // Output: Highly efficient
}

// 21. Overtime pay for 10 employees
#include <iostream>
using namespace std;
void overtimePay()
{
    int hours, overtime;
    float pay;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter hours worked for employee " << i << ": ";
        cin >> hours;
        overtime = (hours > 40) ? (hours - 40) : 0;
        pay = overtime * 12.0;
        cout << "Overtime pay: Rs. " << pay << endl;
    }
    // Output: Overtime pay: Rs. 24
}

// 22. Factorial
#include <iostream>
using namespace std;
void factorial()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    cout << "Factorial: " << fact << endl;
    // Output: Factorial: 120
}

// 23. x^y (again)
#include <iostream>
using namespace std;
void powerXY2()
{
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << "x^y = " << pow(x, y) << endl;
    // Output: x^y = 16
}

// 24. ASCII values
#include <iostream>
using namespace std;
void asciiValues()
{
    int i = 0;
    while (i <= 255)
    {
        cout << i << " = " << char(i) << endl;
        i++;
    }
    // Output: 65 = A ...
}

// 25. Primes 1 to 300
#include <iostream>
using namespace std;
void primes1to300()
{
    cout << "Prime numbers from 1 to 300: ";
    for (int i = 2; i <= 300; i++)
    {
        bool prime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    cout << endl;
    // Output: 2 3 5 ... 293 307
}

// 26. Fill screen with smiley face (ASCII 1)
#include <iostream>
using namespace std;
void fillSmiley()
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 80; j++)
            cout << char(1);
        cout << endl;
    }
    // Output: Smiley faces fill the screen
}

// 27. Pattern
#include <iostream>
using namespace std;
void pattern27()
{
    cout << "A\n";
    cout << "BC\n";
    cout << "DEFG\n";
    cout << "FED\n";
    cout << "CB\n";
    cout << "A\n";
    // Output:
    // A
    // BC
    // DEFG
    // FED
    // CB
    // A
}

// 28. 1 to 10
#include <iostream>
using namespace std;
void oneToTen()
{
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
    cout << endl;
    // Output: 1 2 3 4 5 6 7 8 9 10
}

// 29. Pascal's triangle first 4 rows
#include <iostream>
using namespace std;
void pascalPattern()
{
    int n = 4, coef;
    for (int i = 0; i < n; i++)
    {
        coef = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / (j + 1);
        }
    }
    cout << endl;
    // Output: 1 1 1 1 2 1 1 3 3 1 1 4 6 4 1
}
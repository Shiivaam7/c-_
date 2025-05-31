

// 1. Prime factors (recursive)
#include <iostream>
#include <cmath>
using namespace std;
void primeFactors(int n, int i = 2)
{
    if (n == 1)
        return;
    if (n % i == 0)
    {
        cout << i << " ";
        primeFactors(n / i, i);
    }
    else
    {
        primeFactors(n, i + 1);
    }
}

// 2. First 25 Fibonacci numbers (recursive)
#include <iostream>
#include <cmath>
using namespace std;
void printFibo(int a, int b, int count)
{
    if (count == 0)
        return;
    cout << a << " ";
    printFibo(b, a + b, count - 1);
}

// 3. Binary equivalent (recursive)
#include <iostream>
#include <cmath>
using namespace std;
void printBinary(int n)
{
    if (n == 0)
        return;
    printBinary(n / 2);
    cout << n % 2;
}

// 4. sin(x) series to five significant digits
#include <iostream>
#include <cmath>
using namespace std;
double sinSeries(double x, int n = 1, double term = 0, double sum = 0, int sign = 1)
{
    if (fabs(term) < 1e-5 && n > 1)
        return sum;
    if (n == 1)
        term = x;
    sum += sign * term;
    term = term * x * x / ((2 * n) * (2 * n + 1));
    return sinSeries(x, n + 1, term, sum, -sign);
}

// 5. Area of triangle (Heron's formula)
#include <iostream>
#include <cmath>
using namespace std;
double triangleArea(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// 6. Roots of quadratic equation
#include <iostream>
#include <cmath>
using namespace std;
void quadraticRoots(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    if (d > 0)
        cout << "Roots: " << (-b + sqrt(d)) / (2 * a) << " and " << (-b - sqrt(d)) / (2 * a) << endl;
    else if (d == 0)
        cout << "Root: " << -b / (2 * a) << endl;
    else
        cout << "Complex roots." << endl;
}

// 7. Lower to upper case
#include <iostream>
#include <cmath>
using namespace std;
char toUpper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

// 8. Number in words (recursion)
#include <iostream>
#include <cmath>
using namespace std;
string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printWords(int n)
{
    if (n == 0)
        return;
    printWords(n / 10);
    cout << words[n % 10] << " ";
}

// 9. Cube sum (Armstrong)
#include <iostream>
#include <cmath>
using namespace std;
int cubeSum(int n)
{
    if (n == 0)
        return 0;
    int d = n % 10;
    return d * d * d + cubeSum(n / 10);
}

// 10. Print natural numbers 1 to n
#include <iostream>
#include <cmath>
using namespace std;
void printNatural(int n)
{
    if (n == 0)
        return;
    printNatural(n - 1);
    cout << n << " ";
}

// 11. Print even/odd in range
#include <iostream>
#include <cmath>
using namespace std;
void printEvenOdd(int start, int end, bool even)
{
    if (start > end)
        return;
    if ((start % 2 == 0) == even)
        cout << start << " ";
    printEvenOdd(start + 1, end, even);
}

// 12. Sum of natural numbers 1 to n
#include <iostream>
#include <cmath>
using namespace std;
int sumNatural(int n)
{
    if (n == 0)
        return 0;
    return n + sumNatural(n - 1);
}

// 13. Sum of even/odd in range
#include <iostream>
#include <cmath>
using namespace std;
int sumEvenOdd(int start, int end, bool even)
{
    if (start > end)
        return 0;
    if ((start % 2 == 0) == even)
        return start + sumEvenOdd(start + 1, end, even);
    return sumEvenOdd(start + 1, end, even);
}

// 14. Reverse number
#include <iostream>
#include <cmath>
using namespace std;
int reverseNum(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + n % 10);
}

// 15. Palindrome check
#include <iostream>
#include <cmath>
using namespace std;
bool isPalindrome(int n, int rev = 0, int orig = -1)
{
    if (orig == -1)
        orig = n;
    if (n == 0)
        return orig == rev;
    return isPalindrome(n / 10, rev * 10 + n % 10, orig);
}

// 16. Sum of digits
#include <iostream>
#include <cmath>
using namespace std;
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);
}

// 17. Factorial
#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// 18. nth Fibonacci term
#include <iostream>
#include <cmath>
using namespace std;
int nthFibo(int n)
{
    if (n <= 2)
        return 1;
    return nthFibo(n - 1) + nthFibo(n - 2);
}

// 19. GCD (HCF)
#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 20. LCM
#include <iostream>
#include <cmath>
using namespace std;
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// 21. Display array elements
#include <iostream>
#include <cmath>
using namespace std;
void printArray(int arr[], int n, int i = 0)
{
    if (i == n)
        return;
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}

// 22. Sum of array elements
#include <iostream>
#include <cmath>
using namespace std;
int sumArray(int arr[], int n, int i = 0)
{
    if (i == n)
        return 0;
    return arr[i] + sumArray(arr, n, i + 1);
}

// 23. Max and min in array
#include <iostream>
#include <cmath>
using namespace std;
void maxMinArray(int arr[], int n, int i, int &mx, int &mn)
{
    if (i == n)
        return;
    if (arr[i] > mx)
        mx = arr[i];
    if (arr[i] < mn)
        mn = arr[i];
    maxMinArray(arr, n, i + 1, mx, mn);
}

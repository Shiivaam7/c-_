//1. Write a C program to print all natural numbers from 1 to n. - using while loop in cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }

    cout << endl;
    return 0;
}
//2. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop in cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = n;
    while (i >= 1) {
        cout << i << " ";
        i--;
    }

    cout << endl;
    return 0;
}
//3. Write a C program to print all alphabets from a to z. - using while loop in cpp
#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    while (ch <= 'z') {
        cout << ch << " ";
        ch++;
    }

    cout << endl;
    return 0;
}
//4. Write a C program to print all even numbers between 1 to 100. - using while loop
#include <iostream>
using namespace std;

int main() {
    int i = 2; // Start from the first even number

    while (i <= 100) {
        cout << i << " ";
        i += 2; // Increment by 2 to get the next even number
    }

    cout << endl;
    return 0;
}
//5. Print all odd numbers between 1 to 100
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 100) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;
    return 0;
}
//6. Find sum of all natural numbers between 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of natural numbers = " << sum << endl;
    return 0;
}
//7. Find sum of all even numbers between 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 2;
    while (i <= n) {
        sum += i;
        i += 2;
    }

    cout << "Sum of even numbers = " << sum << endl;
    return 0;
}
//8. Find sum of all odd numbers between 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum += i;
        i += 2;
    }

    cout << "Sum of odd numbers = " << sum << endl;
    return 0;
}
//9. Print multiplication table of any number
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}
//10. Count number of digits in a number
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) count = 1;
    else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    cout << "Number of digits = " << count << endl;
    return 0;
}
//11. Find first and last digit of a number
#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    cout << "First digit = " << firstDigit << endl;
    cout << "Last digit = " << lastDigit << endl;
    return 0;
}
//12. Sum of first and last digit
#include <iostream>
using namespace std;

int main() {
    int num, first, last;
    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;
    first = num;
    while (first >= 10)
        first /= 10;

    cout << "Sum = " << first + last << endl;
    return 0;
}
//13Swap first and last digits
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, first, last, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    int middle = (num % static_cast<int>(pow(10, digits))) / 10;
    int result = last * pow(10, digits) + middle * 10 + first;

    cout << "Swapped number: " << result << endl;
    return 0;
}
//14. Sum of digits
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
//15. Product of digits
#include <iostream>
using namespace std;

int main() {
    int num, product = 1;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }

    cout << "Product of digits = " << product << endl;
    return 0;
}
//16. Reverse of a number
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed number = " << reverse << endl;
    return 0;
}

//17. Palindrome check

#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (original == reverse)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
//18. Frequency of each digit

#include <iostream>
using namespace std;

int main() {
    int num, freq[10] = {0};
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        freq[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
        if (freq[i] > 0)
            cout << "Digit " << i << " occurs " << freq[i] << " times\n";

    return 0;
}
//19. Print number in words

#include <iostream>
#include <string>
using namespace std;

string words[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void printWords(int n) {
    if (n == 0) return;
    printWords(n / 10);
    cout << words[n % 10] << " ";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) cout << "Zero";
    else printWords(num);

    cout << endl;
    return 0;
}
//20. Print all ASCII characters

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 255; i++) {
        cout << i << " => " << char(i) << endl;
    }
    return 0;
}
//21. Power of a number (using for loop)

#include <iostream>
using namespace std;

int main() {
    int base, exp, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    for (int i = 1; i <= exp; i++)
        result *= base;

    cout << "Result = " << result << endl;
    return 0;
}
//22. Find all factors

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factors: ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";

    cout << endl;
    return 0;
}
//23. Factorial of a number

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial = " << fact << endl;
    return 0;
}
//24. HCF (GCD) of two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, hcf;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int i = (a < b) ? a : b;
    while (i > 0) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
        i--;
    }

    cout << "HCF = " << hcf << endl;
    return 0;
}
//25. LCM of two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;
    while (true) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    cout << "LCM = " << lcm << endl;
    return 0;
}
//26. Check prime number

#include <iostream>
using namespace std;

int main() {
    int n, i = 2, flag = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) flag = 0;
    else {
        while (i <= n / 2) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
            i++;
        }
    }

    if (flag) cout << "Prime\n";
    else cout << "Not Prime\n";
    return 0;
}
//27. All prime numbers between 1 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;

    cout << "Prime numbers: ";
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
//28. Sum of all prime numbers between 1 to n

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n, sum = 0;
    cout << "Enter limit: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
        if (isPrime(i)) sum += i;

    cout << "Sum of prime numbers = " << sum << endl;
    return 0;
}
//29. All prime factors of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Prime factors: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    cout << endl;
    return 0;
}
//30. Check Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> num;

    original = num;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong number\n";
    else
        cout << "Not Armstrong number\n";

    return 0;
}
//31. All Armstrong numbers between 1 to n
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;

    cout << "Armstrong numbers: ";
    for (int i = 1; i <= n; i++)
        if (isArmstrong(i)) cout << i << " ";

    cout << endl;
    return 0;
}
//32. Check Perfect number

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;

    if (sum == num)
        cout << "Perfect number\n";
    else
        cout << "Not Perfect number\n";

    return 0;
}
//33. All Perfect numbers between 1 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;

    cout << "Perfect numbers: ";
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0) sum += j;

        if (sum == i)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
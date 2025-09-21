#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/* Q#1
write a program to print and an age
print adult if age is greater than 18
print minor if age is less than 18 */

/* Q#2
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. Above 80 - A
Write a program to take marks as input and print the corresponding grade. */

/* Q#3
Take the age from user and then decide accordignly:
1. If age < 18,
        print -> "Not eligible for job!"
2. If age >= 18 and age <= 54,
        print -> "Eligible for job!"
3. If age >= 55 and age >= 57,
        print -> "Eligible for job, but retirement soon!"
4. If age > 57,
        print -> "Retired!"
*/

/*  Q#4
Take the day number and print the corresponding day
for 1 print Monday
for 2 print Tuesday and so on,
and for 7 print Sunday. */

// Q#5
//  Take 2 numbers and print its sum.

// FUNCTIONS
// VOID
void printName(string name)
{
    cout << "Hey Striver!!" << endl;
    cout << "Hey  " << name << endl;
}

// RETURN FUNCTION
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int maxx(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

// FUNCTION PASSED BY VALUE
void updateValue(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
} 

// Only thing that will be changed in case of pass by reference is to add "&"
void updateValueStr(string &s)
{
    s[0] = 'E';
    cout << s << endl;
}

void arrayRef(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main()
{
    /* test
    cout << "Hello, World!" << endl;
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y; */

    // string str;
    // getline(cin, str);
    // cout << str;

    /* Sol#1
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult!";
    }
    else
    {
        cout << "You are not an adult!";
    } */

    /* Sol#2
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "F";
    } else if(marks <= 44){
        cout << "E";
    } else if(marks <= 49){
        cout << "D";
    } else if(marks <= 59){
        cout << "C";
    } else if(marks <= 79){
        cout << "B";
    } else {
        cout << "A";
    } */

    /* Sol#3
    int age;
    cin >> age;
    if (age < 18){
        cout << "Not eligible for job!";
    } else if (age <= 57){
        cout << "Eligible for job,";
        if(age >= 55){
            cout << " but retirement soon!";
        }
    } else {
        cout << "Retired!";
    } */

    /* Sol#4
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout<< "Invalid";
        break;
    } */

    // 1D Array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[4];

    // 2D Array
    // int arr[3][5];
    // arr[1][3] = 78;
    // cout << arr[1][4];

    //  STRING
    // string s= "Striver";
    // int len = s.size();
    // // character
    // s[len - 1 ] = 'B';
    // cout << s[len - 1 ];

    // FOR LOOP
    // for (int i = 1; i <= 5; i = i + 1)
    // {
    //     cout << "Striver " << i << endl;
    // }

    // int i;
    // for (i = 5; i > 0; i = i - 1)
    // {
    //     cout << "Striver " << i << endl;
    // }

    // WHILE LOOP
    // int i = 1;
    // while (i <= 5)
    // {
    //     cout << "Striver " << i << endl;
    //     i = i + 1;
    // }

    // DO WHILE LOOP
    // int i = 2;
    // do
    // {
    //     cout << "Striver " << i << endl;
    //     i = i + 1;
    // } while (i <= 5);
    // cout << i << endl;

    // FUNCTIONS
    // string name;
    // cin >> name;
    // printName(name);

    // Sol#5
    // int num1, num2;
    // cin >> num1 >> num2;
    // int res = sum(num1 , num2);
    // cout << res << endl;

    // int num1, num2;
    // cin >> num1 >> num2;
    // int max = maxx(num1, num2);
    // cout << max << endl;

    // PASS BY VALUE
    // int num = 10;
    // updateValue(num);
    // cout << num << endl;

    // string s = "IRUM";
    // updateValueStr(s);
    // cout << s << endl;

    // for loop with array
    // int arr[5];
    // for (int i = 0; i <= 4; i =i + 1)
    // {
    //     cout << i << endl;
    //     cin >> arr[i];
    //     // cout << i << endl;
    // }

    // arrays are generically passed by reference
    int n = 5;
    int arr[n];
    for (int i = 0; i <= n; i = i + 1)
    {
        cin >> arr[i];
    }

    arrayRef(arr, n);
    cout << "Value outside function: " << arr[0] << endl;

    return 0;
}
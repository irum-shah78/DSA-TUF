#include <bits/stdc++.h>
using namespace std;

// pattern 1 to print " * "
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

// pattern 2 to print " * "
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

// pattern 3 to print numbers
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// pattern 4 to print numbers
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// pattern 5 to print stars
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

// pattern 6 to print numbers
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// pattern 7 to print stars
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// pattern 8 to print stars
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// pattern 9 will be combination of pattern 7 and pattern 8

// pattern 10 to print stars
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// pattern 11 to print the binary numbers
void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

// pattern 12 to print the numbers
void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

// pattern 13 to print the numbers
void pattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}

// pattern 14 to print characters
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// pattern 14 to print characters
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// pattern 15 to print characters
void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    pattern16(n);

    // For the test cases, backend looks like this for online compiler.
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     int n;
    //     cin >> n;
    //     // pattern1(n);
    //     pattern2(n);
    // }
}
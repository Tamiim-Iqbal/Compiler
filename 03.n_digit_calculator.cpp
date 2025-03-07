#include <bits/stdc++.h>
using namespace std;

void calculator(string s)
{
    int num1 = 0, num2 = 0;
    char op = '\0';
    bool isNegative = false;


    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            if (op == '\0')
            {
                num1 = num1 * 10 + (s[i] - '0');
            }
            else
            {
                num2 = num2 * 10 + (s[i] - '0');
            }
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            op = s[i];
        }
    }


    if (op == '+') cout << num1 + num2 << endl;
    else if (op == '-') cout << num1 - num2 << endl;
    else if (op == '*') cout << num1 * num2 << endl;
    else if (op == '/') cout << num1 / num2 << endl;
    else cout << "Invalid operation!" << endl;

}

int main()
{
    string s;
    cin >> s;
    calculator(s);
}
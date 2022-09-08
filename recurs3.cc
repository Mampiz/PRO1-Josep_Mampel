#include <iostream>
using namespace std;

int suma_digits(int n)
{
    if (n <= 10)
        return n;
    else
    {
        int m = suma_digits(n / 10);
        return n%10 + m;
    }
}

bool es_multiple_3(int n)
{
    if (suma_digits(n) % 3 == 0)
        return true;
    else
        return false;
}

int main()
{
    int x;
    cin >> x;
    cout << es_multiple_3(x) << endl;
}
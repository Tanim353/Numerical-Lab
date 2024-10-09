#include <bits/stdc++.h>
using namespace std;

#define ld long double

ld f(ld x)
{
    return x * x * x - x * x + 2;
}

ld df(ld x)
{
    return 3 * x * x - 2 * x;
}

ld Error(ld a,ld b)
{
    return abs((a-b)/b);
}

int iter = 0;

ld NewtonRaphson(ld a, ld error)
{
    ld b = a - f(a) / df(a);
    while (Error(a, b) > error)
    {
        cout << fixed << setprecision(4) << iter << "\t\t" << a << "\t\t" << b << "\t\t" << Error(a, b) << endl;
        a = b;
        b = a - f(a) / df(a);
        iter++;
    }
    cout << "The root of the euation is:"<<endl;
    return b;
}

int main()
{
    ld a;
    cin >> a;
    ld error = 0.001;
    cout << "Newton-Raphson Method" << endl;
    cout << "Iter" << "\t\ta: " << "\t\tb: " << "\t\tError: " << endl;
    cout << NewtonRaphson(a, error) << endl;

    return 0;
}
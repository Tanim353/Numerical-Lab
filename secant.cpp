#include <bits/stdc++.h>
using namespace std;
double error_calculation(double old, double New)
{
    return abs((old - New) / New);
}
double f(double x)
{
    return pow(x, 3) - x - 1;
}

double secant_methode(double x0, double x1, double e)
{
    double error = 1, c;
    cout << setw(3) << "IT" << setw(8) << "X0" << setw(10) << "x1" << setw(10) << "C" << setw(12) << "Error" << endl;

    int k = 1;
    while (error > e)
    {
        c = x1 - ((x1 - x0) / (f(x1) - f(x0))) * f(x1);
        cout << setw(3) << k << setw(10) << setprecision(5) << fixed << x0 << setw(10) << x1 << setw(10) << c << setw(10) << error << endl;
        if (f(c) == 0)
        break;
        x0 = x1;
        x1 = c;
        error = error_calculation(x0, x1);
        k++;
    }
    return c;
}
int main()
{
    double x0, x1, e;
    cout << "Enter initial guess: " << endl;
    cin >> x0 >> x1;
    e = 0.000001;
    double root = secant_methode(x0, x1, e);
    cout << "Final root = " << root << endl;
    return 0;
}
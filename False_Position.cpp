#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ff first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"
#define EPSILON 0.005

double f(double x)
{
    return x * x - 4 * x - 10;
}

void false_position(double a, double b, int count = 1)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
    double c = a;
    while (abs(f(c)) >= EPSILON)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        cout << fixed << setprecision(4)<< count << "\t\t" << a << "\t\t" << b << "\t\t" << c << "\t\t" << abs(f(c)) << endl;
        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        count++;
    }

    cout << "The value of root is : " << c << endl;
}

void solve()
{
    double a=1,b=9;
    cout<<"It\t\ta\t\tb\t\tc\t\tError"<<nn;
    false_position(a,b);

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
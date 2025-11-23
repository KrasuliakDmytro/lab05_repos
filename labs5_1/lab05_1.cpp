#include <iostream>
#include <cmath>
using namespace std;

double h(const double x, const double y); 

int main()
{
    double p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double result = pow(h(fabs(p - q), sqrt(fabs(p - q))), 2) + h(1, q * q - p * p);

    cout << "Result = " << result << endl;
    return 0;
}

// Визначення функції
double h(const double x, const double y)
{
    return (y * y - sqrt(x * x + y * y)) / (1 + x * x * y * y);
}

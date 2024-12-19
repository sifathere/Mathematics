#include<iostream>
#include<cmath>
using namespace std;

double f(double x)
{
    return x*x - 3*x + 2;
}
double f_prime(double x)
{
    return 2*x - 3;     //Derivative of f(x)
}

int main()
{
    double x0, E;
    cout << "Enter initial guess x0 and error tolerance E: ";
    cin >> x0 >> E;

    double x1; //Root
    int iteration = 1;

    while (true)
    {
        x1 = x0 - f(x0) / f_prime(x0);
        
        if(fabs(f(x1)) < E)
            break;
        
        x0 = x1;
        iteration++;
    }

    cout << "Root: " << x1 <<" after " << iteration << " iteration." << endl;
    return 0;
}

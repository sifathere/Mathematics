#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin>>a>>b>>c;
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "The equation has complex roots." << endl;
    } else {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }

    return 0;
}

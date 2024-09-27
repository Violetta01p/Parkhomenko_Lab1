#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    double root = sqrt(num);
    
    if (root == int(root)) {

        cout << num << " is the square of " << int(root) << endl;
    } else {
        cout << num << " is not the square of any number" << endl;
    }

    return 0;
}


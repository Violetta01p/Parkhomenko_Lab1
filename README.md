# Parkhomenko_Lab1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout <<"Введіть число: ";
    cin >>num;
    int root = sqrt(num);
    if(root*root==num){
    cout <<num <<" є квадратом числа" << root << endl;
    }else{
        cout << num <<"не є квадратом жодного числа" << endl;
    }

    return 0;
}

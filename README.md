# Parkhomenko_Lab1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout <<"Enter a number:";
    cin >>num;
    int root = sqrt(num);
    if(root*root==num){
    cout <<num << root << "is the square of the number"<<endl;
    }else{
        cout << num <<"is not the square of any number"<<endl;
    }

    return 0;
}

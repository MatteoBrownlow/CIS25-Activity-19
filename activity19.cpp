#include <iostream>
#include "swap.hpp"
using namespace std;


int main(){
    int x, y;
    cout << "Enter a number for x: " << endl;
    cin >> x;
    cout << "Enter a number for y: " << endl;
    cin >> y;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}
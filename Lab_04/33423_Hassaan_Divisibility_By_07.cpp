#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number To Check Divisibility Of A Given Number By 7:\t";
    cin>>num;
    while ( (num != 7) && (num != -7) && (num != 0) && (num > 7 || num < -7)){
        int last_digit = num % 10;
        num = num / 10;
        int last_doubled = last_digit * 2;
        num = num - last_doubled;
    }
    if (num == 0 || num == 7 || num == -7) {
        cout << "The number is divisible by 7." << endl;
    } else {
        cout << "The number is not divisible by 7." << endl;
    }
}

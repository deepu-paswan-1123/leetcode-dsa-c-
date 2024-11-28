#include<iostream>
using namespace std;

int decimaltobinary(int dec){
    int res=0;
    int pow=1;
    while(dec>0){
        int remainder=dec%2;
        dec = dec/2;
        res +=(remainder*pow);
        pow =pow*10;
    }
    return res;
}

int binarytodecimal(int bin){
    int res=0;
    int pow=1;

    int temp = bin;
    while (temp > 0) {
        int remainder = temp % 10;
        if (remainder != 0 && remainder != 1) {
            cout << "Invalid binary number. Please enter a number containing only 0 and 1.\n";
            return -1;  // Return an error code for invalid input
        }
        temp /= 10;
    }

    while(bin>0){
        int remainder=bin%10;
        bin /=10;

        res +=remainder*pow;
        pow=pow*2;
    }

    return res;
}


int main (){
    // cout<<"the decimal number conversion to binary "<<decimaltobinary(6);
    cout<<"the binary number conversion to decimal "<<binarytodecimal(1);
    return 0;
}
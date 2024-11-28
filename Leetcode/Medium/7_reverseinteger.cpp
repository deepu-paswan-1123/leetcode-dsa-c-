#include<iostream>
#include<climits>
using namespace std;

int Reverse(int x){
    int reversed=0;
    while(x != 0){
        int digit=x%10;
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            cout << "Overflow detected!" << endl;
            return 0;  // Return 0 or any indication of overflow
        }
        reversed = reversed*10 + digit;
        x /= 10;
    }
    return reversed;
}

int main(){
    int x = -103;
    cout<<Reverse(x)<<endl;
    return 0;
}
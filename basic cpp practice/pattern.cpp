#include <iostream>
using namespace std;

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

int main()
{
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // now above code for character
    // for(int i=1;i<=4;i++){
    //     char ch='A';
    //     for(int j=1;j<=4;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }

    //     cout<<endl;
    // }

    // now the pattern print here is
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // char ch='A';
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // star print pattern
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
    // }

    // now to print the pattern is
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // int k=1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<k<<" ";
    //     }
    //     k++;
    //     cout<<endl;
    // }

    // now here is the code of the pattern is
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // for(int i=1;i<=4;i++){
    //     for(int j=i;j>=1;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // now here is the pattern to print here is
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int k=1;
    // for(int i=1;i<=4;i++){
    //     for(int j=i;j>=1;j--){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // now here is the pattern is
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    // int n=4;
    // for(int i=1;i<=n;i++){ //first of all i is initialize

    //     for(int j=1;j<i;j++){
    //         cout<<" "<<" ";
    //     }

    //     for(int j=i;j<=n;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // here the print pattern is
    // A A A A
    //   B B B
    //     C C
    //       D

    // char ch='A';
    // int n = 4;
    // for(int i=1;i<=n;i++){ //first of all i is initialize

    //     for(int j=1;j<i;j++){
    //         cout<<" "<<" ";
    //     }

    //     for(int j=i;j<=n;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // here the pattern is

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1

    // int n=4;
    // for(int i=0;i<n;i++){ //first of all i is initialize
    //     int k=1;
    //     for(int j=i;j<n-1;j++){
    //         cout<<" "<<" ";
    //     }

    //     for(int j=0;j<=i;j++){
    //         cout<<k<<" ";
    //         k++;
    //     }

    //     for(int j=i;j>0;j--){
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }

    // here the pattern is

    //             *
    //         *       *
    //     *               *
    // *                       *
    //     *                *
    //       *           *
    //             *

    int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << '*';

    //     if (i != 0)
    //     {
    //         for (int j = 0; j<2*i-1; j++)
    //         {
    //             cout << " ";
    //         }

    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<(n-1);i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector <int> vec={1,2,3};
    // cout<<vec[0]<<endl;
    // apply foreach loop in vector
    

    // here we are going to discuss about some inbuilt vector function 
    // 1.size
    // 2.push_back
    // 3.pop_back
    // 4.front
    // 5.back
    // 6.at

    // cout<<endl<<"size of vector "<<vec.size()<<endl;
    // for push the value at the end of the vecotr push_back function is used
    // vec.push_back(9);
    // cout<<"the size of vector "<<vec.size()<<endl;

    // for(int val:vec){
    //     cout<<val<<" ";
    // }

    // for pop pop_back
    // vec.pop_back();
    // cout<<endl;
    // for(int val:vec){
    //     cout<<val<<" ";
    // }

    // get the value at particular index then use at
    // cout<<endl;
    // cout<<vec.at(2);

    vector <int> vec;

    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(3);

    cout<<"the size of vector "<<vec.size()<<endl;
    cout<<"the capacity of vector "<<vec.capacity()<<endl;
    
    return 0;
}
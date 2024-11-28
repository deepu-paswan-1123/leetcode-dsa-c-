#include<iostream>
using namespace std;

int changevalue(int* ptr){
    *ptr=30;
}

int main(){
    
    // what is pointers ?
    /*
        those variable which store the address of anoter variable is pointer
        it is decclared as like integer but after the dataypt estrisk is used then simply name as 
        variable.
        eg.below give an example of pointer variable;
    */
     
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    // here discussion about pointer to pointer
    /*
        a anothter pointer is possible which store the address of the anotehr pointer
        eg. only ** add after the data type which indicates it store the pointer address
    */

   int** ptr1=&ptr;
   cout<<ptr1<<endl;

    //now here we will discuss about the derefrencing of the variable it means
    //here how can we find the variable value through the pointer variable;

    int b=8;
    int* ptrb=&b;
    cout<<*(&b)<<endl;
    cout<<*(ptrb)<<endl;

    // in are previous code we have already seen the pass by value here we will discuss about 
    // the pass by refrence
    // here we are calling the changevalue() function
    int dp=9;
    changevalue(&dp);
    cout<<"the is the change value through pass by refrence "<<dp<<endl;

    /*
        here we are discuss about array pointer in actually are array is also a pointer 
        which points the 0th index of the array let verify it.
        this array pointers are constant through out the programme its value can not be changed 
        so this is called the constant pointer

    */

    int arr[]={1,2,3,4};
    cout<<*arr<<endl;
  
    /*
        here we will dscuss about the pointer arithmetic
        1.increment/decrement here bytes are add in the pointer eg. ptr++,ptr--

    */

    int dp1=6;
    int* ptr4=&dp1;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;

    /*
        in pointer the addition of pointer is not allowed but the subtranction of pointer is 
        allowed for eg. if there is one pointer ptr1 which store the one address and 
        ptr2 which store the anoter address then if we apply ptr2-ptr1 then 
        outcome is how many integers can stored between these pointers
    */
    int* ptr6;
    int* ptr5=ptr6+2;
    cout<<ptr5-ptr6<<endl;

    return 0;
}
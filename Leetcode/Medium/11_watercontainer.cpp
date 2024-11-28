/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
*/


#include<iostream>
#include<climits>
using namespace std;

/*
first we apply the bruete force approach
*/

int maxvolume(int height[],int size){
    int maxwater=0;
    for(int start=0;start<size;start++){
        for(int end=start+1;end<size;end++){
            int width=end-start;
            int heigh=min(height[start],height[end]);
            int area=width*heigh;
            maxwater=max(area,maxwater);
        }
    }
    cout<<maxwater<<endl;

}

int maxwatercontainer(int height[],int size){
    int maxwater=0;
    int lp=0;
    int rp=size-1;
    while (lp < rp){
       int ht= min(height[lp],height[rp]);
       int wt=rp-lp;
       int currentwater=ht*wt;
       maxwater=max(currentwater,maxwater);
       height[lp] > height[rp]?rp--:lp++;
    }
    cout<<maxwater<<endl;

}

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int size=sizeof(height)/sizeof(height[0]);
    // maxvolume(height,size);
    maxwatercontainer(height,size);
    return 0;
}
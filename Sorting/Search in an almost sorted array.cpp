#include <bits/stdc++.h>
using namespace std;
int a[]= {10, 3, 40, 20, 50, 80, 70};
int n=90;
int element=40;
void fun()
{
    int low=0;int high=n-1;int f=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==element || a[mid+1]==element || a[mid-1]==element) {f=1;break;}
        else if(a[mid]<element) {low=mid+2;}
        else {high=mid-2;}
    }
    if(f==0) cout<<"Not found";
    else cout<<"found";
}
int main() {
	// your code goes here
	fun();
	return 0;
}
//Time complexity-log(n)

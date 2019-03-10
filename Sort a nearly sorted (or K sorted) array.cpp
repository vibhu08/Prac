#include <bits/stdc++.h>
using namespace std;
int a[]={2, 3 ,6 ,8, 12, 56};
int n=6;
int k=3;
int fun()
{
    priority_queue<int,vector<int>,greater<int>> pq(a,a+k+1);
    int ind=0;
    for(int i=k+1;i<n;i++)
    {
        a[ind]=pq.top();
        pq.pop();
        pq.push(a[i]);
        ind++;
    }
    while(pq.empty()==0)
    {
        a[ind]=pq.top();
        pq.pop();
        ind++;
    }
}
int main() {
	// your code goes here
	fun();
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int a[10],i,sum=0,n,*ptr;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	ptr=a;
	for(i=0;i<n;i++)
	{
	    sum+=*(a+i);
	}
	cout<<sum<<sum/n;
	return 0;
}
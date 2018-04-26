#include <iostream>
using namespace std;

int check(int n)
{
    int sum=0;
    if(n)
    {
        sum =((n%10)*(n%10)*(n%10)) + check(n/10);
    }
    return sum;
}
int main() 
{
	int n,r;
	cin>>n;
	r=check(n);
	if(r==n)
	{
	    cout<<"arm";
	}
	else
	{
	    cout<<"not arm";
	}
	return 0;
}
#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fact(n-1)+fact(n-2));
    }
}
int main() {
	int res,n,i,c=0;
	cin>>n;

	for(i=0;i<n;i++)
	{
	    cout<<fact(c);
	    c++;
	}
	return 0;
}
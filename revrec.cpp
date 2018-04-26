#include <iostream>
using namespace std;

int rev(int n)
{
    int r,sum=0;
    if(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        rev(n/10);
    }
    else
    {
        return 0;
    }
    return sum;
        
    
}

int main() {
	int res,n;
	cin>>n;
	res=rev(n);
	cout<<res;
	return 0;
}
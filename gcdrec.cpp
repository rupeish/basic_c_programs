#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    if(a==b)
    {
        return a;
    }
    if(a>b)
    {
        return gcd(a-b,b);
    }
    if(a<b)
    {
        return gcd(a,b-a);
    }
}
int main() {
	int res,a,b;
	cin>>a>>b;
	res=gcd(a,b);
	cout<<res;
	return 0;
}
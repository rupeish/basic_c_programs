#include <iostream>
using namespace std;

int check(int a);
int main() {
	int a,r;
	cin>>a;
	r=check(a);
	cout<<r;
	return 0;
}

int check(int a)
{
    int r,n1,n2;
    r=a/5;
    n1=r*5;
    n2=(5-r)*5;
    if(abs(n1-a)>abs(n2-a))
    {
        return n2;
    }
    else
    {
        return n1;
    }
}
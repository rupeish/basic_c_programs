#include <iostream>
using namespace std;

void lar(int a,int b);
int main() {
	int a,b;
	cin>>a>>b;
	lar(a,b);
	return 0;
}

void lar(int a,int b)
{
    if(a>b)
    {
        cout<<"a is boss";
    }
    else
    {
        cout<<"b is boss";
    }
}
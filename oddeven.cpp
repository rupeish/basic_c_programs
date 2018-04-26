#include <iostream>
using namespace std;

void check(int a)
{
    int i;
    for(i=1;i<a;i++)
    {
        if(a%2==0)
        {
            cout<<"Its even";
            break;
        }
        else
        {
            cout<<"Its odd";
            break;
        }
    }
}

int main() {
	int a;
	cin>>a;
	check(a);
	return 0;
}
#include <iostream>
using namespace std;

void check(char c)
{
    if((c>='a' && c<='z') || (c>='A'&&c<='Z'))
    {
        cout<<"Its alpha";
    }
    else
    {
        cout<<"Its not";
    }
}
int main() {
	char c;
	cin>>c;
	check(c);
	return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

void copy(char *b, char *a);
int main() 
{
    char a[10],b[10];
    cin.getline(a,10);
    cin.getline(b,10);
    
    copy(b,a);
    
    cout<<b;
	return 0;
}

void copy(char *b, char *a)
{
    while(*a)
    {
        *b=*a;
        a++;
        b++;
        
    }
    *a='\0';
}
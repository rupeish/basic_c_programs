#include <iostream>
#include <string.h>
using namespace std;


int ispallin(char *str)
{
    int i,len;
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(*(str+i)!=*(str+len-i-1))
        {
            return 0;
        }
        
    }
    return 1;
}

int main() {
    char str[30];
    cin.getline(str,30);
    if(ispallin(str))
    {
        cout<<"its pallin";
    }
    else
    {
        cout<<"its not";
    }
	return 0;
}
#include <iostream>
using namespace std;

int perfect(int n,int x)
{
   
        if(x==1)
        {
            return 1;
        }
	    if(n%x==0)
	    {
	        return x+ perfect(n,x-1);
	    }else
	    {
	        return perfect(n,x-1);
	    }
	

}

int main() {
	int n,i,sum=0,r;
	cin>>n;
	r=perfect(n,n/2);
	if(r==n)
	{
	    cout<<"perfect";
	}
	else
	{
	    cout<<"NoT";
	}
	return 0;
}
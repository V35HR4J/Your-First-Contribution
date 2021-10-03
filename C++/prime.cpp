#include <iostream>
#include<math.h>
using namespace std;

int isprime(long long a)
{
    for(long long int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
	// your code goes here
	long long int n,m;
	cin>>n;
	long long a=2;
	m=0;
	while(n!=m)
	{
	    if(isprime(a)==1)
	    {
	       cout<<a<<endl;
	       m++;
	    }
	    a+=1;
	}
	return 0;
}


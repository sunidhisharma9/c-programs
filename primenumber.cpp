#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=1;

	
	if(n==2)
	{cout<<"PRIME NUMBER";
	return 0;
	}
	
  for(int i=2;i<=n/2;i++)
	{

	if(n%i==0)
	{flag=0;
	break;
	}
	else 
	flag=1;
	
	}
	
	if(flag==1)
	{cout<<"PRIME NUMBER";
	}
	else
	cout<<"COMPOSITE NUMBER";
}

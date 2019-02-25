#include<iostream>
using namespace std;
int main()
{ int a[10];
int n,m;
cout<<"enter n(size): ";
cin>>n;
cout<<"enter how many times to rotate: ";
cin>>m;
cout<<"enter array: ";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int j=0;j<m;j++)
  {int t=a[0];
for(int i=0;i<n-1;i++)
    a[i]=a[i+1];
   a[n-1]=t;
     }
   for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}

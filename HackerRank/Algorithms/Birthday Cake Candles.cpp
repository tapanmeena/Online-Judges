#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int size[n];
  int max=0,count=1;

  cin>>size[0];
  max=size[0];
  
  
  for(int i=1;i<n;i++)
    {
       cin>>size[i];

       if(size[i]==max)
	 {
	   count++;
	 }
       else if(size[i]>max)
	 {
	   count=1;
	   max=size[i];
	 }
       else
	 continue;
    }
  cout<<count;
}
#include<iostream>
using namespace std;

int main()
{
  int n,ld=0,rd=0;
  cin>>n;
  int m[n][n];
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
	{
	  cin>>m[i][j];
	  if(i==j)
	    {
	      ld=ld+m[i][j];
	    }
	  if((i+j)==(n-1))
	    {
	      rd=rd+m[i][j];
      }
	}
    }
  cout<<abs(ld-rd);
}
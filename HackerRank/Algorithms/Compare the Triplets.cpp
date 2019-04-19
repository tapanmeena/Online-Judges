#include <iostream>

using namespace std;

int main() 
 {
  int a[3];
  int b[3];
  int aa=0,bb=0;
  for(int i=0;i<6;i++)
      {
      if(i<3){
      cin>>a[i];
      }
      else
          cin>>b[i-3];
  }
  for(int i=0;i<3;i++)
    {
      if(a[i]>b[i])
        {
	  aa+=1;
	}
      else if(b[i]>a[i])
	{
	  bb+=1;
        }
      else
	continue;
    }
  cout<<aa<<" "<<bb;
  return 0;
}

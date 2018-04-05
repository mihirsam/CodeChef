#include<iostream>
#include<cassert>

using namespace std;

int t,c,d,l,yes;

int main()
{
  cin>>t;

  assert( (1<= t) && (t<= 100000));

  for(int q=1;q<=t;q++)
  {
    cin>>c>>d>>l;
    assert( (0<= c) && (c<= 1000000000));
    assert( (0<= d) && (d<= 1000000000));
    assert( (0<= l) && (l<= 1000000000));
    yes=0;

    if(l%4==0)
    {
      l = l/4;

      if(l>=d)
      {
	l-=d;
	if(l<=c)
	{
	  if( (c-l)<=(2*d))
	  {
	    cout<<"yes\n";
	    yes=1;
	  }
	}
      }
    }
    if(yes==0)
    {
      cout<<"no\n";
    }
  }
}

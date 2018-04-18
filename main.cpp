#include <iostream>
using namespace std;

void bigtosmall( int&, int&, int& );

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  bigtosmall( red, green, blue );


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}


void bigtosmall ( int& red, int& green, int& blue )
{
  int temp, first, second, third;
  if( red < green || red < blue )
  {
    if(blue > green)
    {
      temp = red;
      red = blue;
      blue = temp;
    }
    else
    {
      temp = red;
      red = green;
      green = temp;
    }

  }
  if( green < blue )
  {
    temp = green;
    green = blue;
    blue = temp;
  }

}

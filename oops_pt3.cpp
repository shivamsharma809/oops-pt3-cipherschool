#include<iostream>
using namespace std;

class coordinate
{
  public:

  float a;
  float b;

  public:

  coordinate operator+(coordinate const & obj)
  {
    coordinate z;

    z.a = this->a + obj.a;
    z.b = this->b + obj.b;

    return z;
  }

  void sqdistancefromcoordinate(float a)
  {
    float dist;

    dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);

    cout<<dist;
  }

  void sqdistancefromcoordinate(float a, float b)
  {
    float dist;

    dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);

    cout<<dist;
  }

void sqdistancefromcoordinate(float a, float b, float c)
  {
    float dist;

    dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);

    cout<<dist;

    cout<<"    The thord function is used";
  }

};


int main()
{
  coordinate x;

  x.a = 3;
  x.b = 4;

  coordinate y;

  y.a = 5;
  y.b = 6;

  coordinate z;

  z = x+y;

  cout<<"The coordinate after addition are "<<z.a<<" "<<z.b;


  return 0;
    
}
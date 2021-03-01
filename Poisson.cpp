#include <iostream>
#include<stdlib.h>
#include <random>


using namespace std;

//poisson distibution from c++ library

static std::random_device rd;
static std::mt19937 gen(rd());


int main()
{
  std::poisson_distribution<int> pd(5);
  int b=0, p, q=0, r,  l;
  cout<<"    Customer    interarriaval time    Arrival time on clock \n";
  for (p=1;p<=20;p++){
    cout<<"\t"<<p<<"\t\t"<<b<<"\t\t"<<q<<"\t\t\n";
    b=pd(gen);
    q=b+q;
  }

}



#include "smp_lib.h"


int sum(int x ,int y)
{
    int s = 0;
    s= x + y;
    return s;
}
int init()
{
    int x;
  std ::  cout<< "Enter the value\n" ;
std:: cin>>	"%d",&x ;
    return x;
}
void pt(int w)
{
    printf("the value is : %d\n",w);
}

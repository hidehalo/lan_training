#include<stdio.h>
int f(int x ,int y,int n)
{
  int i=0,tx=0,ty=y;
  n*=2;
  while(n-->0)
  switch(++i%12)
  {
    case 0:x*=2,y*=2;break;
    case 1:y-=x;break;
    case 2:break;
    case 3:y-=x;break;
    case 4:y*=2;break;
    case 5:y-=x;break;
    case 6:tx=x;x*=2;break;
    case 7:y-=x;break;
    case 8:y*=2;break;
    case 9:y-=x;
    case 10:;break;
    case 11:y-=x;break;
    defaults:break;
  }
  printf("x:%d,y:%d\n",x,y);
  return 0;
}
int main()
{
 f(10,89,60);
 f(10,90,60);
 return 0;
}

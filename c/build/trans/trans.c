#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
  int i=0,j=0,k,base,interger;
  double n,dot;
  int intbuf[32];
  int dotbuf[16];
/*
  while(--argc)
    printf("%s%c",*++argv,argc>1?' ':'\0');
  printf("\n");
*/
  printf("输入十进制数字:");
  scanf("%lf",&n);
  base=2;
  interger=(int)n;
  dot=n-interger;

  printf("输入的十进制数字为%f,转换为%d进制数\n",n,base);
  printf("整数的计算步骤:\n");
  do{
    i++;
    intbuf[i]=interger%base;
    printf("#%d--> %d/%d=%d...%d\n",i,interger,base,interger/base,intbuf[i]);
    interger/=base;
  }while(interger&&i<32);

  if(dot)
  {
    printf("小数的计算步骤:\n");
    do{
     j++;
     dotbuf[j]=(int)dot*base;
     printf("#%d--> %f*%d=%f 整数部分为:%d\n",j,dot,base,dot*base,dotbuf[j]);
     dot=dot*base-dotbuf[j];
    }while(dot&&j<16);
  }

  printf("结果为: ");
  do
  {
    printf("%d",intbuf[i]);
  }while(--i);
  if(j)
  {
    printf(".");
    for(k=1;k<j;k++)
      printf("%d",dotbuf[k]);
  }
  printf("\nknock return to end pro");
  setbuf(stdin,NULL);
  getchar();
  return 0;
}

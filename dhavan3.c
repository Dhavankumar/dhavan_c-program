include <stdio.h>
int main(void)
{
  printf("Enter the value of pricipal,time and rate\n");
  float p,t,r,si;
  scanf("%f%f%f",&p,&t,&r);
  si=(p*t*r)/100;
  printf("The simple interest is %f",si);
  return 0;
}
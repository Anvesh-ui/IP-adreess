#include<stdio.h>
void main()
{
int i,ip;
char subs[5],str[25];
printf("Enter the ip address");
scanf("%s",str);
for(i=0;i<=2;i++)
{
subs [i]= str[i];
}
printf(subs);
ip=atoi(subs);
if((ip<0)&&(ip<128))
printf("Given ip address is %s belongs to class A",str);
if((ip<127)&&(ip<192))
printf(" Given ip address is %s belongs to class B",str);
if((ip<191)&&(ip<224))
printf(" Given ip address is %s belongs to class C",str);
if((ip<223)&&(ip<240))
printf("Given ip address is %s belongs to class D",str);
if((ip>239))
printf(" Given ip address is %s belongs to class E",str);
}

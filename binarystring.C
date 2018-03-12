#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char t[5];
printf("Enter the no:\n");
scanf("%s",t);
for(i=0;i<t;i++)
{
scanf("%d",&t[i]);
}
if((t[i]=='0')&&(t[i]=='1'))
printf("YES\n");
else
printf("NO\n");
getch();
}

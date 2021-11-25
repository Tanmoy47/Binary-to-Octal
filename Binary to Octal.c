#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void main()
{
    int i=O,j=O ,x=O,n,flag=O; void *p,*add[15];
     char  ch,srch,b[15],d[15],g[10],c;
     clrscr();
printf("Expression terminated by $:");
while((c=getchar())!='$')
{
    b[i]=c;i++;
}
n=i-1;
printf("Given expression:::");
i=O;
while(i<=n)
{
printf("%c",b[i]); i++;
}
printf("\n .....symbol table....\n");
printf("symbol\taddr\ttype\n ");
while(j<=n)
{
c=b(j];
if(isalpha(toascii(c)))
{
if(j<=n)
{
    p=malloc(c); add[x]=p;
    d[x]=c;
    printf("%c\t%d\tidentifier\n",c,p); goto b;
}

else
{
b:
ch=b[j+l];
if(ch='+'llch=='-'llch=='*'llch=='='llch=='/')
{
    p=malloc(c);
    add[x]=p;
g[x]=ch;
printf("%c\t%p\t Operator\n",g[x],p);
x++;
}
}


}j++;

}
printf("the symbol is to be searched\n");
scanf("%s",&srch);

for(i=O;i<=x;i++)
{
if(srch==d[i] llsrch=g[i])
{
printf("symbol found...");
printf("  %c%s%p\n",srch,"@address",d[i]);
flag=l;
}
}
if(flag==0)
    printf("Symble not found\n");
}

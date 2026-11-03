#include <stdio.h>
int main()
{
  int a,b,result;
char operator;
printf("enter the a,b:");
scanf("%d %d",&a,&b);
printf("enter the operator(+,-,*,/):");
scanf(" %c",&operator);
if (operator == '+'){
result = a+b;
printf("result=%d\n",result);}
else if(operator == '-'){
result = a-b;
printf("result=%d\n",result);}
else if(operator == '*'){
result = a*b;
printf("result=%d\n",result);}
else if(operator == '/'){
  if (b !=0){
result = a/b;
printf("result=%d\n",result);}
else {
printf("error");}
}else{
printf("invalid operator");}
return 0;
}

#include<stdio.h>
int main(){
int var1,var2,var3;
printf("Enter three Numbers \n");
scanf("%d%d%d",&var1,&var2,&var3);
if(var1>var2)
{
    if(var1>var3)
    {
        printf("%d is largerst",var1);
    }
    
    else{
        printf("%d is largerst",var3);
}
}
else
{
    if(var2>var3)
    {
        printf("%d is largerst",var2);
    }
    
    else{
        printf("%d is largerst",var3);
}
}
return 0;
}

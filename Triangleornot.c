#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Yes you can give vote");
    }
    else if(age>=10)
    {
        printf("you should wait for few years");
    }
    else
    {
        printf("no you cant vote");
    }
    
    
}

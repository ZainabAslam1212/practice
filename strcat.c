#include<stdio.h>
#define SIZE 100

char* strcat(char *s1,const char *s2)
{
    int i,j;
    i = 0;
    while(1)
    {
        if(s1[i] == '\0')
        {
            break;
        }
        i++;
    }
    for(j=0;(s1[i]=s2[j])!='\0';j++,i++);
    return s1;
}
int main()
{
    char str1[SIZE],str2[SIZE];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);
    printf("Combined string is %s",strcat(str1,str2));
    return 0;
}

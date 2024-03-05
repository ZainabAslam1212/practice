#include<stdio.h>

int strcmp(const char *s1,const char *s2)
{
    int i;
    for(i = 0;s1[i] != '\0';i++)
    {
        if(s1[i]>s2[i])
            return 1;
        if(s1[i]<s2[i])
            return -1;
    }
    return 0;

}
int main()
{
    char str1[100] = {"Happy New Year"};
    char str2[100] = {"Happy New Year"};
    char str3[100] = {"Happy Holidays"};
    printf("s1 with s2 = %d\n",strcmp(str1,str2));
    printf("s1 with s3 = %d\n",strcmp(str1,str3));
    printf("s3 with s1 = %d\n",strcmp(str3,str1));
    return 0;
}

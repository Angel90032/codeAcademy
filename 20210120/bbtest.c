#include <stdio.h>
#include <string.h>
void itoa(int n, char s[]);
int main()
{   
    int someInt;
    char s[1000];
    printf("Enter your number:\n");
    scanf("%i",&someInt);
    itoa(someInt,s);
    printf("%s\n", s);
    return 0;
}
void itoa(int n, char s[])
{
    char str[1000];
    int cnt = 0;
    do
    {
        char ch = (char)(n%10) + '0';
        n /= 10;
        str[cnt] = ch;
        cnt++;
    }
    while(n != 0);
    //reverse the string 
    int i = 0;
    for(cnt = cnt - 1; cnt >= 0; cnt--)
    {
        s[i] = str[cnt];
        i++;
    }
    s[i+1] = '\0';
    printf("str is %s  str_out is %s \n",str, s);
}
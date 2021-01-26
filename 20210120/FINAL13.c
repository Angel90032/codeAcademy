#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
int get_reversed(int n, char buf[]);

int main(){
    char s[1000];
    itoa(1234,s);
    printf("%s\n", s);
    return 0;
}
void itoa(int n, char s[]){
    int i = 0;
    // if n < 0 add - to the final string
    if(n < 0){
        // add '-' as first element of the return string and offset the counter
        s[i] = '-';
        i++;
        n = abs(n);
    }
    char buf[11]; // 10 digits and the - sign
    int cnt = get_reversed(n, buf);
    //reverse the string in str_out
    for(cnt; cnt >= 0; cnt--){
        s[i] = buf[cnt];
        i++;
    }
    // Add '/0' to terminate the string
    s[i+1] = '\0';
}
int get_reversed(int n, char buf[]){
    // get reversed number as string
    int cnt = 0;   
    do{
        char ch = n % 10;
        n /= 10;
        buf[cnt] = ch + '0';
        cnt++;
    }
    while(n != 0);
    return cnt - 1; // return the number of charecters
}
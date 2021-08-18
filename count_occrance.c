#include <stdio.h>
#include<string.h>
int main() {
    char str[1000], ch;
    int count = 0;
    char *ptr;
    printf("\n enter string:");
    fgets(str,sizeof(str),stdin);
    printf("\n enter char:");
    ch=getchar();
    for(ptr=str;*ptr!='\0';ptr++)
    {
        if(*ptr==ch)
        count++;
    }

    printf("count=%d",count);
}

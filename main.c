
#include <stdio.h>
#include "sub1.c"
#include "sub2.c"
int main()
{
    char choice;
    choice = menu();
    int c[4],j[4],d[4],e[4];
    printf("%d",c[2]);
    while(1)
    {
        switch(choice)
        {
            case 'a':
                person();
                break;
            case 'b':
                score(&c[0],&c[1],&c[2],&c[3],&j[0],&j[1],&j[2],&j[3],&d[0],&d[1],&d[2],&d[3],&e[0],&e[1],&e[2],&e[3]);
                break;
            case 'c':
                sort(&c[0],&c[1],&c[2],&c[3],&j[0],&j[1],&j[2],&j[3],&d[0],&d[1],&d[2],&d[3],&e[0],&e[1],&e[2],&e[3]);
                break;
            case 'd':
                break;
            case 'e':return 0;
        }
        
        choice=menu();
        scanf("%c",&choice);
    }
    return 0;
}


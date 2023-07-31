#include<stdio.h>
#include<stdlib.h>

void    square_maker(char *px, char *py, char *c)
{
    int i = 0;
    int j = 0;
    int x = atoi(px);
    int y = atoi(py);

    while(i != y)
    {
        j = 0;
        while(j != x)
        {
            printf("%s", c);
            j++;
        }
        printf("\n");
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("\n");
        return(0);
    }
    square_maker(argv[1], argv[2], argv[3]);
}
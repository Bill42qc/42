#include <unistd.h>

void print_tab ()
{
int i, j;
i=0;
j=0;

while (tab[i])
{
    write(1,&tab[i],1);
    i++;
}
}

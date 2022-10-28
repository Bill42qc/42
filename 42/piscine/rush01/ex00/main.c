#include <unistd.h>
#include <stdlib.h>

void    print_when_four_up(char **tab);
void    print_when_four_down(char **tab);
void    print_when_four_right(char **tab);
void    print_when_four_left(char **tab);
void    print_tab(char **tab);


int main (int argc, char *argv[])
{

//on initialise les variables necessaire

char col1up, col2up, col3up, col4up;
char row1left,row2left, row3left, row4left;
char row1right, row2right, row3right, row4right;
char col1down, col2down, col3down, col4down; 
col1up = argv[1][0];
col2up = argv[1][2];
col3up = argv[1][4];
col4up = argv[1][6];
col1down = argv[1][8];
col2down = argv[1][10];
col3down = argv[1][12];
col4down = argv[1][14];
row1left = argv[1][16];
row2left = argv[1][18];
row3left = argv[1][20];
row4left = argv[1][22];
row1right = argv[1][24];
row2right = argv[1][26];
row3right = argv[1][28];
row4right = argv[1][30];

//on declare un array 2 dimension pour creer le tableau

   char tab[6][6] = 
   {
    {'0',col1up,col2up,col3up,col4up,'0'},
    {row1left,'0','0','0','0',row1right},
    {row2left,'0','0','0','0',row2right},
    {row3left,'0','0','0','0',row3right},
    {row4left,'0','0','0','0',row4right},
    {'0',col1down,col2down,col3down,col4down,'0'}
   };


    print_when_four_up(*tab);
    print_when_four_down(*tab);
    print_when_four_right(*tab);
    print_when_four_left(*tab);
    print_tab(*tab);

    return (0);

}

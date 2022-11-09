#include <unistd.h>

void	 print_when_four_up(char tab[6][6])
{
    int	i;
	int	j;

    i = 0;
    j = 1; 

    while (j < 5)
    {
        i = 0;
        {
            if (tab[0][j] == '4')
            {
                tab[i + 4][j] = '4';
                tab[i + 3][j] = '3';
                tab[i + 2][j] = '2';
                tab[i + 1][j] = '1';
            }
        }
        j++;
    }
}

void print_when_four_down(char tab[6][6])
{
    int i = 5;
    int j = 0; 
    while (j < 5)
	{
        if (tab[5][j] == '4')
        {
            tab[i - 1][j] = '1';
            tab[i - 2][j] = '2';
            tab[i - 3][j] = '3';
            tab[i - 4][j] = '4';
        }
        j++;
    }
}
void print_when_four_right(char tab[6][6])
{
    int i = 0;    
   	int j = 5; 
    while (i < 5)
	{
        if (tab[5][i] == '4')
        {
            tab[i][j - 1] = '1';
            tab[i][j - 2] = '2';
            tab[i][j - 3] = '3';
            tab[i][j - 4] = '4';
        }
        i++;
    }
}

void print_when_four_left(char tab[6][6])
{
    int i = 1; 
	int j = 0; 
    while (i < 5)
	{
        j = 0;
        if (tab[i][0] == '4')
        {
            tab[i][j + 4] = '4';
            tab[i][j + 3] = '3';
            tab[i][j + 2] = '2';
            tab[i][j + 1] = '1';
        }
        i++;
    }
}

void print_tab(char tab[6][6])
{
    int i = 0;   
   	int j = 0; 
    while (i < 6)
	{
        j = 0;
        while (j < 6)
		{
            write(1, &tab[i][j], 1);
            write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

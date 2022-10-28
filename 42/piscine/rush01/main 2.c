#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        write(1, "Error", 5);
        return(1);
    }
    
    int k;
    k =0;
    if (*argv[k] > '4' || *argv[k] < '1')
     {
        write(1, "Error", 5);
        return(1);
        k++;
    }



            // on initialise les variables necessaire

            char col1up,
            col2up, col3up, col4up;
    char row1left, row2left, row3left, row4left;
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

    // on declare un array 2 dimension pour creer le tableau
    int z;
    int y;
    char tab[6][6] =
        {
            {'0', col1up, col2up, col3up, col4up, '0'},
            {row1left, '0', '0', '0', '0', row1right},
            {row2left, '0', '0', '0', '0', row2right},
            {row3left, '0', '0', '0', '0', row3right},
            {row4left, '0', '0', '0', '0', row4right},
            {'0', col1down, col2down, col3down, col4down, '0'}};

    // colup  si on a un quatre on place les 1,2,3,4 a linterieur
    int i, j;

    i = 0; // i commence a 1 et fini a 5 si on ne veut pas les valeurs variable row
    j = 1; // idem au commentaire ci haut mais pour row

    while (j < 5) // i <5 pour ne pas avoir la derniere valeur de row
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
            else if (tab[0][j] == '1')
            {
                tab[i + 4][j] = '4';
            }
        }
        j++;
    }

    //   coldown
    i = 5; // i commence a 1 et fini a 5 si on ne veut pas les valeurs variable row
    j = 0; // idem au commentaire ci haut mais pour row

    while (j < 5) // i <5 pour ne pas avoir la derniere valeur de row
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

    // ********************Bug a corriger***********8
    //   row right
    i = 0; // i commence a 1 et fini a 5 si on ne veut pas les valeurs variable row
    j = 5; // idem au commentaire ci haut mais pour row

    while (i < 5) // i <5 pour ne pas avoir la derniere valeur de row
    {

        if (tab[i][5] == '4')
        {
            tab[i][j - 1] = '1';
            tab[i][j - 2] = '2';
            tab[i][j - 3] = '3';
            tab[i][j - 4] = '4';
        }

        i++;
    }

    //******************r**************

    // rowleft si on a un quatre on place les 1,2,3,4 a linterieur

    i = 1; // i commence a 1 et fini a 5 si on ne veut pas les valeurs variable row
    j = 0; // idem au commentaire ci haut mais pour row

    while (i < 5) // i <5 pour ne pas avoir la derniere valeur de row
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

    // on imprime le tableau avec les valeurs

    i = 0; // i commence a 1 et fini a 5 si on ne veut pas les valeurs variable row
    j = 0; // idem au commentaire ci haut mais pour row

    while (i < 6) // i <5 pour ne pas avoir la derniere valeur de row
    {
        j = 0;
        while (j < 6) // i <5 poiur ne pas avoir la derniere valeur de col
        {
            write(1, &tab[i][j], 1);

            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

#include <unistd.h>

int main (int ac, char **av)
{
	int repeat;
	int i;
	i = 0;
	repeat =0;
	

	if (ac ==2)
		{
			while (av[1][i])
			{
				if ( av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					repeat = av[1][i] - 64;

						while(repeat > 0)
						{
						 write(1, &av[1][i], 1);
							write(1, 'p' , 1);
							repeat--;
						}
				}
				i++;
			}
		}
	else if (ac != 2)
	{
	write(1,"\n",1);
	}
}

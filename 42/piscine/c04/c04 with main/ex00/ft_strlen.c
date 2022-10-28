
int ft_strlen(char *str)
{
    int i;;
    i =0;
    while (str[i])
        i++;

    return (i);
}

int main()
{
    printf("%s",ft_strlen("patate"));
}
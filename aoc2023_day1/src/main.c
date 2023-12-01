#include "../day1.h"

int takenums(char *str)
{
    int toret;
    int i = 0;
    int checker = 0;
    int curnum = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 48 && str[i] <= 57 && checker == 0)
        {
            toret = str[i] - 48;
            checker = 1;
        }
        else if(str[i] >= 48 && str[i] <= 57 && checker == 1)
        {
            curnum = str[i] - 48;
        }
        i++;
    }
    if(curnum > 0)
    {
        toret = toret * 10;
        toret = toret + curnum;
        return (toret);
    }
    return (toret * 11);
}

int main()
{
    int fd = open("message.txt", O_RDONLY);
    char *string;
    int num;
    int sum = 0;

    while(string = get_next_line(fd))
    {
        num = takenums(string);
        sum = sum + num;
        printf("%d \n", num);
    }
    printf("Resultado: %d", sum);
}

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    while(x!= 11)
    {
        x++;
        if(x == 10)
        {
            x = 0;
            y++;
        }
    }
    return 0;
}
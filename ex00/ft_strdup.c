#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    int i;
    int len; 
    char *dest;

    i = 0;
    len = 0;


    if(src[len] != '\0')
    {
        len++;
    }

    dest = (char *)malloc(sizeof(char) * (len + 1));

    if(dest == NULL)
    {
        return (NULL);
    }

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "Omer";

    printf("%s", ft_strdup(src));
}
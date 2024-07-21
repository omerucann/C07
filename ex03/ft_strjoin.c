#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    int total_length = 0;
    int sep_length = strlen(sep);
    char *s;
    int i, j, c;


       i = 0;
    while (i < size)
    {
        total_length += strlen(strs[i]);
        i++;
    }


    total_length += sep_length * (size - 1);

    // Bellek tahsisi yap
    s = malloc(sizeof(char) * (total_length + 1));  // +1 for the null terminator
    if (s == NULL)
        return (NULL);  // Bellek tahsisi başarısızsa NULL döndür

    // Dizeleri ve ayırıcıyı kopyala
    i = 0;
    c = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            s[c++] = strs[i][j++];
        }
        j = 0;
        while (sep[j] != '\0' && i != size - 1)
        {
            s[c++] = sep[j++];
        }
        i++;
    }
    s[c] = '\0';  // Sonlandırıcı karakteri ekle

    return (s);
}

int main(void)
{
    char *tab[4];
    tab[0] = "Hello";
    tab[1] = "World";
    tab[2] = "from";
    tab[3] = "C";

    char *result = ft_strjoin(4, tab, " ");
    printf("%s\n", result);

    free(result);  // Tahsis edilen belleği serbest bırak
    return 0;
}

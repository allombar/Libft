#include "./includes/libft.h"
#include <ctype.h>

int     main(void)
{
    /*printf("Test isprintable\n\n");
    for (int i = 0; i <= 127; i++)
    {
        printf("My print: %d, Us print: %d, index: %d\n", ft_isprint(i), isprint(i), i);
    }
    printf("\nTest isascii\n\n");
    for (int i = 0; i <= 127; i++)
    {
        printf("My ascii: %d, Us ascii: %d, index: %d\n", ft_isascii(i), isascii(i), i);
    }*/
    printf("\nMes fonctions\n\n");
    printf("ft_strlen: %zu\n", ft_strlen("Bryan is on the kitchen"));
    printf("Is alpha ? %d\n", ft_isalpha('1'));
    printf("Is alnum ? %d\n", ft_isalnum('A'));
    printf("Is alnum ? %d\n", ft_isalnum('a'));
    printf("Is alnum ? %d\n", ft_isalnum('2'));
    printf("Upper: %c\n", ft_toupper(97));
    printf("Lower: %c\n", ft_tolower('A'));
    printf("Atoi: %d\n", atoi("-92233720368547758070000"));
    printf("ft_Atoi: %d\n", ft_atoi("-92233720368547758070000"));
    printf("\nLeurs fonctions\n\n");
    printf("ft_strlen: %zu\n", strlen("Bryan is on the kitchen"));
    printf("Is alpha ? %d\n", isalpha('1'));
    printf("Is alnum ? %d\n", isalnum('A'));
    printf("Is alnum ? %d\n", isalnum('a'));
    printf("Is alnum ? %d\n", isalnum('2'));
    printf("Upper: %c\n", toupper(97));
    printf("Lower: %c\n", tolower('A'));
    char str[] = "Salutwwwwwwwwwwwwww";
    ft_bzero(str, 5);
    printf("test: %s\n", str);
    printf("%d\n", ft_strncmp(NULL, "Papa", 1));
    //printf("%d\n", strncmp(NULL, "Papa", 1));
    char s1[] = "Test";
    char s2[] = "TLst";
    printf("%d\n", ft_memcmp(s1, s2, 2));
    return (0);
}
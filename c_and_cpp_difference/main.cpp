#include <stdio.h>
 
int main()
{
    printf("%s\n", (sizeof('a') == sizeof(char)) ? "C++" : "C");
    main();

    int *a;
    char *b;
    b = a;

    return 0;
}

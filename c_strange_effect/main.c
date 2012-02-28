#include <stdio.h>

const void * memcpy(const void * destination, const void * source, size_t num)
{
    return "zzz";
}

int main()
{
    printf("%s\n", (const char*)memcpy("foo", "bar", 0));
    printf("%s\n", (const char*)memcpy("foo", "bar", 1));
    return 0;
}

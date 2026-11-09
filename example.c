#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30] = "happy C programming";

    printf("String: %s\n", str);
    printf("Length: %zu\n", strlen(str));

    return 0;
}
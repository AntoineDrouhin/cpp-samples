
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i)
    {
        printf("element %d is %d\n", i, a[i]);
    }

    puts("\n");

    char s[] = "string";

    for (char *cp = s; *cp; ++cp) // 0 is always false
    {
        printf("element %c\n", *cp);
    }

    puts("\n");

    int b[] = {1, 2, 3, 4, 5};

    for (int i : b) // Only in C++11
    {
        printf("element is %d\n", i);
    }

    puts("\n");

    char ca[] = "string";

    for (char ic : ca) // Only in C++11
    {
        if (ic == 0) break;
        printf("element is %c\n", ic);
    }

    return 0;
}
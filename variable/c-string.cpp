
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
    char s[] = "string";
    printf("String is : %s\n", s);

    for (int i = 0; i < 6; i++)
    {
        printf("s[%d] is %c\n", i, s[i]);
    }

    printf("\n");

    for (char *cp = s; *cp != 0; ++cp)
    {
        printf("char is %c\n", *cp);
    }

    printf("\n");

    for (char c : s)
    {
        if (c == 0)
            break;
        printf("char is %c\n", c);
    }

    return 0;
}
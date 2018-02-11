
#include <cstdio>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int i = 0;

    while (i < 5)
    {
        printf("element %d is %d\n", i, a[i]);
        ++i;
    }

    puts("\n");

    i = 0;
    while (++i < 5)
    {
        printf("element %d is %d\n", i, a[i]);
    }

    puts("\n");
    i = 0;

    do
    {
        printf("element %d is %d\n", i, a[i]);
    } while (++i < 5);

    return 0;
}
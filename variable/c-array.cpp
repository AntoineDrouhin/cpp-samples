// c-array and c-string are fundamental types in C++
// They are very different from their corresponding stl classes.

#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{

    int ia[5];

    for (int i = 0; i < 5; i++)
    {
        ia[i] = i + 1;
        printf("ia[%d] = %d\n", i, ia[i]);
    }

    printf("\n");

    int ia2[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("ia2[%d] = %d\n", i, ia2[i]);
    }

    printf("\n");

    int ia3[5];
    int *ip3 = ia3;

    for (int i = 0; i < 5; i++){
        *(ip3 + i)  = i + 1;
        printf("ia3[%d] = %d\n", i, *(ia3 + i));
    }

    printf("\n");

    int ia4[5] = {1,2,3,4,5};

    for (int * ip4 = ia4; *ip4 != 5; ip4++)
    {
        printf("ia4[%d] %d\n",*ip4-1, *ip4);
    }


}
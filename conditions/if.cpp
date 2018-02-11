
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{

    int x = 43;
    int y = 7;

    printf("x = %d\ny = %d\n\n", x, y);
    if (x < y)
    {
        puts("x < y\n");
    }
    else if (x == y)
    {
        puts("x == y\n");
    }
    else
    {
        puts("x > y\n");
    }
    
    printf("The greater is: %c\n", x > y ? 'x' : 'y');
}

#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;

    int x = 34;

    puts("Enter an integer x :");
    scanf("%d", &x);

    switch (x)
    {
    case iONE:
        puts("one");
        break;
    case iTWO:
    case 20:
        puts("two or twenty");
        break;
    case iTHREE:
        puts("three");
        break;
    case iFOUR:
        puts("four");
        break;
    default:
        puts("default");
        break;
    }

    return 0;
}
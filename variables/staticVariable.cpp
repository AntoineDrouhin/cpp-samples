
#include <cstdio>
using namespace std;


void func()
{
    static int i = 5;
    printf("i is %d\n", i);
    i = 42;
    printf("i is %d\n", i);
}

int main(int argc, char ** argv){
    func();
    func();
    return 0;
}
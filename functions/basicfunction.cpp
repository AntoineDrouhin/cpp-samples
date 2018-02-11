
#include <cstdio>
using namespace std;

void func(int);
void addrfunc(int*);
int refFunc(const int & );

int main(int argc, char **argv)
{
    puts("This is main()");
    int i = 1;

    printf("i = %d\n", i);
    
    func(10);

    printf("i = %d\n", i);
    
    addrfunc(&i);
    
    printf("i = %d\n", i);
    
    int j = refFunc(i);

    printf("i = %d\n", i);
    printf("j = %d\n", j);

    return 0;
}


void func(int i)
{
    printf("This is func(), called with parameters %d\n", i);
    i++;
}


void addrfunc(int * i) {
    *i += 1;
}


int refFunc(const int & i) { // using this kind of references is faster when passing long object. This avoid to do a full copy of the variable
    return i + 1;
}
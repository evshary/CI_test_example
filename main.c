#include <stdio.h>

void func()
{
    printf("Now is at %s\n", __func__);
}

void unused_func()
{
    printf("This unused function is created intentionally.");
}

int main()
{
    printf("Hello World\n");
    func();
    return 0;
}

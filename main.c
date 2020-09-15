#include <stdio.h>

int func1()
{
    printf("Now is at %s\n", __func__);
}

int main()
{
    printf("Hello World\n");
    func();
    return 0;
}

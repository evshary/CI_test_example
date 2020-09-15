#include <stdio.h>

int func()
{
    printf("Now is at %s\n", __func__);
}

int main()
{
    printf("Hello World\n");
    func();
    return 0;
}

#include <stdio.h>

int main()
{
    typedef struct
    {
        char name;
        int burst;
        int wait;
    } Process;

    Process p[] = {{'A', 24, 0}, {'B', 3, 24}, {'C', 3, 27}};

    int n = 3;
    int time = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        p[i].wait = time;
        time += p[i].burst;
        total += p[i].wait;
        printf("%c waits %2d, finishes at %2d\n", p[i].name, p[i].wait, time);
    }
    printf("Average wait: %.2f\n", (double)total / n);
    return 0;
}
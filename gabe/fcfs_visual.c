#include <stdio.h>

int main()
{
    int burst[] = {24, 3, 3};
    int n = 3;
    int time = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        printf("P%d waits %2d, runs %2d -> %2d\n", i + 1, time, time, time + burst[i]);
        total += time;
        time += burst[i];
    }
    printf("Average wait: %.2f\n", (double)total / n);
    return 0;
}
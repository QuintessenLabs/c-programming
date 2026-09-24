// to convert seconds to minutes and seconds

#include <stdio.h>
int main() {
    int totalseconds = 0, minutes = 0, seconds = 0;
    printf("Enter total seconds: ");
    scanf("%d", &totalseconds);
    minutes = totalseconds / 60;
    seconds = totalseconds % 60;
    if (minutes == 1) {
        printf("Time in minutes: %d minute, %d seconds\n", minutes, seconds);
    } else if (minutes == 0) {
        printf("Time: %d seconds\n", seconds);
    } else {
        printf("Time in minutes: %d minutes, %d seconds\n", minutes, seconds);
    }   

    return 0;
}
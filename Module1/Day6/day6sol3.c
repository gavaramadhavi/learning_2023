#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int diffSeconds = endSeconds - startSeconds;
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;
    
    return difference;
}

int main() {
    struct Time startTime, endTime, difference;
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);
    printf("\nDifference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}


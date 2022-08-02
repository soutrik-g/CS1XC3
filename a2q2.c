#include <stdio.h>
#include <stdbool.h>

int main() {
    int laps;
    float distance;
    float speed;
    float time;
    float total_time;
    float total_speed;
    float average_speed;
    do {
        printf("Enter the number of laps\n");
        scanf("%d", &laps);
        if (laps > 1) {
            break;
        }
        else {
            printf("The value of number of laps must be positive and non zero\n");
        }
    }
    while (true);
    do{
        printf("Enter the distance of the laps\n");
        scanf("%f", &distance);
        if(distance > 1){
            break;
        }
        else{
            printf("The value of distance must be positive and non zero\n");
        }
    }
    while (true);
     float total_distance = distance*laps;
    printf("%-10s%-20s%-20s%-20s\n", "# of Laps", "Distance", "Speed", "Time");
    printf("***********************************************************\n");
    for (int i = 0; i < laps; i++ ){
        printf("Enter the speed of the lap during lap %-10d:\n",i+1);
        scanf ("%f", &speed);
        time = distance/speed;
        printf("%-10d%-20f%-20f%-20.2f\n", laps, distance, speed, time);
        total_speed+=speed;
        total_time+= time;
    }
    average_speed = total_speed/total_time;
    printf("%-10s%-20f%-20f%-20.2f\n", "Total", distance, average_speed, total_time);
    return 0;
}

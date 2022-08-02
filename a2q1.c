#include <stdio.h>
#define NUMS 3
int main() {
    int high_value;
    int low_value;
    printf(">-----------------Temperature Analyzer -------------------<\n");
    for (int i = 0; i < NUMS; i++) {

        do {
            printf("Enter the high value for day %d :\n", i + 1);
            scanf("%d", &high_value);
            printf("Enter the low value for day %d :\n", i + 1);
            scanf("%d", &low_value);

            if (high_value < 40 && low_value > -40 && high_value > low_value) {
                break;
            }
            else {
                printf ("Incorrect values, temperatures must be in the range -40 to\n"
                        "40, high must be greater than low.\n");
            }

        }
        while(1);
    }
    return 0;
    }

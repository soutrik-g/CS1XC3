#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[1024];
    int checker[26] = {};
    int max;
    int min;
    double percentage_of_occurrences[26] = {};
    printf("Enter text for analysis:");
    fgets(buffer, 1024, stdin);
    printf("Letter Analysis Complete!\n");
    /*The below statements check every character of the text entered and adds 1 to the counter that corresponds to that
    character in the checker array for every time it occurs within the text*/
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == 'a' || buffer[i] == 'A') {
            checker[0] += 1;
        } else if (buffer[i] == 'b' || buffer[i] == 'B') {
            checker[1] += 1;
        } else if (buffer[i] == 'c' || buffer[i] == 'C') {
            checker[2] += 1;
        } else if (buffer[i] == 'd' || buffer[i] == 'D') {
            checker[3] += 1;
        } else if (buffer[i] == 'e' || buffer[i] == 'E') {
            checker[4] += 1;
        } else if (buffer[i] == 'f' || buffer[i] == 'F') {
            checker[5] += 1;
        } else if (buffer[i] == 'g' || buffer[i] == 'G') {
            checker[6] += 1;
        } else if (buffer[i] == 'h' || buffer[i] == 'H') {
            checker[7] += 1;
        } else if (buffer[i] == 'i' || buffer[i] == 'I') {
            checker[8] += 1;
        } else if (buffer[i] == 'j' || buffer[i] == 'J') {
            checker[9] += 1;
        } else if (buffer[i] == 'k' || buffer[i] == 'K') {
            checker[10] += 1;
        } else if (buffer[i] == 'l' || buffer[i] == 'L') {
            checker[11] += 1;
        } else if (buffer[i] == 'm' || buffer[i] == 'M') {
            checker[12] += 1;
        } else if (buffer[i] == 'n' || buffer[i] == 'N') {
            checker[13] += 1;
        } else if (buffer[i] == 'o' || buffer[i] == 'O') {
            checker[14] += 1;
        } else if (buffer[i] == 'p' || buffer[i] == 'P') {
            checker[15] += 1;
        } else if (buffer[i] == 'q' || buffer[i] == 'Q') {
            checker[16] += 1;
        } else if (buffer[i] == 'r' || buffer[i] == 'R') {
            checker[17] += 1;
        } else if (buffer[i] == 's' || buffer[i] == 'S') {
            checker[18] += 1;
        } else if (buffer[i] == 't' || buffer[i] == 'T') {
            checker[19] += 1;
        } else if (buffer[i] == 'u' || buffer[i] == 'U') {
            checker[20] += 1;
        } else if (buffer[i] == 'v' || buffer[i] == 'V') {
            checker[21] += 1;
        } else if (buffer[i] == 'w' || buffer[i] == 'W') {
            checker[22] += 1;
        } else if (buffer[i] == 'x' || buffer[i] == 'X') {
            checker[23] += 1;
        } else if (buffer[i] == 'y' || buffer[i] == 'Y') {
            checker[24] += 1;
        } else if (buffer[i] == 'z' || buffer[i] == 'Z') {
            checker[25] += 1;
        }
    }
    /*These statements act as the percentage calculator for the letters and assigns the percentage of each letter in the
     text to its corresponding index in the percentage_of_occurrences array)*/
    int j = 0;
    while (j < 26) {
        percentage_of_occurrences[j] = ((double) checker[j] / (double) strlen(buffer)) * 100;
        j++;
    }
    /*The two set of statements calculate the maximum and minimum value and also set the index for the maximum and
     minimum occurrence*/
    max = checker[0];
    int max_index = 0;
    for (int i = 0; i < 26; i++) {
        if (checker[i] > max) {
            max = checker[i];
            max_index = i;
        }
    }
    min = checker[0];
    int min_index = 0;
    for (int i = 0; i < 26; i++) {
        if (checker[i] < min) {
            min = checker[i];
            min_index = i;
        }
    }
    printf("%-10s%-15s%-15s\n", "Letter", "Occurrences", "Percentage");
    printf("****************************************\n");
    for (int i = 0; i < 26; ++i) {
        printf("%-10c%-15d%-15.2lf\n", i + 'A', checker[i], percentage_of_occurrences[i]);
    }
    printf("The most frequently occurring character is %c\n", max_index + 'A');
    printf("The least frequently occurring character is %c\n", min_index + 'A');
    return 0;
}

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Housing_data {
    char city_name[50];
    int housing_price;
} Housing_data;

void Print (Housing_data memory[], int x ){
    for (int initial = 0; initial< x - 1; initial++){
        printf("City: %s Price: %d \n", memory[initial].city_name, memory[initial].housing_price);
    }
}

void swap(Housing_data memory[], int index, int oindex){
    int switcher = memory[index].housing_price;
    memory[index].housing_price = memory[oindex].housing_price;
    memory[index].housing_price = memory[oindex].housing_price;
    memory[oindex].housing_price = switcher;
    char *switcherstring  = *memory[index].city_name;
    *memory[index].city_name = *memory[oindex].city_name;
    *memory[oindex].city_name = switcherstring;

}

void SelectionSort (Housing_data memory[], int n){
    int i, j;
    for (i = 0; i<n; i++){
        int min_idx = i;
        for (j=i+1; j<n; j++){
            if(memory[min_idx].housing_price > memory[j].housing_price){
                min_idx = j;
            }
        }
        swap(memory, min_idx, i);
    }
}
int main() {
    Housing_data *memory = malloc(sizeof(Housing_data) * 1);
    char decider[3];
    int counter = 1;

    do {
        printf("Enter the name of the city : ");
        fgets(memory[counter -1].city_name, 50, stdin);
        printf("Enter the average house price : ");
        scanf("%d", &memory[counter - 1].housing_price);
        printf("Enter another city ? (y/n) : ");
        fgets(decider, 3, stdin);
        fgets(decider, 3, stdin);
        counter+=1;
        memory = realloc(memory, sizeof(Housing_data) * counter );
    } while (decider[0] == 'y');

    printf("List of city and prices:\n\n");
    for (int initial = 0; initial< counter - 1; initial ++){
        memory[initial].city_name[strlen(memory[initial].city_name) - 1] = '\0';
    }
    Print (memory, counter);
    SelectionSort (memory,counter - 1 );
    printf("Sorted:\n\n");
    Print (memory, counter);
    printf("The city with the highest price is: %s", memory[counter - 2].city_name);
    free(memory);
    return 0;
}


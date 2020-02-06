#include<stdio.h>

//Function prototypes
void bubbleSort(int *const numbers, const size_t size);

//Main function
int main(void){

    size_t size;

    printf("Welcome to Bubble sorting program...\n"
           "This program sorts numbers by-reference that you entered.\n");

    //Take array size from user
    printf("Please enter how many numbers do you want to enter:");
    scanf("%u", &size);

    int numbers[size];

    //Take the numbers
    for(size_t i = 0; i < size; i++){
        printf("Please enter number %d:", i+1);
        scanf("%d", &numbers[i]);
    } //end for
    puts("");

    //Print data items in original order
    puts("Data items in original order:");
    for(size_t i = 0; i < size; i++){
        printf("%4d", numbers[i]);
    } //end for

    bubbleSort(numbers, size);

    //Print data items in ascending order
    puts("\nData items in ascending order:");
    for(size_t i = 0; i < size; i++){
        printf("%4d", numbers[i]);
    } //end for
} //end main

//Function to sorting elements of array
void bubbleSort(int *const numbers, const size_t size){

    void swap(int *numbersPtr1, int *numbersPtr2);

    for(size_t pass = 1; pass < size; pass++){
        for(size_t j = 0; j < size-1; j++){
            if(numbers[j] > numbers[j+1]){
                swap(&numbers[j], &numbers[j+1]);
            } //end if
        } //end inner for
    } //end outer for
} //end function bubbleSort

//Function to swap two elements of array
void swap(int *numbersPtr1, int *numbersPtr2){

    int hold = *numbersPtr1;
    *numbersPtr1 = *numbersPtr2;
    *numbersPtr2 = hold;
} //end function swap

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

struct Student {
    int id;
    char name[20];
    int age;
};

union StudentUnion {
    int id;
    char name[20];
    int age;
};

enum Color {
    RED,
    GREEN,
    BLUE
};

typedef int Integer;

struct Student getStudent() {
    struct Student s;
    s.id = 2;
    strcpy(s.name, "Jane");
    s.age = 21;
    return s;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void run_array_basics() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n", sum);

    float avg = (float)sum / 5;
    printf("Average of all elements: %.2f\n", avg);

    int max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);

    int min = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);

    int second_max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
    }
    printf("Second maximum element: %d\n", second_max);

    int second_min = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < second_min && arr[i] > min){
            second_min = arr[i];
        }
    }
    printf("Second minimum element: %d\n", second_min);

    int third_max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > third_max && arr[i] < second_max && arr[i] < max){
            third_max = arr[i];
        }
    }
    printf("Third maximum element: %d\n", third_max);

    int third_min = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < third_min && arr[i] > second_min && arr[i] > min){
            third_min = arr[i];
        }
    }
    printf("Third minimum element: %d\n", third_min);
}

void run_array_2d_basics() {
    int arr2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr2d[i][j]);
        }
        printf("\n");
    }

    int sum2d = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum2d += arr2d[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum2d);

    int max2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] > max2d){
                max2d = arr2d[i][j];
            }
        }
    }
    printf("Maximum element: %d\n", max2d);

    int min2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] < min2d){
                min2d = arr2d[i][j];
            }
        }
    }
    printf("Minimum element: %d\n", min2d);

    int second_max2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] > second_max2d && arr2d[i][j] < max2d){
                second_max2d = arr2d[i][j];
            }
        }
    }
    printf("Second maximum element: %d\n", second_max2d);

    int second_min2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] < second_min2d && arr2d[i][j] > min2d){
                second_min2d = arr2d[i][j];
            }
        }
    }
    printf("Second minimum element: %d\n", second_min2d);

    int third_max2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] > third_max2d && arr2d[i][j] < second_max2d && arr2d[i][j] < max2d){
                third_max2d = arr2d[i][j];
            }
        }
    }
    printf("Third maximum element: %d\n", third_max2d);

    int third_min2d = arr2d[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2d[i][j] < third_min2d && arr2d[i][j] > second_min2d && arr2d[i][j] > min2d){
                third_min2d = arr2d[i][j];
            }
        }
    }
    printf("Third minimum element: %d\n", third_min2d);
}

void run_pointer_basics() {
    int a = 10;
    printf("Address of a: %p\n", (void*)&a);
    int *p = &a;
    printf("Value of a using pointer: %d\n", *p);
    *p = 20;
    printf("Value of a after changing using pointer: %d\n", a);
    printf("Address of pointer p: %p\n", (void*)p);
    printf("Value of pointer p (dereferenced): %d\n", *p);
    int **pp = &p;
    printf("Value of pointer to pointer pp: %p\n", (void*)*pp);
    **pp = 30;
    printf("Value of a after changing using pointer to pointer: %d\n", a);
}

void run_structures_unions_enums_typedef() {
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.age = 20;
    printf("ID: %d, Name: %s, Age: %d\n", s1.id, s1.name, s1.age);

    struct Student s2 = getStudent();
    printf("ID: %d, Name: %s, Age: %d\n", s2.id, s2.name, s2.age);

    union StudentUnion s3;
    s3.id = 3;
    strcpy(s3.name, "Bob");
    s3.age = 22;
    printf("ID: %d, Name: %s, Age: %d\n", s3.id, s3.name, s3.age);

    enum Color c = RED;
    printf("Color: %d\n", c);

    Integer x = 10;
    printf("Integer: %d\n", x);
}

void run_file_handling() {
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    if (fptr == NULL) {
        printf("File not created\n");
        return;
    }
    fprintf(fptr, "Hello World\n");
    fclose(fptr);
    printf("File created successfully\n");
}

void run_dynamic_memory() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    *p = 10;
    printf("Value: %d\n", *p);
    free(p);
}

void run_recursion() {
    printf("Factorial of 5: %d\n", factorial(5));
}

void run_bit_manipulation() {
    int x = 5;
    int y = 3;
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);
    printf("x ^ y = %d\n", x ^ y);
    printf("~x = %d\n", ~x);
    printf("x << 1 = %d\n", x << 1); 
    printf("x >> 1 = %d\n", x >> 1);
}

void run_array_search() {
    int arr[5], i, key, found = 0;
    printf("enter five number: ");
    for(i = 0; i < 5; i++){
        if (scanf("%d", &arr[i]) != 1) return;
    }
    printf("enter key to search: ");
    if (scanf("%d", &key) != 1) return;
    for(i = 0; i < 5; i++){
        if(arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("element found at index %d\n", i);
    }
    else{
        printf("element not found\n");
    }
}

void run_array_odd_count() {
    int arr[] = {1, 2, 3, 4, 5, 4, 5, 23, 4, 3, 68, 3243, 243, 6};
    int count = 0;
    for(int i = 0; i < 14; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\ncount: %d\n", count);
}

void run_array_reverse() {
    int arr[] = {1, 2, 3, 4, 5, 4, 5, 23, 4, 3, 68, 3243, 243, 6};
    int reverse[14];
    for(int i = 0; i < 14; i++){
        reverse[i] = arr[13 - i];
        printf("%d ", reverse[i]);
    }
    printf("\n");
}

void run_array_copy() {
    int arr[14] = {1, 2, 3, 4, 5, 4, 5, 23, 4, 3, 68, 3243, 243, 6};
    int copy[14];
    for(int i = 0; i < 14; i++){
        copy[i] = arr[13 - i];
    }
    for(int i = 0; i < 14; i++){
        printf("%d ", copy[i]);
    }
    printf("\n");
}

void run_bubble_sort() {
    int arr[5], temp;
    printf("enter 5 elements: ");
    for(int i = 0; i < 5; i++){
        if (scanf("%d", &arr[i]) != 1) return;
    }
    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void run_array_max_second_max() {
    int arr[14] = {1, 2, 3, 4, 5, 4, 5, 234455, 4, 3, 68, 3243, 543, 6};
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0; i < 14; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Second maximum element: %d\n", second_max);
}

void run_array_min_second_min() {
    int arr[14] = {1, 2, 3, 4, 5, 4, 5, 234455, 4, 3, 68, 3243, 543, 6};
    int min = INT_MAX;
    int second_min = INT_MAX;
    for(int i = 0; i < 14; i++){
        if(arr[i] < min){
            second_min = min;
            min = arr[i];
        }
        else if(arr[i] < second_min && arr[i] > min){
            second_min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Second minimum element: %d\n", second_min);
}

void run_array_frequency() {
    int arr[5], key, count = 0;
    printf("enter five elements: ");
    for(int i = 0; i < 5; i++){
        if (scanf("%d", &arr[i]) != 1) return;
    }
    printf("enter a number to find frequency: ");
    if (scanf("%d", &key) != 1) return;
    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            count++;
        }
    }
    printf("frequency of %d is %d\n", key, count);
}

void run_array_duplicate_frequency() {
    int arr[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 2, 1, 2, 1, 2, 1, 11, 1, 1, 2, 2, 3};
    int count_duplicate = 0;
    for(int i = 0; i < 25; i++){
        for(int j = i + 1; j < 25; j++){
            if(arr[i] == arr[j]){
                count_duplicate++;
            }
        }
    }
    printf("frequency of duplicate element is %d\n", count_duplicate);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- SELECT AN OPTION TO RUN ---\n");
        printf("1. 1D Array Basics\n");
        printf("2. 2D Array Basics\n");
        printf("3. Pointer Basics\n");
        printf("4. Structures, Unions, Enums & Typedef\n");
        printf("5. File Handling\n");
        printf("6. Dynamic Memory Allocation\n");
        printf("7. Recursion\n");
        printf("8. Bit Manipulation\n");
        printf("9. Array Search\n");
        printf("10. Array Odd Number Count\n");
        printf("11. Array Reverse\n");
        printf("12. Array Copy\n");
        printf("13. Bubble Sort\n");
        printf("14. Array Max and Second Max\n");
        printf("15. Array Min and Second Min\n");
        printf("16. Array Frequency\n");
        printf("17. Array Duplicate Frequency\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            break;
        }
        if (choice == 0) {
            break;
        }
        switch (choice) {
            case 1: run_array_basics(); break;
            case 2: run_array_2d_basics(); break;
            case 3: run_pointer_basics(); break;
            case 4: run_structures_unions_enums_typedef(); break;
            case 5: run_file_handling(); break;
            case 6: run_dynamic_memory(); break;
            case 7: run_recursion(); break;
            case 8: run_bit_manipulation(); break;
            case 9: run_array_search(); break;
            case 10: run_array_odd_count(); break;
            case 11: run_array_reverse(); break;
            case 12: run_array_copy(); break;
            case 13: run_bubble_sort(); break;
            case 14: run_array_max_second_max(); break;
            case 15: run_array_min_second_min(); break;
            case 16: run_array_frequency(); break;
            case 17: run_array_duplicate_frequency(); break;
            default: printf("Invalid choice, please try again.\n"); break;
        }
    }
    return 0;
}
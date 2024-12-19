#include <stdio.h>

void Getset(int[], int*);

int main() {

    int data[100], num; // Assuming a maximum size for the array
    Getset(data, &num);

    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}//end function

void Getset(int data[], int *num) {

    printf("Enter number of Element: ");
    scanf("%d", num);

    printf("Enter element: ");
    for (int i = 0; i < (*num); i++) {
        scanf("%d", &data[i]);
    }//end for

}//end function

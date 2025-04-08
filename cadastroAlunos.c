#include <stdio.h>

int main() {
    int age, registration;
    float height;
    char name[20];

    // int count = 0;
    // while(count <=5) {
    for (int index=1; index<=5; index+=1) {
        printf("Type your name: \n");
        scanf("%s", &name);

        printf("Type your age: \n");
        scanf("%d", &age);
        printf("Type your height: \n");
        scanf("%f", &height);
        printf("----------\n");
        printf("New student! \nNumber: %d \nName: %s \nAge: %d \nHeight: %f", index, name, age, height);
        printf("\n----------\n");
        
        // count+=1;
    }

}
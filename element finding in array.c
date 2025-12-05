#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    printf("Enter element to find: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found=1;
            printf("Element %d found at index %d\n", key, i);
             
        }
         
    }
       if(found==0)
        printf("Element %d not found\n", key);
    

    return 0;
}


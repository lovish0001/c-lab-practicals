#include <stdio.h>
int main() {
    int arr[100], n = 0;
    int choice, pos, value, i, found;
    do {
        printf("\n--- Array Operations ---");
        printf("\n1. Insert");
        printf("\n2. Update");
        printf("\n3. Delete");
        printf("\n4. Display");
        printf("\n5. Search");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
        case 1:
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &value);
            for(i = n; i >= pos; i--)
                arr[i] = arr[i - 1];
            arr[pos - 1] = value;
            n++;
            break;
        case 2:
            printf("Enter position and new value: ");
            scanf("%d %d", &pos, &value);
            arr[pos - 1] = value;
            break;
        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            for(i = pos - 1; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
            break;
        case 4:
            printf("Array elements are: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;
        case 5:
            printf("Enter value to search: ");
            scanf("%d", &value);
            found = 0;
            for(i = 0; i < n; i++) {
                if(arr[i] == value) {
                    printf("Element found at position %d", i + 1);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
                printf("Element not found");
            break;
        case 6:
            printf("Exiting...");
            break;
        default:
            printf("Invalid choice!");
        }
    } while(choice != 6);
    return 0;
}

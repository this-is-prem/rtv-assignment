#include <stdio.h>
#include <string.h>

#define MAX 100   // max stack size
#define URL_LEN 100  // max length of each URL

// Stack to hold URLs
char stack[MAX][URL_LEN];
int top = -1;

// Push operation
void push(char url[]) {
    if (top == MAX - 1) {
        printf("Stack full! Cannot visit more pages.\n");
        return;
    }
    top++;
    strcpy(stack[top], url);
}

// Pop operation (BACK)
void pop() {
    if (top <= 0) {
        printf("No previous page! Stack is empty.\n");
        return;
    }

    top--;  // remove current page
    printf("Back to: %s\n", stack[top]);
}

int main() {
    int choice, N;
    char url[URL_LEN];

    printf("Enter number of websites you will visit: ");
    scanf("%d", &N);

    // Visit and push URLs
    printf("\nEnter the URLs:\n");
    for (int i = 0; i < N; i++) {
        printf("URL %d: ", i + 1);
        scanf("%s", url);
        push(url);
    }

    // Menu loop
    do {
        printf("\n--- Browser Menu ---\n");
        printf("1. BACK\n");
        printf("2. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            pop();
            break;
        case 2:
            printf("Exiting browser.\n");
            break;
        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 2);

    return 0;
}

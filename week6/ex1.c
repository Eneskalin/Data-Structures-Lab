#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 40

// Function declarations
int isPalindrome();
char popStack(char str[], int *top);
char dequeue(char str[], int *front);

// Global variables for the stack and queue
char stack[MAX_SIZE];
char queue[MAX_SIZE];
int top = -1;
int front = 0;
int rear = -1;

void main() {
    char str[MAX_SIZE];

    printf("Enter a sentence: ");
    fgets(str, MAX_SIZE, stdin);

    // Remove newline character from fgets input
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str)) {
        printf("The sentence is a Palindrome.\n");
    } else {
        printf("The sentence is not a Palindrome.\n");
    }
}

// Function to check if the sentence is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);

    // Push all characters into stack and queue
    for (int i = 0; i < length; i++) {
        if (isalpha(str[i])) {  // Only consider alphabetic characters
            char ch = tolower(str[i]);
            stack[++top] = ch;         // Push into stack
            queue[++rear] = ch;        // Enqueue into queue
        }
    }

    // Compare elements from stack and queue
    while (front <= rear) {
        if (popStack(stack, &top) != dequeue(queue, &front)) {
            return 0; // Not a palindrome
        }
    }
    return 1; // It's a palindrome
}

// Function to pop from the stack
char popStack(char str[], int *top) {
    return str[(*top)--];
}

// Function to dequeue from the queue
char dequeue(char str[], int *front) {
    return str[(*front)++];
}
    
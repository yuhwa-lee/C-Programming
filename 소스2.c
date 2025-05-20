#include <stdio.h> //과제1필요
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning (disable:4996)

typedef struct StackNode {
    char data;
    struct StackNode* link;
}StackNode;

StackNode* top = NULL;

int isStackEmpty(void) {
    return(top == NULL);
}
void push(char item) {
    StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}
char pop(void) {
    if (isStackEmpty()) return 0;
    StackNode* temp = top;
    char item = temp->data;
    top = top->link;
    free(temp);
    return item;
}
int testPair(char* exp) {
    int len = strlen(exp);
    for (int i = 0; i < len; i++) {
        char symbol = exp[i];
        switch (symbol) {
        case '(':case'[':case'{':
            push(symbol);
            break;

        case ')':
            if (isStackEmpty() || pop() != '(')
                return 0;
            break;
        case ']':
            if (isStackEmpty() || pop() != '[')
                return 0;
            break;
        case '}':
            if (isStackEmpty() || pop() != '{')
                return 0;
            break;
        }
    }
    return isStackEmpty();
}
int main() {
    char exp[1001];
    scanf("%s", exp);
    int count = 0;
    for (int i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == ')' ||
            exp[i] == '[' || exp[i] == ']' ||
            exp[i] == '{' || exp[i] == '}') {
            count++;
        }
    }
    if (testPair(exp))
        printf("OK_%d\n", count);
    else
        printf("Wrong+%d\n", count);

    return 0;
}

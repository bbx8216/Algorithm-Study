#include <stdio.h>
#include <string.h>

int stack[51];
int stack_size = 0;
int pop();
void push(char push_data);
int empty();


int main() {
    int N, check = 1, receiver;
    char input[51];//초기값이 없을때는 값 생략하면 안됨.
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", input);
        for (int j = 0; j < strlen(input); j++) {
            if (stack_size < 0)
                break;
            if (input[j] == '(') {
                push(1);
            }
            else if (input[j] == ')') {
                receiver = pop();
                if (receiver != 1) {
                    --stack_size;
                }
            }
            else
                continue;
        }

        if (stack_size==0)
            printf("YES\n");

        else
            printf("NO\n");

        stack_size = 0;
    }

    return 0;
}

void push(char push_data) {
    stack[stack_size] = push_data;
    stack_size += 1;
}

int empty() {
    if (stack_size == 0) {
        return 1;
    }
    return 0;
}

//단순히 top의 1을 0으로 지우는용
int pop() {
    if (empty()) {
        return -1;
    }
    stack_size -= 1;
    return stack[stack_size];

}
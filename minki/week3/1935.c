#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float stack[10000];
int stack_size=0;

void push(float push_data){
    stack[stack_size] = push_data;
    stack_size += 1;
}

int empty(){
    if(stack_size == 0){
        return 1;
    }
    return 0;
}

float pop(){
    if(empty()){
        return -1;
    }
    stack_size -= 1;
    return stack[stack_size];
}

float top(){
    if(empty()){
        return -1;
    }
    return stack[stack_size-1];
}

int main()
{
    int N, arr[26], idx;
    float temp;
    char *str;
    scanf("%d", &N);
    str = malloc(sizeof(char)*2*N);
    scanf("%s", str);
    //alphabet과 대응할 숫자 입력 -> 배열에 입력받기
    for (int i = 0 ; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0 ; i < strlen(str) ; i++){
        idx = str[i];
        if ('A' <= idx && idx <='Z'){
            idx = str[i] - 'A';
            temp = arr[idx];
            push(temp);
        }
        else if (idx == '+'){
            temp = pop();
            temp += pop();
            push(temp);
        }
        else if (idx == '-'){
            temp = pop();
            temp = pop() - temp;
            push(temp);
        }
        else if (idx == '*'){
            temp = pop();
            temp *= pop();
            push(temp);
        }
        else if (idx == '/'){
            temp = pop();
            temp = pop() / temp;
            push(temp);
        }
        else
            break;
    }
    printf("%.2f", top());
    return 0;
}


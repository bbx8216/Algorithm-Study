#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

bool empty(){
    if (head == NULL)
        return true;
    else
        return false;
}

void push_front(int push_data){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = push_data;
    newNode->next = head;
    if (empty()){
        tail = newNode;
    }
    else{
        head->prev = newNode;
    }
    newNode->prev = NULL;
    head = newNode;
}

void push_back(int push_data){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = push_data;
    newNode->prev = tail;
    if (empty()){
        head = newNode;
    }
    else{
        tail->next = newNode;
    }
    newNode->next = NULL;
    tail = newNode;
}

int pop_front(){
    struct Node *temp = head;
    int data;
    if(empty()){
        return -1;
    }
    data = head->data;
    head = head->next;
    free(temp);
    if (head == NULL){
        tail = NULL;
    }
    else
        head->prev = NULL;
    return data;
}

int pop_back(){
    struct Node *temp = tail;
    int data;
    if (empty()){
        return -1;
    }
    data = tail->data;
    tail = tail->prev;
    free(temp);
    if(tail == NULL)
        head = NULL;
    else
        tail->next = NULL;
    return data;
}

int size(){
    int cnt = 0 ;
    struct Node* here;
    here = head;
    while(here){
        cnt++;
        here = here->next;
    }
    return cnt;
}

void front(){
    int ret;
    if (head == NULL)
        printf("-1\n");
    else{
        ret = head->data;
        printf("%d\n",ret);
    }
    return ;
}

void back(){
    int ret;
    if (tail == NULL)
        printf("-1\n");
    else{
        ret = tail->data;
        printf("%d\n",ret);
    }
    return ;
}

int main(){
    int N, push_data;
    char command[10];
    scanf("%d",&N);
    for (int i=0; i<N; i++){
        scanf("%s", command);
        if (!strcmp(command, "push_front")){
            scanf("%d", &push_data);
            push_front(push_data);
        }
        else if(!strcmp(command, "push_back")){
            scanf("%d", &push_data);
            push_back(push_data);
        }
        else if(!strcmp(command, "pop_front")){
            printf("%d\n",pop_front());
        }
        else if(!strcmp(command, "pop_back")){
            printf("%d\n", pop_back());
        }
        else if(!strcmp(command, "size")){
            printf("%d\n", size());
        }
        else if(!strcmp(command, "empty")){
            if (empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if(!strcmp(command, "front")){
            front();
        }
        else if(!strcmp(command, "back")){
            back();
        }
    }
    return 0;
}
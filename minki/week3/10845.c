#include <stdio.h>
#include <string.h>

int queue[10000];
int queue_front = 0, queue_back = 0;

void push(){
    int x;
    scanf("%d",&x);
    queue[queue_back++]=x;
}

void pop(){
    if(queue_back==queue_front)printf("-1\n");
    else printf("%d\n",queue[queue_front++]);
}

void size(){
    printf("%d\n",queue_back-queue_front);
}

void empty(){
    printf("%d\n",queue_back-queue_front?0:1);

}

void front_back(int n){
    printf("%d\n",queue_back - queue_front ? ( n ? queue[queue_front]:queue[queue_back-1]):-1);

}

int main(){
    int N, push_data;
    char command[10]={0};
    scanf("%d",&N);
    for (int i=0; i<N; i++){
        scanf("%s", command);
        if (!strcmp(command, "push")){
            push();
        }
        else if(!strcmp(command, "pop")){
            pop();
        }
        else if(!strcmp(command, "size")){
            size();
        }
        else if(!strcmp(command, "empty")){
            empty();
        }
        else if(!strcmp(command, "front")){
            front_back(1);
        }
        else if(!strcmp(command, "back")){
            front_back(0);
        }
    }
    return 0;
}
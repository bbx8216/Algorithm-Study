#include <stdio.h>

void print_Star(int i, int j, int n);

int main() {
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            print_Star(i, j, n);
        }
        printf("\n");
    }
    return 0;
}

void print_Star(int i, int j, int n) {
    if ((i/n)%3==1&&(j/n)%3==1){
        printf(" ");
    }
    else {
        if (n / 3 == 0) {
            printf("*");
        }
        else {
            print_Star(i, j, n / 3);
        }
    }
}
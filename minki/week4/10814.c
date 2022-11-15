#include <stdio.h>
#include<stdlib.h>

typedef struct {
    int age;
    char name[201];
}person;

int compare(person *a, person *b)
{
    return (a->age > b->age ? 1 : (a->age < b->age ? -1 : 0));
}


int main() {
    int N;
    scanf("%d", &N);
    person *p = (person*)malloc(sizeof(person) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d %s", &p[i].age, p[i].name);
    }

    qsort(p, N, sizeof(person), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s ", p[i].age, p[i].name);
    }

    return 0;
}
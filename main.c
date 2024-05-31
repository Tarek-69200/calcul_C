#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y, result;

    printf("Entrez le nombre à calculer hassad : ");
    scanf("%d", &x);

    printf("Entrez la deuxième à additionner : ");
    scanf("%d", &y);

    result = add(x, y);
    
    printf("L'addition de %d et %d donne : %d\n", x, y, result);
    
    return 0;
}

// Ref print w3schools
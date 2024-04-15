# include <stdio.h>


int add(int x, int y) {
    return x + y;
}

int main() {
    int x = 5;
    int y = 10;
    int result = add(x, y);
    printf("l'addition de  %d et %d resultat :  %d\n", x, y, result);
    return 0;
}

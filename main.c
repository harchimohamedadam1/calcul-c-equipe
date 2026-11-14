#include <stdio.h>
int produit(int x, int y) {
    return x * y;
}

int main() {
    printf("Projet collaboratif\n");
    int a,b;
    printf("Entrez un entier:");
    scanf("%d",&a);
    printf("Entrez un entier:");
    scanf("%d",&b);
    printf("Produit : %d\n", produit(a, b));
    return 0;
}

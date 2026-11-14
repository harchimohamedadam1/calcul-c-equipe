#include <stdio.h>
int produit(int x, int y) {
    return x * y;
}

double moyenne(int x, int y) {
    return (a + b) / 2.0;
}

int main() {
    printf("Projet collaboratif\n");
    int a,b;
    printf("Entrez un entier:");
    scanf("%d",&a);
    printf("Entrez un entier:");
    scanf("%d",&b);
    printf("Produit : %d\n", produit(a, b));
    printf("Moyenne : %.2f\n", moyenne(a, b));
    return 0;
}

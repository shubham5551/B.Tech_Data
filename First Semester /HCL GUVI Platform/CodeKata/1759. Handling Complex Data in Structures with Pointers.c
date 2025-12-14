#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Supplier {
    char name[50];
    float price;
};

struct Product {
    char name[50];
    int supplierCount;
    struct Supplier *suppliers;
};

int main() {
    int p, i, j;
    scanf("%d", &p);

    struct Product *products;
    products = (struct Product *)malloc(p * sizeof(struct Product));

    for (i = 0; i < p; i++) {
        scanf(" %[^\n]", products[i].name);
        scanf("%d", &products[i].supplierCount);

        products[i].suppliers =
            (struct Supplier *)malloc(products[i].supplierCount * sizeof(struct Supplier));

        for (j = 0; j < products[i].supplierCount; j++) {
            scanf("%s %f",
                  products[i].suppliers[j].name,
                  &products[i].suppliers[j].price);
        }
    }

    for (i = 0; i < p; i++) {
        float sum = 0.0;
        float minPrice;
        int minIndex = 0;

        minPrice = products[i].suppliers[0].price;

        for (j = 0; j < products[i].supplierCount; j++) {
            sum += products[i].suppliers[j].price;

            if (products[i].suppliers[j].price < minPrice) {
                minPrice = products[i].suppliers[j].price;
                minIndex = j;
            }
        }

        printf("Product: %s\n", products[i].name);
        printf("Average Price: %.2f\n", sum / products[i].supplierCount);
        printf("Cheapest Supplier: %s\n",
               products[i].suppliers[minIndex].name);
    }

    for (i = 0; i < p; i++) {
        free(products[i].suppliers);
    }
    free(products);

    return 0;
}

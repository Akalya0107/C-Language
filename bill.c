#include <stdio.h>
int main() {
    char customer[30], product[30];
    float price, amount;
    int quantity;
    printf("Enter Customer Name: ");
    scanf("%s", customer);
    printf("Enter Product Name: ");
    scanf("%s", product);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    amount = price * quantity;
    printf("\n====================================\n");
    printf("          SHOPPING BILL\n");
    printf("====================================\n");
    printf("Customer Name : %s\n", customer);
    printf("Product Name  : %s\n", product);
    printf("Price         : %.2f\n", price);
    printf("Quantity      : %d\n", quantity);
    printf("Bill Amount   : %.2f\n", amount);
    printf("====================================\n");
    return 0;
}

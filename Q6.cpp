//warehouse management
#include <stdio.h>
int main() 
{
    int product_id;
    printf("product_id:-");
    scanf("%d", &product_id);
    int Stock_level;
    printf("Stock level:-");
    scanf("%d", &Stock_level);
    int Reorder_Threshold;
    printf("Reorder Threshold:-");
    scanf("%d", &Reorder_Threshold);
    int Reorder_amount;
    printf("Reorder Amount:-");
    scanf("%d", &Reorder_amount);
    int new_stock_level;
    new_stock_level = (Stock_level > Reorder_Threshold) ? Stock_level : (Reorder_amount + Stock_level); 
    printf("new_stock_level:- %d", new_stock_level);
}
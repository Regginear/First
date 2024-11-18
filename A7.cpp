#include <stdio.h>
int main() 
{
	int totalItems = 0;                
    int productionCount;               
    int hour = 1;                      
    int lowProductionHours[12];        
    int lowCount = 0;                  
    do {
        printf("Enter production count for hour %d: ", hour);
        scanf("%d", &productionCount); 
        totalItems += productionCount;
        if (productionCount < 50) 
		{
            lowProductionHours[lowCount] = hour; 
            lowCount++;                           
        }
		hour++; 
    } while (hour <= 12); 

    printf("Total items produced in 12 hours: %d\n", totalItems);
    
    if (lowCount > 0) {
        printf("Production was less than 50 items in the following hours: ");
        for (int i = 0; i < lowCount; i++) {
            printf("%d ", lowProductionHours[i]); 
        }
        printf("\n");
    } else {
        printf("No hours had production less than 50 items.\n");
    }

    return 0; 
}

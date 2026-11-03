//program to display revenue and room occupancy
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: Hotel management system
Date: 26/10/2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS     7
#define FLOORS   5
#define ROOMS    10
#define BRANCHES 3

int main(void) {
    double revenue[DAYS];
    int occupancy[FLOORS][ROOMS];
    int chain[BRANCHES][FLOORS][ROOMS];
    const char *dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                                  "Friday", "Saturday", "Sunday"};
    double total = 0.0;
    int i, j, k;

    srand((unsigned int)time(NULL));


    printf("=== WEEKLY REVENUE TRACKER ===\n");
    for (i = 0; i < DAYS; i++) {
        printf("Enter revenue for %s: KSh. ", dayNames[i]);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }
    printf("\nTotal weekly revenue  : KSh. %.2f\n", total);
    printf("Average daily revenue : KSh. %.2f\n", total / DAYS);

    
    printf("\n=== ROOM OCCUPANCY (ONE BRANCH) ===\n");
    for (i = 0; i < FLOORS; i++)
        for (j = 0; j < ROOMS; j++)
            occupancy[i][j] = rand() % 2;      

    for (i = 0; i < FLOORS; i++) {
        int occupied = 0, vacant = 0;
        for (j = 0; j < ROOMS; j++) {
            if (occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d: Occupied = %2d, Vacant = %2d\n", i + 1, occupied, vacant);
    }

 
    printf("\n=== HOTEL CHAIN (3 BRANCHES) ===\n");
    int totalOccupied = 0;
    for (i = 0; i < BRANCHES; i++)
        for (j = 0; j < FLOORS; j++)
            for (k = 0; k < ROOMS; k++) {
                chain[i][j][k] = rand() % 2;
                if (chain[i][j][k] == 1) totalOccupied++;
            }

    printf("Total occupied rooms across all branches: %d out of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);

    return 0;
}
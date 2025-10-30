// 3d array
/*
NAME : Mary Wanjiru
REG NO: CT100/G/25276/24
DESCRIPTION:3D Array – Multiple Branches
The hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
1. Use a 3D array chain[3][5][10] to represent all branches.
2. Assign random occupancy (1 or 0) to each room.
3. Calculate and display the total number of occupied rooms across all branches
*/

#include <stdio.h>

int main(){
	    int chain[3][5][10] = {
        {   // Branch 1
            {1,0,1,1,0,1,0,0,1,1},
            {0,1,1,0,1,0,1,1,0,1},
            {1,1,0,1,0,1,0,0,1,0},
            {1,0,1,1,1,0,1,0,1,1},
            {0,1,0,1,0,1,1,1,0,0}
        },
        {   // Branch 2
            {1,1,0,0,1,1,0,0,1,0},
            {0,1,1,1,0,1,0,1,1,1},
            {1,0,0,1,1,0,1,0,1,0},
            {0,1,0,1,1,0,1,1,0,1},
            {1,0,1,1,0,0,1,1,0,0}
        },
        {   // Branch 3
            {0,1,0,1,1,0,1,0,1,0},
            {1,1,1,0,1,1,0,0,1,0},
            {0,0,1,1,1,0,1,1,0,1},
            {1,0,0,1,1,1,0,0,1,1},
            {0,1,1,0,1,0,1,1,0,1}
        }
    };

    int branch, floor, room;
    int totalOccupied = 0, totalVacant = 0;

   
    for (branch = 0; branch < 3; branch++) {
        printf("\n=== BRANCH %d ===\n", branch + 1);
        printf("ROOM OCCUPANCY MATRIX (1 = occupied, 0 = vacant)\n\n");

       
        printf("        ");
        for (room = 0; room < 10; room++)
            printf("R%-2d ", room + 1);
        printf("\n");

        int branchOccupied = 0, branchVacant = 0;

        for (floor = 0; floor < 5; floor++) {
            printf("Floor %d | ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf(" %d  ", chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupied++;
                } else {
                    branchVacant++;
                    totalVacant++;
                }
            }
            printf("\n");
        }

        printf("\nBranch %d Summary ? Occupied: %d, Vacant: %d\n", 
               branch + 1, branchOccupied, branchVacant);
    }

  
    printf("\n=== TOTAL HOTEL CHAIN SUMMARY ===\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms:   %d\n", totalVacant);
    printf("Total Rooms Overall:  %d\n", totalOccupied + totalVacant);
	
	
	
	
	
	return 0;
	
}
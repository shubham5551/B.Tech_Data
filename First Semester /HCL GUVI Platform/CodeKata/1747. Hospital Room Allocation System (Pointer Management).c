#include <stdio.h>
#include <stdlib.h>   // For malloc() and free()

int main() {

    int n;                  // Number of patients
    int i;

    // Read number of patients
    scanf("%d", &n);

    // Dynamically allocate memory for patient IDs
    int *patientIDs = (int *)malloc(n * sizeof(int));

    // Dynamically allocate memory for medical conditions
    int *conditions = (int *)malloc(n * sizeof(int));

    // Dynamically allocate memory for room numbers
    int *rooms = (int *)malloc(n * sizeof(int));

    // Read patient IDs
    for (i = 0; i < n; i++) {
        scanf("%d", &patientIDs[i]);
    }

    // Read medical conditions
    for (i = 0; i < n; i++) {
        scanf("%d", &conditions[i]);
    }

    /*
      Assign rooms based on medical condition:
      0 (critical)   -> 101 to 200
      1 (stable)     -> 201 to 300
      2 (recovering) -> 301 to 400
    */
    for (i = 0; i < n; i++) {

        if (conditions[i] == 0) {
            rooms[i] = 101 + i;   // Assign critical room
        }
        else if (conditions[i] == 1) {
            rooms[i] = 201 + i;   // Assign stable room
        }
        else if (conditions[i] == 2) {
            rooms[i] = 301 + i;   // Assign recovering room
        }
    }

    // Print patient ID and assigned room
    for (i = 0; i < n; i++) {
        printf("Patient ID %d is assigned Room %d\n",
               patientIDs[i], rooms[i]);
    }

    // Free dynamically allocated memory
    free(patientIDs);
    free(conditions);
    free(rooms);

    // Print memory release message
    printf("Memory Released.");

    return 0;   // End of program
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants for maximum sizes and time measurements
#define MAX_DEVICES                 4
#define MAX_DEVICE_NAME             20
#define MAX_COMMANDS                10
#define MAX_COMMAND_NAME            20

#define DEFAULT_TIME_QUANTUM        120
#define TIME_CONTEXT_SWITCH         5
#define TIME_CORE_STATE_TRANSITIONS 10
#define TIME_ACQUIRE_BUS            20

// Structure to represent a command
typedef struct {
    char name[MAX_COMMAND_NAME];
    int duration;
} Command;

// Function to read system configuration
void read_sysconfig(char argv0[], char filename[], int *numDevices, int *timeQuantum) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening sysconfig file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    // Read and display the contents of sysconfig.txt
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fscanf(file, "found %d devices\n", numDevices);
    fscanf(file, "time quantum is %d\n", timeQuantum);

    fclose(file);
}

void read_commands(char argv0[], char filename[], Command commands[], int *numCommands) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening commands file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
        if (strstr(line, "found") != NULL) {
            sscanf(line, "found %d commands", numCommands);
        }
    }

    for (int i = 0; i < *numCommands; i++) {
        fscanf(file, "%s %d\n", commands[i].name, &commands[i].duration);
    }

    fclose(file);
}

// Function to execute commands
void execute_commands(Command commands[], int numCommands, int timeQuantum) {
    int totalTime = 0;
    int cpuUtilization = 0;
    int remainingTime = numCommands * timeQuantum;

    for (int i = 0; i < numCommands; i++) {
        int executionTime = commands[i].duration;
        totalTime += executionTime;
        remainingTime -= executionTime;

        // Simulate context switch and core state transitions
        totalTime += TIME_CONTEXT_SWITCH + TIME_CORE_STATE_TRANSITIONS;

        // Calculate CPU utilization
        cpuUtilization += executionTime;
    }

    // Add time for acquiring bus
    totalTime += TIME_ACQUIRE_BUS;

    printf("measurements  %d  %d\n", totalTime, (cpuUtilization * 100) / remainingTime);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s sysconfig-file command-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int numDevices, timeQuantum, numCommands;
    Command commands[MAX_COMMANDS];

    read_sysconfig(argv[0], argv[1], &numDevices, &timeQuantum);
    read_commands(argv[0], argv[2], commands, &numCommands);

    // Print the additional line
    printf("\nwhat a fun project!\n");

    // Execute commands
    execute_commands(commands, numCommands, timeQuantum);

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void classifySwitch(char* modelNumber) {
   
    char model[10];
    int port;
    char stacked[3];

  
    if (sscanf(modelNumber, "%9[^-]-%d%2[A-Za-z0-9]", model, &port, stacked) == 3) {
        
        if ((strcmp(model, "5200") == 0 || strcmp(model, "5250") == 0 || strcmp(model, "5270") == 0) && port <= 24) {
            printf("%d\nType 1\n", port);
        } else if ((strcmp(model, "5200") == 0 || strcmp(model, "5250") == 0 || strcmp(model, "5270") == 0 ||
                    strcmp(model, "5300") == 0 || strcmp(model, "5350") == 0 || strcmp(model, "5370") == 0) &&
                   (port > 24 || (strstr(modelNumber, "5400") != NULL))) {
            printf("%d\nType 2\n", port);
        } else if (strstr(stacked, "S") != NULL || strstr(stacked, "-NX") != NULL) {
            printf("Core\n");
        } else {
            printf("Invalid model number\n");
        }
    } else {
        printf("Invalid model number\n");
    }
}

int main() {
    // Sample usage
    classifySwitch("C5200L-12P");

    return 0;
}

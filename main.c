#include <stdio.h>
#include <string.h>

void intro(void);
int gameLoop(void);
int showTransportRoute(char *inputBuffer, int inputBufferSize, int *playerPosition);
int showGuardHouse(char *inputBuffer, int inputBufferSize);
int showForkLift(char *inputBuffer, int inputBufferSize);
void readInput(char *inputBuffer, int inputBufferSize);

int transportRouteVisited = 0;
int guardHouseVisited = 0;
int forkLiftVisited = 0;

int main(void) {

    intro();
    gameLoop();

    return 0;
}

void readInput(char *inputBuffer, int inputBufferSize) {

    fgets(inputBuffer, inputBufferSize, stdin);

    size_t newlineIndex = strcspn(inputBuffer, "\n");
    inputBuffer[newlineIndex] = '\0';
}

int gameLoop(void) {

    int room = 1;
    int playerPosition = 1;

    char input[30] = "";
    int gameRunning = 1;

    while (gameRunning == 1) {

        switch (room) {
            case 1:
                room = showTransportRoute(input, sizeof(input), &playerPosition);
                break;

            case 2:
                room = showGuardHouse(input, sizeof(input));
                break;

            case 3:
                room = showForkLift(input, sizeof(input));
                break;
        }

        if (strcmp(input, "exit") == 0) {
            gameRunning = 0;
        }
    }

    printf("Das Spiel wird beendet.\n");

    return 0;
}

void intro(void) {

    printf("Du stehst vor einer alten verlassenen Industriehalle und siehst einen seitlichen Eingang, "
        "dessen Tür ein Spalt geöffnet zu sein scheint.\n");

    printf("Langsam aber neugierig nährst du dich.\n");

    printf("Ein fernes aber lautes Geräusch ist plötzlich zu hören. BOOM...KLIRR... "
        "Es hörte sich metallisch an.\n");

    printf("Du betrittst die unheimlich einladend aussehende Stahltür und stehst verwundert "
        "auf einem großen Transportweg, welcher durch ein klaffendes Loch im Wellblech "
        "der Decke vom Tageslicht beleuchtet wird.\n");

    printf("CAW...CAW... Krähen steigen wie aus dem nichts auf und beim Fliegen durch die offene Decke, "
        "werfen sie einen riesigen Schatten auf dem Boden.\n");

    printf("Als du erschrocken nach oben schaust... KLACK... . Du drehst dich zur Tür, "
        "durch die du die Halle betreten hast.\n");

    printf("Die Tür ist zugefallen! Die Amatur fehlt. Du rüttelst vergeblich an ihr.\n");
}

int showTransportRoute(char *inputBuffer, int inputBufferSize, int *playerPosition) {

    if (*playerPosition == 1 && transportRouteVisited == 0) {

        printf("\n--- Der Transportweg ---\n");

        printf("Beim umsehen bemerkst du auf der rechten Seite eine Art Wachhäusschen am Rand "
            "des Transportwegs, auf der linken Seite steht ein Gabelstapler mitten auf dem Weg.\n");

        transportRouteVisited = 1;

    } else if (*playerPosition == 1) {

        printf("Auf der rechten Seite ist das Wachhäusschen am Rand des Transportwegs "
            "und auf der linken Seite steht der Gabelstapler mitten auf dem Weg.\n");

    } else if (*playerPosition == 2 && guardHouseVisited == 0) {

        printf("\n--- Vor dem Wachhäusschen ---\n");

        printf("Du stehst vor dem engen Wachhäusschen am Rand des Transportwegs.\n");
        printf("Hinter dir führt der Weg zurück zur verschlossenen Eingangstür.\n");

        guardHouseVisited = 1;

    } else if (*playerPosition == 2) {

        printf("Du stehst wieder vor dem Wachhäusschen.\n");
        printf("Hinter dir führt der Weg zurück zur verschlossenen Eingangstür.\n");

    } else if (*playerPosition == 3 && forkLiftVisited == 0) {

        printf("\n--- Der Gabelstapler ---\n");

        printf("Du stehst vor dem alten Gabelstapler mitten auf dem Transportweg.\n");
        printf("Von hier kannst du zurück zur verschlossenen Eingangstür gehen.\n");

        forkLiftVisited = 1;

    } else if (*playerPosition == 3) {

        printf("Du stehst wieder vor dem alten Gabelstapler.\n");
        printf("Von hier kannst du zurück zur verschlossenen Eingangstür gehen.\n");
    }

    if (*playerPosition == 1) {

        printf("Für welche Richtung entscheidest du dich?\n");

    }

    readInput(inputBuffer, inputBufferSize);

    if (*playerPosition == 1) {

        if (strcmp(inputBuffer, "rechts") == 0) {

            printf("Du gehst zum Wachhaeusschen...\n");
            *playerPosition = 2;

        } else if (strcmp(inputBuffer, "links") == 0) {

            printf("Du gehst zum Gabelstapler...\n");
            *playerPosition = 3;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("Das ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }

    } else if (*playerPosition == 2 || *playerPosition == 3) {

        if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            *playerPosition = 1;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("Das ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }
    }

    return 1;
}

int showGuardHouse(char *inputBuffer, int inputBufferSize) {

    readInput(inputBuffer, inputBufferSize);

    if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

        return 1;

    } else if (strcmp(inputBuffer, "exit") != 0) {

        printf("Unbekannter Befehl im Wachhäusschen.\n");
    }

    return 2;
}

int showForkLift(char *inputBuffer, int inputBufferSize) {

    readInput(inputBuffer, inputBufferSize);

    if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

        return 1;

    } else if (strcmp(inputBuffer, "exit") != 0) {

        printf("Unbekannter Befehl beim Gabelstapler.\n");
    }

    return 3;
}
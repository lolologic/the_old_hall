#include <stdio.h>
#include <string.h>

enum Room {
    ROOM_TRANSPORT_ROUTE = 1,
    ROOM_GUARD_HOUSE = 2,
    ROOM_BREAK_ROOM = 3
};

enum PlayerPosition {
    POSITION_TRANSPORT_ROUTE_ENTRANCE = 1,
    POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR = 2,
    POSITION_TRANSPORT_ROUTE_FORK_LIFT = 3,
    POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR = 4,
};

void intro(void);
int gameLoop(void);
int showTransportRoute(char *inputBuffer, int inputBufferSize, enum PlayerPosition *playerPosition);
int showGuardHouse(char *inputBuffer, int inputBufferSize);
int showBreakRoom(char *inputBuffer, int inputBufferSize);
void readInput(char *inputBuffer, int inputBufferSize);

//int roomTransportRouteVisited = 0;
int positionTransportRouteEntranceVisited = 0;
int positionTransportRouteForkLiftVisited = 0;
int positionTransportRouteGuardHouseDoorVisited = 0;
int positionTransportRouteBreakRoomDoorVisited = 0;

//int roomGuardHouseVisited = 0;

//int roomBreakRoomVisited = 0;

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

    enum Room room = ROOM_TRANSPORT_ROUTE;
    enum PlayerPosition playerPosition = POSITION_TRANSPORT_ROUTE_ENTRANCE;

    char input[30] = "";
    int gameRunning = 1;

    while (gameRunning == 1) {

        switch (room) {
            case ROOM_TRANSPORT_ROUTE:
                room = showTransportRoute(input, sizeof(input), &playerPosition);
                break;
        
            case ROOM_GUARD_HOUSE:
                room = showGuardHouse(input, sizeof(input));
                break;
        
            case ROOM_BREAK_ROOM:
                room = showBreakRoom(input, sizeof(input));
                break;
        }

        if (strcmp(input, "exit") == 0) {
            gameRunning = 0;
        }
    }

    printf("\nDas Spiel wird beendet.\n");

    return 0;
}

void intro(void) {

    printf("\n");

    printf("Du stehst auf einem alten verlassenen Industriegelände. "
        "In der ferne siehst du ein großes Gebäude mit seitlichen Eingang, "
        "dessen Tür ein Spalt geöffnet zu sein scheint.\n\n");

    printf("Neugierig aber langsam nährst du dich.\n\n");

    printf("Ein lautes Geräusch ist plötzlich zu hören. BOOM...KLIRR... "
        "Es hörte sich metallisch an.\n\n");

    printf("Du betrittst die unheimlich einladend aussehende Stahltür und stehst verwundert "
        "auf einem großen Transportweg, welcher durch ein klaffendes Loch im Wellblech "
        "der Decke gerade soviel Tageslicht hinein lässt, dass du etwas sehen kannst.\n\n");

    printf("CAW...CAW... Krähen steigen wie aus dem nichts empor und "
        "werfen beim Fliegen durch das Loch in der Decke, "
        "einen riesigen Schatten auf dem Boden.\n\n");

    printf("Als du erschrocken nach oben schaust... KLACK... . Du drehst dich um.\n\n");

    printf("Die Tür ist zugefallen! Die Amatur fehlt. Du rüttelst vergeblich an ihr.\n\n");
}

int showTransportRoute(char *inputBuffer, int inputBufferSize, enum PlayerPosition *playerPosition) {

    if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE && positionTransportRouteEntranceVisited == 0) {

        printf("\n--- Der Transportweg ---\n");

        printf("Beim umsehen bemerkst du auf der rechten Seite eine Art Wachhäusschen am Rand "
            "des Transportwegs, auf der linken Seite steht ein Gabelstapler mitten auf dem Weg.\n\n");

        positionTransportRouteEntranceVisited = 1;

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE) {

        printf("\nAuf der rechten Seite ist das Wachhäusschen am Rand des Transportwegs "
            "und auf der linken Seite steht der Gabelstapler mitten auf dem Weg.\n\n");

    } 
    
    
    if (*playerPosition == POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR && positionTransportRouteGuardHouseDoorVisited == 0) {

        printf("\n--- Vor dem Wachhäusschen ---\n");

        printf("Du stehst vor dem engen Wachhäusschen am Rand des Transportwegs.\n\n");

        positionTransportRouteGuardHouseDoorVisited = 1;

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR) {

        printf("\nDu stehst wieder vor dem Wachhäusschen.\n\n");

    } 
    
    
    if (*playerPosition == POSITION_TRANSPORT_ROUTE_FORK_LIFT && positionTransportRouteForkLiftVisited == 0) {

        printf("\n--- Der Gabelstapler ---\n");

        printf("Du stehst vor dem alten Gabelstapler mitten auf dem Transportweg. "
            "Auf der rechten Seite siehst du eine Tür, am ende von einem schmalen Gang.\n\n");

        positionTransportRouteForkLiftVisited = 1;

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_FORK_LIFT) {

        printf("\nDu stehst wieder vor dem alten Gabelstapler.\n\n");

    } 
    
    
    if (*playerPosition == POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR && positionTransportRouteBreakRoomDoorVisited == 0) {

        printf("\n--- Der Pausenraum ---\n");

        printf("Du stehst vor einer Tür mit einem kleinen Glasfenster, "
            "wodurch du zusammengestellte Tische, sowie herumliegende Stühle sehen kannst.\n\n");
        
        positionTransportRouteBreakRoomDoorVisited = 1;

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR) {

        printf("\nDu stehst vor einer Tür mit einem kleinen Glasfenster, "
            "wodurch du zusammengestellte Tische, sowie herumliegende Stühle sehen kannst.\n\n");
        
    }

    readInput(inputBuffer, inputBufferSize);


    if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE) {

        if (strcmp(inputBuffer, "rechts") == 0) {

            printf("\nDu gehst zum Wachhaeusschen...\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR;

        } else if (strcmp(inputBuffer, "links") == 0) {

            printf("\nDu gehst zum Gabelstapler...\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_FORK_LIFT;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR) {

        if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            *playerPosition = POSITION_TRANSPORT_ROUTE_ENTRANCE;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_FORK_LIFT) {

        if (strcmp(inputBuffer, "rechts") == 0) {

            printf("\nDu gehst zur Tür...\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            *playerPosition = POSITION_TRANSPORT_ROUTE_ENTRANCE;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR) {

        if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            *playerPosition = POSITION_TRANSPORT_ROUTE_FORK_LIFT;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }
    }

    return ROOM_TRANSPORT_ROUTE;
}

int showGuardHouse(char *inputBuffer, int inputBufferSize) {

    readInput(inputBuffer, inputBufferSize);

    if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

        return ROOM_TRANSPORT_ROUTE;

    } else if (strcmp(inputBuffer, "exit") != 0) {

        printf("\nUnbekannter Befehl im Wachhäusschen.\n");
    }

    return ROOM_GUARD_HOUSE;
}

int showBreakRoom(char *inputBuffer, int inputBufferSize) {

    readInput(inputBuffer, inputBufferSize);

    if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

        return ROOM_TRANSPORT_ROUTE;

    } else if (strcmp(inputBuffer, "exit") != 0) {

        printf("\nUnbekannter Befehl im Pausenraum.\n");
    }

    return ROOM_BREAK_ROOM;
}
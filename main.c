#include <stdio.h>
#include <string.h>

typedef enum {
    ROOM_TRANSPORT_ROUTE = 1,
    ROOM_GUARD_HOUSE = 2,
    ROOM_BREAK_ROOM = 3
} Room;

typedef enum {
    POSITION_TRANSPORT_ROUTE_ENTRANCE = 1,
    POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR = 2,
    POSITION_TRANSPORT_ROUTE_FORK_LIFT = 3,
    POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR = 4,

    POSITION_GUARD_HOUSE_ENTRANCE = 5,

    POSITION_BREAK_ROOM_ENTRANCE = 6,
    POSITION_BREAK_ROOM_LOCKERS = 7,
    POSITION_BREAK_ROOM_KITCHENETTE = 8,
} PlayerPosition;

void intro(void);
int gameLoop(void);
int showTransportRoute(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition);
int showGuardHouse(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition);
int showBreakRoom(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition);
void readInput(char *inputBuffer, int inputBufferSize);

//int roomTransportRouteVisited = 0;
int positionTransportRouteEntranceVisited = 0;
int positionTransportRouteForkLiftVisited = 0;
int positionTransportRouteGuardHouseDoorVisited = 0;
int positionTransportRouteBreakRoomDoorVisited = 0;

//int roomGuardHouseVisited = 0;
int positionGuardHouseEntranceVisited = 0;

//int roomBreakRoomVisited = 0;
int positionBreakRoomEntranceVisited = 0;
int positionBreakRoomLockersVisited = 0;
int positionBreakRoomKitchenetteVisited = 0;

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

    Room room = ROOM_TRANSPORT_ROUTE;
    PlayerPosition playerPosition = POSITION_TRANSPORT_ROUTE_ENTRANCE;

    char input[30] = "";
    int gameRunning = 1;

    while (gameRunning == 1) {

        switch (room) {
            case ROOM_TRANSPORT_ROUTE:
                room = showTransportRoute(input, sizeof(input), &playerPosition);
                break;
        
            case ROOM_GUARD_HOUSE:
                room = showGuardHouse(input, sizeof(input), &playerPosition);
                break;
        
            case ROOM_BREAK_ROOM:
                room = showBreakRoom(input, sizeof(input), &playerPosition);
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

    printf("Die Tür ist zugefallen! Die Armatur fehlt. Du rüttelst vergeblich an ihr.\n\n");
}

int showTransportRoute(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition) {

    if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE && positionTransportRouteEntranceVisited == 0) {

        printf("\n--- Der Transportweg ---\n");

        printf("Beim umsehen bemerkst du auf der rechten Seite eine Art Wachhäusschen am Rand "
            "des Transportwegs, auf der linken Seite steht ein Gabelstapler mitten auf dem Weg.\n\n");
        positionTransportRouteEntranceVisited = 1;

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE) {

        printf("\nAuf der rechten Seite ist das Wachhäusschen am Rand des Transportweges "
            "und auf der linken Seite steht der Gabelstapler mitten auf dem Weg.\n\n");
    } 
    
    
    if (*playerPosition == POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR && positionTransportRouteGuardHouseDoorVisited == 0) {

        printf("\n--- Vor dem Wachhäusschen ---\n");

        printf("Du stehst vor dem Wachhäusschen, die Tür steht offen.\n\n");
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

    //////////////////////
    //    Navigation    //
    //////////////////////

    if (*playerPosition == POSITION_TRANSPORT_ROUTE_ENTRANCE) {

        if (strcmp(inputBuffer, "rechts") == 0) {

            printf("\nDu gehst zum Wachhäusschen...\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR;

        } else if (strcmp(inputBuffer, "links") == 0) {

            printf("\nDu gehst zum Gabelstapler...\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_FORK_LIFT;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }

    } else if (*playerPosition == POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR) {

        if (strcmp(inputBuffer, "betreten") == 0) {

            printf("\nDu betrittst das Wachhaus...\n");
            *playerPosition = POSITION_GUARD_HOUSE_ENTRANCE;

            return ROOM_GUARD_HOUSE;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

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

        if (strcmp(inputBuffer, "betreten") == 0) {

            printf("\nDu betrittst den Pausenraum...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_ENTRANCE;

            return ROOM_BREAK_ROOM;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            *playerPosition = POSITION_TRANSPORT_ROUTE_FORK_LIFT;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nDas ist keine gueltige Eingabe. Versuch es noch einmal.\n");
        }
    }

    return ROOM_TRANSPORT_ROUTE;
}

int showGuardHouse(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition) {

    if (*playerPosition == POSITION_GUARD_HOUSE_ENTRANCE && positionGuardHouseEntranceVisited == 0) {

        printf("\n--- Das Wachhaus ---\n");

        printf("Es ist klein, eng und ein unangenehmer geruch steigt dir in die Nase. "
            "Links von dir steht ein Schreibtisch, rechts eine alte Tasche und vor dir ein Schrank.\n\n");

        positionGuardHouseEntranceVisited = 1;

    } else if (*playerPosition == POSITION_GUARD_HOUSE_ENTRANCE) {

        printf("Links von dir steht ein Schreibtisch, rechts eine alte Tasche und vor dir ein Schrank.\n\n");
    } 

    readInput(inputBuffer, inputBufferSize);

    if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

        *playerPosition = POSITION_TRANSPORT_ROUTE_GUARD_HOUSE_DOOR;
        return ROOM_TRANSPORT_ROUTE;

    } else if (strcmp(inputBuffer, "exit") != 0) {

        printf("\nUnbekannter Befehl im Wachhäusschen.\n\n");
    }

    return ROOM_GUARD_HOUSE;
}

int showBreakRoom(char *inputBuffer, int inputBufferSize, PlayerPosition *playerPosition) {

    if (*playerPosition == POSITION_BREAK_ROOM_ENTRANCE && positionBreakRoomEntranceVisited == 0) {

        printf("\n--- Der Pausenraum ---\n");

        printf("Es stehen vier große Tische mittig im Raum aneinandergestellt, drumherum stehen und liegen Stühle. "
            "Vor Kopf an der Wand stehen eine Reihe Spinte, rechts vom Raum ist eine kleine Küchenzeile.\n\n");

        positionBreakRoomEntranceVisited = 1;

    } else if (*playerPosition == POSITION_BREAK_ROOM_ENTRANCE) {

        printf("Es stehen vier große Tische mittig im Raum aneinandergestellt, drumherum stehen und liegen Stühle. "
            "Vor Kopf an der Wand steht eine Reihe Spinte, rechts vom Raum ist eine kleine Küchenzeile.\n\n");
    } 


    if (*playerPosition == POSITION_BREAK_ROOM_LOCKERS && positionBreakRoomLockersVisited == 0) {

        printf("Interessant: vielleicht sind hier noch nützliche überbleibsel der früheren Arbeiter zu finden?\n\n");
        printf("Ein paar wenige der Spinte stehen offen, einige sind geschlossen und an zwei der Spinte hängt ein Schloss vor.\n\n");
        positionBreakRoomLockersVisited = 1;

    } else if (*playerPosition == POSITION_BREAK_ROOM_LOCKERS) {

        printf("Ein paar wenige der Spinte stehen offen, einige sind geschlossen und an zwei der Spinte hängt ein Schloss vor.\n\n");
    }


    if (*playerPosition == POSITION_BREAK_ROOM_KITCHENETTE && positionBreakRoomKitchenetteVisited == 0) {

        printf("Diese Küche wurde nicht unbedingt sauber hinterlassen. "
            "Aus dem Kühlschrank läuft etwas flüssiges heraus, in der Mikrowelle scheint etwas zu leben und "
            "es stehen alte Kaffeetassen im Spülbecken.\n\n");
        printf("Vor dir sind zwei Oberschränke und zwei Unterschränke mit Schubläden.\n\n");
        positionBreakRoomKitchenetteVisited = 1;

    } else if (*playerPosition == POSITION_BREAK_ROOM_KITCHENETTE) {

        printf("Vor dir sind zwei Oberschränke und zwei Unterschränke mit Schubläden.\n\n");
    }

    readInput(inputBuffer, inputBufferSize);

    if (*playerPosition == POSITION_BREAK_ROOM_ENTRANCE) {

        if ((strcmp(inputBuffer, "vorwärts") == 0 || strcmp(inputBuffer, "vorwaerts") == 0) && positionBreakRoomLockersVisited == 0) {

            printf("\nDu läufst an dem Tisch vorbei...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_LOCKERS;

        } else if (strcmp(inputBuffer, "vorwärts") == 0 || strcmp(inputBuffer, "vorwaerts") == 0) {

            printf("\nDu läufst an dem Tisch vorbei...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_LOCKERS;

        } else if (strcmp(inputBuffer, "rechts") == 0 && positionBreakRoomKitchenetteVisited == 0) {

            printf("\nAuf dem Weg stolperst du beinahe über einen liegenden Stuhl, stellst ihn auf und gehst weiter...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_KITCHENETTE;

        } else if (strcmp(inputBuffer, "rechts") == 0) {

            printf("\nDu läufst die Wand endlang an einem großen Foto vorbei...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_KITCHENETTE;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            printf("\n");
            *playerPosition = POSITION_TRANSPORT_ROUTE_BREAK_ROOM_DOOR;
            return ROOM_TRANSPORT_ROUTE;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nUnbekannter Befehl im Pausenraum.\n\n");
        }

    } else if (*playerPosition == POSITION_BREAK_ROOM_LOCKERS) {

        if (strcmp(inputBuffer, "rechts") == 0) {

                printf("\nDu gehst zur Küche...\n\n");
                *playerPosition = POSITION_BREAK_ROOM_KITCHENETTE;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            printf("\n");
            *playerPosition = POSITION_BREAK_ROOM_ENTRANCE;

        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nUnbekannter Befehl im Pausenraum.\n\n");
        }

    } else if (*playerPosition == POSITION_BREAK_ROOM_KITCHENETTE) {

        if (strcmp(inputBuffer, "links") == 0) {

            printf("\nDu gehst zu den Spinten...\n\n");
            *playerPosition = POSITION_BREAK_ROOM_LOCKERS;

        } else if (strcmp(inputBuffer, "zurück") == 0 || strcmp(inputBuffer, "zurueck") == 0) {

            printf("\n");
            *playerPosition = POSITION_BREAK_ROOM_ENTRANCE;
            
        } else if (strcmp(inputBuffer, "exit") != 0) {

            printf("\nUnbekannter Befehl im Pausenraum.\n\n");
        }

    return ROOM_BREAK_ROOM;
    }
}
#include <stdio.h>
#include <string.h>

void intro();
int gameLoop();
void showTransportRoute();
void showGuardHouse();
void showForkLift();
void readInput(char *buffer, int lenghts);

int room = 1;
int playerPosition = 0;
char input[30];

int transportRouteVisited = 0;
int guardHouseVisited = 0;
int forkLiftVisited = 0;

int main() {

    intro();
    gameLoop();

    return 0;
}

void readInput(char *buffer, int lenghts) {
    fgets(buffer, lenghts, stdin);
    size_t newline = strcspn(buffer, "\n");
    buffer[newline] = '\0';
}

int gameLoop() {

    while (strcmp(input, "exit") != 0) {

        switch (room) {
            case 1:
                showTransportRoute();
                break;
            case 2:
                showGuardHouse();
                break;
            case 3:
                showForkLift();
                break;
        }

    }

    printf("Das Spiel wird beendet.\n");

    return 0;
}

void intro(void) {

    printf("Du stehst vor einer alten verlassenen Industriehalle und siehst einen seitlichen Eingang, "
        "dessen Tür ein Spalt geöffnet zu sein scheint.\n");
    printf("Langsam aber neugierig nährst du dich.\n");
    printf("Ein fernes aber lautes Geräusch ist plötzlich zu hören. BOOM...KLIRR... Es hörte sich metallisch an.\n");
    printf("Du betrittst die unheimlich einladend aussehende Stahltür und stehst verwundert auf einem großen Transportweg, "
        "welcher durch ein klaffendes Loch im Wellblech der Decke vom Tageslicht beleuchtet wird.\n");
    printf("CAW...CAW... Krähen steigen wie aus dem nichts auf und beim Fliegen durch die offene Decke, "
        "werfen sie einen riesigen Schatten auf dem Boden.\n");
    printf("Als du erschrocken nach oben schaust... KLACK... . Du drehst dich zur Tür, durch die du die Halle betreten hast.\n");
    printf("Die Tür ist zugefallen! Die Amatur fehlt. Du rüttelst vergeblich an ihr.\n");

    playerPosition = 1;

}

void showTransportRoute() {

    if (playerPosition == 1 && transportRouteVisited == 0) {
        printf("\n--- Der Transportweg ---\n");
        printf("Beim umsehen bemerkst du auf der rechten Seite eine Art Wachhäusschen am rand des Transportwegs, auf der linken Seite steht ein Gabelstapler mitten auf dem Weg.\n");
        transportRouteVisited = 1;
    } else if (playerPosition == 1) {
        printf("Auf der rechten Seite ist das Wachhäusschen am rand des Transportwegs und auf der linken Seite steht der Gabelstapler mitten auf dem Weg.\n");
    }

    printf("Für welche Richtung entscheidest du dich?\n");

    readInput(input, sizeof(input));

    if (strcmp(input, "rechts") == 0) {
        printf("Du gehst zum Wachhaeusschen...\n");
        room = 2;
    } else if (strcmp(input, "links") == 0) {
        printf("Du gehst zum Gabelstapler...\n");
        room = 3;
    } else {
        printf("Das ist keine gueltige Eingabe. Versuch es noch einmal.\n");
    }
}

void showGuardHouse() {

    if (guardHouseVisited == 0) {
        printf("\n--- Das Wachhäusschen ---\n");
        guardHouseVisited = 1;
    }
    
    printf("Du stehst im engen Wachhäusschen. Hier liegt viel Staub. Zurück zum Transportweg geht es mit 'zurück'.\n");

    readInput(input, sizeof(input));

    if (strcmp(input, "zurück") == 0 || strcmp(input, "zurueck") == 0) {
        room = 1;
    } else if (strcmp(input, "exit") != 0) {
        printf("Unbekannter Befehl im Wachhäusschen.\n");
    }
}

void showForkLift() {

    if (forkLiftVisited == 0) {
        printf("\n--- Der Gabelstapler ---\n");
        forkLiftVisited = 1;
    }

    printf("Du untersuchst den alten Gabelstapler. Zurück zum Transportweg geht es mit 'zurück'.\n");

    readInput(input, sizeof(input));

    if (strcmp(input, "zurück") == 0 || strcmp(input, "zurueck") == 0) {
        room = 1;
    } else if (strcmp(input, "exit") != 0) {
        printf("Unbekannter Befehl beim Gabelstapler.\n");
    }
}
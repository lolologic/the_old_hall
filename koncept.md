*KONCEPT v0.1*

Ein kleines Textadventure in 2 Teilstücken, welches die Roboter-Verhaltens-Simulation 
einbezieht.
Der Roboter ist dein Begleiter und gibt dir nützliche Hinweise auf verspielte Art - 
allerdings nur wenn du ihn nicht verärgerst, oder bei deinen Antworten nicht 
allzu ungeschickt anstellst.
Betreten wird eine alte verlassene Industriehalle in der unterschiedliche Gegenstände
gefunden werden müssen: 
-   zum einen Nervennahrung, um sein eigenen Gemütszustand (Energielevel)
    im stabilen Wert zu halten
-   zum anderen Hilfsmittel, um dein Robo-Begleiter geschmiert und funktionfähig zu halten
    (falls er durch unvorsichtiges vorgehen, beeinträchtigt wird)
-   und Gegenstände, welche dir auf dem Abenteuer nützlich werden
-   das zweite Teilstück des Abenteuers wird nur durch einen speziellen Schlüssel erlangt,
    welcher mit Hilfe der anderen Gegenstände gefunden werden muss
-   um das Finale des zweiten Teilstücks zu erreichen, muss ein Rätsel gelöst werden - 
    welches nur gelöst werden kann, wenn man aufmerksam war was der Robo im verlauf des 
    Abenteuers beiläufig erwähnt oder nicht erwähnt hat

Alle Gegenstände (bis auf den speziellen Schlüssel) werden zu beginn des Spiels zufällig
auf unterschiedliche Bereiche (Räume, Möbel, Maschinen, Verstecke, etc.) verteilt.

Ein ASCII Startbildschirm wäre wünschenswert - genauso wie farbige Schrift in der Kosole.
Außerdem ein Effekt zum erfolgreichen bestehen des Abenteuers.

Speicherstand ermöglichen?
Eigenen Namen zum Start eingeben?
    
Das Spiel soll etwas düster werden, aber es wird niemand sterben.
Das Spiel endet mit "GAME OVER", wenn der Spieler sein Energielevel aufgebraucht hat und sein
Spielcharakter vor Müdigkeit kapituliert, um sich hinzusetzen und ein Nickerchen zu machen. 

ASCII-Startbild Beispiel:
printf("===================================================\n");
printf("           D I E    A L T E    H A L L E           \n");
printf("===================================================\n");
printf("                                                   \n");
printf("                   [::ROBO-01::]                   \n");
printf("                      /|__|\\                      \n");
printf("                     /_====_\\                     \n");
printf("                       |  |                        \n");
printf("                                                   \n");
printf("             Ein Roboter-Textadventure             \n");
printf("         Bereit für die verlassene Fabrik?         \n");
printf("===================================================\n");


ASCII-Art Game-Over-Screen Beispiel:
printf("===================================================\n");
printf("  G  A  M  E    O  V  E  R  :  N I C K E R C H E N \n");
printf("===================================================\n");
printf("                                                   \n");
printf("                      [:zZ:]                       \n");
printf("                      /|--|\\  *piep...*           \n");
printf("                     /_ == _\\                     \n");
printf("                       |  |                        \n");
printf("                                                   \n");
printf("     Die Müdigkeit war stärker als dein Wille.     \n");
printf(" Deine Energie ist auf 0 gesunken. Du schläfst ein.\n");
printf("===================================================\n");


ASCII-Art Sieger Beispiel:
printf("====================================================\n");
printf("        ! ! !  G L Ü C K W U N S C H  ! ! !         \n");
printf("====================================================\n");
printf("                  *KLICK-BLINK!*                    \n");
printf("                       [:D]                         \n");
printf("                     \\|--|                         \n");
printf("                     /_ == _\\                      \n");
printf("                       |  |                         \n");
printf("                                                    \n");
printf("               Das Tor öffnet sich!                 \n");
printf("Gemeinsam mit ROBO-01 schreitest du in die Freiheit.\n");
printf("====================================================\n");

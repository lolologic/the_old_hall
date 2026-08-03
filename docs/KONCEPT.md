# KONCEPT

**Version:** 0.1
**Projekt:** Roboter-Textadventure
**Arbeitstitel:** *Die alte Halle*

---

## 1. Grundidee

Das Projekt ist ein kleines, düsteres Textadventure in zwei Teilstücken, das die bereits entwickelte Roboter-Verhaltens-Simulation erweitert und in eine zusammenhängende Spielwelt integriert.

Der Spieler betritt gemeinsam mit **ROBO-01** eine alte, verlassene Industriehalle.

ROBO-01 begleitet den Spieler durch das Abenteuer und gibt auf verspielte Art nützliche Hinweise. Wie hilfreich diese Hinweise ausfallen, hängt jedoch vom Verhalten des Spielers und vom aktuellen Zustand des Roboters ab.

Wer ROBO-01 verärgert, schlecht behandelt oder sich bei bestimmten Entscheidungen besonders ungeschickt anstellt, muss damit rechnen, dass der Roboter weniger kooperativ reagiert.

---

## 2. Atmosphäre

Das Spiel soll eine leicht düstere und verlassene Atmosphäre vermitteln.

Die Industriehalle besteht aus alten Räumen, Maschinen, Möbeln und versteckten Bereichen. Trotz der düsteren Umgebung soll das Spiel humorvolle und verspielte Elemente enthalten, insbesondere durch ROBO-01 und seine Reaktionen.

Der Spieler kann im Verlauf des Spiels scheitern, allerdings soll niemand sterben.

Stattdessen endet das Spiel mit **GAME OVER**, wenn das Energielevel des Spielers vollständig aufgebraucht wurde.

Der Spielcharakter ist dann so erschöpft, dass er vor Müdigkeit kapituliert, sich hinsetzt und einschläft.

---

## 3. Spielziel

Der Spieler muss die verlassene Industriehalle untersuchen, Gegenstände finden und sinnvoll einsetzen.

Das Abenteuer besteht aus zwei Teilstücken.

### Teilstück 1

Im ersten Teilstück wird die Industriehalle erkundet.

Dabei müssen verschiedene Gegenstände gefunden und verwendet werden.

Das Ziel besteht darin, schließlich einen besonderen Schlüssel zu finden, der den Zugang zum zweiten Teilstück ermöglicht.

### Teilstück 2

Das zweite Teilstück kann nur mit dem speziellen Schlüssel betreten werden.

Um anschließend das Finale des Spiels zu erreichen, muss ein Rätsel gelöst werden.

Die Lösung dieses Rätsels ergibt sich aus Informationen, die ROBO-01 während des bisherigen Abenteuers beiläufig erwähnt – oder möglicherweise bewusst nicht erwähnt – hat.

Der Spieler muss daher während des gesamten Spiels aufmerksam auf die Aussagen und das Verhalten des Roboters achten.

---

## 4. Spielerzustand

Der Spieler besitzt ein eigenes **Energielevel**.

Aktionen und Entscheidungen können Energie verbrauchen.

Sinkt das Energielevel auf `0`, endet das Abenteuer.

### Energie wiederherstellen

In der Industriehalle kann sogenannte **Nervennahrung** gefunden werden.

Diese Gegenstände können verwendet werden, um das Energielevel des Spielers zu stabilisieren oder wieder zu erhöhen.

---

## 5. ROBO-01

ROBO-01 ist Begleiter, Hinweisgeber und eigenständiger Bestandteil der Spielmechanik.

Sein Verhalten soll sich abhängig von vorherigen Ereignissen und Entscheidungen verändern.

Mögliche Einflussfaktoren:

* Umgang des Spielers mit ROBO-01
* Antworten innerhalb von Dialogen
* Entscheidungen des Spielers
* unvorsichtige Aktionen
* technischer Zustand des Roboters
* gefundene oder verwendete Gegenstände

ROBO-01 kann dadurch beispielsweise hilfsbereit, verspielt, genervt oder technisch beeinträchtigt reagieren.

Sein Zustand soll außerdem Einfluss darauf haben, welche Hinweise er dem Spieler gibt und wie eindeutig diese Hinweise ausfallen.

---

## 6. Gegenstände

Im Spiel gibt es unterschiedliche Arten von Gegenständen.

### Nervennahrung

Gegenstände, welche das Energielevel des Spielers stabilisieren oder erhöhen.

### Hilfsmittel für ROBO-01

Gegenstände, mit denen der Roboter gepflegt, repariert oder funktionsfähig gehalten werden kann.

Beispielsweise könnten sie benötigt werden, wenn ROBO-01 durch unvorsichtiges Vorgehen des Spielers beeinträchtigt wurde.

### Hilfsmittel für das Abenteuer

Gegenstände, die beim Erkunden der Industriehalle oder beim Lösen bestimmter Situationen benötigt werden.

Mögliche Beispiele:

* Taschenlampe
* Werkzeug
* Sicherung
* Brechstange
* Kabel
* Zugangskarte

Die endgültige Gegenstandsliste wird während der weiteren Planung festgelegt.

### Spezialschlüssel

Ein besonderer Schlüssel ermöglicht den Zugang zum zweiten Teilstück des Abenteuers.

Dieser Schlüssel wird **nicht zufällig direkt in der Spielwelt platziert**.

Er muss mithilfe anderer Gegenstände, Hinweise oder Aktionen gefunden beziehungsweise zugänglich gemacht werden.

---

## 7. Zufällige Gegenstandsverteilung

Zu Beginn eines neuen Spiels sollen die normalen Gegenstände zufällig auf verschiedene Orte innerhalb der Industriehalle verteilt werden.

Mögliche Fundorte:

* Räume
* Schränke
* Maschinen
* Regale
* Möbel
* Kisten
* versteckte Bereiche
* andere untersuchbare Objekte

Der spezielle Schlüssel ist von dieser zufälligen Verteilung ausgenommen.

Die zufällige Platzierung muss später so umgesetzt werden, dass das Abenteuer trotz unterschiedlicher Verteilungen immer lösbar bleibt.

---

## 8. Rätsel und Aufmerksamkeit

Ein wichtiger Bestandteil des Spiels soll sein, dass nicht jede relevante Information ausdrücklich als Hinweis gekennzeichnet wird.

ROBO-01 kann während des Abenteuers beiläufig Dinge erwähnen, kommentieren oder auf Besonderheiten reagieren.

Einige dieser Aussagen werden später für das finale Rätsel benötigt.

Dadurch soll Aufmerksamkeit belohnt werden.

Der Zustand von ROBO-01 kann möglicherweise beeinflussen:

* ob ein Hinweis überhaupt gegeben wird
* wie eindeutig er formuliert wird
* ob zusätzliche Informationen genannt werden
* ob ROBO-01 nur eine Andeutung macht

Das finale Rätsel muss jedoch unabhängig von zufälligen Ereignissen grundsätzlich lösbar bleiben.

---

## 9. Spielende

Es sind mindestens zwei grundlegende Spielenden vorgesehen.

### GAME OVER – Nickerchen

Das Energielevel des Spielers erreicht `0`.

Der Spielcharakter ist vollständig erschöpft, setzt sich hin und schläft ein.

Das Abenteuer ist damit beendet.

### Erfolgreiches Ende

Der Spieler:

1. findet die notwendigen Gegenstände,
2. gelangt an den Spezialschlüssel,
3. erreicht das zweite Teilstück,
4. löst das finale Rätsel
5. und verlässt gemeinsam mit ROBO-01 die alte Industriehalle.

---

## 10. Darstellung

Das Spiel läuft vollständig in der Konsole.

Geplant beziehungsweise erwünscht sind:

* ASCII-Art
* Startbildschirm
* GAME-OVER-Bildschirm
* Siegerbildschirm
* farbige Konsolenausgabe
* unterschiedliche Farben für wichtige Meldungen
* besondere Effekte beim erfolgreichen Abschluss des Spiels

Diese Elemente dienen hauptsächlich der Atmosphäre und sollen erst nach der grundlegenden Spiellogik umgesetzt werden.

---

## 11. Mögliche Erweiterungen

Folgende Funktionen sind vorgesehen beziehungsweise werden später geprüft:

* Eingabe eines eigenen Spielernamens
* Speichern eines Spielstands
* Laden eines Spielstands
* unterschiedliche Reaktionen von ROBO-01
* mehrere mögliche Fundorte
* zufällige Gegenstandsverteilung
* unterschiedliche Dialogvarianten
* farbige Konsolenausgabe
* zusätzliche ASCII-Art
* Effekte beim erfolgreichen Abschluss

---

# ASCII-Art-Entwürfe

## Startbildschirm

```c
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
```

---

## GAME-OVER-Bildschirm

```c
printf("===================================================\n");
printf(" G  A  M  E   O  V  E  R :  N I C K E R C H E N    \n");
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
```

---

## Siegerbildschirm

```c
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
```

---

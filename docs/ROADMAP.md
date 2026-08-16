# ROADMAP

**Version des Dokuments:** 0.2
**Projekt:** Roboter-Textadventure
**Arbeitstitel:** The Old Hall

---

## Ziel

Diese Roadmap beschreibt die schrittweise Entwicklung des Textadventures.

Jede Version soll einen klar abgegrenzten Entwicklungsstand darstellen. Neue Mechaniken werden möglichst erst begonnen, wenn die vorherige Stufe stabil funktioniert.

Die Checklisten dienen dabei als konkrete Arbeitsgrundlage und können während der Entwicklung erweitert oder angepasst werden.

---

## Version 0.1 – Grundkonzept

**Ziel:** Die grundlegende Idee, Spielmechanik und Entwicklungsrichtung des Projekts festlegen.

### Geplant

* grundlegende Spielidee definieren
* Atmosphäre und Setting festlegen
* Rolle von ROBO-01 definieren
* grundlegende Spielmechaniken festlegen
* zwei Spielabschnitte konzeptionell festlegen
* Energie-, Gegenstands- und Rätselmechanik grob planen
* Projektstruktur vorbereiten
* Entwicklungsroadmap erstellen

### Checkliste

* [x] Grundidee des Textadventures festlegen
* [x] Setting der verlassenen Industriehalle definieren
* [x] ROBO-01 als Begleiter und Spielelement festlegen
* [x] Spielerenergie als Spielmechanik definieren
* [x] grundlegende Gegenstandstypen festlegen
* [x] Spezialschlüssel als Übergang zum zweiten Abschnitt definieren
* [x] finales Aufmerksamkeitsrätsel konzeptionell festlegen
* [x] mögliche zufällige Gegenstandsverteilung einplanen
* [x] GAME-OVER-Bedingung festlegen
* [x] erfolgreiches Spielende festlegen
* [x] `KONCEPT.md` erstellen
* [x] `ROADMAP.md` erstellen
* [x] Projektdokumentation unter `docs/` strukturieren
* [x] Konzept und Roadmap vor Beginn von Version 0.2 abschließend prüfen

---

## Version 0.2 – Grundlegende Räume und Spielschleife

**Ziel:** Eine erste navigierbare Spielwelt und einen dauerhaft laufenden Spielablauf implementieren.

### Geplant

* grundlegende Spielschleife
* mehrere Räume und Bereiche
* Positionen und Perspektiven innerhalb von Räumen
* aktueller Raum des Spielers
* aktuelle Position des Spielers innerhalb eines Raums
* getrennte Verwaltung von Standort und Blickrichtung des Spielers
* grundlegende Himmelsrichtungen innerhalb der Spielwelt
* Bewegung zwischen Positionen und Räumen
* relative Navigation abhängig von der aktuellen Blickrichtung
* textbasierte Navigation über ausgeschriebene Befehle
* zusammengesetzte Spielerbefehle aus Aktion und optionalem Ziel oder Richtung
* grundlegende zentrale Befehlsauswertung
* grundlegende Eingabeverarbeitung
* Beenden des Spiels durch den Spieler
* allgemeine `zurück`-Navigation zum vorherigen Standort
* interne Karte der Spielwelt als Grundlage für räumliche Navigation und Himmelsrichtungen
* erste Ausarbeitung der Raum-, Positions- und Umgebungstexte
* Prüfung einer Auslagerung der Spieltexte aus dem Programmcode

### Checkliste

#### Grundstruktur und Spielzustand

* [x] grundlegende Programmstruktur anlegen
* [x] Intro vom eigentlichen Spielablauf trennen
* [x] zentrale Spielschleife implementieren
* [x] aktuellen Raum des Spielers speichern
* [x] aktuelle Position innerhalb eines Raums speichern
* [x] Raum und Position als getrennte Zustände modellieren
* [x] Räume und Positionen durch benannte `typedef enum`-Werte statt Magic Numbers modellieren
* [x] ersten Raum mit mehreren Positionen/Perspektiven beginnen
* [x] mindestens drei grundlegende Räume oder größere Bereiche definieren
* [ ] mögliche Raumwechsel vollständig festlegen
* [ ] mögliche Positionswechsel innerhalb der Räume vollständig festlegen

#### Navigation und Eingabe

* [x] Spielerbefehl über einen Eingabepuffer einlesen
* [x] zentrale Funktion für die Texteingabe implementieren
* [x] Zeilenumbruch nach `fgets()` entfernen
* [x] ausgeschriebene Navigationsbefehle verarbeiten
* [x] erste Bewegung zwischen Positionen implementieren
* [x] erste Bewegung zwischen echten Räumen implementieren
* [x] ungültige Eingaben behandeln
* [x] Möglichkeit zum freiwilligen Beenden mit `exit` einbauen
* [x] `exit` zentral über die Spielschleife auswerten
* [ ] grundlegende Befehlsstruktur aus Aktion und optionaler Richtung oder Ziel festlegen
* [ ] erste zusammengesetzte Navigationsbefehle wie `gehe nach rechts` verarbeiten
* [ ] erste Wahrnehmungsbefehle wie `schaue nach rechts` oder `sieh dich um` ermöglichen
* [ ] Navigation und Wahrnehmung als unterschiedliche Aktionen behandeln
* [ ] grundlegende Himmelsrichtungen für die Spielwelt definieren
* [ ] aktuelle Blickrichtung des Spielers separat vom Standort modellieren
* [ ] zwischen absoluten Richtungen wie Norden/Osten/Süden/Westen und relativen Richtungen wie links/rechts/vorwärts unterscheiden
* [ ] festlegen, wie sich relative Richtungsbefehle aus der aktuellen Blickrichtung ergeben
* [ ] Drehen bzw. Ändern der Blickrichtung ermöglichen
* [ ] Blickbefehle wie `schaue nach rechts` ermöglichen, ohne automatisch die Spielerposition zu verändern
* [ ] Bewegungsbefehle und reine Blickrichtungsänderungen als getrennte Aktionen behandeln
* [ ] prüfen, ob die Auswertung der Spielerbefehle in eine zentrale Parser-/Command-Funktion ausgelagert werden soll
* [ ] nach Einführung geeigneter Datenstrukturen prüfen, ob ein Spielerbefehl als eigener strukturierter Zustand modelliert werden soll
* [ ] vorherigen Raum speichern
* [ ] vorherige Position speichern
* [ ] allgemeinen `zurück`-Befehl zum vorherigen Standort implementieren
* [ ] sicherstellen, dass `zurück` auch über Raumgrenzen hinweg funktioniert

#### Räume und Perspektiven

* [x] Transportweg als ersten Raum/Bereich anlegen
* [x] Startposition an der verschlossenen Eingangstür definieren
* [x] Position vor dem Wachhäuschen definieren
* [x] Position beim Gabelstapler definieren
* [x] Position vor dem Pausenraum definieren
* [x] unterschiedliche Beschreibungen abhängig von der Spielerposition ermöglichen
* [x] Wachhäuschen als betretbaren eigenen Raum anlegen
* [x] erste Position innerhalb des Wachhäuschens definieren
* [x] Rückweg vom Wachhäuschen zum Transportweg implementieren
* [x] entscheiden, ob der Gabelstapler nur mehrere Positionen oder einen eigenen Pseudo-Raum benötigt
* [x] Pausenraum als betretbaren eigenen Raum anbinden
* [x] erste Position innerhalb des Pausenraums definieren
* [x] Position bei den Spinten im Pausenraum definieren
* [x] Position bei der Küchenzeile im Pausenraum definieren
* [x] erste Positionswechsel innerhalb des Pausenraums implementieren
* [ ] Navigation an jeder Position auf tatsächlich mögliche Wege beschränken
* [ ] Wachhäuschen mit weiteren grundlegenden Positionen oder Perspektiven ausarbeiten
* [ ] grundlegende Navigation innerhalb des Pausenraums vollständig festlegen
* [ ] weitere Räume und Positionen des ersten Spielabschnitts festlegen
* [ ] Raumwechsel und Positionswechsel vollständig testen

#### Spielzustand und Funktionsstruktur

* [x] `room` aus dem globalen Zustand entfernen und in `gameLoop()` verwalten
* [x] Raumwechsel über Rückgabewerte der Raumfunktionen ermöglichen
* [x] `playerPosition` aus dem globalen Zustand entfernen und in `gameLoop()` verwalten
* [x] `playerPosition` per Pointer an Raumfunktionen übergeben
* [x] Eingabepuffer lokal in `gameLoop()` verwalten
* [x] Eingabepuffer und Puffergröße gezielt an Raumfunktionen übergeben
* [x] Raum- und Positionszustände über eigene `typedef enum`-Typen ausdrücken
* [ ] `struct` für zusammengehörige Spielzustände praktisch erproben
* [ ] `Room` und `PlayerPosition` zu einem gemeinsamen `Location`-Zustand zusammenfassen
* [ ] `Location` ausschließlich für den tatsächlichen Standort des Spielers verwenden
* [ ] aktuellen Standort über einen gemeinsamen `Location`-Zustand verwalten
* [ ] Blickrichtung als eigenen Zustand getrennt von `Location` modellieren
* [ ] prüfen, ob Standort und Blickrichtung später gemeinsam in einem übergeordneten Spielerzustand gebündelt werden sollen
* [ ] vorherigen Standort als vollständige Kombination aus Raum und Position speichern
* [ ] festlegen, ob bei einer allgemeinen `zurück`-Navigation zusätzlich die vorherige Blickrichtung wiederhergestellt werden soll
* [ ] allgemeine Navigation auf Basis von aktuellem und vorherigem Standort prüfen
* [ ] verbleibende globale Zustandsvariablen überprüfen
* [ ] Besuchszustände der Räume und Positionen sauber in den Spielzustand integrieren
* [ ] prüfen, welche weiteren zusammengehörigen Spielzustände später sinnvoll durch `struct` gebündelt werden können
* [ ] prüfen, ob Spieltexte aus dem Programmcode in externe Inhaltsdateien ausgelagert werden sollen
* [ ] geeignetes Dateiformat und Zugriffsmodell für ausgelagerte Spieltexte festlegen

#### Karte und räumliche Planung

* [ ] erste spielbare Räume und Positionen technisch fertigstellen
* [ ] interne Karte der bisher implementierten Spielwelt zeichnen
* [ ] Räume, Positionen und Verbindungen auf der internen Karte kennzeichnen
* [ ] grundlegende Himmelsrichtungen auf der Karte festlegen
* [ ] Verbindungen zwischen Positionen anhand ihrer tatsächlichen Himmelsrichtung definieren
* [ ] interne Weltkarte als Grundlage für eine räumlich konsistente Navigation verwenden
* [ ] interne Weltkarte unabhängig von einer später für den Spieler sichtbaren Karte behandeln
* [ ] anhand der Karte unlogische oder unnötige Wege überprüfen
* [ ] fehlende Verbindungen oder Positionen ergänzen
* [ ] Raum- und Positionsbezeichnungen anhand der Karte überprüfen
* [ ] prüfen, ob relative Befehle wie `links`, `rechts` und `vorwärts` mit Karte und Blickrichtung konsistent sind
* [ ] Navigation nach Fertigstellung der ersten Karte erneut testen

#### Texte und Atmosphäre

* [ ] Beschreibungen der ersten Räume und Positionen ausarbeiten
* [ ] unterschiedliche Perspektivtexte für wiederholte Besuche ausarbeiten
* [ ] Übergangstexte zwischen Positionen und Räumen ergänzen
* [ ] erste Platzhaltertexte durch atmosphärische Spieltexte ersetzen
* [ ] darauf achten, dass Texte und tatsächliche Navigationsmöglichkeiten übereinstimmen
* [ ] Texte des ersten Spielabschnitts vorläufig sprachlich überarbeiten
* [ ] nach Entscheidung über die Textauslagerung die ersten Raum- und Positionstexte entsprechend strukturieren

#### Abschluss von Version 0.2

* [ ] Navigation zwischen allen für v0.2 vorgesehenen Bereichen testen
* [ ] Rückkehrwege vollständig testen
* [ ] `exit` aus allen erreichbaren Spielsituationen testen
* [ ] ungültige Eingaben an allen Positionen testen
* [ ] prüfen, ob Raum- und Positionsmodell für die weitere Spielwelt ausreicht
* [ ] prüfen, ob das Modell aus Standort, Blickrichtung und relativer Navigation für die weitere Spielwelt ausreicht
* [ ] Karte und Code auf Übereinstimmung prüfen
* [ ] Version 0.2 als stabilen navigierbaren Grundstand abschließen

---

## Version 0.3 – Spielerenergie und einfache Gegenstände

**Ziel:** Den ersten echten Spielzustand und grundlegende Interaktionen mit Gegenständen einführen.

### Geplant

* Energielevel des Spielers
* Energieverbrauch
* GAME OVER bei Energie `0`
* erste einfache Gegenstände
* feste Gegenstandspositionen
* Nervennahrung
* einfacher Schlüssel

### Checkliste

* [ ] Energielevel des Spielers definieren
* [ ] Startenergie festlegen
* [ ] festlegen, welche Aktionen Energie verbrauchen
* [ ] Energieverbrauch implementieren
* [ ] Energielevel anzeigen
* [ ] GAME OVER bei Energie `0` implementieren
* [ ] ersten Gegenstand definieren
* [ ] Gegenstände festen Räumen oder Fundorten zuweisen
* [ ] Nervennahrung implementieren
* [ ] Energie durch Nervennahrung erhöhen
* [ ] einfachen Schlüssel implementieren
* [ ] verschlossenen Bereich oder Ausgang implementieren
* [ ] Schlüssel zur Freischaltung verwenden
* [ ] Energie- und Gegenstandslogik gemeinsam testen

---

## Version 0.4 – Inventar und Gegenstandsinteraktionen

**Ziel:** Aus einzelnen Gegenständen ein zusammenhängendes Inventar- und Interaktionssystem entwickeln.

### Geplant

* Inventar
* mehrere Gegenstände
* Gegenstände aufnehmen
* Gegenstände verwenden
* Gegenstände untersuchen
* unterschiedliche Gegenstandstypen
* erste Abhängigkeiten zwischen Gegenständen und Umgebung

### Checkliste

* [ ] Inventarstruktur festlegen
* [ ] mehrere Gegenstände definieren
* [ ] Gegenstände aufnehmen können
* [ ] aufgenommene Gegenstände aus der Spielwelt entfernen
* [ ] Inventar anzeigen
* [ ] prüfen können, ob ein Gegenstand vorhanden ist
* [ ] Gegenstände verwenden können
* [ ] Gegenstände untersuchen können
* [ ] Nervennahrung in das Inventarsystem integrieren
* [ ] Hilfsmittel für die Spielwelt implementieren
* [ ] erste Gegenstandsabhängigkeiten einbauen
* [ ] Aktionen ohne benötigten Gegenstand sinnvoll behandeln
* [ ] Inventar- und Gegenstandslogik testen
* [ ] Befehlsauswertung um Gegenstandsaktionen erweitern
* [ ] Befehle wie `nehme <Gegenstand>`, `untersuche <Gegenstand>` und `lege <Gegenstand> ab` ermöglichen
* [ ] Befehle mit Aktion und Ziel wie `benutze <Gegenstand> mit <Ziel>` vorbereiten
* [ ] sicherstellen, dass dieselbe grundlegende Befehlsstruktur für Navigation und Gegenstandsinteraktionen verwendet wird
* [ ] prüfen, ob eine Karte der Anlage als findbarer Gegenstand implementiert werden soll
* [ ] Spielerkarte als eigenständigen Inventargegenstand behandeln
* [ ] festlegen, welche Bereiche und Informationen auf der Spielerkarte sichtbar sein sollen
* [ ] sicherstellen, dass die Spielerkarte von der vollständigen internen Weltkarte getrennt bleibt

---

## Version 0.5 – ROBO-01-Zustände und Dialoge

**Ziel:** ROBO-01 zu einem dynamischen Begleiter machen, dessen Verhalten vom bisherigen Spielverlauf abhängt.

### Geplant

* unterschiedliche Roboterzustände
* Stimmung
* technischer Zustand
* Dialogsystem
* Reaktionen auf Spieleraktionen
* unterschiedliche Hinweise
* erste Hilfsmittel für ROBO-01

### Checkliste

* [ ] mögliche Stimmungen von ROBO-01 definieren
* [ ] technischen Zustand von ROBO-01 definieren
* [ ] Stimmung und technischen Zustand getrennt speichern
* [ ] Ausgangszustände festlegen
* [ ] Zustandsänderungen definieren
* [ ] Spieleraktionen mit Zustandsänderungen verknüpfen
* [ ] Dialoge abhängig vom Zustand ausgeben
* [ ] unterschiedliche Reaktionen auf Spielerentscheidungen implementieren
* [ ] Möglichkeit zum direkten Ansprechen von ROBO-01 implementieren
* [ ] Hilfsmittel für ROBO-01 einführen
* [ ] Reparatur- oder Pflegeaktionen implementieren
* [ ] erste spielrelevante Hinweise durch ROBO-01 integrieren
* [ ] sicherstellen, dass schlechte Zustände das Spiel nicht unlösbar machen
* [ ] Roboterlogik ausführlich testen

---

## Version 0.6 – Zufällige Gegenstandsverteilung

**Ziel:** Neue Spieldurchläufe durch unterschiedliche Gegenstandspositionen variabler gestalten.

### Geplant

* zufällige Verteilung normaler Gegenstände
* mehrere mögliche Fundorte
* unterschiedliche Verteilungen pro Spieldurchlauf
* Spezialschlüssel weiterhin nicht direkt zufällig platzieren
* Schutz vor unlösbaren Konstellationen

### Checkliste

* [ ] Zufallsgenerator initialisieren
* [ ] mögliche Fundorte definieren
* [ ] Gegenstände für zufällige Verteilung festlegen
* [ ] Gegenstände zufällig auf Fundorte verteilen
* [ ] Spezialschlüssel von der direkten Zufallsverteilung ausschließen
* [ ] Regeln für doppelte Belegungen festlegen
* [ ] unerwünschte Gegenstandskombinationen verhindern
* [ ] notwendige Gegenstände erreichbar halten
* [ ] logische Abhängigkeiten zwischen Gegenständen prüfen
* [ ] unlösbare Spielzustände verhindern
* [ ] mehrere neue Spiele mit unterschiedlichen Verteilungen testen
* [ ] Zufallsmechanik auf reproduzierbare Fehler prüfen

---

## Version 0.7 – Zweites Teilstück und finales Rätsel

**Ziel:** Das vollständige Abenteuer mit dem zweiten Spielabschnitt und dem eigentlichen Finale fertigstellen.

### Geplant

* Spezialschlüssel
* Weg zum Spezialschlüssel
* zweiter Spielabschnitt
* spielübergreifende Hinweise
* finales Aufmerksamkeitsrätsel
* vollständige Gewinnbedingung

### Checkliste

* [ ] Weg zum Spezialschlüssel entwerfen
* [ ] notwendige Voraussetzungen für den Spezialschlüssel festlegen
* [ ] Spezialschlüssel implementieren
* [ ] Zugang zum zweiten Spielabschnitt implementieren
* [ ] zweiten Spielabschnitt vollständig entwerfen
* [ ] Räume oder Bereiche des zweiten Abschnitts implementieren
* [ ] relevante Informationen für das finale Rätsel festlegen
* [ ] Hinweise sinnvoll über das gesamte Abenteuer verteilen
* [ ] unterschiedliche ROBO-01-Zustände bei Hinweisen berücksichtigen
* [ ] finales Rätsel entwerfen
* [ ] finales Rätsel implementieren
* [ ] falsche Antworten behandeln
* [ ] sicherstellen, dass das Rätsel immer logisch lösbar bleibt
* [ ] vollständige Gewinnbedingung implementieren
* [ ] kompletten Spielablauf von Anfang bis Ende testen

---

## Version 0.8 – Darstellung, Sound und Effekte

**Ziel:** Die funktionierende Spielmechanik atmosphärisch, visuell und akustisch aufwerten.

### Geplant

* ASCII-Art
* Startbildschirm
* GAME-OVER-Bildschirm
* Siegerbildschirm
* farbige Konsolenausgabe
* Hervorhebung wichtiger Meldungen
* zeitgesteuerte Textausgabe
* unterschiedliche Ausgabegeschwindigkeiten für Atmosphäre und Spannung
* kleinere Texteffekte
* Prüfung einer Terminalbibliothek wie `ncurses`
* Transition-Animationen zwischen besonderen Szenen, Räumen oder Spielzuständen
* Soundeffekte für ausgewählte Ereignisse und Umgebungsgeräusche
* Prüfung einer geeigneten technischen Lösung für die Soundausgabe
* klare Trennung zwischen Spiellogik und Darstellung bzw. Sound

### Checkliste

* [ ] ASCII-Startbildschirm integrieren
* [ ] GAME-OVER-Bildschirm integrieren
* [ ] Siegerbildschirm integrieren
* [ ] Darstellungsstil für ROBO-01 festlegen
* [ ] Farbschema für die Konsole definieren
* [ ] farbige Konsolenausgabe implementieren
* [ ] Farben nach ihrer Bedeutung strukturieren
* [ ] wichtige Spielmeldungen hervorheben
* [ ] Dialoge von ROBO-01 visuell unterscheiden
* [ ] zentrale Funktion für zeitverzögerte Textausgabe implementieren
* [ ] Ausgabegeschwindigkeit zentral steuerbar machen
* [ ] sinnvolle Verzögerungen zwischen Zeichen, Wörtern oder Textabschnitten festlegen
* [ ] wichtige atmosphärische Szenen mit angepasstem Timing versehen
* [ ] prüfen, ob `ncurses` für die Terminaldarstellung eingesetzt werden soll
* [ ] bei Einsatz von `ncurses` grundlegende Terminaldarstellung strukturieren
* [ ] geeignete Stellen für Transition-Animationen festlegen
* [ ] erste einfache Transition-Animation implementieren
* [ ] sicherstellen, dass Animationen den eigentlichen Spielzustand nicht beeinflussen
* [ ] geeignete Ereignisse für Soundeffekte festlegen
* [ ] technische Lösung für Soundausgabe auswählen
* [ ] erste Soundeffekte oder Umgebungsgeräusche integrieren
* [ ] Lautstärke und Häufigkeit von Soundeffekten auf eine angenehme Nutzung abstimmen
* [ ] sicherstellen, dass das Spiel auch ohne Sound logisch vollständig spielbar bleibt
* [ ] Darstellungs-, Animations- und Soundlogik möglichst von der eigentlichen Spiellogik trennen
* [ ] Erfolgseffekt implementieren
* [ ] gegebenenfalls weitere audiovisuelle Effekte einbauen
* [ ] Darstellung im verwendeten Terminal testen
* [ ] sicherstellen, dass Effekte die Spiellogik nicht beeinflussen

---

## Version 0.9 – Speichern und Laden

**Ziel:** Den vollständigen Spielzustand dauerhaft speichern und später wiederherstellen können.

### Geplant

* Speicherstand
* Laden eines Speicherstands
* Speicherung aller relevanten Zustände
* Fehlerbehandlung für Speicherdateien

### Checkliste

* [ ] festlegen, welche Daten gespeichert werden müssen
* [ ] Speicherformat definieren
* [ ] aktuellen Raum speichern
* [ ] Spielerposition innerhalb des Raums speichern
* [ ] vorherigen Standort speichern, falls für die Navigation benötigt
* [ ] Spielerenergie speichern
* [ ] Inventar speichern
* [ ] Gegenstandspositionen speichern
* [ ] Zustände von ROBO-01 speichern
* [ ] Spielfortschritt speichern
* [ ] relevante Rätsel- und Hinweiszustände speichern
* [ ] Spielstand in Datei schreiben
* [ ] Spielstand aus Datei laden
* [ ] geladenen Spielzustand vollständig wiederherstellen
* [ ] fehlende Speicherdatei behandeln
* [ ] ungültige oder beschädigte Speicherdateien behandeln
* [ ] Speichern und Laden in unterschiedlichen Spielsituationen testen

---

## Version 1.0 – Vollständige spielbare Version

**Ziel:** Das gesamte Projekt stabilisieren, überarbeiten und als vollständige erste Hauptversion fertigstellen.

### Geplant

* vollständige Texte
* vollständige Dialoge
* Überarbeitung der Spielbalance
* Eingabevalidierung
* Fehlerbehandlung
* vollständige Tests
* Bereinigung des Codes
* abschließende Dokumentation

### Checkliste

* [ ] alle Platzhaltertexte ersetzen
* [ ] alle Dialoge fertigstellen
* [ ] Texte sprachlich überarbeiten
* [ ] Atmosphäre im gesamten Spiel vereinheitlichen
* [ ] Energieverbrauch ausbalancieren
* [ ] Gegenstandsverteilung ausbalancieren
* [ ] Verhalten von ROBO-01 überprüfen
* [ ] alle Eingaben auf Fehlerfälle prüfen
* [ ] unerwartete Eingaben abfangen
* [ ] vollständigen Code auf unnötige Wiederholungen prüfen
* [ ] Funktionen sinnvoll strukturieren
* [ ] Variablen und Funktionen verständlich benennen
* [ ] Warnungen des Compilers beseitigen
* [ ] vollständiges Spiel mehrfach durchspielen
* [ ] unterschiedliche Spielwege testen
* [ ] unterschiedliche Gegenstandsverteilungen testen
* [ ] unterschiedliche ROBO-01-Zustände testen
* [ ] GAME-OVER-Pfade testen
* [ ] Gewinnpfad testen
* [ ] Speichern und Laden im vollständigen Spiel testen
* [ ] `README.md` auf den finalen Stand bringen
* [ ] Dokumentation aktualisieren
* [ ] Version `1.0` fertigstellen

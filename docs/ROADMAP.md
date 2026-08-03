# ROADMAP

**Version des Dokuments:** 0.1
**Projekt:** Roboter-Textadventure
**Arbeitstitel:** *Die alte Halle*

---

## Ziel

Diese Roadmap beschreibt die schrittweise Entwicklung des Textadventures.

Jede Version erweitert eine bereits funktionierende Grundlage um einen klar abgegrenzten Bereich. Neue Mechaniken sollen möglichst erst begonnen werden, wenn die vorherige Entwicklungsstufe stabil funktioniert.

Die Checklisten unter den einzelnen Versionen werden während der weiteren Planung ergänzt und anschließend zur Umsetzung und Kontrolle verwendet.

---

## Version 0.1 – Grundlegender Spielablauf

**Ziel:** Eine erste vollständig spielbare Minimalversion.

Geplant:

* drei Räume
* Spielerenergie
* ein Schlüssel
* grundlegende Bewegung beziehungsweise Raumauswahl
* einfache Gewinnbedingung
* einfache GAME-OVER-Bedingung

### Checkliste

* [ ] Räume definieren
* [ ] Wechsel zwischen den Räumen ermöglichen
* [ ] Energielevel des Spielers implementieren
* [ ] Energieverbrauch festlegen
* [ ] Schlüssel platzieren
* [ ] Schlüssel auffindbar machen
* [ ] verschlossenen Bereich beziehungsweise Ausgang implementieren
* [ ] Gewinnbedingung prüfen
* [ ] GAME OVER bei Energie `0` implementieren
* [ ] vollständigen Spielablauf testen

---

## Version 0.2 – Inventar und Gegenstände

**Ziel:** Einführung eines einfachen Gegenstands- und Inventarsystems.

Geplant:

* Inventar
* mehrere Gegenstände
* Gegenstände aufnehmen
* Gegenstände verwenden
* erste unterschiedliche Gegenstandstypen

### Checkliste

* [ ] Inventarstruktur festlegen
* [ ] mehrere Gegenstände definieren
* [ ] Gegenstände in Räumen platzieren
* [ ] Gegenstände aufnehmen
* [ ] Inventar anzeigen
* [ ] Gegenstände verwenden
* [ ] Nervennahrung implementieren
* [ ] erste Hilfsmittel implementieren
* [ ] ungültige Gegenstandsaktionen behandeln
* [ ] Inventarsystem testen

---

## Version 0.3 – ROBO-01

**Ziel:** ROBO-01 wird zu einem dynamischen Bestandteil des Spiels.

Geplant:

* Roboterzustände
* unterschiedliche Reaktionen
* Einfluss von Spielerentscheidungen
* erste Hinweise durch ROBO-01

### Checkliste

* [ ] Roboterzustände definieren
* [ ] Ausgangszustand festlegen
* [ ] Zustandsänderungen implementieren
* [ ] Dialoge abhängig vom Zustand ausgeben
* [ ] Reaktionen auf Spieleraktionen implementieren
* [ ] erste Hinweise einbauen
* [ ] technischen Zustand und Stimmung sinnvoll trennen
* [ ] Roboterlogik testen

---

## Version 0.4 – Zufällige Gegenstandsverteilung

**Ziel:** Neue Spieldurchläufe sollen unterschiedliche Gegenstandspositionen besitzen.

Geplant:

* zufällige Platzierung normaler Gegenstände
* unterschiedliche Fundorte
* Schutz vor unlösbaren Spielzuständen

### Checkliste

* [ ] Zufallsgenerator initialisieren
* [ ] mögliche Fundorte definieren
* [ ] Gegenstände zufällig verteilen
* [ ] Spezialschlüssel von der Zufallsverteilung ausschließen
* [ ] doppelte oder unerwünschte Platzierungen behandeln
* [ ] Lösbarkeit jeder Verteilung sicherstellen
* [ ] mehrere zufällige Spieldurchläufe testen

---

## Version 0.5 – Zweiter Abschnitt und finales Rätsel

**Ziel:** Das vollständige Abenteuer erhält seinen zweiten Teil und das eigentliche Finale.

Geplant:

* Spezialschlüssel
* zweiter Spielabschnitt
* Hinweise während des Abenteuers
* finales Aufmerksamkeitsrätsel
* vollständige Gewinnbedingung

### Checkliste

* [ ] Weg zum Spezialschlüssel entwerfen
* [ ] Spezialschlüssel implementieren
* [ ] Zugang zum zweiten Abschnitt implementieren
* [ ] zweiten Abschnitt entwerfen
* [ ] relevante Hinweise von ROBO-01 festlegen
* [ ] Hinweise in den bisherigen Spielablauf integrieren
* [ ] finales Rätsel entwerfen
* [ ] Rätsel implementieren
* [ ] sicherstellen, dass das Rätsel immer lösbar bleibt
* [ ] vollständige Gewinnbedingung implementieren
* [ ] komplettes Abenteuer testen

---

## Version 0.6 – Darstellung und Atmosphäre

**Ziel:** Die funktionierende Spielmechanik erhält ihre endgültige Konsolendarstellung.

Geplant:

* ASCII-Art
* farbige Konsolenausgabe
* Startbildschirm
* GAME-OVER-Bildschirm
* Siegerbildschirm
* zusätzliche Ausgabe-Effekte

### Checkliste

* [ ] ASCII-Startbildschirm integrieren
* [ ] GAME-OVER-Bildschirm integrieren
* [ ] Siegerbildschirm integrieren
* [ ] Farbschema festlegen
* [ ] farbige Konsolenausgabe implementieren
* [ ] wichtige Meldungstypen visuell unterscheiden
* [ ] Erfolgseffekt implementieren
* [ ] Darstellung in der verwendeten Konsole testen

---

## Version 1.0 – Vollständige Version

**Ziel:** Fertigstellung einer vollständigen und stabilen ersten Hauptversion.

Geplant:

* Speicherstand
* Laden eines Speicherstands
* vollständige Texte und Dialoge
* Überarbeitung aller Spielabschnitte
* Fehlerbehandlung
* abschließende Tests

### Checkliste

* [ ] relevanten Spielzustand für Speicherstände definieren
* [ ] Speicherformat festlegen
* [ ] Spiel speichern
* [ ] Spiel laden
* [ ] ungültige oder beschädigte Speicherstände behandeln
* [ ] alle Dialoge fertigstellen
* [ ] Texte sprachlich überarbeiten
* [ ] Eingaben auf Fehlerfälle prüfen
* [ ] vollständiges Spiel mehrfach durchspielen
* [ ] verschiedene Gegenstandsverteilungen testen
* [ ] unterschiedliche ROBO-01-Zustände testen
* [ ] Gewinn- und GAME-OVER-Pfade testen
* [ ] Version `1.0` fertigstellen

# Fight Club Spiel
Das Fight Club Spiel ist ein Konsolenbasiertes Kampfspiel, in dem zwei Charaktere gegeneinander antreten. Spieler können entweder gegen einen anderen Spieler oder gegen den Computer kämpfen. Jeder Charakter kann zwei Fähigkeiten auswählen, die er im Kampf verwenden kann.

## Voraussetzungen
- g++ Compiler

## Spielanleitung
- Charakterauswahl: Jeder Spieler wählt zwei Fähigkeiten für seinen Charakter aus den Optionen: Punch, Kick, Block, Jump.
- Spielmodus wählen: Entscheiden Sie, ob Sie gegen einen anderen Spieler oder den Computer kämpfen möchten.
- Kampf: Spieler setzen abwechselnd ihre Fähigkeiten ein, um den Gegner zu besiegen.

## Programmstruktur

Das Projekt besteht aus mehreren Klassen, die die Logik des Spiels implementieren:

- GameManager: Hauptlogik des Spiels, einschließlich Start des Spiels und Kampflogik.
- Character: Definition der Charaktere, einschließlich ihrer Fähigkeiten und Statistiken.
- Skill und abgeleitete Klassen (Punch, Kick, Block, Jump): Implementierung der verschiedenen Fähigkeiten, die Charaktere verwenden können.
- Playmode und abgeleitete Klassen (PlaymodeEasy, PlaymodeHard): Logik für verschiedene Spielmodi gegen den Computer.
# Schrittmotor
##Anleitung zum Schrittmotor

Bei diesem Schrittmotor handelt es sich um einen Schrittmotor der sich speziell für kleine Anwendungen mit dem Arduino-Board eignet. Die Besonderheit liegt darin, dass er ohne eine externe Spannungsversorgung betrieben werden kann. Der Motor entwickelt dabei ein relativ hohes Drehmoment. Dies wird durch ein Getriebe realisiert, welches innerhalb des Metallgehäuses vor dem eigentlichen Schrittmotor verbaut wurde. Dadurch wird es in dieser kompakten Bauweise überhaupt erst möglich, dass sich eine ganze Umdrehung der Antriebswelle auf 2048 Einzelschritte aufteilen lässt. Ein kleiner daraus resultierender Nachteil ist die langsame maximale Drehgeschwindigkeit.

Der Schrittmotor wird an eine Motorsteuerungsplatine angeschlossen. Diese versorgt den Motor mit ausreichend elektrischer Energie, damit die Leistung nicht von den digitalen Pins des Arduino-Boards aufgebracht werden muss. Die Steuerungsplatine gibt es in zwei Versionen, bei denen die seitlich angebrachten Pins entweder nach oben oder nach unten aus der Platine herausragen. Die Anschlussbelegung ist jedoch gleich.

##Material: Arduino Mikrocontrollerboard, Schrittmotor mit Steuerplatine, Breadboardkabel 

Verkabelung
IN1 der Motorsteuerplatine wird an Pin6 angeschlossen
IN2 der Motorsteuerplatine wird an Pin5 angeschlossen
IN3 der Motorsteuerplatine wird an Pin4 angeschlossen
IN4 der Motorsteuerplatine wird an Pin3 angeschlossen
GND der Motorsteuerplatine wird an einem GND Pin am Arduino-Board angeschlossen
VCC der Motorsteuerplatine wird an den 5V Pin am Arduino-Board angeschlossen

![image](https://github.com/user-attachments/assets/6f700544-e8c5-445e-be69-57ba197e20bb)


Bei Motorsteuerplatinen mit nach unten ausgerichteten Pins kann die Steuerplatine auch direkt auf das Mikrocontrollerboard aufgesteckt werden.

![image](https://github.com/user-attachments/assets/ab9a7394-2334-455a-84ca-9655f913cd02)


Dies ist ein Beispielcode, der den Motor abwechselnd um 2048 Schritte (entspricht einer ganzen Umdrehung) vor- und zurückdrehen lässt.



##Zweites Programm (Schrittmotor Taster Start Stop)
Drehung ohne große Schrittmengen
Die Verwendung von Befehlen mit einer großen Schrittmenge „x“ (Motor.step(x);) ist in umfangreicheren Sketchen häufig störend, da während der Ausführung keine weiteren Signale vom Mikrocontroller empfangen oder gesendet werden können. Das ist ein ähnliches Problem wie bei langen Delays. Daher bietet es sich beim Schrittmotor gut an, die Drehbewegung in einer Schleife auszuführen.

##Hier ein kleines Beispiel:
In diesem Fall soll sich der Motor drehen, bis ein Taster gedrückt wird. Es könnte die Anhaltefunktion in einer Maschine sein. Natürlich soll bei einer solchen Funktion der Motor sofort stoppen und nicht erst seine Drehbewegung beenden. Mit einer großen Schrittmenge könnte man die Drehbewegung nicht an einem beliebigen Punkt stoppen, sondern erst wenn der Motor seine Drehbewegung beendet hat und der Mikrocontroller bereit für die nächsten Befehle ist.



[Info](https://funduino.de/nr-15-schrittmotor)

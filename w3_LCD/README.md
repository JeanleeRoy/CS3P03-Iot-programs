# Week3 | Displays LCD

## Ficha técnica de los LCD

Siempre es bueno revisar las hojas técnicas

![Untitled](Week3%20ab402/Untitled.png)

Una peculiaridad con este dispositivo es que para seleccionar una casilla primero se indica la columna y luego la fila

![Untitled](Week3%20ab402/Untitled%201.png)

Ahora, dentro de cada casilla hay pequeños cuadraditos, en total  40(5x8) cuadraditos que pueden estar encendidos o apagados.

Otra curiosidad es que cada columna de una casilla, al estar compuesto de 8 cuadraditos, pueden ser vistos como un byte (8 bits)

Se pueden utilizar caracteres definidos, o bien caracteres customizados

![Untitled](Week3%20ab402/Untitled%202.png)

## Código y simulación

Código inicial

```arduino
#include <LiquidCrystal.h>

// indicar pines para rs, en, d4, d5, d6, d7
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
	// setear pantalla de 16 colulmnas x 2 filas
	lcd.begin(16,2);
}

void loop() {
	// Mostrar mensaje
	lcd.print("Hola alumnos");
}
```

![Untitled](Week3%20ab402/Untitled%203.png)

Este programa muestra los caracteres en la pantalla LCD, sin embargo, al estar en bucle las letras van agregándose una y otra vez

### Variaciones

Es posible mover la posición inicial del texto y mantener texto fijo colocando los métodos en el setup

```arduino
...
void setup() {
	// setear pantalla de 16x2
	lcd.begin(16,2);
	lcd.setCursor(0,1);
	lcd.print("Hola Alumnos");
}

void loop() {
}
```

![Untitled](Week3%20ab402/Untitled%204.png)

Tiempo transcurrido desde que inicio la simulación:

```arduino
...
void setup() {
	lcd.begin(16,2);
	lcd.print("Tiempo:");
	lcd.setCursor(4,1);
	lcd.print("segundos");
}

void loop() {
	lcd.setCursor(0,1);	
	lcd.print(millis()/1000);
}
```

![Untitled](Week3%20ab402/Untitled%205.png)

Manejo de “movimiento”

```arduino
#include <LiquidCrystal.h>

// indicar pines para rs, en, d4, d5, d6, d7
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
	// setear pantalla de 16 colulmnas x 2 filas
	lcd.begin(16,2);
	lcd.print("Movimiento:");
}

void loop() {
	int i;
	for (i=0; i<4; i++) {
		lcd.setCursor(i,1);
		lcd.print("a");
		delay(500);
		lcd.setCursor(i,1);
		lcd.print(" ");
		//lcd.clear();
	}
}
```

![Untitled](Week3%20ab402/Untitled%206.png)
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

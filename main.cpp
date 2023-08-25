#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    ///
    /// Se instancia gasDetector como un objeto de la clase DigitalIn correspondiente a la entrada digital D2
    ///
    DigitalIn gasDetector(D2);

    ///
    /// Se instancia alarmLed como un objeto de la clase DigitalOut correspondiente al led LED1
    ///
    DigitalOut alarmLed(LED1);

    ///
    /// Agrega a la entrada D2 un pulldown
    ///
    gasDetector.mode(PullDown);

    ///
    /// Inicializamos el led de alarma como apagado
    ///
    alarmLed = OFF;

    ///
    /// Imprimimos por consola la frase Hello World
    ///
    printf("%s\n", "Hello World");

    ///
    /// Ejecuta un loop infinito donde prende el led si detecta un estado alto en la entrada gasDetector, lo apaga si hay un estado bajo
    ///
    while (true) {
        
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}
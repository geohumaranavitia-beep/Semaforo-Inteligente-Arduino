#  Bitácora de Desarrollo: Semáforo Inteligente e Interactivo

¡Hola! Soy estudiante de tercer semestre de preparatoria en Durango, México. Este repositorio documenta mi evolución desde no saber nada de programación hasta diseñar y programar un sistema interactivo de control de tráfico en **C++ (Arduino)**.

Este proyecto fue desarrollado y probado al 100% de forma autónoma utilizando el simulador **Tinkercad Circuits**.

---

## Fase 1: El Inicio (Control del LED)
Mi primer paso en el laboratorio virtual fue aprender a manipular la corriente eléctrica mediante el código. Logré conectar un LED rojo al **Pin 13** y programar la lógica estructurada para controlar los tiempos de encendido mediante la función `delay()`. 
* *Logro clave:* Entender la diferencia entre las funciones de configuración (`setup`) y los ciclos infinitos (`loop`).

##🚦 Fase 2: El Semáforo Automático
Subiendo el nivel de complejidad, añadí dos LEDs más (Amarillo en el **Pin 12** y Rojo en el **Pin 11**) con resistencias de protección de **220 Ω** calibradas correctamente. Diseñé un algoritmo secuencial para simular el cambio de luces de una avenida real.

## Fase 3: Modo Inteligente (El Botón Peatonal)
El diseño final transformó el circuito en un sistema inteligente capaz de escuchar al entorno. Añadí un **Pulsador** (con resistencia Pull-down de **10k Ω** para limpiar el ruido eléctrico) conectado al **Pin 2**.
* **La Lógica Condicional (`if / else`):** El semáforo se mantiene en Verde eterno para los autos. En el instante exacto en que un peatón presiona el botón (`HIGH`), el Arduino interrumpe el bucle normal, activa la luz de precaución (Amarillo) y frena el tráfico (Rojo por 4 segundos) para permitir un cruce seguro.

---

## Mi Meta Profesional
Utilizo GitHub para construir mi portafolio técnico desde la preparatoria. Mi objetivo a mediano plazo es estudiar Ciencias de la Computación o Robótica Avanzada para integrarme a la industria tecnológica internacional en **Zúrich, Suiza**.

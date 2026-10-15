# Semáforo Inteligente con Botón Peatonal

## Integrantes
- Alessio Zolorza (Scrum Master)
- Leon 
- Elias lopez
-Gonza

## Proyecto
Barrera automática con Arduino que detecta un vehículo con un sensor
ultrasónico HC-SR04, levanta la barrera con un servomotor, indica el
estado con LEDs y se cierra cuando el vehículo pasó. Simulado en Wokwi.
Link Wokwi: (pegar acá)

## Requerimientos funcionales
1. RF1: El sistema debe medir la distancia del vehículo con el sensor ultrasónico.
2. RF2: El sistema debe abrir la barrera cuando detecte un objeto a menos de 20 cm.
3. RF3: El sistema debe mantener la barrera abierta mientras el vehículo siga presente.
4. RF4: El sistema debe cerrar la barrera luego de un tiempo sin detectar vehículos.
5. RF5: El sistema debe indicar el estado con LED verde (abierta) y LED rojo (cerrada).

## Requerimientos no funcionales
1. RNF1: El sistema debe funcionar de forma continua sin intervención humana.
2. RNF2: La barrera debe moverse de forma suave, no brusca.
3. RNF3: El código debe estar comentado y ser legible.
4. RNF4: La distancia de detección y los tiempos deben poder modificarse cambiando variables.
5. RNF5: El sistema debe responder a la detección en menos de 1 segundo.

## Historias de usuario
1. Como conductor, quiero que la barrera se abra al acercarme para no tener que bajar del auto.
2. Como conductor, quiero que la barrera no se cierre mientras estoy pasando para evitar accidentes.
3. Como guardia de seguridad, quiero ver un LED rojo o verde para saber el estado de la barrera.
4. Como administrador, quiero cambiar la distancia de detección para adaptarla al lugar.
5. Como administrador, quiero ajustar el tiempo que la barrera permanece abierta según el tránsito.

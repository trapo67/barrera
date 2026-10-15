# Semáforo Inteligente con Botón Peatonal

## Integrantes
- Alessio Zolorza (Scrum Master)
- Leon 
- Elias lopez
-Gonza

## Proyecto
Semáforo con Arduino que alterna luces roja, amarilla y verde, y permite
a un peatón solicitar el cruce con un pulsador. Simulado en Wokwi.

## Requerimientos funcionales
1. RF1: El sistema debe encender la luz verde durante un tiempo definido.
2. RF2: El sistema debe encender la luz amarilla antes de pasar a rojo.
3. RF3: El sistema debe encender la luz roja para detener los vehículos.
4. RF4: El sistema debe detectar la pulsación del botón peatonal.
5. RF5: Si hay solicitud peatonal, el sistema debe acortar el verde y dar paso al peatón.

## Requerimientos no funcionales
1. RNF1: El ciclo debe ser continuo y repetirse sin intervención humana.
2. RNF2: El botón debe responder en menos de 1 segundo.
3. RNF3: El código debe estar comentado y ser legible.
4. RNF4: Solo debe haber una luz encendida a la vez.
5. RNF5: Los tiempos deben poder modificarse cambiando variables.

## Historias de usuario
1. Como conductor, quiero ver una luz verde clara para saber cuándo avanzar.
2. Como conductor, quiero una luz amarilla de aviso para frenar a tiempo.
3. Como peatón, quiero presionar un botón para solicitar cruzar la calle.
4. Como peatón, quiero que el semáforo se ponga en rojo luego de mi solicitud para cruzar seguro.
5. Como administrador, quiero cambiar los tiempos de cada luz para adaptarlos al tránsito
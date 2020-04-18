# Tarea 3. Técnicas de diseño de algoritmos

---

##### Integrantes:
1. *Miguel Monterrubio Bandera* - *A01022153* - *Campus Santa Fe*

---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución


#### Problema 4: 
Sea a[1..n] un vector ordenado de enteros todos distintos, implementar un algoritmo con la menor compejidad posible en el peor caso capaz de encontrar un índice i tal que 1≤i≤n y a[i] = i, suponiendo que tal índice exista.

No hay una solución a dicho problema, ya que si es un vector ordenado que empieza desde el número 1, junto con la condición de que no se repiten números, a[i] siempre será i+1 o mayor, empezando por a[0] = 1. El código fue hecho con la suposición de que el vector empieza con el número 0, que permite que se cumpla la solución.

Se utiliza una búsqueda binaria para encontrar el valor. Esto significa que tiene una complejidad de O(log n).
#### Problema 7:
Si se desea solucionar el problema del laberinto, el cual consiste en encontrar un camino cualquiera que permita salir del mismo  ¿qué técnica de diseño de algoritmo deberá usarse?

Para este problema se utiliza "back tracking", o vuelta atrás, para buscar un posible camino. Si encuentra un callejón sin salida, regresa a donde antes estaba y prueba con otro camino. En el peor de los casos, recorrería todos los nodos o caminos del laberinto. Esto significa que tiene una complejidad de O(n^2).

### 2.1 Pasos a seguir para utilizar la aplicación

*[Incluya aquí una guía paso a paso para poder utilizar la aplicación, desde la clonación del repositorio, la compilación del código hasta la ejecución de los ejemplos para visualizar los resultados.]*

## 3. Referencias

*[Incluya aquí las referencias a sitios de interés y cualquier otra información que haya utilizado para realizar la actividad y que le puedan ser de utilidad a otras personas que quieran usarlo como referencia]*

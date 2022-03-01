# Practica 1 - SOLID, Estrategia y Análisis de un algoritmo

- Universidad de La Laguna
- Grado en Ingeniería Informática
- Diseño y Análisis de Algoritmos
- Autor: Adal Díaz Fariña
- Contacto: alu0101112251@ull.edu.es

# Informe

## **1. ¿En qué consisten estos principios? ¿En qué consiste el principio de responsabilidad única?**

Los principios SOLID son una serie de reglas o directrices a seguir para mejorar el diseño orientado a objetos. Existen 5 principios SOLID:

1. **Principio de la responsabilidad única: "Nunca debe haber una razón para cambiar una clase". - Robert Martin.**

El principio de la responsabilidad única lo podemos traducir como cada clase debe hacer una única tarea. Es decir, una clase debe tener una sola responsabilidad. Por ejemplo: si tenemos una clase de números complejos, esta clase debe ser capaz de representar números complejos, de realizar operaciones con números complejos, etc. Su responsabilidad es la de poder tratar con números complejos. Cualquier método que no tenga que ver con los números complejos queda excento de estar en esta clase.

2. **Principio abierto cerrado: "Las entidades de software (clases, módulos, funciones, etc.) deben estar abiertas para la extensión, pero cerradas para la modificación". — Robert Martin parafraseando a Bertrand Meyer.**

La idea principal de este principio es que no hay necesidad de modificar una clase que ya hemos creado, si necesitamos hacer uso de esa clase modificando algunos métodos podemos hacer uso de técnicas orientadas a objetos como la herencia y la composición para modificarla o aumentarla.

3. **Principio de sustitución de Liskov: "Las funciones que usan punteros o referencias a clases base deben poder usar objetos de clases derivadas sin saberlo". — Robert Martin**

El principio de sustitución de Liskov nos indica que deberíamos poder sustituir la instancia de una subclase por la clase principal y todo debería seguir funcionando correctamente.

4. **Principio de segregación de interfaz: "Los clientes no deben verse obligados a depender de interfaces que no utilizan". — Robert Martin**

Hay que mantener las interfeces pequeñas y cohesivas. Esto es debido a que si una interfaz es muy amplia, se está poniendo una enorme carga de implementación en cualquiera que quiera adherirse a ese contrato. Ejemplo: "cuando un cliente depende de una clase que contiene interfaces que el cliente no usa, pero que otros clientes sí usan, entonces ese cliente se verá afectado por los cambios que esos otros clientes fuerzan en la clase"

5. **Principio de inversión de dependencia:**
- **A. Los módulos de alto nivel no deben depender de los módulos de bajo nivel. Ambos deben depender de las abstracciones.**
- **B. Las abstracciones no deben depender de los detalles. Los detalles deben depender de las abstracciones". — Robert Martin**

Básicamente lo que nos dice este principio es que si una clase tiene dependencias de otra clase, debe basarse en las interfaces de las dependecias en vez de sus tipos concretos. La idea es que nuestra clase dependa de abstracciones. Así si todos los detalles de nuestras abstracciones cambian, nuestra clase seguirá estando a salvo.

## **2. Repaso del concepto de Polimorfismo**

## **3. Patrón estrategia**

## **4. Análisis de algoritmos**

Utiliza el patrón estrategia (sin usar templates) para implementar dos versiones del producto de matrices:

- Versión que realiza el producto de matrices recorriendo la matriz por filas.
- Versión que realiza el producto de matrices recorriendo la matriz por columnas.

El programa debe tener la capacidad de generar instancias aleatorias de diferentes tamaños, de tal forma que sirvan como entrada a los algoritmos creados. Analiza el tiempo de ejecución variando el tamaño de las matrices a multiplicar, intentando extraer conclusiones sobre el comportamiento en el límite. Se debe apreciar una diferencia a nivel computacional entre versiones.

# Generador de Contraseñas Aleatorias en C

## Descripción

Este proyecto es una aplicación de consola desarrollada en lenguaje C que permite generar contraseñas aleatorias de una longitud definida por el usuario.

El programa admite longitudes de entre 8 y 100 caracteres y utiliza letras mayúsculas, letras minúsculas, números y símbolos para construir la contraseña.

Su propósito es demostrar conocimientos de programación en C mediante el uso de arreglos, cadenas de caracteres, ciclos, validación de entradas y generación de valores aleatorios.

> **Aviso de seguridad:** Esta implementación utiliza `rand()`, que no es un generador criptográficamente seguro. Está diseñada con fines educativos y no debe utilizarse para crear contraseñas destinadas a proteger cuentas o información sensible.

## Características

* Generación de contraseñas aleatorias.
* Longitud configurable entre 8 y 100 caracteres.
* Uso de letras mayúsculas y minúsculas.
* Inclusión de números y símbolos.
* Validación de la longitud solicitada.
* Interfaz sencilla mediante consola.

## Tecnologías utilizadas

* **Lenguaje:** C.
* **Bibliotecas:** `stdio.h`, `stdlib.h` y `time.h`.
* **Compilador:** GCC.
* **Entorno de desarrollo:** Visual Studio Code.

## Requisitos

* Un compilador de C, como GCC.
* Una terminal o consola.
* Un sistema operativo compatible con el compilador.

## Instalación y ejecución

### 1. Clonar el repositorio

```bash
git clone URL_DE_TU_REPOSITORIO
```

Reemplaza `URL_DE_TU_REPOSITORIO` por la dirección de tu repositorio de GitHub.

### 2. Entrar en la carpeta del proyecto

```bash
cd GeneradorContrasenas
```

### 3. Compilar el programa

```bash
gcc GeneradorContrasenas.c -o GeneradorContrasenas.exe
```

### 4. Ejecutar el programa

En Windows PowerShell:

```powershell
.\GeneradorContrasenas.exe
```

En Linux o macOS:

```bash
./GeneradorContrasenas
```

## Ejemplo de funcionamiento

```text
=================================
  GENERADOR DE CONTRASENAS
=================================
Longitud de la contrasena (8-100): 16

Tu contrasena generada es:
aB7#mK2!pQ9_xL4z
```

*Nota: La contraseña mostrada es un ejemplo ilustrativo. Cada ejecución puede producir un resultado diferente.*

## Objetivos de aprendizaje

* Manipular arreglos de caracteres.
* Trabajar con cadenas de caracteres en C.
* Utilizar ciclos `for`.
* Aplicar validaciones de entrada.
* Generar valores pseudoaleatorios.
* Comprender la importancia de la seguridad en el manejo de contraseñas.

## Consideraciones de seguridad

La función `rand()` no está diseñada para generar secretos criptográficos. Para aplicaciones reales, debe utilizarse un generador criptográficamente seguro proporcionado por el sistema operativo o una biblioteca especializada.

Este proyecto tiene fines educativos y no constituye una herramienta de seguridad para entornos de producción.

## Licencia

Este proyecto puede distribuirse bajo la licencia MIT si se incluye el archivo de licencia correspondiente.


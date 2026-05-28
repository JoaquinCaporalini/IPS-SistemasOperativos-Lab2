# Laboratorio 2: Procesos e Hilos

Laboratorio de Sistemas Operativos

Instituto Politécnico Superior 

Docente: Joaquin Caporalini

## Información importante

Todos los ejemplos de código se encuentran en https://labdcc.fceia.unr.edu.ar/~jcaporalini/ips/lab02.zip, leer y ver atentamente.

Todos los ejercicios están pensados para ser ejecutados en linux (o macOS). Si usas windows, te recomiendo usar WSL (Windows Subsystem for Linux), una maquina virtual o github codespaces. 

También se puede realizar una copia de este repositorio en [GitHub](hhttps://github.com/JoaquinCaporalini/IPS-SistemasOperativos-Lab2) y trabajar sobre ella.

# Compilado y ejecución

Para compilar y ejecutar los programas se puede usar makefile de la siguiente manera:
```bash
make
```

Esto compilará todos los programas (incluidos los ejercicios, que no están implementados aún). Si se desea compilar un programa en particular se puede hacer de la siguiente manera:

```bash
make codigo01
```

Esto compilará solo el programa codigo01. Si se desea compilar solo los ejemplos de procesos se puede hacer ejecutando solo la primer línea y si se ejecuta la segunda línea se compilan los ejemplos de hilos.

```bash
make procesos_ejemplos
make hilos_ejemplos
```

Si se desea compilar solo los ejercicios se puede hacer de la siguiente manera (distinguiendo entre procesos y hilos):

```bash
make procesos_ejercicios
make hilos_ejercicios
```

Si se desea ejecutar un programa en particular se puede hacer de la siguiente manera:

```bash
./codigo01
```

para eliminar los programas compilados se puede hacer de la siguiente manera:

```bash
make clean
```



## Ejercicios

Los códigos [05](codigo05.c), [08](codigo08.c) y [14](codigo14.c) deben ser completados como parte del laboratorio.
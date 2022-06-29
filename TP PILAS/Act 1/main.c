#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void actividad1 ();
void actividad2 ();
void actividad3 ();
void actividad4 ();
void actividad5 ();
void actividad6 ();
void actividad7 ();
void actividad8 ();
void actividad9 ();
void actividad10();
void actividad11();
void actividad12();
void actividad13();
void actividad14();
void actividad17 ();

int main()
{
    actividad1();
    actividad2();
    actividad3();
    actividad4();
    actividad5();
    actividad6();
    actividad7();
    actividad8();
    actividad9();
    actividad10();
    actividad11();
    actividad12();
    actividad13();
    actividad14();
    actividad17();

    return 0;
}
// 1.Cargar desde el teclado una pila DADA con 5 elementos.
// Pasar los tres primeros elementos a la pila
// AUX1 y los dos restantes a la pila AUX2, ambas pilas inicializadas en vacío
void actividad1 ()
{
printf("-----ACTIVIDAD 1 de PILA \n\n");

    ///Cargo las distintas variables que me marca el enunciado
    Pila pilaDada;
    Pila pilaAux1;
    Pila pilaAux2;

    ///Inicio las pilas correspondientes
    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);

    ///Cargo desde el teclado la pila dada
    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);

    ///Muestro la pila
    printf("\n\nLA PILA DADA QUEDA DE LA SIGUIENTE MANERA \n");
    mostrar(&pilaDada);

    ///Paso los elementos de la pila dada a la Aux1
    apilar(&pilaAux1, desapilar(&pilaDada));
    apilar(&pilaAux1, desapilar(&pilaDada));
    apilar(&pilaAux1, desapilar(&pilaDada));

    printf("\n\nPILA DADA: \n");
    mostrar(&pilaDada);
    printf("\n\nLA PILA AUX QUEDA DE LA SIGUIENTE MANERA \n");
    mostrar(&pilaAux1);

    ///Desapilo los otros elementos que quedan a la AUX2
    apilar(&pilaAux2, desapilar(&pilaDada));
    apilar(&pilaAux2, desapilar(&pilaDada));

    printf("\n\nPILA AUX2 QUEDO ASI:");
    mostrar(&pilaAux2);
}
// 2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los
// elementos de la pila ORIGEN a la pila DESTINO
void actividad2 ()
{
printf("-------EJERCICIOS 2 PILA-------\n\n");

///Creo las variables
Pila pilaOrigen;
Pila destino;

///inicio pila
inicpila(&pilaOrigen);
inicpila(&destino);

///Cargo desde el teclado
leer(&pilaOrigen);
leer(&pilaOrigen);
leer(&pilaOrigen);
leer(&pilaOrigen);
leer(&pilaOrigen);

printf("\n\nPILA ORIGEN\n");
mostrar(&pilaOrigen);

while(!pilavacia(&pilaOrigen))
{
    apilar(&destino, desapilar(&pilaOrigen));
}
printf("\n\nPILA ORIGEN QUEDA VACIA\n");
mostrar(&pilaOrigen);

printf("\n\nPILA DESTINO");
mostrar(&destino);
}
// 3.Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al
// valor 8
void actividad3 ()
{
    printf("-------EJERCICIO 3 DE PILA-------\n\n");

    Pila dada;
    Pila distintos;

    inicpila(&dada);
    inicpila(&distintos);

    apilar(&dada, 8);
    apilar(&dada, 39);
    apilar(&dada, 40);
    apilar(&dada, 50);

    printf("PILA DADA\n\n");
    mostrar(&dada);

    while(!pilavacia(&dada))
    {
        if(tope(&dada)== 8)
            desapilar(&dada);

        else

            apilar(&distintos, desapilar(&dada));
    }
    printf("\n\n PILA DISTINTOS SIN EL 8\n");
    mostrar(&distintos);

    printf("FIN DEL EJERCICIO 3\n\n");

}
// 4.Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de
// la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden
void actividad4 ()
{
    printf("-------EJERCICIO 4 DE PILA-------\n\n");

    Pila pilaOrigen, pilaDestino, pilaAuxiliar;

    inicpila(&pilaOrigen);
    inicpila(&pilaDestino);
    inicpila(&pilaAuxiliar);

    leer(&pilaOrigen);
    leer(&pilaOrigen);
    leer(&pilaOrigen);
    leer(&pilaOrigen);
    leer(&pilaOrigen);

    printf("PILA ORIGEN QUEDA DE LA SIGUIENTE MANERA:\n\n");
    mostrar(&pilaOrigen);

    while(!pilavacia(&pilaOrigen))
    {
        apilar(&pilaAuxiliar, desapilar(&pilaOrigen));
        mostrar(&pilaAuxiliar);
    }

    while(!pilavacia(&pilaAuxiliar))
    {
        apilar(&pilaDestino, desapilar(&pilaAuxiliar));
    }
        printf("PILA AUXILIAR QUEDA DE LA SIGUIENTE MANERA");
        mostrar(&pilaDestino);

printf("-------FIN DEL EJERCICIO 4-------\n\n");
}
// 5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos
// cargados originalmente en ella, pero en orden inverso
void actividad5 ()
{
printf("------ EJERCICIO 5 DE PILA -----\n\n");

    Pila pilaDada, pilaAux1, pilaAux2;

    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);

    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);
    leer(&pilaDada);

    printf("LA PILA DADA QUEDO DE LA SIGUIENTE MANERA:\n\n");
    mostrar(&pilaDada);

    while(!pilavacia(&pilaDada))
    {
        apilar(&pilaAux1, desapilar(&pilaDada));
    }
    printf("----PILA AUXILIAR 1----");
    mostrar(&pilaAux1);

    while(!pilavacia(&pilaAux1))
    {
        apilar(&pilaAux2, desapilar(&pilaAux1));
    }
    printf("\n----PILA AUXILIAR 2----\n");
    mostrar(&pilaAux2);

    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }
    printf("----PILA ORIGEN INVERTIDA----\n\n");
    mostrar(&pilaDada);
}
// 6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes
// elementos en el mismo orden
void actividad6 ()
{
    printf("------ EJERCICIO 6 DE PILA -----\n\n");

    Pila pilaDada, pilaAuxTope, pilaAuxRestante;

    inicpila(&pilaDada);
    inicpila(&pilaAuxTope);
    inicpila(&pilaAuxRestante);

    apilar(&pilaDada, 10);
    apilar(&pilaDada, 20);
    apilar(&pilaDada, 30);
    apilar(&pilaDada, 40);
    apilar(&pilaDada, 50);

    apilar(&pilaAuxTope, desapilar(&pilaDada));

    printf("-----PILA AUX TOPE-----\n\n");
    mostrar(&pilaAuxTope);

    while (!pilavacia(&pilaDada))
    {
        apilar(&pilaAuxRestante, desapilar(&pilaDada));
    }
    printf("----PILA AUX RESTANTE----\n\n");
    mostrar(&pilaAuxRestante);
    while (!pilavacia(&pilaAuxTope))
    {
        apilar(&pilaDada, desapilar(&pilaAuxTope));
    }
    while(!pilavacia(&pilaAuxRestante))
    {
        apilar(&pilaDada, desapilar(&pilaAuxRestante));
    }
    printf("----PILA DADA CON EL TOPE ABAJO----");
    mostrar(&pilaDada);
}
// 7. Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes
//    elementos en el mismo orden
void actividad7 ()
{
    printf("----EJERCICIO 7----");

    Pila dada, auxBase, auxResto;

    inicpila(&dada);
    inicpila(&auxBase);
    inicpila(&auxResto);

    apilar(&dada, 10);
    apilar(&dada, 20);
    apilar(&dada, 30);
    apilar(&dada, 40);
    apilar(&dada, 50);

    printf("\n\n----PILA DADA----\n\n");
    mostrar(&dada);

    apilar(&auxResto, desapilar(&dada));
    apilar(&auxResto, desapilar(&dada));
    apilar(&auxResto, desapilar(&dada));
    apilar(&auxResto, desapilar(&dada));
    apilar(&auxBase, desapilar(&dada));

    printf("----PILA BASE----\n");
    mostrar(&auxBase);

    printf("----PILA RESTO----\n");
    mostrar(&auxResto);

    while(!pilavacia(&auxResto))
    {
        apilar(&dada,desapilar(&auxResto));
    }
    while (!pilavacia(&auxBase))
    {
        apilar(&dada, desapilar(&auxBase));
    }
    printf("----PILA OBJETIVO----\n");
    mostrar(&dada);
}
// 8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa
void actividad8 ()
{
    printf("----EJERCICIO 8----\n");
    Pila mazo, jug1, jug2;
    inicpila (&mazo);
    inicpila (&jug1);
    inicpila (&jug2);

    char control='s';
    while (control=='s')
    {
        leer (&mazo);
        printf("desea cargar mas datos a la pila?\n");
        fflush (stdin);
        scanf ("%c", &control);
    }
    while (!pilavacia (&mazo))
    {
        apilar (&jug1, desapilar (&mazo));
        if (!pilavacia (&mazo))
        {
            apilar (&jug2, desapilar (&mazo));
        }
    }
    puts("mazo");
    mostrar (&mazo);
    puts("jug1");
    mostrar (&jug1);
    puts("jug2");
    mostrar (&jug2);

    printf("----FIN DEL EJERCICIO----");
}
// 9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
void actividad9 ()
{
    printf("\n\n----EJERCICIO 9----");

    Pila pilaA, pilaB, pilaAuxA, pilaAuxB;

    inicpila(&pilaAuxA);
    inicpila(&pilaAuxB);
    inicpila(&pilaA);
    inicpila(&pilaB);

    apilar(&pilaA, 1);
    apilar(&pilaA, 2);
    apilar(&pilaB, 3);
    apilar(&pilaB, 4);
    apilar(&pilaB, 4);

    printf("\n\nPILA A\n");
    mostrar(&pilaA);

    printf("PILA B\n");
    mostrar(&pilaB);


    ///Comparo
    int flag = 0;
    while(flag == 0)
    {
        apilar(&pilaAuxA, desapilar(&pilaA));
        apilar(&pilaAuxB, desapilar(&pilaB));

        if(pilavacia(&pilaA) && (!pilavacia(&pilaB)))
    {
        printf("Pila B es mayor que la pila A");
            flag = 1;
    }
        else if(pilavacia(&pilaB) && (!pilavacia(&pilaB)))
    {
        printf("Pila A es mayor que la pila B");
            flag = 1;
    }
        else if (pilavacia(&pilaA) && (pilavacia(&pilaB)))
    {
        printf("Las dos pilas tienen la misma cantidad de elementos");
            flag = 1;
    }
    }
}
// 10. Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos,
// valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.
void actividad10 ()
{
    printf("\n\n----EJERCICIO 10----");
    Pila pilaA, pilaB, pilaAuxA, pilaAuxB;

    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&pilaAuxA);
    inicpila(&pilaAuxB);

    apilar(&pilaA, 1);
    apilar(&pilaA, 2);
    apilar(&pilaA, 3);
    apilar(&pilaB, 1);
    apilar(&pilaB, 2);
    apilar(&pilaB, 3);

    printf("\n\n----PILA A----");
    mostrar(&pilaA);

    printf("----PILA B----");
    mostrar(&pilaB);

    int flag = 0;

    while(!pilavacia(&pilaA)&&(!pilavacia(&pilaB)&&flag==0))
    {
        if(tope(&pilaA)!=(tope(&pilaB)))
        {
            flag = 1;
        }
        else
        {
            apilar(&pilaAuxA, desapilar(&pilaA));
            apilar(&pilaAuxB, desapilar(&pilaB));
        }
    }
    if(flag==1)
    {
        printf("LOS ELEMENTOS NO SON IGUALES O ESTAN EN DIFERENTES POSICION\n");
    }
    else if (pilavacia(&pilaA)&&(pilavacia(&pilaB)))
    {
        printf("LOS ELEMENTOS SON IGUALES Y ESTAN EN LA MISMA POSICION\n\n");
    }
}
// 11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
// elementos que sean iguales al tope de la pila MODELO.
void actividad11 ()
{
    printf("----EJERCICIO 11----");

    Pila pilaModelo, pilaDada, pilaAux, pilaAux2;

    inicpila(&pilaModelo);
    inicpila(&pilaDada);
    inicpila(&pilaAux);
    inicpila(&pilaAux2);

    apilar(&pilaModelo, 20);
    apilar(&pilaModelo, 400);
    apilar(&pilaModelo, 10);
    apilar(&pilaDada, 10);
    apilar(&pilaDada, 20);
    apilar(&pilaDada, 40);

    printf("\n\n----PILA DADA----");
    mostrar(&pilaDada);

    printf("----PILA MODELO----");
    mostrar(&pilaModelo);

    while(!pilavacia(&pilaDada))
    {
        if (tope(&pilaModelo)== tope(&pilaDada))
        {
            apilar(&pilaAux, desapilar(&pilaDada));
        }
        else
        {
            apilar(&pilaAux2, desapilar(&pilaDada));
        }
    }
    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    printf("\n\n----PILA DADA----\n");
    mostrar(&pilaDada);

    printf("\n\n----PILA MODELO----\n");
    mostrar(&pilaModelo);
}
// 12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
// elementos que existan en MODELO
void actividad12 ()
{
    printf("----EJERCICIO 12----\n\n");

    Pila dada, modelo, aux1;
    inicpila(&dada);
    inicpila(&modelo);
    inicpila(&aux1);

    ///Cargo DADA
    apilar(&dada, 10);
    apilar(&dada, 20);
    apilar(&dada, 30);
    apilar(&dada, 40);

    ///Cargo Modelo
    apilar(&modelo,10);
    apilar(&modelo,20);
    apilar(&modelo,30);
    apilar(&modelo,50);

    printf("----PILA DADA----");
    mostrar(&dada);

    printf("----PILA MODELO----");
    mostrar(&modelo);

    while(!pilavacia(&dada))
    {
        while(!pilavacia(&modelo))
        {
            if(tope(&dada)==tope(&modelo))
            {
                desapilar(&dada);
            }
            else
            {
                apilar(&aux1, desapilar(&dada));
            }
            while(!pilavacia(&aux1))
            {
                apilar(&dada, desapilar(&aux1));
            }

        }
    }

    printf("\n\n----PILA DADA----");
    mostrar(&dada);

    printf("\n\n----PILA MODELO----");
    mostrar(&modelo);

    printf("\n\n----PILA AUXILIAR----");
    mostrar(&aux1);
}
// 13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
// iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila
// MENORES.
void actividad13 ()
{
printf("----EJERCICIO 13----");

    Pila limite, dada, mayores, menores;

    inicpila(&limite);
    inicpila(&dada);
    inicpila(&mayores);
    inicpila(&menores);

    ///cargo pilas a limite
    apilar(&limite, 10);
    apilar(&limite, 20);
    apilar(&limite, 30);
    apilar(&limite, 40);

    ///Cargo pilas a dada
    apilar(&dada, 40);
    apilar(&dada, 50);
    apilar(&dada, 4);
    apilar(&dada, 11);
    apilar(&dada, 55);
    apilar(&dada, 25);

    while(!pilavacia(&dada))
    {
        if(tope(&dada)>=tope(&limite))
        {
            apilar(&mayores, desapilar(&dada));
        }
        else
        {
            apilar(&menores, desapilar(&dada));
        }
    }
    printf("\n\n----PILA MAYORES----\n");
    mostrar(&menores);
    printf("\n\n----PILA MENORES----\n");
    mostrar(&mayores);
}
// 14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope
// de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
void actividad14 ()
{
    printf("----EJERCICIO 14----");

    Pila dada, aux, par, impar;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&par);
    inicpila(&impar);

    apilar(&dada, 1);
    apilar(&dada, 2);
    apilar(&dada, 3);
    apilar(&dada, 4);
    apilar(&dada, 5);

    printf("\n\n---PILA DADA----");
    mostrar(&dada);

    int cn = 0;
    while (!pilavacia(&dada))
    {
        apilar(&aux, desapilar(&dada));
        cn++;
    }
    if(cn%2==0)
    {
        apilar(&par, desapilar(&aux));
    }
    else
    {
        apilar(&impar, desapilar(&aux));
    }
    printf("----PILA PAR----");
    mostrar(&par);
    printf("----PILA IMPAR----");
    mostrar(&impar);
    printf("----PILA DADA----");
    mostrar(&dada);
    printf("----PILA AUX----");
    mostrar(&aux);
}
// 17.Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos
// elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún
// valor 5”, se realizo el siguiente programa:
// este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos que
// preceden el valor 5
void actividad17 ()
{
    printf("----EJERCICIO 17----\n\n");

    Pila Origen, Distinto;

    inicpila(&Origen);
    inicpila(&Distinto);

    leer(&Origen);
    leer(&Origen);
    leer(&Origen);

    while(!pilavacia(&Origen))
    {
        if (tope(&Origen) != 5)
        {
            apilar (&Distinto, desapilar(&Origen));
        }
    }
    mostrar(&Origen);
}






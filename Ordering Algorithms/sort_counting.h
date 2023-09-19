#include <iostream>

using namespace std;

// Función para ordenar los números
void CountingSort(int size, int arr[])
{
    // 1. Encontrar el valor máximo y mínimo en arr[]

    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < size; i++)
    {

        if (arr[i] > max_val)
        {

            max_val = arr[i];
        }

        if (arr[i] < min_val)
        {

            min_val = arr[i];
        }
    };

    // 2. Crear un arreglo para contar cuanto aparece cada numero
    // El tamaño de este arreglo depende del rango de numeros que existan
    // (pues los números en arr[] están en este rango)

    int range = max_val - min_val + 1;

    int count[range] = {0};

    // 3. Crear un arreglo auxiliar para alojar los datos ordenados
    // El tamaño de este arreglo será igual al original

    int arr_ordenado[size];

    // 4. Cambiar los valores en arr[] para que todos los números sean positivos y tengan una posición válida
    for (int i = 0; i < size; i++)
        arr[i] -= min_val;

    // 5. Incrementar el conteo de cada número en arr[]
    // dentro del arreglo count[], dependiendo de cuantas veces
    // aparece un número.

    for (int i = 0; i < size; i++)
        count[arr[i]]++;

    //  6. Modificar el arreglo count[] de tal forma que sus 'casillas'
    // ahora indiquen la posición en la que deberá encontrarse el último elemento
    // de ese número en el arreglo ordenado
    // (Solo le sumas el valor de la posición anterior)

    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];

    // 7. Construir el array ordenado
    // Para esto, se va a iterar el arreglo original de derecha a izquierda.
    //    i) Se busca en el arreglo count[] la posición en la que debe ubicarse ese elemento
    //   ii) Se asigna ese elemento a esa posición en arr_ordenado[]
    //  iii) Se reduce el valor que había en count[] para indicar que el siguiente elemento irá una posición antes (si existe)

    for (int i = size - 1; i >= 0; i--)
    {
        arr_ordenado[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // 8. Copiar el arreglo ordenado en arr[] (el arreglo original)
    // Se le suma el valor mínimo (o resta) para volver a los números originales
    // (Esto se hace para poder aceptar números negativos)
    for (int i = 0; i < size; i++)
        arr[i] = arr_ordenado[i] + min_val;
}
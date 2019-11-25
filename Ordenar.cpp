// Universidad Politécnica de Tulancingo
// Ingeniería en Electrónica y Telecomunicaciones 
// Lógica de Programación
// Luis Yael Juarez Leyva
// Ordenar dentro de main valores de mayor a menor 

#include<stdio.h>
#include<stdlib.h>


	int const n = 5;
	int main()
	{
		int a[n], indice, limite, pivote;
		indice = 0;
		while (indice < n) {
			printf("\nCaptura a[%d]", indice);
			scanf_s("%d", &a[indice]);
			indice = indice + 1;
		}
		printf("\nEl arreglo original es: ");
		indice = 0;
		while (indice < n) {
			if (indice > 0) printf(",");
			printf("%d", a[indice]);
			indice = indice + 1;
		}
		printf("\n");
		indice = 0;
		limite = n - 1;
		while (limite > 0) {
			while (indice < limite) {
				if (a[indice] < a[indice + 1]) {
					pivote = a[indice + 1];
					a[indice + 1] = a[indice];
					a[indice] = pivote;
				}
				indice = indice + 1;
			}
			limite = limite - 1;
			indice = 0;
		}
		printf("\n");
		printf("El arreglo ordenado es: ");
		indice = 0;
		while (indice < n) {
			if (indice > 0)printf(",");
			printf("%d", a[indice]);
			indice = indice + 1;

		}
	}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

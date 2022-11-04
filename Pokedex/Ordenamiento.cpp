#include "Ordenamiento.h"
void Ordenamiento::swap(Poke* p1, Poke* p2)
{

	Poke cambio = *p1;
	*p1 = *p2;
	*p2 = cambio;
};
void Ordenamiento::NumSelection(Poke pokemons[], int n)
{
	int i, j, indice;

	for (i = 0; i < n; i++)
	{

		indice = i;
		for (j = i + 1; j < n; j++)
		{
			if (pokemons[j].num < pokemons[indice].num)
			{
				indice = j;
			}
		}
		swap(&pokemons[indice], &pokemons[i]);
	}
}
void Ordenamiento::GenSelection(Poke pokemons[], int ng)
{
	int i, j, indice;

	for (i = 0; i < ng; i++)
	{

		indice = i;
		for (j = i + 1; j < ng; j++)
		{
			if (pokemons[j].gen < pokemons[indice].gen)
			{
				indice = j;
			}
		}
		swap(&pokemons[indice], &pokemons[i]);
	}
}

void  Ordenamiento::shellSortGen(Poke lista[], int n)
{
	int i, j, k, intervalo;
	intervalo = n / 2;
	Poke temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++)
		{
			j = i - intervalo;
			while (j >= 0)
			{
				k = j + intervalo;
				if (lista[j].gen <= lista[k].gen)
				{
					j = -1;
				}
				else
				{
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
};

void  Ordenamiento::shellSortNum(Poke lista[], int n)
{
	int i, j, k, intervalo;
	intervalo = n / 2;
	Poke temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++)
		{
			j = i - intervalo;
			while (j >= 0)
			{
				k = j + intervalo;
				if (lista[j].num <= lista[k].num)
				{
					j = -1;
				}
				else
				{
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
};

int  Ordenamiento::divideGen(Poke lista[], int start, int end)
{
	int left, right, pivot;
	Poke temp;
	pivot = lista[start].gen;
	left = start;
	right = end;

	while (left < right)
	{
		while (lista[right].gen > pivot)
		{
			right--;
		}
		while ((left < right) && (lista[left].gen <= pivot))
		{
			left++;
		}

		if (left < right)
		{
			temp = lista[left];
			lista[left] = lista[right];
			lista[right] = temp;
		}
	}

	temp = lista[right];
	lista[right] = lista[start];
	lista[start] = temp;


	return right;
};
void  Ordenamiento::quikSortGen(Poke lista[], int start, int end)
{
	int pivot;
	if (start < end)
	{
		pivot = divideGen(lista, start, end);

		Ordenamiento::quikSortGen(lista, start, pivot - 1);

		Ordenamiento::quikSortGen(lista, pivot + 1, end);
	}
};
void  Ordenamiento::quikSortNum(Poke lista[], int start, int end)
{
	int pivot;
	if (start < end)
	{
		pivot = divideNum(lista, start, end);

		Ordenamiento::quikSortNum(lista, start, pivot - 1);

		Ordenamiento::quikSortNum(lista, pivot + 1, end);
	}
};
int  Ordenamiento::divideNum(Poke lista[], int start, int end)
{
	int izq, der, pivot;
	Poke temp;
	pivot = lista[start].num;
	izq = start;
	der = end;

	while (izq < der)
	{
		while (lista[der].num > pivot)
		{
			der--;
		}
		while ((izq < der) && (lista[izq].num <= pivot))
		{
			izq++;
		}

		if (izq < der)
		{
			temp = lista[izq];
			lista[izq] = lista[der];
			lista[der] = temp;
		}
	}

	temp = lista[der];
	lista[der] = lista[start];
	lista[start] = temp;

	//la nueva posición del pivot
	return der;
};

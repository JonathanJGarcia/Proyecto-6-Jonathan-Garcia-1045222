#pragma once
#include "Poke.h"
class Ordenamiento
{
public:
	void swap(Poke* p1, Poke* p2);
	void NumSelection(Poke pokemons[], int n);
	void GenSelection(Poke pokemons[], int ng);
	void quikSortGen(Poke lista[], int start, int end);
	void quikSortNum(Poke lista[], int start, int end);
	void shellSortGen(Poke lista[], int n);
	void shellSortNum(Poke lista[], int n);
	int divideNum(Poke lista[], int start, int end);
	int divideGen(Poke lista[], int start, int end);

};



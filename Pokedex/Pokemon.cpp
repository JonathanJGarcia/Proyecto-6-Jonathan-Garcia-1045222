#include "Pokemon.h"
int Pokemon::getNum()
{
	return numero;
}
String^ Pokemon::getName()
{
	return nombre;
}
int Pokemon::getGen()
{
	return generacion;
}

void Pokemon::setNum(int _num)
{
	this->numero = _num;
}
void Pokemon::setName(String^ _nom)
{
	this->nombre = _nom;
}
void Pokemon::setGen(int _gen)
{
	this->generacion = _gen;
}

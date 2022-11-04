#pragma once
using namespace System;

ref class Pokemon
{
private:
	int numero;
	String^ nombre;
	int generacion;

public:
	int getNum();
	String^ getName();
	int getGen();

	Void setNum(int _num);
	Void setName(String^ _nom);
	Void setGen(int _gen);

};

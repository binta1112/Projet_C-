#pragma once
#include "pch.h"
#include "Ressouce.h"
#include "Date.h"
class Biblio
{
private:
	static int cmpt;
	int num_biblio;
	Date creat_date;
	Ressource** biblioRsc;
	int capacity;
	int nb_rsc;
public:
	Biblio();
	void Print() const;
	void AddRsc(Ressource* r);
	bool Isfull() const;
	void ResizeBiblio();
	~Biblio();
};


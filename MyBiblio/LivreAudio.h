#pragma once
#include "Livre.h"
#include "RessourceNumerique.h"
class LivreAudio:virtual public Livre,virtual public RessourceNumerique
{
public:
	LivreAudio(string ISBM, int nb_pg, string title, Auteur* auth, Date pub_date, string format, float size);
	void Print() const;
};


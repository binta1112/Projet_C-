#pragma once
#include "Ressouce.h"
class RessourceNumerique:virtual public Ressource
{
private:
	string format;
	float taille;
public:
	RessourceNumerique(string title, Auteur* auth, Date pub_date,string format, float size);
    void Print() const override;
};


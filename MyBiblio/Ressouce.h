#pragma once
#include "pch.h"
#include "Auteur.h"
class Ressource
{
private:
	string title;
	Auteur *auth;
	Date pub_date;
protected:
	float prix;//attrubut deduit
public:
	Ressource(string, Auteur*,Date);
	virtual void Print() const;
	virtual void calculer_prix(float unit) = 0;
	virtual ~Ressource();

};


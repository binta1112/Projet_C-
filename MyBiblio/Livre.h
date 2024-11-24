#pragma once
#include "Ressouce.h"
class Livre : virtual public Ressource
{
private:
	string ISBM;
	int nb_pages;
public:
	Livre(string ISBM, int nb_pg, string title, Auteur* auth, Date pub_date);
	void Print() const override;
	void calculer_prix(float unit) override ;
	~Livre() override;
};


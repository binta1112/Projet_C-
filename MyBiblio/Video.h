#pragma once
#include "RessourceNumerique.h"
#include "Resolution.h"
class Video :  public RessourceNumerique
{
private:
	Resolution rsl;
	int duree;
public:
	Video(string title, Auteur* auth, Date pub_date,string format, float size, Resolution rsl,int duree);
	void calculer_prix(float unit) override;
	void Print() const;

};


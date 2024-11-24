#include "pch.h"
#include "Date.h"
#include <ctime>
Date::Date(int j, int m, int a) :jour(j), mois(m), annee(a)
{}
Date::Date()
{
	time_t T = time(nullptr);// je recupere l'heure actuelle en secondes écoulées depuis le 1er janvier 1970 à 00:00:00 UTC
	tm sysT;
	localtime_s(&sysT, &T);// lje converti ce nombre de secondes en local time qui contient l'heure,minute,jour ... 
	this->jour = sysT.tm_mday;
	this->mois = sysT.tm_mon + 1;
	this->annee = sysT.tm_year + 1900;
}
void Date::Print_date() const
{
	cout << this->jour << "-" << this->mois << "-" << this->annee << endl;
} 
#pragma once
#include "pch.h"
using namespace std;
#include <string>
class Auteur
{
private:
	 static int compteur;
	 int id_auteur;
	 string fname;
	 string lname;
	 Date born_date;
	 string bio;
public:
	Auteur(string fname, string lname,Date born,  string bio);
	Auteur(const Auteur& A) = delete;
	void DetailsAuth() const;
};


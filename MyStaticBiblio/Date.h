#pragma once
class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int j, int m, int a);
	void Print_date() const;
};


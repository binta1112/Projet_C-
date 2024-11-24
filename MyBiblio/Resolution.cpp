#include "Resolution.h"
#include <iostream>
using namespace std;
Resolution::Resolution(int a, int b):x(a),y(b)
{
}

void Resolution::Print() const
{
	cout << this->x << "x" << this->y << endl;

}

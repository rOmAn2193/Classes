#include "playclasses.h"

playclass1::playclass1()
{
    length = 2.0;
    width = 1.0;
}
playclass1::playclass1(double l, double w)
{
	length = l;
	width = w;
}


playclass2::playclass2()
{
    length = 4.0;
    width = 2.0;
}
playclass2::playclass2(double l, double w)
{
	length = l;
	width = w;
}

double playclass2::getlength()
{
    return length;
}

double playclass2::getwidth()
{
    return width;
}

void playclass2::setlength(double l)
{
    length = l;
}

void playclass2::setwidth(double w)
{
    width = w;
}

void playclass1::printem(ofstream &outf)
{
	outf << "Step 2" << '-' << '3' << 'A' << endl;
	outf << "playclass1" << " " << "l = " << length << " " << "w = " << width << endl;
}

void playclass2::printem(ofstream &outf)
{
	outf << "playclass2" << " " << "l = " << length << " " << "w = " << width << endl;
}
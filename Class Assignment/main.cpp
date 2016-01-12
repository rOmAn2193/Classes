#include "playclasses.h"

double area(double l, double w)
{
	return l*w;
}
void main ()
{
    playclass1 a;
    playclass2 b;
    ofstream outf("playclasses.out");
    
	outf << "Step 1" << endl;
    outf << "Object a has w = " << a.width << "1 = " << a.length << endl;
    outf << "Object b has w = " << b.getwidth() << "1 = " << b.getlength() << endl;
    
	playclass1 x(7.8, 5.3);
	playclass2 y(21.0, 10.5);
	x.printem (outf);
	y.printem (outf);

	outf << "Step 3A, 3B" << endl;
	outf << "This is the area of a rectangle x = " << area(x.length, x.width) << endl;
	outf << "This is the area of a rectangle y = " << area(y.getlength(), y.getwidth()) << endl;

	a.length = 5.0;
	a.width = 2.25;
	b.setlength(10.25);
	b.setwidth(7.75);

	outf << "Step 3C, 3D" << endl;
	outf << "This is the area of a rectangle a = " << area(a.length, a.width) << endl;
	outf << "This is the area of a rectangle b = " << area(b.getlength(), b.getwidth()) << endl;
}


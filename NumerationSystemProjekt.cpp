// ConsoleApplication1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "global_variables.h"
#include "general_includes.h"

int main()
{
	
	//TVORBA OBJEKTU
	c_NumSysConv NSC_1;
	NSC_1.c_NSC();
	

	short x = 1;
	short *px = &x;
	short cy = 5;

	cout << "value of x: \t\t\t[x] = \t\t"<< x << endl;
	cout << "adress of x: \t\t\t[&x] = \t\t" << &x << endl;
	cout << "pointer to x: \t\t\t[*px] = \t" << *px << endl;	
	cout << "adress of pointer x: \t\t[&px] = \t" << &px << endl;
	cout << "value inside the pointer x: \t[px] = \t\t" << px << endl;
	cout << "adress of cy: \t\t\t[&cy] = \t" << &cy << endl;
	cout << "value of cy: \t\t\t[cy] = \t\t" << cy << endl;
	
	cout << endl<<endl;

	px = &cy;
	*px = 16;

	cout << "pointer to x: \t\t\t[*px] = \t" << *px << endl;
	cout << "adress of pointer x: \t\t[&px] = \t" << &px << endl;
	cout << "value inside the pointer x: \t[px] = \t\t" << px << endl;
	cout << "adress of cy: \t\t\t[&cy] = \t" << &cy << endl;
	cout << "value of cy: \t\t\t[cy] = \t\t" << cy << endl;

	cout << endl << endl;

	return 0;
}
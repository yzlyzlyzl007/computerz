#include "ComputerZ.h"
#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ComputerZ w;
	w.show();
	return a.exec();
}

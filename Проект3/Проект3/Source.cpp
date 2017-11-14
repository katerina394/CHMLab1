#include <cmath>
#include <fstream>
#include "Header.h"
double testfunc(double x, double u)
{
	return -3*u;
}
double mainfunc(double x, double u) {
	return -cos(20 * x)*pow(u, 3) + pow(u, 2) / (1 + pow(sin(x), 3)) + u;
}
double RK4(double(*f)(double, double), double h, double x, double v)
{
	double k1 = f(x, v);
	double k2 = f(x + h / 2, v + h*k1 / 2);
	double k3 = f(x + h / 2, v + h*k2 / 2);
	double k4 = f(x + h, v + h*k3);
	return v + h * (k1 + 2*k2 + 2*k3 + k4)/6;
}

void DoubleCount(double(*f)(double, double), double(*method)(double(*f)(double, double), double, double, double), int p, row& Row, double epsmin, double eps)
{
	Row.stepDec = Row.stepInc = 0;
	double v1 = method(f, Row.h, Row.x, Row.v);
	double v2 = method(f, Row.h*0.5, Row.x + Row.h*0.5, method(f, Row.h*0.5, Row.x, Row.v));
	Row.S = (v2 - v1) / (pow(2, p)-1);
	if (eps != 0) {
		while (fabs(Row.S) > eps) {
			Row.h *= 0.5;
			Row.stepDec++;
			v1 = method(f, Row.h, Row.x, Row.v);
			v2 = method(f, Row.h*0.5, Row.x + Row.h*0.5, method(f, Row.h*0.5, Row.x, Row.v));
			Row.S = (v2 - v1) / (pow(2, p) - 1);
		}
	}
	Row.x += Row.h;
	if (fabs(Row.S) < epsmin) {
		Row.stepInc++;
	}
	Row.vIt = Row.v = v1;
	Row.vUdv = v2;
	Row.V_vUdv = v1 - v2;
	Row.vUt = v1 + Row.S*pow(2, p);
}

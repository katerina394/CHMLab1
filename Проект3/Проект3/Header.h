#pragma once
#include <fstream>
struct row {
	double h, x, v, vUdv, V_vUdv, S, vUt, vIt, stepDec, stepInc, u, u_v;
	friend std::ofstream& operator<< (std::ofstream & outs, row& Row) {
		outs << Row.h << ' ' << Row.x << ' ' << Row.v << ' ' << Row.vUdv << ' ' << Row.V_vUdv << ' ' << Row.S << ' ' << Row.vUt << ' ' << Row.vIt << ' ' << Row.stepDec << ' ' << Row.stepInc << std::endl;
		return outs;
	}
	friend std::ifstream& operator>> (std::ifstream & ins, row& Row) {
		ins >> Row.h >> Row.x >> Row.v >> Row.vUdv >> Row.V_vUdv >> Row.S >> Row.vUt >> Row.vIt >> Row.stepDec >> Row.stepInc;
		return ins;
	}
};
double testfunc(double x, double u);
double mainfunc(double x, double u);
void DoubleCount(double(*f)(double, double), double(*method)(double(*f)(double, double), double, double, double), int p, row& Row, double epsmin, double eps);
double RK4(double(*f)(double, double), double h, double x, double v);
// Ian Liotta
// BCS 230 Assignment 08

#include "stdafx.h"
#include "snowData.h"

snowData::snowData(int dt, double dpth)
{
	date = dt;
	depth = dpth;
}

int snowData::getDate() {
	return date;
}

double snowData::getDepth() {
	return depth;
}

void snowData::setDate(int dt) {
	date = dt;
}

void snowData::setDepth(double dpth) {
	depth = dpth;
}
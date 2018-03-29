// Ian Liotta
// BCS 230 Assignment 08

#ifndef SNOWDATA_H
#define SNOWDATA_H

class snowData
{
public:
	snowData(int dt = 1, double dpth = 0.0);
	int getDate();
	double getDepth();
	void setDate(int dt);
	void setDepth(double dpth);

private:
	int date;
	double depth;
};
#endif // !SNOWDATA_H


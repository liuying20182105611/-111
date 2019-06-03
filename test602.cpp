// test602.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int foot;
	int inch;

public:
	CFeet();
	CFeet(int f, int i);
	int setFeet(int f, int i);
	void displayFeet();
	int getFoot();
	int getInch();
	CFeet addDate(CFeet &od);         //   od3 = od1.addFeet(od2);
	CFeet operator + (CFeet &otemp);   //	od3 = od1 + od2;
	CFeet operator + (const int &d);
};
CFeet CFeet::operator +(CFeet &otemp)
{
	CFeet temp;
	temp.setFeet(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CFeet CFeet::operator + (const int &d)
{
	CFeet temp;
	temp.setFeet(foot, inch + d);
	return temp;
}
CFeet::CFeet()
{
	foot = 1;
	inch = 1;
}
CFeet::CFeet(int f, int i)
{
	foot = f;
	inch = i;
}
int CFeet::setFeet(int f, int i)
{
	foot = f;
	inch = i;
	return 0;
}
void CFeet::displayFeet()
{
	cout << "英尺=" << foot << "英寸=" << inch << endl;
}
int CFeet::getFoot()
{
	return foot;
}
int CFeet::getInch()
{
	return inch;
}
int main()
{
	CFeet od1(2,2), od2(1,2), od3;
	od3 = od1 + 12;
	od1.displayFeet();
	od2.displayFeet();
	od3.displayFeet();
	return 0;
}
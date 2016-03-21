#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include"a.h"
using namespace std;
int height,mass;
int a,b;
float BMIvalue;
string category;
BMI bmi;
int main(){
	ifstream Filein("file.in",ios::in);
	if(!Filein){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	ofstream Fileout("file.out",ios::out);
	if(!Fileout){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	Fileout<<"BMI\tCat\n";
	bmi.set(a,b);
	bmi.get();
	while(Filein>>height>>mass){
		if(height==0||mass==0) break;	
		float BMI_Value();
		string Category();
		Fileout<<BMI_Value()<<"\t"<<Category()<<endl;
	}
	cout<<endl;
	return 0;
}

float BMI_Value(){
	BMIvalue=mass/(float)(height*0.01)/(float)(height*0.01);
	return BMIvalue;
}

string Category(){
	if(BMIvalue<15) category='V';
	if(15<=BMIvalue&&BMIvalue<16) category='S';
	if(16<=BMIvalue&&BMIvalue<18.5) category='U';
	if(18.5<=BMIvalue&&BMIvalue<25) category='N';
	if(25<=BMIvalue&&BMIvalue<30) category='O';
	if(30<=BMIvalue&&BMIvalue<35) category='I';
	if(35<=BMIvalue&&BMIvalue<40) category='J';
	if(40<=BMIvalue) category='K';
	return category;
}

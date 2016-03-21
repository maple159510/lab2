#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class BMI{
	private:
		int height;
		int mass;
	public:
		int set(int a,int b){
			height=a;
			mass=b;
		}
		int get(){
			return height,mass; 
		}
		float BMI_Value();			
		string Category();
};

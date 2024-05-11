//Andrew Alvarez
//BMI

#include <iostream>
 using namespace std;
 
 int main()
 {
 int bmi,height, weight;
 	
 	cout << " Enter Weight ( Pounds):";
 	cin >> weight;
 	
 	cout << " Enter Height (Inches):";
 	cin >> height;
 	
 	bmi = weight *  703 / (height * height);
 
cout << bmi << endl; 

if( bmi < 18.5 )
{
	cout << " You are underweight";
}
else if ( bmi > 25)
{
	cout << " You are OverWeight";
}
else
{
	cout << " your weight is optimal! good job!" << endl;
}






 	return 0;
 }

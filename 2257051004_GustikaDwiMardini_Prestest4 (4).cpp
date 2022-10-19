#include <iostream>
using namespace std;

int main(){
	float tinggi, berat, beratseharusnya, selisihberat, bmi;
	printf ("berat(kg)") ;
	printf ("tinggi(cm)") ;

	tinggi = tinggi / 100;
	bmi = berat / (tinggi * tinggi);
	
	if (bmi < 17.0);
	cout << "kurus kekurangan berat badan tingkat berat\n";
		
	if (bmi = 17.0 - 18,4 );
	cout << "kurus kekurangan berat badan tingkat ringan\n";
	
	if (bmi = 18.5 - 25.0);
	cout << "normal\n";

	if (bmi = 25.1 - 27.0);
	cout << "gemuk kelebihan berat badan tingkat ringan\n";
	
	if (bmi > 27.0);
	cout << "gemuk kelebihan berat badan tingkat berat\n";
	
	return 0;
	
	
}

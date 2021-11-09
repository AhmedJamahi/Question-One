#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	//declaring the variables
	double r,h,Area,Volume;
	double p=3.141592;//declaring and initializizng the variables
	cout <<"WELCOME! THIS IS A PROGRAM TO CALCULATE THE AREA AND THE VOLUME OF ANY CYLINDER\n";
	cout<<"PLEASE ENTER THE THE HEIGHT\n";
	cin>>h;//giving the user an option to put in the height
	cout << "PLEASE ENTER THE REDIUS\n";
	cin>>r;//giving the user option to put in the redius
	Area=2*p*r*h+2*p*r*r;//formular for the area
	Volume=p*r*r*h;//formular for the volume
	// outputing the results
	cout <<"Area of the cylinder=" << Area <<"\n";
	cout <<"Volume of the cylinder=" <<Volume <<"\n";
	
	return 0;
}

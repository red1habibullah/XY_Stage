#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double BEAM_SIZE = 0.4; //cm
  const double Q_E       =1.6021766208e-19;
  const double PI        =3.14159265359;  
  float dose = -1;
  float current;
  float time;
//  float area = PI*(BEAM_SIZE/2.0)*(BEAM_SIZE/2.0);

  cout<< "Please enter the current(in nA): ";
  cin>> current;
  current = current*(1e-9);
  cout <<endl;
  cout<< "Please enter the beam diameter(cm): ";
  cin>> BEAM_SIZE;
  cout <<endl;

  float area = PI*(BEAM_SIZE/2.0)*(BEAM_SIZE/2.0);
  while (dose !=0){
  cout <<"Please enter the desired dosage(p/cm^2)<0 to end>: ";
  //cout <<"Please enter the desired dosage madnitude(p/cm^2) d = 1x10^: ";
  cin >> dose;
  //dose = 1.0*pow(10,dose);  
  time = area*dose*Q_E/current;
  if (dose ==0) break;
  cout << "The required exposure time is: "<<time<<"(s), or "<<time/60.0<<"(min)"<<endl;
  cout <<endl;
  cout <<endl;
  }

return 0;
}

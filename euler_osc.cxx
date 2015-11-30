#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double t=0, temp, f[2], b[2]; //f=Euler forward, b=Euler backward
	const double dt = M_PI/10.0;
	const int N = 20*M_PI/dt;
	
	f[0] = 1; b[0] = 1; // x(0)
	f[1] = 0; b[1] = 0; // dx(0)/dt

	cout << t << "\t" << f[0] << "\t" << b[0] << "\t" << endl;
	for (int i=0; i<N; i++){
		t += dt;
		temp = f[0];
		f[0] = f[0]+f[1]*dt;
		f[1] = f[1]-temp*dt;
		b[0] = (b[0]+b[1]*dt)/(1+(dt*dt));
		b[1] = b[1]-b[0]*dt;
		cout << t << "\t" << f[0] << "\t" << b[0] << "\t" << endl;
		}

	return(0);
}

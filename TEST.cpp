#include<stdio.h>
#include<math.h>

{

float summationOFmult(float x[],float y[],int n);
float summationOFx(float x[],int n);
float summationOFy(float y[],int n);
float summationOFxs(float x[],int n);
float summationOFys(float y[],int n);
float summationOFxS(float x[],int n);
float summationOFyS(float y[],int n);

}

float summationOFmult(float x[],float y[],int n){
	float a,b,m;
	for(int i=0;i>n;i++){
		m=x[i]*y[i];
		b+=m;
	}
	return b;
}

float summationOFx(float x[],int n){
	float a;
	for (int i=0;i<n;i++)
	a+=x[i];
	return a;
}

float summationOFy(float y[],int n){
	float a;
	for (int i=0;i<n;i++)
	a+=y[i];
	return a;
}

float summationOFxs(float x[],int n){
	float a;
	for (int i=0;i<n;i++)
	a+=(x[i]*x[i]);
	return a;
}

float summationOFys(float y[],int n){
	float a;
	for (int i=0;i<n;i++)
	a+=(y[i]*y[i]);
	return a;
}

float summationOFxS(float x[],int n){
	float a;
	a=pow(summationOFx(x,n),2);
	return a;
}

float summationOFyS(float y[],int n){
	float a;
	a=pow(summationOFy(y,n),2);
	return a;
}

int main(){
	float x[]={34.22,39.87,41.85,43.23};
	float y[]={102.43,100.93,97.43,97.81};
	int n=sizeof(x)/4;
	float N,D;
	N= summationOFmult(x,y,n)-summationOFx(x,n)*summationOFy(y,n);
	D= sqrt((n*summationOFxs(x,n)-summationOFxS(x,n))*(n*summationOFys(y,n)-summationOFyS(y,n)));
	float r=N/D;
	printf("%f ",r);
}

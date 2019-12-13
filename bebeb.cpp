#include<iostream>
using namespace std;
int main()
{
	system ("title FANDA CANTIK);
	double utbk,mandiri,spmb,total;
	double *a=&utbk;
	double *b=&mandiri;
	double *c=&spmb;
	double *d=&total;
	
	cout<<"Nilai UTBK = ";
	cin>>utbk;
	cout<<"Nilai Mandiri = ";
	cin>>mandiri;
	cout<<"Nilai SPMB = ";
	cin>>spmb;
	total = (utbk+mandiri+spmb)/3;
	if (400<=total&&total<=600){
		cout<<"Nilai UTBK = "<< *a<<endl;
		cout<<"Nilai MANDIRI = "<< *b<<endl;
		cout<<"Nilai SPMB = "<< *c<<endl;
		cout<<"Nilai Total = "<< *d<<endl;
		cout<<"selamat anda di terima di perguruan tinggi negeri"<<endl;
	}
	if (total&&total<=399){
		cout<<"Nilai UTBK = "<< *a<<endl;
		cout<<"Nilai MANDIRI = "<< *b<<endl;
		cout<<"Nilai SPMB = "<< *c<<endl;
		cout<<"Nilai Total = "<< *d<<endl;
		cout<<"Mohon maaf anda belum diterima di perguruan tinggi negeri"<<endl;
		cout<<"SILAHKAN MENCOBA TAHUN DEPAN";
	}
}

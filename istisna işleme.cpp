#include<iostream>
using namespace std;

double bolme(int a,int b){
	try{  // dene bir demek b nin 1 den k���kl���n� denicez a�a��da 
		if(b<1){
			throw 0; //b den k���kse -1 at direkt demek
		}
		return a/b;	//b>=1 ise i�lemi yapacakt�r
	}
	catch(int asd){   //asd i yazd�rd�k throwdan at�lan� tuttu catch ya hani zaten 
		cout<<asd<<"Bir say� s�f�ra b�l�nemez";
	}
	}
	





int main(){
	
	cout<<bolme(5,0);
	cout<<bolme(5,1);
	
	
	return 0;
}

#include <iostream>
#include <iomanip>  
#include <time.h>
#include <cstdlib>
using namespace std;
void tcmagic(int n){
	
	int **matris=new int *[n];
	for(int i=0;i<n;i++)
		matris[i]=new int [n];
	
	int m=0;
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			matris[i][k]=k+1+n*m;
		}
		m++;
	}
	
	
	
		int k,mi,mj;
			k = (n - 2) / 4;

			for (mi = 0; mi < k; mi++)
			{
				for (mj = k + 1; mj < 2 * k + 1; mj++)
				{
					int temp = matris[mi][mj];
					matris[mi][mj] = matris[mi][4 * k + 2 - mj - 1];
					matris[mi][4 * k + 2 - mj - 1] = temp;

				}

			}
			for (mi = 3 * k + 2; mi < 4 * k + 2; mi++)
			{
				for (mj = k + 1; mj < 2 * k + 1; mj++)
				{
					double temp2 = matris[mi][mj];
					matris[mi][mj] = matris[mi][4 * k + 2 - mj - 1];
					matris[mi][4 * k + 2 - mj - 1] = temp2;
				}

			}

			for (mj = 0; mj < k; mj++)
			{
				for (mi = k + 1; mi < 2 * k + 1; mi++)
				{
					int temp = matris[mi][mj];
					matris[mi][mj] = matris[4 * k + 2 - mi - 1][mj];
					matris[4 * k + 2 - mi - 1][mj] = temp;

				}

			}
			for (mj = 3 * k + 2; mj < 4 * k + 2; mj++)
			{
				for (mi = k + 1; mi < 2 * k + 1; mi++)
				{
					double temp2 = matris[mi][mj];
					matris[mi][mj] = matris[4 * k + 2 - mi - 1][mj];
					matris[4 * k + 2 - mi - 1][mj] = temp2;
				}

			}

			for (mi = 0; mi < k; mi++)
			{
				for (mj = k + 1; mj < 3 * k + 1; mj++)
				{
					int temp = matris[mi][mj];
					matris[mi][mj] = matris[4 * k + 2 - mi - 1][mj];
					matris[4 * k + 2 - mi - 1][mj] = temp;

				}

			}

			for (mj = 0; mj < k; mj++)
			{
				for (mi = k + 1; mi < 3 * k + 1; mi++)
				{
					int temp = matris[mi][mj];
					matris[mi][mj] = matris[mi][4 * k + 2 - mj - 1];
					matris[mi][4 * k + 2 - mj - 1] = temp;

				}

			}

			for (int a = 0; a < n / 2; a++)
			{
				if (a != k)
				{
					int temp = matris[a][3 * k + 1];
					matris[a][3 * k + 1] = matris[4 * k + 2 - a - 1][3 * k + 1];
					matris[4 * k + 2 - a - 1][3 * k + 1] = temp;

				}

			}


			for (int a = k + 1; a <= 3 * k; a++)
			{

				int temp = matris[a][k];
				matris[a][k] = matris[a][3 * k + 1];
				matris[a][3 * k + 1] = temp;

			}

			int temp = matris[n / 2][k];
			matris[n / 2][k] = matris[n / 2][3 * k + 1];
			matris[n / 2][3 * k + 1] = temp;



			///////////////////////////////////////////////

			for (int a = 0; a < n / 2; a++)
			{
				if (a != k)
				{
					int temp = matris[3 * k + 1][a];
					matris[3 * k + 1][a] = matris[3 * k + 1][4 * k + 2 - a - 1];
					matris[3 * k + 1][4 * k + 2 - a - 1] = temp;

				}

			}


			for (int a = 0; a < n / 2; a++)
			{
				if (a != k)
				{
					int temp = matris[k][a];
					matris[k][a] = matris[k][4 * k + 2 - a - 1];
					matris[k][4 * k + 2 - a - 1] = temp;

				}

			}

			for (int a = k + 1; a <= 3 * k; a++)
			{

				int temp = matris[k][a];
				matris[k][a] = matris[3 * k + 1][a];
				matris[3 * k + 1][a] = temp;

			}

			int tempm = matris[k][0];
			matris[k][0] = matris[3 * k + 1][0];
			matris[3 * k + 1][0] = tempm;



			////////////////////
			for (int a = k + 1; a < n / 2; a++)
			{

				int temp = matris[0][a];
				matris[0][a] = matris[0][4 * k + 2 - a - 1];
				matris[0][4 * k + 2 - a - 1] = temp;

			}


			for (int a = 0; a < k; a++)

			{

				int temp = matris[n / 2][a];
				matris[n / 2][a] = matris[n / 2][4 * k + 2 - a - 1];
				matris[n / 2][4 * k + 2 - a - 1] = temp;

			}
			
			for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			
			cout<<setw(5)<<matris[i][k];
		}
		cout<<endl;
	}
		cout<<endl;	
		
	int toplam=0,toplam2=0,toplam1=0;
	
	for(int i=0;i<n;i++){
		toplam=toplam+matris[1][i];
	}
	
	for(int i=0;i<n;i++){
		toplam1=toplam1+matris[i][1];
	}
	
	
	for(int i=0;i<n;i++){
		toplam2=toplam2+matris[i][i];
	}
	
	cout<<"Sum of Rows : "<<toplam<<endl;
	cout<<"Sum of Columns: "<<toplam1<<endl;
	cout<<"Diagonal Sum: "<<toplam2<<endl;
	
		cout<<endl;cout<<endl;
		
		
	
}
void ccmagic(int n){
	

	int **matris = new int *[n];
	for(int i=1;i<=n;i++)
		matris[i]=new int[n];
	
	int *yenimatris=new int [(n*n)/8];
	int *yenimatris1=new int [(n*n)/8];
	int *yenimatris2=new int [(n*n)/8];
	int *yenimatris3=new int [(n*n)/8];
	for(int a=1;a<=n;a++){
		for(int b=1;b<=n;b++){
			matris[a][b]=0;
		}
	}
	

	int m=0;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			matris[i][k]=k+n*m;
		}
		m++;
	}
	
	
	//-------------------------üst
	
	
	int sayici=0;
	for(int i=1;i<=n/4;i++){
		for(int k=n/4+1;k<=3*n/4;k++){
			yenimatris[sayici]=matris[i][k];
		sayici++;
		}
	}
	int sayici1=0;
	for(int i=3*n/4+1;i<=n;i++){
		for(int k=n/4+1;k<=3*n/4;k++){
			yenimatris1[sayici1]=matris[i][k];
		sayici1++;
		}
	}

	for(int i=3*n/4+1;i<=n;i++){
		for(int k=n/4+1;k<=3*n/4;k++){
			matris[i][k]=yenimatris[sayici-1];
		sayici--;
		}
	}
	
	for(int i=1;i<=n/4;i++){
		for(int k=n/4+1;k<=3*n/4;k++){
			matris[i][k]=yenimatris1[sayici1-1];
		sayici1--;
		}
	}


	
	//------------------yan
	
	
	
	int sayici2=0;
	for(int i=n/4+1;i<=3*n/4;i++){
		for(int k=1;k<=n/4;k++){
			yenimatris2[sayici2]=matris[i][k];
		sayici2++;
		}
	}
	int sayici3=0;
	for(int i=n/4+1;i<=3*n/4;i++){
		for(int k=3*n/4+1;k<=n;k++){
			yenimatris3[sayici3]=matris[i][k];
		sayici3++;
		}
	}


	for(int i=n/4+1;i<=3*n/4;i++){
		for(int k=1;k<=n/4;k++){
			matris[i][k]=yenimatris3[sayici3-1];
		sayici3--;
		}
	}
	
	for(int i=n/4+1;i<=3*n/4;i++){
		for(int k=3*n/4+1;k<=n;k++){
			matris[i][k]=yenimatris2[sayici2-1];
		sayici2--;
		}
	}
	
		
		
		
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			
			cout<<setw(5)<<matris[i][k];
		}
		cout<<endl;
	}
		cout<<endl;	
		
		
		
	
		
		
		
	int toplam=0,toplam2=0,toplam1=0;
		

	for(int i=1;i<=n;i++){
		toplam=toplam+matris[1][i];
	}
	
	
	for(int i=1;i<=n;i++){
		toplam1=toplam1+matris[i][1];
	}
		
	for(int i=1;i<=n;i++){
		toplam2=toplam2+matris[i][i];
	}
	
	cout<<"Sum of Rows : "<<toplam<<endl;
	cout<<"Sum of Columns: "<<toplam1<<endl;
	cout<<"Diagonal Sum: "<<toplam2<<endl;
	
		
		cout<<endl;
		cout<<endl;
		
		
}

void tmagic(int n){
	int **matrix=new int *[n];     //matris
	for(int i=0;i<n;i++)
		matrix[i]=new int [n];
	 
	for(int i=0;i<n;i++){         //0matris
		for(int k=0;k<n;k++)
		matrix[i][k]=0;
	} 
//	srand(time(NULL));
//	int bas=rand()%n;
//	int bas1=rand()%n;
	
	int bas=n/2;
	int bas1=n-1;

	cout<<endl;
	cout<<"Begining Point : "<<bas+1<<","<<bas1+1;                   //random
	cout<<endl;
		cout<<endl;	cout<<endl;

	int a=1;
	while(a!=(n*n)+1){
		if(matrix[bas%n][bas1%n]==0){
			matrix[bas%n][bas1%n]=a;
		}
		else{
			if((bas-1)%n<0){
				bas=bas+3;
			}
			if((bas1-2)%n<0){
				bas1=bas1+3;
			}
			matrix[(bas-1)%n][(bas1-2)%n]==a;
		}
		
		/*
		for(int i=0;i<n;i++){         //pmatris
		for(int k=0;k<n;k++){
			cout<<" "<<matrix[i][k];
		}
		cout<<endl;       
	}      */

		
		if(matrix[(bas+1)%n][(bas1+1)%n]==0){
			
			bas1++;
			bas++;
		}
		else{
			bas1--;
		}
		
		
		a++;
	}
	
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			
			cout<<setw(5)<<matrix[i][k];
		}
		cout<<endl;
	}
	
		cout<<endl;	
	int toplam=0,toplam2=0,toplam1=0;	
				

	for(int i=0;i<n;i++){
		toplam=toplam+matrix[1][i];
	}
	
	
	for(int i=0;i<n;i++){
		toplam1=toplam1+matrix[i][1];
	}
	
		
	for(int i=0;i<n;i++){
		toplam2=toplam2+matrix[i][i];
	}
	
	cout<<"Sum of Rows : "<<toplam<<endl;
	cout<<"Sum of Columns: "<<toplam1<<endl;
	cout<<"Diagonal Sum: "<<toplam2<<endl;
	
		
		cout<<endl;cout<<endl;
		
		
		
}
int main(){
	
	
while(1){
	
		cout<<"Give me a number for magic squares : ";
	int n;
	cin>>n;
	
	cout<<"Magic square degree = "<<n;
	cout<<endl;
	cout<<endl;
	cout<<"Sum of Numbers = "<<(n*((n*n)+1))/2;
	cout<<endl;
	cout<<endl;
	
	if(n%2==0){
		if(n%4==0)
			ccmagic(n);
		else
			tcmagic(n);
	}
	else
		tmagic(n);
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

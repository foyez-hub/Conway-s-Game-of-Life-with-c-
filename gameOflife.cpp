#include <bits/stdc++.h>
using namespace std;
#include<stdlib.h>
#include<time.h>
//FOYEZ
#include<windows.h>
typedef long long ll;
ll n=20;
ll m=50;
char mat[1000][1000];


int deadorlive(int i,int j){

			int neig=0;

		   if(mat[i+1][j]=='O'&&i<=n-1){
			   neig++;
		   }
		   if(mat[i-1][j-1]=='O'&&i>=0&&j>=0){
			   neig++;
		   }
		     if(mat[i+1][j+1]=='O'&&i<=n-1&&j<=m-1){
			   neig++;
		   }
		    if(mat[i+1][j-1]=='O'&&i<=n-1&&j>=0){
			   neig++;
		   }
		      if(mat[i-1][j+1]=='O'&&i>=0&&j<=m-1){
			   neig++;
		   }
		     if(mat[i-1][j]=='O'&&i>=0){
			   neig++;
		   }
		     if(mat[i][j+1]=='O'&&j<=m-1){
			   neig++;
		   }
		     if(mat[i][j-1]=='O'&&j>=0){
			   neig++;
		   }
		   return neig;
}



void grid(){

	char tem[1000][1000];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tem[i][j]=mat[i][j];
		}

	}


	for (int i = 0; i <n; i++)
	{
		for (int j=0; j <m; j++)
		{
			int flag=deadorlive(i,j);
	
			if(mat[i][j]=='O'){
		       if(flag<2){
				   tem[i][j]=' ';
		       }
			   else if (flag>3)
			   {
				   tem[i][j]=' ';
			   }
			}
			else if (mat[i][j]==' ')
			{
				
				 if(flag==3){
				   tem[i][j]='O';
		       }
			}
		}



	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j]=tem[i][j];
		}

	}



}
void print_grid(){

   for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;

	}
}
int main(){

		for (int i = 0; i < n; i++)
	   {
		for (int j = 0; j <m; j++)
		{
			mat[i][j]=' ';
			//me
		}
	  }
	  int indexi=n/2;
	  int indexj=m/2;
	  mat[indexi][indexj]='O';
	  mat[indexi][indexj-1]='O';
	  mat[indexi][indexj+1]='O';
	  mat[indexi-1][indexj]='O';

	

	 print_grid();
	 Sleep(500);
	 system("cls");

	
	

    while (1)
    {
	  grid();
	  print_grid();
	  Sleep(500);
	  system("cls");
    }


}

 #include <iostream>

using namespace std;

int main() 
{
	int mat[2][2]={{2,3},{4,6}}; //iinitialization
	int temp;
	cout<<"Matrix A = "<<endl<<endl; 
	for(int i=0;i<2;i++) //loops for matrix
	{
		for(int j=0;j<2;j++)
		cout<<mat[i][j]<<" " ;
		cout<<endl;
	}
	//for swaping 
	temp=mat[0][0];
	mat[0][0]=mat[1][1];
	mat[1][1]=temp;
	//for (-) values
	mat[0][1]=-mat[0][1];
	mat[1][0]=-mat[1][0];
	cout<<endl<<endl;
	
	cout<<"Adjoint of Matrix A = "<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<mat[i][j]<<" " ;
		cout<<endl;
	}
	
	return 0;
}

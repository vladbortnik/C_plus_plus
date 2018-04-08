// Mult of matrix

#include <iostream>
using namespace std;



int main() {
	
	int n1,n2,n3,m1,m2,m3;
	
	cout<<"Enter n1,n2,m1,m2: ";
	cin>>n1>>n2>>m1>>m2;
	
	cout<<"\n\n";
	
	if(m1!=n2)
		cout<<"Mult of matrixes is impossible."<<endl;
	else{
		
		n3=n1;
		m3=m2;
		
		
		int p1[n1][m1], p2[n2][m2], p3[n3][m3];
		
		
		
		srand(time(0));
		for(int i(0);i<n1;i++){
			for(int j(0);j<m1;j++){
				p1[i][j]=rand()%10;
			}
		}
		
		for(int i(0);i<n2;i++){
			for(int j(0);j<m2;j++){
				p2[i][j]=rand()%10;
			}
		}
		
		for(int i(0);i<n3;i++){
			for(int j(0);j<m3;j++){
				p3[i][j]=0;
			}
		}
		
		
		for(int i(0);i<n1;i++){
			for(int j(0);j<m1;j++){
				cout<<p1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		for(int i(0);i<n2;i++){
			for(int j(0);j<m2;j++){
				cout<<p2[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		
		
/////		
		
		
		for(int i=0;i<n3;i++){
			for(int j=0;j<m3;j++){
				for(int e=0;e<n2;e++){
					p3[i][j]+=p1[i][e]*p2[e][j];
				}
			}
		}
		
//////		
		
		
		
		for(int i(0);i<n3;i++){
			for(int j(0);j<m3;j++){
				cout<<p3[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		
		
		
}		

	return 0;
}
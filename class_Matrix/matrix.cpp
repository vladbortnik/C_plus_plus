#include "matrix.h"

typedef unsigned int size_t;




Matrix::Matrix(size_t a, size_t b){
	n = a;
	m = b;
	p = new int* [n];
	for(int i=0;i<n;i++){
		p[i] = new int [m];
	}
}

Matrix::~Matrix(){
	for(int i=0;i<n;i++){
		delete [] p[i];
	}
	delete [] p;
}

void Matrix::set(int i, int j, int val) const{
	if((i<0 || i>n-1) || (j<0 || j>m-1))
		return;
	p[i][j] = val;
}

int Matrix::get(int i, int j) const{
	if((i<0 || i>n-1) || (j<0 || j>m-1))
		return -1;
	return p[i][j];
}

size_t Matrix::getsizeN() const{
	return n;
}

size_t Matrix::getsizeM() const{
	return m;
}

Matrix::Matrix(const Matrix &a){
	n = a.n;
	m = a.m;
	p = new int* [n];
	for(int i=0;i<n;i++){
		p[i] = new int [m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			p[i][j] = a.p[i][j];
		}
	}
}

const Matrix& Matrix::operator=(const Matrix &a){
	if(this!=&a){
		for(int i=0;i<n;i++){
			delete [] p[i];
		}
		delete [] p;
		
		n = a.n;
		m = a.m;
		p = new int* [n];
		for(int i=0;i<n;i++){
			p[i] = new int [m];
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				p[i][j] = a.p[i][j];
			}
		}
	}
	return *this;
}














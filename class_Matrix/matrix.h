#ifndef MATRIX_H_
#define MATRIX_H_


class Matrix{
	
typedef unsigned int size_t;
	
private:
	
	size_t n;
	size_t m;
	int** p;
	
	
	
public:
	

	
	Matrix(size_t m, size_t n);
	~Matrix();
	
	void set(int i, int j, int val) const;
	int get(int i, int j) const;
	
	size_t getsizeN() const;
	size_t getsizeM() const;
	
	Matrix(const Matrix &a);
	
	const Matrix& operator=(const Matrix &a);
	
	
};

#endif
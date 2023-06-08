#ifndef MATRIX_CLASS_H
#define MATRIX_CLASS_H

class Matrix_class {

private:
	int** p;
	int row;
	int column;
public:
	Matrix_class();
	Matrix_class(int, int);
	~Matrix_class();
	void changeRows(int, int);
	void changeColumns(int, int);
	void printMatrix();
	void initializeMatrix();
};

#endif

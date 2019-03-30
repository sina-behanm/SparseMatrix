#include <iostream>
#include <string>
#define MAX_TERM 10000
using namespace std;
class SparseMatrix;
class Term
{
	friend class SparseMatrix;
private:
	int row, col, value;
};
class SparseMatrix
{
public:
	SparseMatrix(int termnum);
	~SparseMatrix();

private:
	Term termArray[MAX_TERM];
	int termnumber;
	int RowNum, ColNum;
};

SparseMatrix::SparseMatrix(int termnum)
{
	termnumber = termnum;
	for (int i = 0; i < termnumber; i++)
	{

	}
}

SparseMatrix::~SparseMatrix()
{
}


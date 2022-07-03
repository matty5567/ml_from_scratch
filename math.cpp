#include "math.h"


mat Math::add(mat a, std::vector<float> b){

	return a;

}

mat Math::matmul(mat a, mat b){

	int a_rows = a.size();
	int b_rows = b.size();
	int a_cols = a[0].size();
	int b_cols = b[0].size();

  assert (a_cols == b_rows);

	mat c;
  c.reserve(a_rows);

	for (int row=0; row<a_rows; row++)
	{
		for (int col=0; col<b_cols; col++)
		{

			float sum = 0.0f;

			for (int i=0; i< a_cols; i++)
			{
					sum += a[row][i] * b[i][col];
			}
      std::cout << std::endl;
			c[row].push_back(sum);

		}
	}
 return c;
}






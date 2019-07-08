struct mat
{
	int a[4][4];
	mat operator*(const mat &rhs) const
	{
		mat m;
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++) {
				m.a[i][j] = 0;
				for (int k = 0; k < 4; k++)
					m.a[i][j] += a[i][k] * m.a[k][j];
			}
	}
};

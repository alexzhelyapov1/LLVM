#define SIM_X_SIZE 512
#define SIM_Y_SIZE 256

void UpdateMatrixOld(unsigned int matrix[SIM_X_SIZE * SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE - 1; ++y)
	{
		for (int x = SIM_X_SIZE - 1; x > 0; --x)
		{
			matrix[x + y * SIM_X_SIZE] = matrix[x - 1 + y * SIM_X_SIZE] / 4 + matrix[x + y * SIM_X_SIZE] / 4 + matrix[x + (y + 1) * SIM_X_SIZE] / 4 + matrix[x - 1 + (y + 1) * SIM_X_SIZE] / 4;
		}
	}
}

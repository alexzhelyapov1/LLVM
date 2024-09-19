#include "sim.h"
#include <stdio.h>

void init_matrix(unsigned int matrix[SIM_X_SIZE][SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE; ++y)
	{
		for (int x = 0; x < SIM_X_SIZE; ++x)
		{
			if (x < 10)
			{
				matrix[x][y] = 0xFF00FF00;
			}
			else
			{
				matrix[x][y] = 0xFF000000;
			}
		}
	}
}

void update_matrix(unsigned int matrix[SIM_X_SIZE][SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE; ++y)
	{
		for (int x = SIM_X_SIZE - 1; x > 0; --x)
		{
			matrix[x][y] = matrix[x - 1][y];
		}
	}
}

void drow(unsigned int matrix[SIM_X_SIZE][SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE; ++y)
		for (int x = 0; x < SIM_X_SIZE; ++x)
		{
			simPutPixel(x, y, matrix[x][y]);
		}

	simFlush();
}

void app()
{
	unsigned int matrix[SIM_X_SIZE][SIM_Y_SIZE];
	init_matrix(matrix);

	for (int step = 0; step < 1000; ++step)
	{
		drow(matrix);
		update_matrix(matrix);
		printf("%d\n", step);
	}
}
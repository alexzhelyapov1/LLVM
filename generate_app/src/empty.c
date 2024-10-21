#include "sim.h"

void initMatrix(unsigned int matrix[SIM_X_SIZE * SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE; ++y)
	{
		for (int x = 0; x < SIM_X_SIZE; ++x)
		{
			if (x < 10 || y < 10)
			{
				matrix[x + y * SIM_X_SIZE] = 0xFF00FF00;
			}
            else if (x > SIM_X_SIZE / 4 * 1 && x < SIM_X_SIZE / 4 * 1 + 10) {
                matrix[x + y * SIM_X_SIZE] = 0xFFFF0000;
            }
            else if (x > SIM_X_SIZE / 4 * 2 && x < SIM_X_SIZE / 4 * 2 + 10) {
                matrix[x + y * SIM_X_SIZE] = 0xFF0000FF;
            }
            else if (x > SIM_X_SIZE / 4 * 3 && x < SIM_X_SIZE / 4 * 3 + 10) {
                matrix[x + y * SIM_X_SIZE] = 0xFFFFFFFF;
            }
			else
			{
				matrix[x + y * SIM_X_SIZE] = 0xFF000000;
			}
		}
	}
}

void updateMatrix(unsigned int matrix[SIM_X_SIZE * SIM_Y_SIZE]);

void drawMatrix(unsigned int matrix[SIM_X_SIZE * SIM_Y_SIZE])
{
	for (int y = 0; y < SIM_Y_SIZE; ++y)
		for (int x = 0; x < SIM_X_SIZE; ++x)
		{
			simPutPixel(x, y, matrix[x + y * SIM_X_SIZE]);
		}

	simFlush();
}

void app()
{
	unsigned int matrix[SIM_X_SIZE * SIM_Y_SIZE];
	initMatrix(matrix);

	for (int step = 0; step < 1000; ++step)
	{
		drawMatrix(matrix);
		updateMatrix(matrix);
	}
}
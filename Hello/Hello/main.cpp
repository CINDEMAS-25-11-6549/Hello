#include <sl.h>

int main()
{
	slWindow(800, 600, "Hello World", false);

	while (!slShouldClose())
	{
		slSetBackColor(0.0, 0.0, 0.0);
		slSetForeColor(1.0, 1.0, 0.0, 1.0);
		slCircleFill(400, 300, 50, 25);

		slRender();
	}

	slClose();

	return 0;
}
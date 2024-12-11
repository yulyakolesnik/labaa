int main()
{
	setlocale(LC_ALL, "Ru");
	char x;
	char y;
	std::cout << "Введите первое 8-ми битное число:///// ";
	std::cin >> x;
	std::cout << "Введите  второе 8-ми битное число: ";///>kmrfgggg
	std::cin >> y;
	x |= (1 << 1);
	y &= ~(1 << 3);
	y &= ~(1 << 4);
	unsigned char shifted_x = x << 5;
	unsigned char shifted_y = y >> 4;
	std::cout << "Исходное значения: " << "x = " << (int)x << ", y = " << (int)y << std::endl;
	std::cout << "Преобразованные значения: " << "x = " << (int)shifted_x << ", y = " << (int)shifted_y << std::endl;//ee
	return 0;


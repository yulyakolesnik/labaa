int main()
{
	setlocale(LC_ALL, "Ru");
	char x;
	char y;
	std::cout << "������� ������ 8-�� ������ �����:///// ";
	std::cin >> x;
	std::cout << "�������  ������ 8-�� ������ �����: ";///>kmrfgggg
	std::cin >> y;
	x |= (1 << 1);
	y &= ~(1 << 3);
	y &= ~(1 << 4);
	unsigned char shifted_x = x << 5;
	unsigned char shifted_y = y >> 4;
	std::cout << "�������� ��������: " << "x = " << (int)x << ", y = " << (int)y << std::endl;
	std::cout << "��������������� ��������: " << "x = " << (int)shifted_x << ", y = " << (int)shifted_y << std::endl;//ee
	return 0;


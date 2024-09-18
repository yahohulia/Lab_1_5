int main()
{
	float fltA = 13.7;
	float fltB = 20;
	int nC = 24;
	int nD = 16;

	bool bRez1 (!(!(fltA >= fltB) || (!(nC <= nD))));

	int nA = 81;
	int nB = 81;
	float fltC = 20.3;
	float fltD = 4;

	bool bRez2(!(!(nA >= nB) || (!(fltC <= fltD))));

	return 0;
}
int main()
{
	const int CONSTA = 167;
	int nB, nE;
	nB = -42;
	nE = 15760;
	int nC;
	int *pnC;
	pnC = &nC;

	*pnC = 7.26;

	bool bRez = ((CONSTA ^ ~nB) + *pnC) != (1993 - (nE << sizeof(char)));
}
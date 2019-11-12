#ifndef AITCOMPLEX_H
#define AITCOMPLEX_H
class aitComplex
{
public:
	int getA() const;
	int getBi() const;
	void setA(int aParam);
	void setBi(int bParam);
	

private:
	int a; // solo number
	int bi; //number with i
};

#endif // !AITCOMPLEX_H

//**header guardians
#ifndef CLASS_DECLARATION_H
#define CLASS_DECLARATION_H

//deklaracia externej globalnej funkcie
extern int g_switchConstant;

using namespace std;

/////Class 
class c_NumSysConv
{
private:
	int c_inpVal;
	int c_inpNumSys;
	int c_rVal;
	int c_i;
	string strC_convVal;
public:
	void c_NSC();

	void setStr(string sStr);
	string getStr();

	void c_Set_inpVal(int);
	int c_Get_inpVal();

	void c_Set_inpNumSys(int);
	int c_Get_inpNumSys();

	void c_Set_columnCounterSwitch();
	int c_Get_columnCounterSwitch();

	int c_Get_unaryColumnCounter();

	void c_Set_ColumnCounter();
	int c_Get_ColumnCounter();

	void c_Set_conversion();
	string c_Get_conversion();
};

//**header guardian
#endif
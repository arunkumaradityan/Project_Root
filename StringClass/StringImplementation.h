#include <iostream>
#include <conio.h>
using namespace std;

class CMyString
{
public:
	// Constructor and Destructors
	CMyString();
	CMyString(char* strInput);
	~CMyString();

	// Copy Constructor and Assignment Operator
	CMyString(CMyString & obj);
	CMyString& operator=(CMyString & obj);

	//**************************************************
	/// Author		:	Arun Kr Adityan
	/// Function	:	RemoveDuplicate
	/// FullPath	:	CMyString::RemoveDuplicate
	/// AccessType	:	public
	/// ReturnType	:	char*
	/// Parameter	:	void
	/// Purpose		:	It removes the duplicate character
	//**************************************************
	char* RemoveDuplicate();

	// Private Data Members
private:
	char* m_strInput;
};
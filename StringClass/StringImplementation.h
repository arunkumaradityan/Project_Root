#include <iostream>
#include <conio.h>
using namespace std;

class CMyString
{
public:

	//**************************************************
	/// Author		:	Arun Kr Adityan
	/// Function	:	CMyString
	/// FullPath	:	CMyString::CMyString
	/// AccessType	:	public
	/// ReturnType	:	
	/// Parameter	:	void
	/// Purpose		:	Default Constructor
	//**************************************************
	CMyString();

	//**************************************************
	/// Author		:	Arun Kr Adityan
	/// Function	:	CMyString
	/// FullPath	:	CMyString::CMyString
	/// AccessType	:	public
	/// ReturnType	:	
	/// Parameter	:	char* strInput
	/// Purpose		:	Parameterize Constructor
	//**************************************************
	CMyString(char* strInput);

	//**************************************************
	/// Author		:	Arun Kr Adityan
	/// Function	:	~CMyString
	/// FullPath	:	CMyString::~CMyString
	/// AccessType	:	public
	/// ReturnType	:	
	/// Parameter	:	
	/// Purpose		:	Destructor
	//**************************************************
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
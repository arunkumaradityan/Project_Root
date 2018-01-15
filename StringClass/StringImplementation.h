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

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	CMyString
	/// FullPath	:	CMyString::CMyString
	/// AccessType	:	public
	/// ReturnType	:	
	/// Parameter	:	const CMyString & obj
	/// Purpose		:	Copy Constructor
	//**************************************************
	CMyString(const CMyString & obj);

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	CMyString
	/// FullPath	:	CMyString::CMyString
	/// AccessType	:	public
	/// ReturnType	:	CMyString&
	/// Parameter	:	const CMyString & obj
	/// Purpose		:	Equal Operator Overload
	//**************************************************
	CMyString& operator=(const CMyString & obj);

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	RemoveDuplicate
	/// FullPath	:	CMyString::RemoveDuplicate
	/// AccessType	:	public
	/// ReturnType	:	char*
	/// Parameter	:	void
	/// Purpose		:	It removes the duplicate character
	//**************************************************
	char* RemoveDuplicate();

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	Length
	/// FullPath	:	CMyString::Length
	/// AccessType	:	public
	/// ReturnType	:	int
	/// Parameter	:	void
	/// Purpose		:	It gives length of given string
	//**************************************************
	int Length();

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	Append
	/// FullPath	:	CMyString::Append
	/// AccessType	:	public
	/// ReturnType	:	void
	/// Parameter	:	char*
	/// Purpose		:	It will append the value at end of the string
	//****************************************************************
	void Append(char*);  

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	Insert
	/// FullPath	:	CMyString::Insert
	/// AccessType	:	public
	/// ReturnType	:	void
	/// Parameter	:	char* , int
	/// Purpose		:	It will append the value at position of the string
	//*********************************************************************
	void Insert(char* , int Pos);  

	//**************************************************
	/// Author		:	Jyotsna
	/// Function	:	Concat
	/// FullPath	:	CMyString::Concat
	/// AccessType	:	public
	/// ReturnType	:	char*
	/// Parameter	:	char* , char*
	/// Purpose		:	It will add two string
	//******************************************
	char* Concat(char* str1 , char* str2);

	// Private Data Members
private:
	char* m_strInput;
};
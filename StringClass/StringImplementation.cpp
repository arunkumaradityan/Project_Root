#include "StringImplementation.h"

//**************************************************
/// Author		:	Jyotsna
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	void
/// Purpose		:	Default Constructor
//**************************************************
CMyString::CMyString(): m_strInput(nullptr)
{
}

//**************************************************
/// Author		:	Jotsna
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	char* strInput
/// Purpose		:	Parameterize Constructor
//**************************************************
CMyString::CMyString(char* strInput): m_strInput(nullptr)
{
	m_strInput = new char[strlen(m_strInput) + 1];
	strcpy(m_strInput, strInput);
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	~CMyString
/// FullPath	:	CMyString::~CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	
/// Purpose		:	Destructor
//**************************************************
CMyString::~CMyString()
{
	if(NULL != m_strInput)
		delete []m_strInput;
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	const CMyString & obj
/// Purpose		:	Copy Constructor
//**************************************************
CMyString::CMyString(const CMyString & obj)
{
	if(NULL != obj.m_strInput)
	{
		m_strInput = new char[strlen(obj.m_strInput) + 1];
		strcpy(m_strInput, obj.m_strInput);
	}
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	CMyString&
/// Parameter	:	const CMyString & obj
/// Purpose		:	Equal Operator Overload
//**************************************************
CMyString& CMyString::operator=(const CMyString & obj)
{
	if(NULL != obj.m_strInput)
	{
		if(this != &obj)         // Check for self Assignment 
		{                        // (It is not possible bacause obj is passed as const, but it is reccomended to check)
			m_strInput = new char[strlen(obj.m_strInput) + 1];
			strcpy(m_strInput, obj.m_strInput);
		}
	}

	return *this;
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	RemoveDuplicate
/// FullPath	:	CMyString::RemoveDuplicate
/// AccessType	:	public
/// ReturnType	:	char*
/// Parameter	:	void
/// Purpose		:	It removes the duplicate character
//**************************************************
char* CMyString::RemoveDuplicate()
{
	int i = 0;
	int insertCount = 0;
	char* strTemp = new char[strlen(m_strInput)+1];
	if(m_strInput)
	{
		strTemp[i++] = m_strInput[i];
		++insertCount;
	}

	while(m_strInput[i] != NULL)
	{
		int j = 0;
		bool IsAvailable = false;
		do
		{
			if(m_strInput[i] == strTemp[j])
			{
				IsAvailable = true;
				break;
			}
			else
			{
				++j;
			}
		}while(j < insertCount);

		if(!IsAvailable)
		{
			strTemp[i] = m_strInput[i];
			++insertCount;
		}
		++i;
	}
	strTemp[insertCount] = '\0';

	delete []m_strInput;
	m_strInput = strTemp;
	return m_strInput;
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	Length
/// FullPath	:	CMyString::Length
/// AccessType	:	public
/// ReturnType	:	int
/// Parameter	:	void
/// Purpose		:	It gives length of given string
//**************************************************
int CMyString::Length()
{
	int len = 0;
	int i=0;
	if(NULL != m_strInput)
	{
		while(m_strInput[i] != '\0')
		{
			i++;
			len++;
		}
	}
	return len;
}


//**************************************************
/// Author		:	Jyotsna
/// Function	:	Append
/// FullPath	:	CMyString::Append
/// AccessType	:	public
/// ReturnType	:	void
/// Parameter	:	char*
/// Purpose		:	It will append the value at end of the string
//****************************************************************
void CMyString :: Append(char* a)
{
	if(m_strInput != NULL)
	{
		char *temp = new char[strlen(a)+strlen(m_strInput)+1];
		strcpy(temp, m_strInput);

		int size = strlen(m_strInput);

		delete []m_strInput;		// ~CString();	

		m_strInput = temp;
		temp = temp + size;
		strcpy(temp, a);
	}
}

//**************************************************
/// Author		:	Jyotsna
/// Function	:	Append
/// FullPath	:	CMyString::Insert
/// AccessType	:	public
/// ReturnType	:	void
/// Parameter	:	char*,int
/// Purpose		:	It will append the value at position of the string
//*********************************************************************
void CMyString :: Insert(char* a, int Pos)
{
	if(m_strInput != NULL)
	{
		char *temp = new char[strlen(a)+strlen(m_strInput)+1];

		strncpy(temp, m_strInput, Pos);

		char* show=temp;

		temp=temp+ Pos;

		strcpy(temp, a);

		temp = temp + strlen(a);

		char *ref = m_strInput;
		ref = ref+Pos;
		strcpy(temp,ref);
	}
}


//**************************************************
/// Author		:	Jyotsna
/// Function	:	Concat
/// FullPath	:	CMyString::Concat
/// AccessType	:	public
/// ReturnType	:	char*
/// Parameter	:	char* , char*
/// Purpose		:	It will add two string
//******************************************
char* CMyString:: Concat(char* str1, char* str2)
{
	char *temp = new char[strlen(str1)+strlen(str2)+1];
	strcpy(temp, str1);
	int size = strlen(str1);
	m_strInput = temp;
	temp=temp+size;
	strcpy(temp, str2);
	temp = temp+strlen(str2);
	temp='\0';
	return m_strInput;
}


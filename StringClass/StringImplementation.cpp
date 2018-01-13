#include "StringImplementation.h"

//**************************************************
/// Author		:	Arun Kr Adityan
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	void
/// Purpose		:	Default Constructor
//**************************************************
CMyString::CMyString()
{
}

//**************************************************
/// Author		:	Arun Kr Adityan
/// Function	:	CMyString
/// FullPath	:	CMyString::CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	char* strInput
/// Purpose		:	Parameterize Constructor
//**************************************************
CMyString::CMyString(char* strInput)
{
}

//**************************************************
/// Author		:	Arun Kr Adityan
/// Function	:	~CMyString
/// FullPath	:	CMyString::~CMyString
/// AccessType	:	public
/// ReturnType	:	
/// Parameter	:	
/// Purpose		:	Destructor
//**************************************************
CMyString::~CMyString()
{
}
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
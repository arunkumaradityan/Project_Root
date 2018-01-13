using namespace std;

class CMyString
{
public:
	// Constructor
	CMyString();
	CMyString(char* strInput);

	// Copy Constructor
	CMyString(CMyString & obj);

	// Destructor
	~CMyString();

private:
	char* m_strInput;
};
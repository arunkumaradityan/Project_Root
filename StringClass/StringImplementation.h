using namespace std;

class CMyString
{
public:
	// Constructor
	CMyString();
	CMyString(char* strInput);

	// Destructor
	~CMyString();

private:
	char* m_strInput;
};
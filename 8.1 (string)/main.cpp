#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
    int k =0;
    size_t pos = 0;
    while(s.find(',', pos) != -1 && k !=3){
        
        int i = s.find(',', pos);
        pos=++i;
        k++;
        
    }
    return pos - 1;
}
string Change(string& s)
{
    size_t pos = 0;
    while ( (pos = s.find(',', pos)) != -1 )
            s.replace(pos, 1, "**");
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Третя за порядком кома на позиції " << "S(" << Count(str) << ")" << endl; string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
    
}


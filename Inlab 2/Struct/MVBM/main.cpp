#include <bits/stdc++.h>

using namespace std;

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};
SCP createSCP(int id, int objClass, string speConProcedures, string description, string* addendums, int numAddendums)
{
    SCP tmp;
    tmp.id = id;
    tmp.addendums = addendums;
    tmp.description = description;
    tmp.numAddendums = numAddendums;
    tmp.speConProcedures = speConProcedures;
    tmp.objClass = objClass;
    return tmp;
}
string convertToString(SCP obj) 
{
    string res = "Item #: SCP-";
    string id = to_string(obj.id);
    for (int i = 0; i < 3-id.size(); i++)
    {
        id = "0"+id;
    }
    res+=id + "\nObject Class: ";
    string objClass = "Safe";
    if (obj.objClass==1)
    {
        objClass = "Euclid";
    }else if (obj.objClass==2)
    {
        objClass = "Keter";
    }
    res += objClass + "\nSpecial Containment Procedures: " + obj.speConProcedures + "\nDescription: " + obj.description+"\n";
    for (int i = 0; i < obj.numAddendums; i++)
    {
        res+=obj.addendums[i]+"\n";
    }
    return res;
}
SCP* cloneSCP(SCP* original) 
{
    SCP* res = new SCP;
    res->id = original->id;
    res->description = original->description;
    res->numAddendums = original->numAddendums;
    res->objClass = original->objClass;
    res->speConProcedures = original->speConProcedures;
    string* tmp = new string[res->numAddendums];
    for (int i = 0; i < res->numAddendums; i++)
    {
        tmp[i] = original->addendums[i];
    }
    res->addendums = tmp;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}
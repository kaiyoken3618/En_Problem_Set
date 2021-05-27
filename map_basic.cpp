#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

int main(){

	struct file
	{
  		int id;
  		string name;
		int parent_id;
	};

	struct file f1 = {1,"user",0};
  	struct file f2 = {2,"nahid",1};
  	struct file f3 = {3,"enam",1};
  	struct file f4 = {4,"ghega",2};

    vector<file>files;

    files.push_back(f1);
    files.push_back(f2);
    files.push_back(f3);
    files.push_back(f4);

    map<int,int>m;
    map<int,int>:: iterator it;



    for(int i=0; i<files.size() ;i++)
    {
        m[files[i].id] = files[i].parent_id;

    }
    cout << "ID" << "\t" << "Parent_ID" << endl;
    for(auto it=m.begin();it!=m.end();it++)
    {


        cout << it->first << "\t" << it->second << endl;
    }





	return 0;
}


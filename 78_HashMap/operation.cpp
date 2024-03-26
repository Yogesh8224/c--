#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
  
   // Creation 
   unordered_map<string,int> m;
   map<string,int> n;

   // Insertion 

   // 1
   pair<string,int> p = make_pair("babbar",3);
   m.insert(p);

   // 2
   pair<string,int> pair2("mera",2);
   m.insert(pair2);

   // 3 
   m["naam"] = 1;

   // what will happen
   m["mera"] = 5;

   // search
   cout << m["mera"] << endl;
   cout << m.at("babbar") << endl;

   cout << m["UnknownKey"]<<endl;
   cout << m.at("UnknownKey")<<endl;

   // size
   cout << "Size : "<<m.size() << endl;

   // to check presence
   cout<<m.count("mam")<<endl;

   // erase
   m.erase("mera");
   cout <<"Size : " << m.size() << endl;
   
   // iterator
   unordered_map<string,int> :: iterator it = m.begin();

   while (it != m.end())
   {
    cout<< it -> first <<" "<<it->second <<endl;
    it++;
   }

   return 0;
   
// ordered me line se aate hai
// unordered main Line se nahi aate hain

}
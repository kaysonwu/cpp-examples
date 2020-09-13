#include <iostream>
#include <map>
#include "map.h"

#include <ctime>

using namespace std;

void testMap() {

  map<string, int> m1;

  // Insert
  // 1. use pair
  m1.insert(pair<string, int>("mi", 2));

  // 2. [recommend] use make_pair
  m1.insert(make_pair("vivo", 3));

  // 3. use value_type
  m1.insert(map<string,int>::value_type("huawei", 1));

  // 4. use []
  //[] 不建议插入用途，但可以利用 key 访问到 value
  m1["oppo"] = 4;

  for(map<string, int>::iterator it = m1.begin(); it != m1.end(); it++) {
    cout << "key = " << it->first << " value = " << it->second << endl;
  }

  cout << endl;

  // Delete
  m1.erase("oppo");

  for(map<string, int>::iterator it = m1.begin(); it != m1.end(); it++) {
    cout << "key = " << it->first << " value = " << it->second << endl;
  }
}


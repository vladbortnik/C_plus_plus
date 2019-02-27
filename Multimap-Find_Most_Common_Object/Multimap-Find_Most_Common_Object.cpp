// Hash tables: Write a program that finds the most common object in an array of objects. Each object is a pair of strings. Treat strings as being the same if they are equal when converted to lower case.

#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
	
	typedef multimap<string, string> HeaderMap;

	HeaderMap mymap;
	HeaderMap::iterator it, it_low, it_high, it_most_common;

	mymap.insert(HeaderMap::value_type("abc", "cba"));
	mymap.insert(HeaderMap::value_type("abc", "cba"));
	mymap.insert(HeaderMap::value_type("abc", "cba"));
	mymap.insert(HeaderMap::value_type("abc2", "cba"));
	mymap.insert(HeaderMap::value_type("123", "321"));
	mymap.insert(HeaderMap::value_type("123", "321"));
	mymap.insert(HeaderMap::value_type("123", "3245346361"));
	mymap.insert(HeaderMap::value_type("hello", "world"));
	mymap.insert(HeaderMap::value_type("hello", "how are you??"));
	mymap.insert(HeaderMap::value_type("hello", "world"));
	mymap.insert(HeaderMap::value_type("hello", "world"));
	mymap.insert(HeaderMap::value_type("hello", "world"));
	mymap.insert(HeaderMap::value_type("hello", "how are you??"));
 	mymap.insert(HeaderMap::value_type("ccc", "sss"));
	mymap.insert(HeaderMap::value_type("bb", "oop"));
	mymap.insert(HeaderMap::value_type("sample", "how are you??"));
	
	
	int number_of_repetition = 0;
	int max_repetitions = 0;
	string most_common = " ";
	map<string, int> mp;
	map<string, int>::iterator it2;

	// let's go...
	for(it = mymap.begin(); it != mymap.end(); ++it){
		
		// go thru objects with the same key
		if(mymap.count(it->first) > 0){
			it_low = mymap.lower_bound(it->first);
			it_high = mymap.upper_bound(it->first);
			
			// using map<string, int> (as a helping datastructure) 
			// to count number of identical objects  			
			while(it_low != it_high){
				if(mp.find(it_low->first) != mp.end()){
					mp.insert(pair<string, int> (it_low->second, 1));
				}
				else{
					mp[it_low->second]++;
				}
				it_low++;
			} 
			
			it2 = --mp.end();
			mp.clear();
			
			most_common = it->first;
			max_repetitions = it2->second;
			
			// find the most common object in multimap (so far)
			if(number_of_repetition < max_repetitions){
				it_most_common = it;
				number_of_repetition = max_repetitions;
			}
			
			//point iterator of multimap to the next key (skipping all identical keys)
			it = --it_high;
		}
	}

	cout << "Most common object is: " << it_most_common->first << " -> " << it_most_common->second << endl;
	cout << "Total number of repetitions is: " << number_of_repetition << endl;

	return 0;
}
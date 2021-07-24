// #include <bits/stdc++.h>
// using namespace std;




// int main()
// {

//     vector<string> input ={"machine","television","machine","table","fan","cooler","machine",
//     "television","table","machine","table""television","cooler","television","cooler","television","cooler"};
    
     


    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// void add_number(vector<string> &input)
// {
//  map<string,int>m;
//  for(int i=0;i<input.size();i++)
//   { int count=m[input[i]]++;
//     cout<<input[i]<<count+1<<endl;
//   }
// }
// int main()
// {

//     vector<string> input ={"machine","television","machine","table","fan","cooler","machine",
//     "television","table","machine","table","television","cooler","television","cooler","television","cooler"};
    
//     add_number(input);
//     return 0;
// }





// //to print first non-repeating character in a stream of characters
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    string s ="qwqewrtrty";
    
//     unordered_map<char,int> m;

//     queue<char> q;

//     for(int i =0 ;i<s.length();i++)
//     {
//       m[s[i]]++;
//       q.push(s[i]);
//       // for(auto x: m)
//       // cout<<x.first<<"   "<<x.second<<endl;
//        while(m[q.front()]>1)
//         {
//           q.pop();
//         }
//        if(m[q.front()]==1){
//         cout<<q.front();
//          }
//        else
//        {
//          cout<<-1;
//        }
//     }


// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;


// bool cmp(pair<char, int>& a,
//          pair<char, int>& b)
// {
//     return a.second < b.second;
// }

// void sorting(map<char, int>& M)
// {
  
//     // Declare vector of pairs
//     vector<pair<char, int> > A;
  
//     // Copy key-value pair from Map
//     // to vector of pairs
//     for (auto& it : M) {
//         A.push_back(it);
//     }
  
//     // Sort using comparator function
//     sort(A.begin(), A.end(), cmp);
  
//     // Print the sorted value
//     for (auto& it : A) {
  
//         cout << it.first << ' '
//              << it.second << endl;
//     }
// }
  



// int main() {
//      map<char, int> gquiz1;
  
//     // insert elements in random order
//     gquiz1.insert(make_pair<char, int>('a', 40));
//     gquiz1.insert(pair<char, int>('b', 30));
//     gquiz1.insert(pair<char, int>('c', 60));
//     gquiz1.insert(pair<char, int>('e', 20));
//     gquiz1.insert(pair<char, int>('r', 50));
//     gquiz1.insert(pair<char, int>('q', 50));
//     gquiz1.insert(pair<char, int>('k', 10));



// sorting(gquiz1);

//  for (auto itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//         cout << '\t' << itr->first
//              << '\t' << itr->second << '\n';
//  }



// }







// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// char d[] = {'a','b'};
// char e[] = "er";

// string a= "abc";
// string b ="def";
// cout<<e;
// return 0;

// }



// C++ Program to concatenate two strings using
// binary operator overloading
#include <iostream>
#include <string.h>

using namespace std;

// Class to implement operator overloading function
// for concatenating the strings
class AddString {

public:
	// Class object of string
	char str[100];

	// No Parameter Constructor
	AddString() {}

	// Parameterized constructor to
	// initialize class Variable
	AddString(char str[])
	{
		strcpy(this->str, str);
	}

	// Overload Operator+ to concatenate the strings
	AddString operator+(AddString& S2)
	{
		// Object to return the copy
		// of concatenation
		//AddString S3;

		// Use strcat() to concat two specified string
		strcat(this->str, S2.str);

		// Copy the string to string to be return
		//strcpy(S3.str, this->str);

		// return the object
		return this->str;
	}
};

// Driver Code
int main()
{
	// Declaring two strings
	char str1[] = "Geeks";
	char str2[] = "ForGeeks";

	// Declaring and initializing the class
	// with above two strings
	AddString a1(str1);
	AddString a2(str2);
	AddString a3;

	// Call the operator function
	a3 = a1 + a2;
	cout << "Concatenation: " << a3.str;

	return 0;
}


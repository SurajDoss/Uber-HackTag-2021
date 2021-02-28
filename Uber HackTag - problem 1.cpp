/*
Uber HackTag
problem 1


You are given a text represented as a string t, and a string s of length 3. Your task is to count the number of indices i, such that titi+2ti+4 = s.

Example

For t = "azcabcab" and s = "acb", the output should be almostSubstring(t, s) = 2.

t0t2t4 = "acb" = s;
t1t3t5 = "zac" ≠ s;
t2t4t6 = "cba" ≠ s;
t3t5t7 = "acb" = s.
For t = "" and s = "xyz", the output should be almostSubstring(t, s) = 0.

Input/Output

[execution time limit] 4 seconds (py3)

[input] string t

A text represented as a string consisting of lowercase English letters.

Guaranteed constraints:
0 ≤ t.length ≤ 1000.

[input] string s

A string of length 3 consisting of lowercase English letters.

Guaranteed constraints:
s.length = 3.

[output] integer

The number of indices i, such that titi+2ti+4 = s.
*/

/*
note in the problem the counter value must be returned.
function called as t and s
where t is str1 and s is str2

*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    int counter(0);
    string str1, str2;
    while(getline(cin,str1)){
        int siz = str1.length();
        int i =0;
        cin>> str2;
        cin.ignore();
        for(int j= 0; j<=siz; j=j+2){
            if(str1[j]==str2[i] ){
                if(str1[j+2]==str2[i+1]){
                    if(str1[j+4]==str2[i+2]){
                    	counter++;
			}
                }
            }
        }
        for(int j= 1; j<=siz; j=j+2){
            if(str1[j]==str2[i] ){
                if(str1[j+2]==str2[i+1]){
                    if(str1[j+4]==str2[i+2]){
                    	counter++;
                   	}
                }
            }
        }
    cout<<counter<<endl;
    return 0;
    }
}


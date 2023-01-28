// Magical String[Duplicate Problem]

/*
Magical String[Duplicate Problem]


You are given a string S, convert it into a magical string.
A string can be made into a magical string if the alphabets are swapped in the given manner: a->z or z->a, b->y or y->b, and so on.  
 

Note: All the alphabets in the string are in lowercase.

 

Example 1:

Input:
S = varun
Output:
ezifm
Explanation:
Magical string of "varun" 
will be "ezifm" 
since v->e , a->z , 
r->i , u->f and n->m.
 



Example 2:

Input:
S = akshay
Output:
zphszb
Explanation:
Magical string of "akshay" 
will be "zphszb" 
since a->z , k->p , s->h , 
h->s , a->z and y->b.
*/

#include <iostream>
using namespace std;
int main() {
    string s="varun";
    for(int i=0; i<s.length(); i++){
        s[i]='a'+'z'-s[i];
    }
    cout<<s;
    

    return 0;
}

// ezifm
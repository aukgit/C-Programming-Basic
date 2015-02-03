/*shoubhik sherniad shubho*/
#include <bits/stdc++.h>
using namespace std;

string Binary(int);
string get1stComplementBinary(string);
string letsgettheresult(string);

int main() {

    int decimal,neg=0;

    string binary,complimented,negRepresentation;

    cout<<"Enter your decimal number: ";
    cin>>decimal;
    cout<<"\nthe input is: "<<decimal<<endl;

    if(decimal<0) {
        decimal=decimal*(-1);
        neg=1;
    }

    binary = Binary(decimal);
    if(neg==0) {
        cout<<binary<<endl;
        exit(1);
    }

    //binary = "0000"+ binary;
    complimented = get1stComplementBinary(binary);
    negRepresentation = letsgettheresult(complimented);
    cout <<"in Binary: "<<negRepresentation<<endl;
    main();
    return 0;

}


string letsgettheresult(string n) {
    int carry = 1;
    for(int i=n.length(); i>0; i--) {
        if(n[i]=='1' && carry ==1)
            n[i]='0';
        else if(n[i]=='0' && carry==1) {
            n[i]='1';
            carry = 0;
        }
    }
    return n;
}

string get1stComplementBinary(string n) {

    for(int i=0; i<n.length(); i++) {
        if(n[i]=='0')
            n[i]='1';
        else
            n[i]='0';
    }
    return n;
}

string Binary(int decimal) {
    int rem;
    string mystr="";
    while(decimal>0) {
        rem = decimal % 2;
        string s;
        stringstream S;
        S<<rem;
        mystr = S.str()+mystr;
        decimal/= 2;
    }
    int l =mystr.length();
    if(l<8) {
        for(int i=0; i<(8-l); i++)
            mystr = "0" + mystr;
    }
    return mystr;
}

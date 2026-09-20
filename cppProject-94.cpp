#include <iostream>
#include <cstring>
using namespace std;

int main(){
char S1[50]="Halloween";
char S2[50]="Happy New Year";
cout << "Length of S2:" << strlen(S2) << endl;
cout << "Length of S1:" << strlen(S1) << endl;
cout << "Compare S1 & S2:" << strncmp(S1,S2,2) << endl;
cout << "Concatenated Result:" << strncat(S2,S1,5) << endl;
cout << "Length of S2:" << strlen(S2) << endl;
cout << "S1:" << S1 << endl;
cout << "Copy:" << strcpy(S1,S2) << endl;
cout << "Search in S1:" << strchr(S1,'o') << endl;
cout << "Search in S2:" << strstr(S1,"ll") << endl;
cout << "Merged form: " << strcat (S1,S2) << endl;
cout << "S2:" << S2 << endl;

}
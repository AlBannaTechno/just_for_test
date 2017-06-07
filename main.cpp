#include<iostream>;
#include<GNS.h>
#define __Allow__NUM_STR_CONV__x86__
using namespace std;
int get_call(char *);
int main(){
	int call;
	char *name;
	
}
int get_call(char *num){
	return __NUMSTR(num,"x86");
}

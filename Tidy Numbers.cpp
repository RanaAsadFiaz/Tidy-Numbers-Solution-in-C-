
#include<bits/stdc++.h> 
using namespace std; 

char* tidyNum(char str[], int len) 
{ 
	for (int i = len-2; i >= 0; i--) 
	{ 
		// check whether string violates tidy property 
		if (str[i] > str[i+1]) 
		{ 
			// if string violates tidy property, then 
			// decrease the value stored at that index by 1 
			// and replace all the value stored right to 
			// that index by 9 
			(char)str[i]--; 
			for (int j=i+1; j<len; j++) 
				str[j] = '9'; 
		} 
	} 
	return str; 
} 

// Driver code 
int main() 
{ 
	char str[] = "11333445538"; 
	int len = strlen(str); 
	
	
	char *num = tidyNum(str, len); 
	printf("%s\n", num); 
	return 0; 
} 

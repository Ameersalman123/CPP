/*Prasun, a wanna be detective, has been assigned a case after his continuous failure at solving any. This is the murder 
of Snehashis who was killed last night. Prasun has already made some guesses on who could be the murderer and it seems that 
the two murderers are communicating via some strange arrangement of words. As prasun has been involved at solving cases of 
such fashion, he is making some guesses on what the message could probably be. Though he is pretty smart (:P), you have to 
help him by checking whether his guess is actually a possible one from the messages received.
 

Constraints:

Length of both message is less than 50 character.

Line 1: Message Received.
Line 2: Prasun's Guess.

SAMPLE INPUT 
jogod #! siara.
raja is good!

SAMPLE OUTPUT 
YES
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cin>>s2;
	int flag=0,p=0,q=0;
	for(int i=0;i<s1.length();i++)
	{
		if((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z'))
			p++;
	}
	for(int i=0;i<s2.length();i++)
	{
		if((s2[i] >= 'A' && s2[i] <= 'Z') || (s2[i] >= 'a' && s2[i] <= 'z'))
			q++;
	}
	if(p==q)
	{
		for(int i=0;i<s2.length();i++)
		{
			for(int j=0;j<s1.length();j++)
			{
				if(s2[i]==s1[j])
				{
					s1.erase(s1.begin()+j);
					flag=1;
					break;
				}
				flag=0;
			}
		}
	}
	if(flag==0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

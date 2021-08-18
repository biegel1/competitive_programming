#include<bits/stdc++.h>
#include<string>

using namespace std; 
const int N=105;
int t,n,cnt;
char s[N];
int main()
{
	scanf("%d",&t);
	while (t--)
	{
		cnt=0;
		scanf("%d",&n);
		scanf("%s",s+1);
		for (int i=1;i<=n;i++)
			cnt+=(s[i]!='?');
		if (!cnt)
			s[1]='R';
		for (int i=2;i<=n;i++)
			if (s[i]=='?'&&s[i-1]!='?')
				s[i]=s[i-1]^('B'^'R');
		for (int i=n-1;i;i--)
			if (s[i]=='?'&&s[i+1]!='?')
				s[i]=s[i+1]^('B'^'R');
		printf("%s\n",s+1);
	}
	return 0;
}

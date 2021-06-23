#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i<n; i++)
typedef long long ll;

ll ans=1;
int small=1e9;
void handle12(int a, int b) //ones, twos
{
	if(b>=a) {
		rep(i, a) {
			small=3;
			ans*=3;
		}
		rep(i, b-a) {
			small=2;
			ans*=2;
		}
	} else {
		rep(i, b) {
			small=3;
			ans*=3;
		}
		a-=b;
		rep(i, a/3) {
			small=3;
			ans*=3;
		}
		if(a%3==2) {
			small=2;
			ans*=2;
		} else if (a%3==1){
			if(small!=1e9) {
				ans=ans/small*(small+1);
			}
		}
	}
}
void only1(int a) //negative ones
{
	if(a%3==1) {
		rep(i, a/3) {
			ans*=3;
		}
		ans=ans/small*(small+1);
	}
	if(a%3==0) {
		if(a%6==3) {
			if(a>=9) {
				ans*=24;
				a-=9;
			}
			if(a==3) {
				ans*=2;
				if(small!=1e9) {
					ans=ans/small*(small+1);
				}
				a-=3;
			}
		}
		rep(i, a/3) {
			ans*=3;
		}
	}
	if(a%3==2) {
		int threes=ans/3;
		if(threes%2==1) {
			rep(i, threes) {
				ans*=3;
			}
			ans*=2;
		} else {
			rep(i, threes-1) {
				ans*=3;
			}
			int sub=max(threes, 2);
			rep(i, sub) {
				ans/=3;
				ans*=4;
			}
			if(sub == 1) {
				ans=ans/small*(small+1);
			} else if(sub == 0) {
				//cry
			}
		}
	}
}

int nums[5]; //number of -2, -1, 0, 1, 2
int main()
{
	int n, temp;
	cin >> n;
	if(n==0) {
		cout << 0 << endl;
		return 0;
	}
	rep(i, n) {
		cin >> temp;
		if(temp + 2 < 5) {
			nums[temp+2]++;
		} else {
			small=min(small, temp);
			ans*=temp;
		}
	}
	if(nums[2]==n) {
		cout << 0 << endl; //all 0 lmao
		return 0;
	}
	if(nums[2]>0) { //ignore negatives if 0 is present
		int a = nums[1]+nums[3];
		int b = nums[0]+nums[4];
		handle12(a, b);
	} else {
		int threes = 0;
		int opt=0;
		if(nums[4]>=nums[1]) { //left 2
			threes+=nums[1];
			nums[4]-=nums[1];
			nums[1]=0;
		} else { //left -1
			threes+=nums[4];
			nums[1]-=nums[4];
			nums[4]=0;
			opt+=2;
		}
		if(nums[3]>=nums[0]) { //left 1
			threes+=nums[0];
			nums[3]-=nums[0];
			nums[0]=0;
		} else { //left -2
			threes+=nums[3];
			nums[0]-=nums[3];
			nums[3]=0;
			opt+=1;
		}
		rep(i, threes) {
			ans*=3;
			small=3;
		}
		threes=0;
		//left with 1 and 2
		if(opt==0) {
			handle12(nums[3], nums[4]);
		}
		//left with 2 and -2
		if(opt==1) {
			rep(i, nums[4]) {
				small=2;
				ans*=2;
			}
			rep(i, nums[0]/2) {
				ans*=4;
			}
			if(nums[0]%2==1) {
				ans=ans/small*(small+2);
			}
		}
		//left with 1 and -1
		if(opt==2) {
			while(nums[1]>1) {
				if(nums[3]>0) {
					nums[1]-=2;
					nums[3]--;
					threes++;
				} else break;
			}
			if(threes>0) small=3;
			rep(i, threes) {
				ans*=3;
			}
			threes=0;
			if(nums[3]==0) { //handle -1
				only1(nums[1]);
			} else if(nums[1]==1) {
				if(nums[3]>1) {
					nums[3]-=2;
					nums[1]--;
					threes++;
				} else if(nums[3]==1) {
					ans*=2;
					nums[3]--;
				}
			}
			threes+=nums[3]/3;
			if(threes>0) small=3;
			rep(i, threes) {
				ans*=3;
			}
			if(nums[3]%3==2) {
				small=2;
				ans*=2;
			} else if (nums[3]%3==1){
				ans=ans/small*(small+1);
			}
		}
		//left with -1 and -2
		if(opt==3) {
			if(nums[1]>=nums[0]) {
				rep(i, nums[0]/2) {
					ans*=9;
				}
				if(nums[0]%2 == 0) {
					only1(nums[1]-nums[0]);
				} else {
					//cry
				}
			} else {
				rep(i, nums[1]) {
					ans*=3;
				}
				nums[0]-=nums[1];
				if(nums[1]%2==1) {
					ans*=2;
					nums[0]--;
				}
				rep(i, nums[0]/2) {
					ans*=4;
				}
				if(nums[0]%2==1) {
					ans=ans/small*(small+2);
				}
			}
		}
	}
	cout << ans << endl;
}

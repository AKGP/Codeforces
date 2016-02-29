# int main(){
# int n;
# cin>>n;
# int a[n];
# int ans = 1;
# for(int i =0;i<n;i++){
# 	cin>>a[i];
# 	ans*=a[i];
# }
# cout<<ans;

# return 0;
# }
n = input()
a = map(int,raw_input().split())
ans = 1

for i in range(n):
	ans*=a[i]
print ans	
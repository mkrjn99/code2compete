
template <class T,class U,class V> T fastexp(T a,U b,V mod){
	static T res;
	res=1;
	while(b){
		if(b&1)
			res= (res * a)%mod;
		a= (a*a)%mod;
		b>>=1;
	}
	return res;
}


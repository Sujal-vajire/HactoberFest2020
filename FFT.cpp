const double TAU = 4.0 * acos(0);
const int MAXN = 1 << 15; // ONLY POWERS OF 2!!!
typedef double ld;
struct cd{
    ld x, y;
    cd(ld x, ld y) : x(x), y(y) {}
    cd(ld z = 0) : x(z), y(0) {}
    cd operator +(cd z) {return cd(x + z.x, y + z.y);}
    cd operator -(cd z) {return cd(x - z.x, y - z.y);}
    cd operator *(cd z) {return cd(x*z.x - y*z.y, x*z.y + y*z.x);}
    cd operator /(ld z) {return cd(x/z, y/z);}
};
void FFT(cd *a, int rev){
    int n = MAXN;
    for(int i = 1, j = 0; i < n; i++){
        int k = n >> 1;
        for(; j & k; k >>= 1) j ^= k;
        j ^= k;
        if(i < j) swap(a[i], a[j]);
    } 
    for(int s = 2, ds = 1; s <= n; ds = s, s <<= 1){
        ld ang = TAU / s * rev;
        cd wn(cos(ang), sin(ang));
        for(int i = 0; i < n; i += s){
            cd w(1), t;
            for(int j = i; j < i + ds; j++, w = w*wn){
                cd u = a[j], v = a[j+ds] * w;
                a[j] = u + v; 
                a[j+ds] = u - v;
            }
        }
    }
    if(rev == -1)
        FOR(i,0,n) a[i] = a[i] / n;
}
void mult(cd *p, cd *q, cd *r){
    FFT(p,1); FFT(q,1);
    FOR(i,0,MAXN) r[i] = p[i]*q[i];
    FFT(r,-1);
}

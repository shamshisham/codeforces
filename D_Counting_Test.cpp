xn=input();
ln=length(xn);
xk=zeroes(1,ln);
ixk=zeroes(1,ln);

for k=0:ln-1
    for n=0:ln-1
      xk(k+1)=xk(k+1)+(xn(n+1)*exp(i*2*pi*k*n)/ln)
    end;
    end;

t=0:ln-1
subplot(2,2,1);
stem(t,xn)

mag=abs(xk);
phase=angle(xk);

subblot()

for n=0:ln-1
    for k=0:ln-1
      ixk(n+1)=ixk(n+1)+(xk(k+1)*exp(i*2*pi*k*n)/ln)
    end;
    end;

x=input();
N=length(x);
xk=fft(x,N);
xn=ifft(xk,N)
stem(n,x)






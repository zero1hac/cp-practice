program test;
var
	rarr,carr : array of integer;
	T,N,i,j,x,sum,l : integer;

begin
	read(T);
	for l:=1 to T do
	begin
		writeln('value of l:',l);
		read(N);
		writeln('value of N:',N);
		setlength(rarr,N*N+1);
		setlength(carr,N*N+1);
		for i:=1 to N do
		begin
			for j:=1 to N do
			begin
				read(x);
				rarr[x]:=i;
				carr[x]:=j;
			end;
		end;
		sum:=0;
		writeln(3);
		for i:=1 to N*N-1 do
		begin
			sum:=sum+abs(rarr[i+1]-rarr[i])+abs(carr[i+1]-carr[i]);
			writeln('sum is : ',sum);
		end;
		writeln(sum);
	end;
end.
		

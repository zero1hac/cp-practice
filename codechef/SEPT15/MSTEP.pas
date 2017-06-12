program test;
var
	rarr,carr : array of Longint;
	T,N,i,j,x,sum,l : Longint;

begin
	read(T);
	for l:=1 to T do
	begin
		read(N);
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
		for i:=1 to N*N-1 do
		begin
			sum:=sum+abs(rarr[i+1]-rarr[i])+abs(carr[i+1]-carr[i]);
		end;
		writeln(sum);
	end;
end.
		

(*Dushyant Kumar Mishra
zeroonhacker
Mathematics and Computing Part III
IIT BHU Varanasi
*)

program TSORT;
type
ArrayN=Array of Longint;

var 
A:ArrayN;
i,T,x,max:Longint;

begin
	readln(T);
	SetLength(A,1000000);
	max:=0;
	for i:=1 to T do 
	begin
		readln(x);
		A[x-1]:=A[x-1]+1;
		if max<x then
			max:=x;
	end;
	i:=0;
	while i<=1000000 do 
		begin

		if A[i]=0 then
			i:=i+1
		else 
			begin
			if A[i]>0 then 
			begin
				writeln(i+1);
				A[i]:=A[i]-1;
			end;end;
		end;
end.

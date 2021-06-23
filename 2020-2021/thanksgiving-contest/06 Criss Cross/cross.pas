// Submitted by Shayan Azmoodeh

Program CrissCross (Input, output);
Uses Crt, Dos;
Const
        MAXNUMS = 5000;
Type
        numsArr = array[1 .. MAXNUMS] of LongInt;
Var
        num_input, count, num1, num2, i, j: LongInt;
        nums: numsArr;

Begin
        count := 0;
        {reading input}
        ReadLn(num_input);
        for i := 1 to num_input do
        begin
                Read(nums[i]);
        end;

        for i := 1 to num_input do
        begin
                for j := 1 to num_input do
                begin
                        if(j = i) then
                          Break;
                        num1 := nums[i];
                        num2 := nums[j];
                        if(((num1 < num2) and (i > j)) or ((num1 > num2) and (i < j))) then
                        begin
                                count += 1;
                        end;
                end;
        end;
        WriteLn(count);
End.

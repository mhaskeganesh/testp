ch = input("Input : ")
print("Output : Alphabet") if ch>='A' and ch<='Z' or ch>='a' and ch<='z' else print("Output : Digit") if ord(ch)>=48 and ord(ch)<=57 else print("Output : Special character") if ord(ch)>=33 and ord(ch)<=47 or ord(ch)>=58 and ord(ch)<=64 else print("Other")

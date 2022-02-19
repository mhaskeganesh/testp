

ch = 'a'

for itr in range(0,4):

    for jtr in range(0,4-itr):
        print(ch,end = "\t")
        ch = chr(ord(ch)+1)
    ch = chr(ord('a')+2*(itr+1))
    print("")

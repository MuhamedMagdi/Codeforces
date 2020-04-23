x=input()
for s in range(int(x)):
    w=input()
    if(len(w)<=10):
        print(w)
    else:
        print(w[0] , (len(w)-2) , w[len(w)-1], sep='')
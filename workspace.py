z=input()
t,b=z.split()
t=int(t)
b=int(b)
v=int((t)/b)
i=0
maxy=0
def check(i,b,v,t):
    if((i+b*v)<=t):
        pass
    else:
        v=v-1
        check(i,b,v,t)
    return v
        
while v!=0:
    i=i+1
    v=check(i,b,v,t)
    if(v==None):
        break
    h=i*v
    if(h>=maxy):
        maxy=h
    else:
        break
print(maxy)

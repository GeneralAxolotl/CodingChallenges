'''Generate Prime numbers and set operations'''
odd=set([x*2+1 for x in range(0,5)])
primes=set()
for i in range(2,10):
    j=2
    f=0
    while j<i/2:
        if i%j==0:
            f=1
        j+=1
    if f==0:
        primes.add(i)
print(odd)
print(primes)
            

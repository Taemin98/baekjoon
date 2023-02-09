n = int(input())
dict = {}
def fibo(n):
    a = n // 3
    if n == 0:
        return 0
    elif n == 1 or n ==2:
        return 1
    else:
        if not n in dict.keys():
            if n > 100:
                dict[n] = (fibo(a) * fibo(n-a+1) + fibo(a-1) * fibo(n-a)) % 1000000007
            else:
                dict[n] = (fibo(n-1) + fibo(n-2)) % 1000000007
        return dict[n]
if n % 2 == 1:
    print(fibo(n+1))
else:
    print(fibo(n))
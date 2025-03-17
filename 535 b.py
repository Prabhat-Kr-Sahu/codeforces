num = 477
# print(int(''.join(['1']+list(map(lambda t: '1' if t=='7' else '0' ,list(str(num))))), base=2) - 1)

digits = list(str(num))
print(f'{digits=}')

mask = ['1'] + ['1' if i=='7' else '0' for i in digits]
print(mask)

num = ''.join(mask)
print(num)

print(int(num, base=2) - 1)
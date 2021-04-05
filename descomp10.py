def countDigits(n):
	c = 0
	while n:
		c +=1
		n //=10
	return c
		
def match(val,x):
	ans = {
	1: lambda x: x,	
	2: lambda x: f'{x//10} * 10 + {x%10}',
	3: lambda x: f'{x//100} * 100 + {x//10%10} * 10 + {x%10}',
	4: lambda x: f'{x//1000} * 1000 + {x//100%10} * 100 + {x//10%10} * 10 + {x%10}'
	}[val](x)
	return ans

def main():
	n = int(input())
	c = countDigits(n)
	result = match(c,n)
	print(result)
main()	
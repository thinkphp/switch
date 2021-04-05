#Scrieti un program care, in functie optionea utilizatorului, calculeaza si afiseaza aria unui patrat cu latura l, sau aria 
#unui cerc de raza r sau aria unui dreptunghi de lungime 11 si latime 12, sau aria unui triunghi cu baza b si inaltime h. Optiuni
#ale utilizatorului: P(patrat), C(cerc), D(dreptunghi), T(Triunghi). Se presupune ca toate elementele care intervin in calculul ariei
#unei figuri geometrice sunt strict pozitive (datele sunt corect introduse de catre utilizator).

def match(value,x,y):
    result = {
    'P': lambda x, y: x * x,
    'C': lambda x, y: 3.14 * x * x,
    'D': lambda x, y: x * y,
    'T': lambda x,y: x * y // 2
    }[value](x,y)   

    return result

def solve():
	print(f'P - Patrat')
	print(f'C - Cerc')
	print(f'D - Dreptunghi')
	print(f'T - Triunghi')
	opt = str(input("Choose an option -> "))
	if opt == 'C':
	   radius = float(input("Give a radius:"))	   
	   area = match('C',radius, 2)	
	elif opt == 'P':
	   side = int(input("Give a side:"))
	   area = match('P',side, side)
	elif opt == 'D':
	   h = int(input("Give a height:"))   
	   w = int(input("Give a width:"))
	   area = match('D',w, h)
	elif opt == 'T':
	   base = int(input("Give a base:"))   
	   h = int(input("Give a height for triangle:"))   
	   area = match('T',base, h)

	print(f'Aria = {area}')

solve()

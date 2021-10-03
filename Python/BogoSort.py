import random

def main():
    num_list = [20,32,1,200,-7,20]
    bogo_sort(num_list)
    print("Sorted list of number :")
    print(*num_list, sep=",")

def bogo_sort(a):
	n = len(a)
	while (is_sorted(a)== False):
		shuffle(a)

def is_sorted(a):
	n = len(a)
	for i in range(0, n-1):
		if (a[i] > a[i+1] ):
			return False
	return True

def shuffle(a):
	n = len(a)
	for i in range (0,n):
		r = random.randint(0, n-1)
		a[i], a[r] = a[r], a[i]

if __name__ == '__main__':
    main()


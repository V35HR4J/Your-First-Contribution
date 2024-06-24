#basic program of finding the SECOND LARGEST VALUE among the given list of value
#finding the RUNNER UP in other words 
#used map(),split(),sorted()
#the sorted()function here creates a new set returns a sorted list of the specified iterable object.


if __name__ == '__main__':
  #getting the number of scores you are going to enter
    n = int(input("Enter number of scores : "))
    #using map() and split() function to get the no.of.scores 
    arr = map(int,input("\nEnter the scores : ").split())
    #now we are sorting the whole entered scores in ascending manner and then used[-2] which indicates that in the set take the next to last value(which is the second largest)
    print ("The RUNNER UP IS:",(sorted(set(arr))[-2]))
    
  


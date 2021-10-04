class Stack(object) :
    def __init__(self) :
        self.items = []
    
    def isEmpty(self) :
        return len(self)==0
    
    def __len__(self) :
        return len(self.items)
    
    def peek(self) :
        assert not self.isEmpty()
        return self.items[-1]
    
    def pop(self) :
        assert not self.isEmpty()
        return self.items.pop()
    
    def push(self, data):
        self.items.append(data)
        
        
def DecimaltoBinary(d) :
    f = Stack()
    if d==0 :
        f.push(0)
    while d != 0 :
        sisa = d%2
        d = d//2
        f.push(sisa)
        print("sisa : ", sisa)
        print("d :", d)

    st = ""
    for i in range(len(f)) :
        st = st + str(f.pop())
    return st

print(DecimaltoBinary(23))

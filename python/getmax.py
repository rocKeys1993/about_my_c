
def getmax(x,y):
    if(x>y):
        return x 
    else:
        return y

if __name__ == '__main__':
 
   #x = raw_input("x : ")
   #print("--------------")
   #y = raw_input("y : ")
   #print("got x = " + x)
   #print("got y = " + y)
   #print("--------------")
   #x1 = input("x : ")
   #y1 = input("y : ")
   #print(type(x1))
   #print(type(y1))
   #print(type(y))
   #print(type(x))

   print("got max number = " + str(getmax(input("x = "),input("y = "))))

   #x = input("x = ")
   #y = input("y = ")
   #a = getmax(x,y)
   #print(a)

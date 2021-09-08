def zero(num):
    return len(())

def one(num):
    return oneSec(list((num, num)))

def oneSec(listF):
    listF.pop()
    return len(listF)

def two(num):
    return len((num, num))

def three(num):
    return len((num, num, num))

def four(num):
    return len((num, num, num, num))

def five(num):
    return len((num, num, num, num, num))

def six(num):
    return len((num, num, num, num, num, num))

def seven(num):
    return len((num, num, num, num, num, num, num))

def eight(num):
    return len((num, num, num, num, num, num, num, num))

def nine(num):
    return len((num, num, num, num, num, num, num, num, num))

def ten(num):
    return len((num, num, num, num, num, num, num, num, num, num))

def add(numA, numB):
    return addB(list(range(numA)), list(range(numB)))

def addB(listA, listB):
    listA.extend(listB)
    return len(listA)

def throwEqualOrSmall(numA, numB):
    return throwEqualOrSmallB(set(list(range(numA))), set(list(range(numB))))

def throwEqualOrSmallB(setA, setB):
    return max(setA.difference(setB))

def sub(numA, numB):
    return subB(set(list(range(numA))), set(list(range(numB))))

def subB(setA, setB):
    return len(setA.difference(setB))

def div(numA, numB):
    return list(divmod(numA, numB)).pop(zero(numA))

def mod(numA, numB):
    return list(divmod(numA, numB)).pop(one(numA))

def loopGenerator(count):
    yield from range(count)

def loop(count):
    loopB(loopGenerator(count))

def loopB(gen):
    try:
        next(gen)
        loopB(gen)
    except:
        return

def mul(numA, numB):
    return mulB(loopGenerator(numA), numB, zero(numB))
    
def mulB(gen, numB, total):
    try:
        next(gen)
        return mulB(gen, numB, add(numB, total))
    except:
        return total

def fibo(num):
    try:
        div(one(num), num)
    except: # this is zero
        return zero(num)
    
    try:
        throwEqualOrSmall(num, one(num))
        throwEqualOrSmall(num, two(num))
    except: # this is one or two
        return one(num)

    return add(fibo(sub(num, one(num))), fibo(sub(num, two(num))))

print(fibo(int(input())))
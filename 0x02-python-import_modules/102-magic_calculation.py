#!/usr/bin/python3
def magic_calculation(a, b):
    from magic_calculation_102 import add, sub
    if a < b:
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
<<<<<<< HEAD
        return c
    else:
        return sub(a, b)
=======
        return (c)
    else:
        return (sub(a, b))
>>>>>>> f084a39948b35e1395b83bc025c7c6eeaa3e2a0e

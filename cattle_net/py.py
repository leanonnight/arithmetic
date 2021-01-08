import time
# 对一个数进行因式分解


def factorization(num):
    factor = []
    while num > 1:
        for i in range(num - 1):
            print(str(i))
            k = i + 2
            if num % k == 0:
                factor.append(k)
                num = int(num / k)
                break
    return factor


st = time.perf_counter()
print(factorization(36))
et = time.perf_counter()
print("用时:", et - st)

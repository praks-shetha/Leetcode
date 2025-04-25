class ProductOfNumbers:

    def __init__(self):
        self.prefixsum=[1]

    def add(self, num: int) -> None:
        if num==0:
            self.prefixsum=[1]
        else:
            self.prefixsum.append(self.prefixsum[-1]*num)

    def getProduct(self, k: int) -> int:
         if len(self.prefixsum)<=k:
            return 0
         else:
            return self.prefixsum[-1]//self.prefixsum[-k-1]

# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)
def kadanes(nums : list[int]) -> int:
    maxSum = nums[0]
    currSum = 0
    # We Consider the currentSum only if it greater then 0(positive)
    for n in nums:
        currSum = max(currSum , 0) # We avoid negative values as they reduce our max sum
        currSum += n
        maxSum = max(maxSum , currSum)
    return maxSum

def slidingWindow(nums : list[int]) -> list[int]:
    currSum = 0
    maxSum = nums[0]
    maxL , maxR = 0 , 0
    L = 0

    for R in range(len(nums)):
        if currSum < 0:
            currSum = 0
            L = R
        currSum += nums[R]
        if currSum > maxSum:
            maxSum = currSum
            maxL , maxR = L , R
    return [maxL , maxR]

def main():
    nums = [4,-1,2,-7,3,4]
    print(slidingWindow(nums))

if __name__ =="__main__":
    main()
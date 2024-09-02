def kadanes(nums : list[int]) -> int:
    maxSum = nums[0]
    currSum = 0
    # We Consider the currentSum only if it greater then 0(positive)
    for n in nums:
        currSum = max(currSum , 0) # We avoid negative values as they reduce our max sum
        currSum += n
        maxSum = max(maxSum , currSum)
    return maxSum



def main():
    nums = [4,-1,2,-7,3,4]
    print(kadanes(nums))

if __name__ =="__main__":
    main()
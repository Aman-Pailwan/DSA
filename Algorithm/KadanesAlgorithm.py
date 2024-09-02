def kadanes(nums : list[int]) -> int:
    maxSum = nums[0]
    currSum = 0

    for n in nums:
        currSum = max(currSum , 0)
        currSum += n
        maxSum = max(maxSum , currSum)
    return maxSum



def main():
    nums = [4,-1,2,-7,3,4]
    print(kadanes(nums))

if __name__ =="__main__":
    main()
def climbingLeaderboard(ranked, player):
    def binary_search(arr,score, start, end, count):
        if start > end:
            print(start,end,score)
            if end == -1:
                return count[arr[start]]+1
            else:
                if score == arr[end]:
                        return count[arr[end]]
                else:
                    if score < arr[end]:
                        return count[arr[end]]
                    else:
                        if count[arr[end]] == 1:
                            return 1
                        else:
                            return count[arr[end]]


        mid = (start+end)//2
        if score == arr[mid]:
            return count[arr[mid]]
        if score < arr[mid]:
            return binary_search(arr,score, start, mid-1, count)
        else:
            return binary_search(arr, score, mid+1, end, count)
        
    count = {}
    ans = []
    k = 0
    set_ranked = sorted(set(ranked))
    for i in range(len(set_ranked)):
        count[set_ranked[i]] = len(set_ranked)-k
        k +=1
    for score in player:
        ans.append(binary_search(set_ranked, score, 0,len(set_ranked)-1,count))
    return ans




print(climbingLeaderboard([100,90,90,80,75,60],[50,65,77,90,102]))



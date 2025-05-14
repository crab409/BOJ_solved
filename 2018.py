taget = int(input())
count = 1
start_index = 1
end_index = 1
sum = 1 


while end_index != taget :
  if sum == taget : #조건에 부합하는 경우
    count += 1
    end_index += 1
    sum += end_index

  elif sum > taget : # 부분합이 더 큰경우 
    sum -= start_index
    start_index += 1

  else : # 부분합이 더 적은경우
    end_index += 1
    sum += end_index


print(count)

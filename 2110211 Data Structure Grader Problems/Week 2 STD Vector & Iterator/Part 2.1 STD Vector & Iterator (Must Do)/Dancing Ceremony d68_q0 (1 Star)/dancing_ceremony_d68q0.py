# 1 : input data
number_of_couples = int(input())
dance_ability_A = [int(e) for e in input().split()]
dance_ability_B = [int(e) for e in input().split()]

# 2 : calculate dance_difference
dance_difference = []
for itr in range(len(dance_ability_A)) :
    dance_difference.append( dance_ability_A[itr] - dance_ability_B[itr] )
dance_difference.sort()

# 3 : check if each pair is perfect dance couple
perfect_dance_couple = 0

left_bound = 0 ; right_bound = number_of_couples - 1

while (left_bound < right_bound) :
    if (dance_difference[left_bound] + dance_difference[right_bound] > 0 ) :
        perfect_dance_couple += (right_bound - left_bound) 
        right_bound -= 1
    else :
        left_bound += 1
    
            
print(perfect_dance_couple)

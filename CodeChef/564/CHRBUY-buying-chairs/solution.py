# cook your dish here
T = int(input())
for _ in range(T):
    W, P, K = map(int, input().split())
    wood = min(W, K)
    plastic = K - wood
    print(2 * wood + plastic)

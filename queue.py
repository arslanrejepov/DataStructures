from collections import deque
api_request_queue = deque()

api_request_queue.append("GET /users/profile")
api_request_queue.append("POST /predict/house-price")
api_request_queue.append("GET /health")
print(f"Current Queue: {list(api_request_queue)}")


processed_request = api_request_queue.popleft()
print(f"Dequeued item: '{processed_request}'")
print(f"Queue after:   {list(api_request_queue)}")
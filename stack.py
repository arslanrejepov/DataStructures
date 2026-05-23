history = []

history.append("github.com")
history.append("leetcode.com")
history.append("fastapi.tiangolo.com")
print(f"Current Stack: {history}")

if history:
    current_page = history[-1]
    print(f"Peeking at top: '{current_page}'")
def main():
  while True:
    height = int(input('-->'))
    if height < 23:
      break

  for i in range(height):
    for s in range(height - i - 1):
      print(" ", end="")
    for q in range(i + 1):
      print("#", end="")
    print("")


if __name__ == '__main__':
  main()

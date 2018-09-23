import sys

def main(num):
  s = input('-->')
  string = ""
  for letter in s:
    asci = ord(letter)
    if 64 < asci and asci < 91:
      update = asci + num
      while update > 90:
        update -= 26
      string += chr(update)
    elif 95 < asci and asci < 123:
      update = asci + num
      while update > 122:
        update -= 26
      string += chr(update)
    else:
      string += letter
  print(string)

if __name__ == '__main__':
  main(sys.argv[1])

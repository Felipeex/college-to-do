def isPalindromo(sentence):
  sentence = sentence.replace(' ', '')
  
  for index, invertedIndex in zip(range(len(sentence)), range(len(sentence) - 1, -1, -1)):
    if not (sentence[index] == sentence[invertedIndex]):
      return False
  return True

def main():
  inputSentence = input("Digite uma frase para ver a mesma é palindroma (EX: roma me tem amor): ").lower()
  
  if (isPalindromo(inputSentence)):
    print('"' + inputSentence + '" é palindroma')
  else:
    print('"'+ inputSentence + '" não é palindroma')

main()
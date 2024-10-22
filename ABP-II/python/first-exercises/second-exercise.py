import random

def guessTheNumber():
  quantityTried = 0
  maxTries = 20
  minNumberToGuess = 0
  maxNumberToGuess = 100
  isFinished = False
  randomNumberToGuess = random.randint(minNumberToGuess, maxNumberToGuess)

  while(not isFinished and quantityTried < maxTries):
    guessedNumber = int(input("Chute um número de " + str(minNumberToGuess) + " á " + str(maxNumberToGuess) + ": "))

    if (randomNumberToGuess == guessedNumber):
      print("Você acertou!")
      isFinished = True
    elif (randomNumberToGuess > guessedNumber):
      quantityTried += 1
      print("O número é maior que " + str(guessedNumber))
    else:
      quantityTried += 1
      print("O número é menor que " + str(guessedNumber))

  if (quantityTried >= maxTries):
    print("Você não conseguiu acetar o numero em " + str(maxTries) + " Tentativas, tente novamente.")
  else:
    print("Você precisou de " + str(quantityTried) + " tentativas para acertar.")
guessTheNumber()
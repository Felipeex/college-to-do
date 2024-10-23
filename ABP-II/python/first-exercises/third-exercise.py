import random
import time

tools = {
  1: "Pedra",
  2: "Papel",
  3: "Tesoura"
}

""" tesoura corta papel """
""" Pedra quebra tesoura """
""" Papel cobre pedra """

def chooseWinner(firstOpponent, secondOpponent):
  if (firstOpponent == "Pedra" and secondOpponent == "Tesoura"):
    return firstOpponent, "break"
  elif (firstOpponent == "Tesoura" and secondOpponent == "Papel"):
    return firstOpponent, "cut"
  elif (firstOpponent == "Papel" and secondOpponent == "Pedra"):
    return firstOpponent, "wrap"
  
  return secondOpponent

def jokempo():
  randomNumberTool = random.randint(1, 3)
  computerTool = tools[randomNumberTool]

  userNumberTool = int(input("Escolha um símbolo para jogar com o computador \n [1] Pedra\n [2] Papel\n [3] Tesoura\n"))
  userTool = tools[userNumberTool]

  print("O computador está jogando.", end='\r')
  time.sleep(0.5)
  print("O computador está jogando..", end='\r')
  time.sleep(0.5)
  print("O computador está jogando...", end='\r')
  time.sleep(0.5)

  print("\n")

  if (computerTool == userTool):
    print("Empate!")
  else:
    result = chooseWinner(computerTool, userTool)

    if (result == userTool):
      _, mode = chooseWinner(userTool, computerTool)

      if (mode == "break"):
        print("Você quebrou o computador com uma Pedra.")
      elif (mode == "cut"):
        print("Você cortou o computador com uma Tesoura.")
      else:
        print("Você embrulhou o computador com um Papel.")
    else:
      _, mode = result
      if (mode == "break"):
        print("O computador quebrou você com uma Pedra.")
      elif (mode == "cut"):
        print("O computador cortou você com uma Tesoura.")
      else:
        print("O computador embrulhou você com um Papel.")

jokempo()
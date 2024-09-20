import pandas

# Ler tabela (jogos.csv)
games = pandas.read_csv("jogos.csv")

# 1. Liste o jogos com Venda Global acima de U$ 25 mi (Dica: use o filter)
print(games.loc[games["Venda_Global"] > 25])

# 2. Liste em ordem decrescente pela Venda Global, o Nome e Plataforma dos jogos do gênero “Ação” e “Esportes” (Dica: use o filter e o operador %in%)
actionAndSportsGames = games.loc[(games["Genero"] == "Ação") | (games["Genero"] == "Esportes")]
print(actionAndSportsGames)

# 3. Liste os dados acrescentando quatro colunas adicionais por meio do comando Summarize agrupando por Gênero e indicando:
selectedColumns = games[["Nome", "Fabricante"]]
groupingByCompany = selectedColumns.groupby("Fabricante")
quantityOfGamesPerCompany = groupingByCompany.size()
print(quantityOfGamesPerCompany.reset_index(name = "Quantidade_de_jogos"))

# 6. Qual o fabricante que teve maior venda global?
gameWithMaxGlobalSells = games.Venda_Global.idxmax()
print("Fabricante com maior venda global:", games.iloc[gameWithMaxGlobalSells].Fabricante)

# 9. Qual o jogo mais vendido na Europa?
gameWithMaxEuropaSellsIndex = games.Vendas_Europa.idxmax()
print("Jogo mais vendido na europa:", games.iloc[gameWithMaxEuropaSellsIndex].Nome)
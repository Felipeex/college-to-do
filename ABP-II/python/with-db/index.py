from services.database.index import query, execute

""" 
execute("INSERT INTO Especie (Esp_descricao) values ('Reptio')")
execute("INSERT INTO Animais (Ani_nome, Ani_cor, Ani_especie) values ('Belinha', 'Marrom', '1')")
execute("UPDATE Animais SET Ani_cor = 'bege' WHERE Ani_nome = 'Belinha'")
execute("UPDATE Animais SET Ani_cor = 'bege' WHERE Ani_nome LIKE '%P%'")
pets = query("SELECT * FROM Animais ORDER BY Ani_nome")
pets = query("SELECT * FROM Animais, Especie WHERE Animais.Ani_especie = Especie.Esp_codigo")
"""

pets = query("SELECT * FROM Animais")

for pet in pets:
  print(pet)
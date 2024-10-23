import sqlite3

database = sqlite3.connect("./services/database/datasets/pets.db")

def execute(queryRaw):
  cursor = database.cursor()
  
  cursor.execute(queryRaw)
  database.commit()

def query(queryRaw):
  cursor = database.cursor()
  
  cursor.execute(queryRaw)
  return cursor.fetchall()

from fastapi import FastAPI

app = FastAPI()

@app.get("/")
def home():
    return {"Message": "Welcome to Hacktoberfest 2021"}
#!/bin/bash
from flask import Flask
import redis

app = Flask(__name__)

@app.route("/")
def say_hello():
    return '<p> Welcome, I am flask app!<p>'

if __name__ == "__main__":
	app.run(host="0.0.0.0", port=5000)


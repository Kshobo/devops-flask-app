#!/bin/bash

# Update package list
sudo apt update

sudo apt install -y python3 python3-pip python3-venv

python3 -m venv venv

source venv/bin/activate

pip3 install Flask

flask --app hello run --host=0.0.0.0
echo "Flask app is running on http://localhost:5000"
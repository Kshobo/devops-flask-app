FROM python:3.14

WORKDIR /app

COPY . .
RUN pip install --no-cache-dir flask redis

EXPOSE 5000

CMD ["python", "hello.py"]
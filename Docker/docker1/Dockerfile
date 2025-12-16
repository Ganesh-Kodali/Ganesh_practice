FROM gcc:latest

WORKDIR /app

COPY . .

RUN gcc app.c add.c sub.c -o app

CMD ["./app"]

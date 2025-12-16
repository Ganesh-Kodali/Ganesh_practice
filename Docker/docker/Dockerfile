FROM gcc:latest

WORKDIR /app

COPY helloworld.c .

RUN gcc helloworld.c -o helloworld

CMD ["./helloworld"]

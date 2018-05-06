a.out: console.c  test.c
	gcc -Wall $^ -o $@

clean:
	rm -f a.out

all: test

projectile: projectile.c
	gcc projectile.c -o projectile

test: projectile run_tests
	./run_tests
	./run_tests | diff results -

clean:
	rm -f projectile
	
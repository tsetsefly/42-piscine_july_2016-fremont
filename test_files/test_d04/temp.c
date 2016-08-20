# include <unistd.h>
# include <stdio.h>

int fn(int i) {
	if (i <= 5) {
		i += 1;
		printf("D");
		printf("%d",i);
		fn(i);
		printf("F");
		printf("%d",i);
		return(0);
	}
	else {
		return(0);
	}
}

int main () {
	fn(0);
	return(0);
}

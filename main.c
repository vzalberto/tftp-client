#include <stdio.h>

#define DOWNTOFEEL	"are_you_a_freak"
#define TFTP_SIZE	512

int main()
{
	FILE *fp, *fp2;
	unsigned char buf[512];

	fp = fopen(DOWNTOFEEL, "r");
	fp2 = fopen("old", "w");
	fread(buf, 1, 512, fp);
	fwrite(buf, 1,512,fp2);

	fclose(fp);
	fclose(fp2);
}
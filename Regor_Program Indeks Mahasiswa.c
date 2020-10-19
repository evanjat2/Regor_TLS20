#include <stdio.h>
#include <stdlib.h>

char indeks ; 
float rerata;
int matkul;

struct student {
	char name[50];
	char NIM[20];
	char *prodi;
};
struct dosen {
	char *fisel , *matek ,*progdas , *plki , *probstat , *prakt , *ted , *asd , *td , *dtb , *kd;
};

struct email {
	char *fisel , *matek ,*progdas , *plki , *probstat , *prakt , *ted , *asd , *td , *dtb , *kd;
};

void display(struct student s) {
  printf("\nInformasi Mahasiswa\n");
  printf("Name: %s", s.name);
  printf("\nNIM: %s", s.NIM);
  printf("\nProgram Studi : %s", s.prodi);
}

float hitung() {
	int i; float sum,nilai,n;
	sum = 0;
	printf("Masukkan jumlah nilai yang ingin dicari rata - ratanya\n>> ");
	scanf("%f" , &n); 
	for (i=0 ; i < n ; i++) {
		printf("Masukkan nilai ke - %d >> " , i + 1);
		scanf("%f" , &nilai);
		sum = sum +  nilai;
	}
	rerata = sum / n;
}

char kategori() {
	if (rerata >= 80 && rerata <=100) {
		indeks = 'A';
	} else if (rerata >= 70 && rerata < 80 ) {
		indeks = 'B';
	} else if (rerata >= 55  && rerata < 70 )  {
		indeks = 'C';
	} else if (rerata >= 40 && rerata < 55) {
		indeks = 'D';
	} else if (rerata >= 0 && rerata < 40) {
		indeks = 'E';
	}else {
		indeks = '?';
	}
}

char te() {
	printf("\n\n[1] Fisika Elektro\n[2] Matematika Teknik\n[3] Pemrograman Dasar\n[4] PLKI\n[5] Probabilitas dan Statistika\n[6] Prakt.Pemrograman\n[7] Teknik Elektro Dasar");
	printf("\nKetik angka sesuai mata kuliah yang ingin dihitung rata ratanya>> ");
	scanf("%d", &matkul);
}

char tb() {
	printf("\n\n[1] Fisika Elektro\n[2] Matematika Teknik\n[3] Pemrograman Dasar\n[4] PLKI\n[5] Probabilitas dan Statistika\n[6] Prakt.Pemrograman\n[10] Dasar Teknik Biomedis\n[11] Kimia Dasar");
	printf("\nKetik angka sesuai mata kuliah yang ingin dihitung rata ratanya>> ");
	scanf("%d", &matkul);
}

char ti() {
	printf("\n\n[1] Fisika Elektro\n[2] Matematika Teknik\n[3] Pemrograman Dasar\n[4] PLKI\n[5] Probabilitas dan Statistika\n[6] Prakt.Pemrograman\n[8] Algoritma dan Struktur Data\n[9] Transformasi Digital");
	printf("\nKetik angka sesuai mata kuliah yang ingin dihitung rata ratanya>> ");
	scanf("%d", &matkul);
}
	
int main() {
	int golongan; char jawab;
	struct student s;
	struct dosen d;
	struct email e;
	
	printf("Tuliskan nama anda >> ");
	scanf("%[^\n]%*c", &s.name);
	
	printf("Tuliskan NIM >> ");
	scanf("%[^\n]%*c", &s.NIM);
	
	printf("\nDari program studi manakah anda?");
	printf("\n[1]Teknik Elektro\n[2]Teknologi Informasi\n[3]Teknik Biomedis\n");
	printf("Ketikkan angka sesuai jurusan anda>> ");
	scanf("%d" , &golongan);
	
	if (golongan == 1) {
		te();
		s.prodi= "Teknik Elektro";
	} else if (golongan == 2) {
		ti();
		s.prodi = "Teknologi Informasi";
	} else if (golongan == 3) {
		tb();
		s.prodi= "Teknik Biomedis";
	} else {
		printf("Anda salah menginput angka");
		exit(EXIT_FAILURE);
	}
	
	hitung();
	kategori();
	display(s);
		
	printf("\nRata - rata nilai mata kuliah = %.2f" , rerata);
	printf("\nIndeks nilai = %c" , indeks);
	printf("\nApakah anda ingin mengetahui daftar dosen matkul dengan emailnya? [Y/N] >> ");
	scanf("%s" , &jawab);
	printf("\nBerikut daftar dosen dan emailnya : ");
	
	d.fisel = "\nIr. Eka Firmansyah, S.T., M.Eng., Ph.D., IPM.\nDr. Eng. Ir. F. Danang Wijaya, S.T., M.T., IPM. \nDzuhri Radityo Utomo, S.T., M.Sc., Ph.D.";
	d.matek = "\nAnugerah Galang Persada, S.T., M.Eng.\nFikri Waskito, S.T., M.Eng.";
	d.progdas = "\nDr. Indriana Hidayah, S.T., M.T.\nIr. Marcus Nurtiantara Aji, M.T.";
	d.plki = "\nDosen :\nAdhistya Erna Permanasari, S.T., M.T., Ph.D.\nDr. Indriana Hidayah, S.T., M.T.\nMochammad Wahyudi, S.T., M.T.";
	d.probstat ="\nIr. Hanung Adi Nugroho, S.T., M.E., Ph.D., IPM.\nDr. Sri Suning Kusumawardani, ST, MT";
	d.prakt ="\nDr. Indriana Hidayah, S.T., M.T.\nIr. Marcus Nurtiantara Aji, M.T.";
	d.ted ="\nEnas Dzuhri Kusuma, S.T., M.Eng.";
	d.asd ="\nAnugerah Galang Persada, S.T., M.Eng.\nTeguh Bharata Adji, S.T., M.T., M.Eng., Ph.D";
	d.td ="\nDr. Sri Suning Kusumawardani, ST, MT\nIr. Lukito Edi Nugroho, M.Sc., Ph.D\nDr.Eng. Ir. Sunu Wibirama, S.T., M.Eng., IPM.\nWidyawan, S.T., M.Sc., Ph.D.\nDr.Eng. Igi Ardiyanto, S.T., M.Eng.\nDrs. Bambang Nurcahyo Prastowo, M.Sc.\nDr. Mardhani Riasetiawan, SE Ak, M.T.\nWahyono, Ph.D.\nAfiahayati, S.Kom., M.Cs., Ph.D\nIsna Alfi Bustoni, S.T., M.Eng.";
	d.dtb ="\nIr, Noor Akhmad Setiawan, S.T., M.T., Ph.D., IPM.";
	d.kd ="\nDosen :\nDr. Sri Sudiono, S.Si., M.Si.";
	e.fisel="\neka.firmansyah@ugm.ac.id\ndanangwijaya@ugm.ac.id";
	e.matek="\ngalang@ugm.ac.id\nfikri@te.ugm.ac.id";
	e.progdas="\nindriana.h@ugm.ac.id\nmna@ugm.ac.id";
	e.plki="\nadhistya@ugm.ac.id\nindriana.h@ugm.ac.id";
	e.probstat="adinugroho@ugm.ac.id\nsuning@ugm.ac.id";
	e.prakt="\nindriana.h@ugm.ac.id\nmna@ugm.ac.id";
	e.ted="\nenas@ugm.ac.id";
	e.asd="\ngalang@ugm.ac.id\nadji@ugm.ac.id";
	e.td="\nsuning@ugm.ac.id\nlukito@ugm.ac.id\nsunu@ugm.ac.id\nwidyawan@ugm.ac.id\nigi@ugm.ac.id";
	e.dtb="noorwewe@ugm.ac.id";
	
	if (jawab == 'Y') {
		if (matkul == 1) {
			printf("%s,%s" , d.fisel,e.fisel);	
		} else if(matkul == 2) {
			printf("%s,%s", d.matek, e.matek);
		} else if(matkul == 3) {
			printf("%s,%s", d.progdas, e.progdas);
		} else if(matkul == 4) {
			printf("%s,%s", d.plki, e.plki);
		} else if(matkul == 5) {
			printf("%s,%s" ,d.probstat ,e.probstat);
		} else if(matkul == 6) {
			printf("%s,%s" , d.prakt , e.prakt);
		} else if(matkul == 7) {
			printf("%s,%s" , d.ted , e.ted);
		} else if(matkul == 8) {
			printf("%s,%s" , d.asd , e.asd);
		} else if(matkul == 9) {
			printf("%s,%s" , d.td, e.td);
		} else if(matkul == 10) {
			printf("%s,%s" ,d.dtb , e.dtb);
		} else if(matkul == 11) {
			printf("%s,%s" , d.kd , e.kd);
		}
	}
	printf("\nTerima kasih telah memakai program ini");
}






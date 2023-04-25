#include <stdio.h>
#include <stdlib.h>


int main(int argc,char**argv) {


	FILE * file = fopen(argv[1],"rb");
	printf("\n%s\n\n",argv[1]);	
	
	fseek(file,0x3c,0);
	
	int a = 0;
	int sections = 0;
	int arch = 0;
	
	fread(&a,1,4,file);
	printf("PE OFFSET : %x\n",a);
	fseek(file,a,0);		


	fread(&a,1,4,file);
	printf("PE signature : %x\n",a);

	fread(&a,1,2,file);
	arch = a;
	printf("Architect : %x\n",a);
	
	fread(&a,1,2,file);
	sections = a;
	printf("NumberOfSections : %x\n",a);

	fread(&a,1,4,file);
	printf("Compile Time : %x\n",a);
	
	fread(&a,1,4,file);
	printf("PointerToSymbolTable : %x\n",a);

	fread(&a,1,4,file);
	printf("NumberOfSymbolTable : %x\n",a);

	fread(&a,1,2,file);
	printf("SizeOfOptionalHeader : %x\n",a);

	fread(&a,1,2,file);
	printf("Characteristic : %x\n",a);
	
	printf("\n\n");	
	
	fread(&a,1,2,file);
	printf("Magic : %x\n",a);
	
	a = 0;
	
	fread(&a,1,1,file);
	printf("MajorLinkerVersion : %x\n",a);

	fread(&a,1,1,file);
	printf("MinorLinkerVersion : %x\n",a);

	a = 0;

	fread(&a,1,4,file);
	printf("SizeofCode(Sum of all sections) : %x\n",a);


	fread(&a,1,4,file);
	printf("SizeOfInitializedData : %x\n",a);

	fread(&a,1,4,file);
	printf("SizeOfUninitializedData: %x\n",a);


	fread(&a,1,4,file);
	printf("AddressOfEntryPoint(RVA) : %x\n",a);


	fread(&a,1,4,file);
	printf("BaseOfCode(RVA) : %x\n",a);
	
	
			
if(arch == 0x14c){

		fread(&a,1,4,file);
			printf("BaseOfData(RVA) : %x\n",a);
	


	printf("\n\n");
	
		
	fread(&a,1,4,file);
		printf("ImageBase : %x\n",a);

	}


else if(arch == 0x8664){

			long long int b = 0;
			fread(&b,1,8,file);
			printf("ImageBase : %x\n",b);


		}

		fread(&a,1,4,file);
	printf("SectionAlignment : %x\n",a);

	
		fread(&a,1,4,file);
	printf("FileAlignment : %x\n",a);

	a = 0;

		fread(&a,1,2,file);
	printf("MajorOperatingSystemVersion: %x\n",a);

	
		fread(&a,1,2,file);
	printf("MinorOperatingSystemVersion : %x\n",a);

	
	
	
		fread(&a,1,2,file);
	printf("MajorImageVersion : %x\n",a);

	
	
		fread(&a,1,2,file);
	printf("MinorImageVersion : %x\n",a);


	
		fread(&a,1,2,file);
	printf("MajorSubsystemVersion: %x\n",a);


			fread(&a,1,2,file);
	printf("MinorSubsystemVersion: %x\n",a);


			fread(&a,1,4,file);
	printf("Win32VersionValue : %x\n",a);



	fread(&a,1,4,file);
		printf("SizeofImage : %x\n",a);


		fread(&a,1,4,file);
	printf("SizeOfHeaders : %x\n",a);


	fread(&a,1,4,file);
		printf("Checksum : %x\n",a);

	a = 0;
	fread(&a,1,2,file);
		printf("Subsystem : %x\n",a);


	fread(&a,1,2,file);
		printf("DLL characteristic: %x\n",a);

if(arch == 0x14c){

	fread(&a,1,4,file);
		printf("SizeofStackReverse : %x\n",a);

	fread(&a,1,4,file);
		printf("SizeOfStackCommit: %x\n",a);


	fread(&a,1,4,file);
		printf("SizeOfHeapReverse : %x\n",a);


	fread(&a,1,4,file);
		printf("SizeOfHeapCommit : %x\n",a);


	}

	
	


else if(arch == 0x8664){

	long long int b = 0;

	fread(&b,1,8,file);
		printf("SizeofStackReverse : %x\n",b);

	fread(&b,1,8,file);
		printf("SizeOfStackCommit: %x\n",b);


	fread(&b,1,8,file);
		printf("SizeOfHeapReverse : %x\n",b);
	

	fread(&b,1,8,file);
		printf("SizeOfHeapCommit : %x\n",b);



		}


	fread(&a,1,4,file);
		printf("LoaderFlags: %x\n",a);

	fread(&a,1,4,file);
		printf("NumberOfDataDirectoryEntries : %x\n",a);

	


	printf("\n\n");
	
	fread(&a,1,4,file);
		printf("ExportTable(RVA): %x\n",a);

	fread(&a,1,4,file);
		printf("SizeOfExportTable : %x\n",a);

	
	fread(&a,1,4,file);
		printf("ImportTable(RVA): %x\n",a);

	fread(&a,1,4,file);
		printf("SizeOfImportTable: %x\n",a);

	
	fread(&a,1,4,file);
		printf("ResourceTable(RVA): %x\n",a);

	fread(&a,1,4,file);
		printf("SizeOfResourceTable: %x\n",a);


	fread(&a,1,4,file);
		printf("ExceptionTable(RVA) : %x\n",a);


	fread(&a,1,4,file);
		printf("SizeOfExceptionTable: %x\n",a);


	fread(&a,1,4,file);
		printf("CertificateTable(RVA): %x\n",a);

	fread(&a,1,4,file);
		printf("SizeOfCertificateTable: %x\n",a);

	fread(&a,1,4,file);
		printf("BaseRelocationTable(RVA): %x\n",a);
	

	fread(&a,1,4,file);
		printf("SizeOfBaseRelocationTable: %x\n",a);


	fread(&a,1,4,file);
		printf("DEbug(RVA): %x\n",a);


	fread(&a,1,4,file);
		printf("Sizeofdebug : %x\n",a);


	fread(&a,1,4,file);
		printf("ArchitectureData(RVA): %x\n",a);


	fread(&a,1,4,file);
		printf("SizeOfArchitectureData: %x\n",a);

	fread(&a,1,4,file);
		printf("GlobalPtr(RVA): %x\n",a);

			
	fread(&a,1,4,file);
		printf("00000000: %x\n",a);

	
	fread(&a,1,4,file);
		printf("TLSTable(RVA): %x\n",a);

	
	fread(&a,1,4,file);
		printf("SizeOf TLS table: %x\n",a);

	fread(&a,1,4,file);
		printf("LoadConfigTable(RVA): %x\n",a);
	
	fread(&a,1,4,file);
		printf("SizeOfLoadConfigTable: %x\n",a);
	
	
	fread(&a,1,4,file);
		printf("BoundImport(RVA): %x\n",a);
		

	fread(&a,1,4,file);
		printf("SizeOfBoundImport: %x\n",a);
	
	fread(&a,1,4,file);
		printf("ImportAddressTable(RVA): %x\n",a);
	
	fread(&a,1,4,file);
		printf("SizeOfImportAddressTable : %x\n",a);
		
	fread(&a,1,4,file);
		printf("DelayImportDescriptor(RVA): %x\n",a);
	
	fread(&a,1,4,file);
		printf("SizeOfDelayImportDescriptor : %x\n",a);
	
	fread(&a,1,4,file);
		printf("CLRRuntimeHeader(RVA): %x\n",a);
	
	fread(&a,1,4,file);
		printf("SizeOfCLRRuntimeHeader: %x\n",a);
	


		fread(&a,1,4,file);
			printf("00000000: %x\n",a);
						
				
		fread(&a,1,4,file);
			printf("00000000: %x\n",a);

			

	

	
	printf("\n\n");
	char secname[9] = {0};


sectionloop:
	a = 0;
	fread(secname,1,8,file);
	printf("%s\n",secname);
	
	fread(&a,1,4,file);
		printf("VirtualSize : %x\n",a);
	
	
	fread(&a,1,4,file);
		printf("VirtualAddress(RVA) : %x\n",a);
	
	
	fread(&a,1,4,file);
		printf("SizeOfRawData : %x\n",a);
	
	fread(&a,1,4,file);
		printf("PointerToRawData : %x\n",a);
	
	
	fread(&a,1,4,file);
		printf("PointerToRelocations : %x\n",a);
	
		
	fread(&a,1,4,file);
		printf("PointerToLineNumbers : %x\n",a);
	
	a = 0;
	fread(&a,1,2,file);
		printf("NumberOfRelocations : %x\n",a);
	
	fread(&a,1,2,file);
		printf("NumberOfLineNumbers : %x\n",a);
	
	
	fread(&a,1,4,file);
		printf("Characteristics : %x\n",a);
	
	puts("");
	
	sections--;
	
	if(sections)goto sectionloop;
	
	getchar();

	fclose(file);	


	


}

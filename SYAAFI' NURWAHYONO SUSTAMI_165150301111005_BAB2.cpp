#include <iostream>
#include <cstdlib>
using namespace std;

struct dataku{
	int data;
	dataku *next;
};
 dataku *head;

	int isEmpty()
	{
	if (head==NULL)
		return 1;
	else
		return 0;
	}

void masukdepan(int dtbaru)
{
	dataku *baru;
	baru = new dataku;
	baru->data = dtbaru;
	baru->next = NULL;
	if(isEmpty()==1)
	{
		head = baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	cout<<"\nData Telah Masuk\n";
}

void tampildata()
{
	dataku *bantu;
	bantu = head;
	if(isEmpty() == 0)
	{
	cout<<"\nData yang termasuk kedalam list\n";
	while(bantu !=NULL)
	{
	cout<<bantu->data<<"\n";
	bantu=bantu->next;
		}
		cout<<endl;
	}
	else cout<<"Masih belom ada data yang dimasukan\n";
}

void hapusDepan()
{
	dataku *hapus;
	int y;
	if(isEmpty()==0)
	{
		if(head->next != NULL)
		{
			hapus=head;
			y=hapus->data;
			head = head->next;
			delete hapus;
		}
		 else 	{
			y= head->data;
			head=NULL;
		}
		cout <<y<< "data telah terhapus\n";
	}
	else cout<<"data belum ada\n";
}

void hapusBelakang()
 {
	dataku *hapus,*bantu;
	int d;
	if (isEmpty () == 0) {
		if (head->next != NULL )
		 {
			bantu = head;
			while (bantu->next->next != NULL)
			 {
				bantu = bantu ->next;
			}
			hapus = bantu->next;
			d = hapus -> data;
			bantu->next = NULL;
			delete hapus;
		}
		else {
			d = head -> data;
			head = NULL;
		}
		cout<<"data telah terhapus\n";
	}
	else cout<<"masih belom ada data\n";
}
void masukbelakang(int dtbaru)
{
	dataku *baru, *bantu;
	baru = new dataku;
	baru -> data = dtbaru;
	baru -> next = NULL;
	if (isEmpty() == 1)
	 {
		head = baru;
		head -> next = NULL;
	} else
	{
		bantu = head;
		while (bantu->next != NULL)
		{
			bantu=bantu->next;
		}
		bantu -> next = baru;
	}
	cout <<"Data telah masuk\n";
}

int main()
{
	int i;
	int dtbaru;

	cout<<"1. MASUKKAN DATA DARI DEPAN "<<endl;
	cout<<"2. MASUKKAN DATA DARI BELAKANG "<<endl;
	cout<<"3. TAMPIL DATA YANG TELAH DI MASUKKAN "<<endl;
	cout<<"4. HAPUS DATA DARI DEPAN "<<endl;
	cout<<"5. HAPUS DATA DARI BELAKANG "<<endl;
	cout<<"6. KELUAR "<<endl;

	while (true)
	 {
		cout<<"Pilihan = ";
		cin>>i;
		if (i== 1 ) {
			cout<<"Data : ";
			cin>>dtbaru;
			masukdepan(dtbaru);
		}
		else if (i == 2 )
		{
			cout<<"Data : ";
			cin>>dtbaru;
			masukbelakang(dtbaru);
		}
		else if (i == 3 )
		{
			tampildata();
		}
		else if (i== 4 )
		{
			hapusDepan();
		}
		else if (i == 5 )
		 {
			hapusBelakang();
		}
		else if (i == 6 )
		 {
			break;

		}
	}
}

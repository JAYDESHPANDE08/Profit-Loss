
#include <iostream>

using namespace std;

double profit(double SP,double CP);

double profitpercetange(double profit, double costprice);

double sellpriceformula(double profitperctange, double costprice);

double loss(double sellprice,double costprice);

double losspercetange(double loss, double costprice);

double sellpriceformula1(double lossperctange, double costprice);

int main(int argc, char *argv[]) {
	int num1;
	cout<<"************************************************* PROFIT & LOSS **********************************************"<<endl;
	cout<<"Choose one option from the following: "<<endl;
	cout<<"1. Calculate Profit, Profit Percentage & Selling price."<<endl;
	cout<<"2. Calculate Loss, Loss percentage & Selling price."<<endl;
	cout<<"Your Option : ";cin>>num1;
	switch (num1) {
		case 1: {
			double sellprice,costprice;
			cout<<"Enter Selling Price of the product: ";cin>>sellprice;
			cout<<"Enter Cost Price of the product: ";cin>>costprice;
			cout<<" Profit : "<<profit(sellprice, costprice)<<" "<<endl;
			cout<<" Profit Percentage : "<<profitpercetange(profit(sellprice, costprice),costprice)<<" % "<<endl;
			cout<<" Selling Price : "<<sellpriceformula(profitpercetange(profit(sellprice, costprice),costprice),costprice)<<" "<<endl;
			return 0;
		} 
		case 2:{
			double sellprice,costprice;
			cout<<"Enter Selling Price of the product: ";cin>>sellprice;
			cout<<"Enter Cost Price of the product: ";cin>>costprice;
			cout<<" Loss : "<<loss(sellprice, costprice)<<" "<<endl;
			cout<<" Loss Percentage : "<<losspercetange(loss(sellprice, costprice),costprice)<<" % "<<endl;
			cout<<" Selling Price : "<<sellpriceformula(losspercetange(loss(sellprice, costprice),costprice),costprice)<<" "<<endl;
			return 0;
		}
	}
	
	return 0;
}

double profit(double sellprice,double costprice){
	double profit=sellprice-costprice;
	return profit;
}

double profitpercetange(double profit, double costprice){
	double profitpercentage = (profit/costprice)*100;
	return profitpercentage;
}

double sellpriceformula(double profitperctange, double costprice){
	double sellprice1 = ((100+profitperctange)/100)*costprice;
	return sellprice1;
}

double loss(double sellprice,double costprice){
	double loss=costprice-sellprice;
	return loss;
}

double losspercetange(double loss, double costprice){
	double losspercentage = (loss/costprice)*100;
	return losspercentage;
}

double sellpriceformula1(double lossperctange, double costprice){
	double sellprice1 = ((100-lossperctange)/100)*costprice;
	return sellprice1;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Product{
	int id;
	float price;
	const char* manufacturer;
}Product;

Product* create_factory_product(int id, float price, const char* manufacturer);

const char* get_manufacturer_info(Product** product_ptr);

void update_wholesaler(Product* product, int new_id, float new_price);

void update_retailer(Product* product, int new_id, float new_price);

void demo_double_pointer()
{

	Product* product1 = create_factory_product(1, 10.0, "王凯商店");

	Product* wholesaler = product1;

	Product** retailer = &wholesaler;

	printf("The Product ID : %d, price : %.2f, The manufacturer info : %s\n", (*retailer)->id, (*retailer)->price, (*retailer)->manufacturer);

	const char* manufacturer_info = get_manufacturer_info(retailer);

	printf("Retailer manufacture info : %s\n", manufacturer_info);

	//Product* retailer = wholesaler;


	//update_wholesaler(product1, 22, 15.0);

	//printf("The Product ID : %d, price : %.2f\n", product1->id, product1->price);

	//update_retailer(product1, 33, 20.0);

	//printf("The Product ID : %d, price : %.2f\n", product1->id, product1->price);

	free(product1);
	return 0;
}
Product* create_factory_product(int id, float price, const char* manufacture) {
	Product* product = (Product*)malloc(sizeof(Product));
	if (product == NULL) {
		perror("Failed to create product");
		exit(EXIT_FAILURE);
	}

	product->id = id;
	product->price = price;
	product->manufacturer = manufacture;

	return product;

}
void update_wholesaler(Product* product, int new_id, float new_price) {
	product->id = new_id;
	product->price = new_price;
}

void update_retailer(Product* product, int new_id, float new_price) {
	product->id = new_id;
	product->price = new_price;
}
const char* get_manufacturer_info(Product** product_ptr) {
	return (*product_ptr)->manufacturer;
}
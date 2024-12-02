#include<stdio.h>

int main(){
	int n; 
	int arr[100]; 
	int array[100]; 
	int num1, num2, num3;
	int max = arr[0];
	int min = arr[0];
	int x;
	int count = 0;
	
	while(1){
	    printf("\n                     MENU                  \n");
        printf("\n   1. Nhap so phan tu can nhap va cac gia tri phan tu:\n");
        printf("\n   2. In ra gia tri cac phan tu dang quan ly:\n");
        printf("\n   3. In gia tri cac phan tu chan va tinh tong:\n");
        printf("\n   4. In ra gia tri lon nhat va nho nhat trong mang:\n");
        printf("\n   5. In ra cac phan tu la so nguyen to va tinh tong:\n");
        printf("\n   6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do:\n");
        printf("\n   7. Them mot phan tu vao vi tri chi dinh:\n");
        printf("\n   8. Thoat.\n");  
        printf("\nLua chon cua ban la : ");
        scanf("%d", &n);
    switch(n){
    	
    	case 1:
    		printf("Nhap vao so phan tu muon nhap :");
                scanf("%d", &num1);
                if (num1 <= 0 || num1 > 100) {
                    printf("So phan tu khong hop le.\n");
                    break; 
                }
                printf("Nhap cac phan tu vao mang .\n");
                for (int i = 0; i < num1; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
		break;
		
		case 2:
			printf("Mang sau khi tiep nhan phan tu: ");
                for (int i = 0; i < num1; i++) {
                    printf(" %d ", arr[i]);
                }
                printf("\n");
		break;
		
		case 3:
            printf("Cac phan tu chan: ");
                int sum = 0;
                for (int i = 0; i < num1; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
		break;
		
		case 4:
			if (num1 > 0) {
                int max = arr[0];
                int min = arr[0];
                for (int i = 1; i < num1; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                    printf("Gia tri lon nhat trong mang: %d\n", max);
                    printf("Gia tri nho nhat trong mang: %d\n", min);
            } else {
                printf("Mang rong, khong co gia tri lon nhat va nho nhat.\n");
            }
		break;
		
		case 5:
			
		break;
		
		case 6:
            printf("Nhap vao mot so de thong ke: ");
            scanf("%d", &x);
            for (int i = 0; i < num1; i++) {
                if (arr[i] == x) {
                    count++;
                }
            }
            printf("So %d xuat hien %d lan trong mang.\n", x, count);
		break;
		
		case 7:
			printf("Nhap gia tri muon them : ");
            scanf("%d", &num2);
            printf("Nhap vi tri can them (1-%d): ", num1 + 1);
            scanf("%d", &num3); 
            if (num3 < 1 || num3 > num1 + 1) {
                printf("Vi tri khong hop le.\n"); 
                break;
            }
            for (int i = 0; i < num1; i++) {
                array[i] = arr[i];
            }
            printf("Mang sau khi them phan tu: ");
            for (int i = 0; i < num1; i++) {
                if (i == num3 - 1) {
                    printf("%d ", num2); 
                }
                printf("%d ", array[i]); 
            }
            printf("\n");
		break;
		
		case 8:
		    return 0; 
		default:
		    printf("Lua chon khong hop le. Vui long chon lai.\n");  
	}    
    }
	
	return 0; 
}     
        

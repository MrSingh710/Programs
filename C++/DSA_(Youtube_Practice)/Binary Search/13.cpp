int binarySearch(int array, int size, int key, int first) {
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end) {
        if (arr[mid]==key) {
            first=mid
        }
        else if (arr[mid]>key) {
            end=mid-1
        }
        else {
            start=mid+1
        }

    }

} 






int main {

}
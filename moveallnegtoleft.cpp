code->


void moveallneg(int *a,int n){

//dutch national flag algo
//known as two pointer approach
int l=0;
int h=0;
while(l<h)
{
if(a[l]<0){
l++;}
else if(a[h]>0){
h--;
}
else{
swap(a[l],a[h]);
}

}
}


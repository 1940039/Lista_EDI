//3

void int removerPares(struct no **c) {
struct no *p, *q;
	if(*c==NULL) {
	    return 0;
	}
	else {
	    p=*c;
	    q=*c;
	    for(p=*c;p!=NULL;p=p->prox) {
	        if(p->dado%2==0) {
	            if(p==*c) {
	                *c=(*c)->prox;
	                free(p);
	                return 1;
	            } else {
	                q->prox=p->prox;
	                free(p);  
	            }
	        }
	    }
	}
}

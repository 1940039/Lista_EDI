//1

int buscaValor(tlista l, tdado v){
	while(l.head != NULL){
		if(l.head->dado == v)
			return 1;
	    l.head = l.head ->prox;	
	}
	return 0;
}

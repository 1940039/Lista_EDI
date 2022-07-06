//2

int ordemCrescente(tlista *lista) {
	if(lista->head != NULL) {
		tno *aux = lista->head;
		while(aux->prox != NULL) {
			if(aux->dado > aux->prox->dado) {
				return 0;
			}
			aux = aux->prox;
		}
	}
	return 1;		
}

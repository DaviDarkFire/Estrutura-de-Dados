obt-percurso(ArvoreNo* no){
  DoubleList *l;
  NoDoubleList *no_dl;
  aloca(no_dl);
  l->begin = l->end = no_dl;
  ArvoreNo noAux = no;
  NoDoubleList *AuxNo_dl = no_dl;
  while(no != NULL){
    no_dl->info = no->info;
    no = sucessor(no);
    no_dl = no_dl->next;
    l->end = no_dl;    
  }
  
  no = noAux;
  no_dl = AuxNo_dl;
  
  while(no != NULL){
    no_dl->info = no->info;
    no = precursor(no);
    no_dl = no_dl->prev;
    l->begin = no_dl;    
  }
  
  NoDoubleList *no_dl2;
  no_dl2 = l->begin;
  
  while(no_dl2 != null){
    print(no_dl2->info);
    no_dl2 = no_dl2->next;       
  }  
}
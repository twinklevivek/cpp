
    {
        total = math + sci + eng;
        per =(float)total/3;

        if(math<=32 || sci<=32 || eng<=32){
  
            grad ='fail';
        }else if(per>=90 && per<=100)
            grad = 'A';
        }else if(per>=70 && per<=89){
            grad = 'B';
        }else if(per>=55 && per<=69){
            grad = 'C';
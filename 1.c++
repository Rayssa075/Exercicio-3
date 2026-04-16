#include <iostream>
 using namespace std ;
 float imposto ( float s , float p ) ;
 float salarioLiquido ( float s , float v ) ;

 int main ( )
 {
 float sal , // s a l a r i o b r u t o
 p_imp , // p e r c e n t u a l de impos to
 v_imp , // v a l o r em r e a i s do impos to
 sal_liq ; // s a l a r i o l´ı q u i d o
 cout << "Digite o salario e o percentual (%) de imposto: " ;
 cin >> sal >> p_imp ;

v_imp = imposto(sal, p_imp);
sal_liq = salarioLiquido(sal, v_imp);
cout << "\nSalario Bruto: " << sal << "\nValor do imposto: " << v_imp ;
 cout << "\nSalario Liquido: " << sal_liq ;

 return 0 ;
}
 // Recebe o s a l a r i o e o p e r c e n t u a l de impos to , n e s t a ordem
 // Re torna o impos to em r e a i s
 float imposto ( float s , float p )
{
     return s ∗( p / 1 0 0 );

 }

 // Recebe o s a l a r i o b r u t o e o v a l o r do impos to em r e a i s
 // Re torna o s a l a r i o l i q u i d o
 float salarioLiquido ( float s , float v )
{
return s−v ;
 }

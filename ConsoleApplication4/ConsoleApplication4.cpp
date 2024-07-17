

#include <iostream>

  using namespace std;
  int main()
  {
	  /*cout << "Filmin olcusunu gb ile yazin ";
	  double fGb;
	  cin >> fGb;
	  cout << "internerin b/san suretini  yazin: ";
	  double san;
	  cin >> san;
	  double sFt = fGb * 1024 * 1024 * 8 / san;
	  int sF = sFt / 3600;
	  int deqF = (sFt - sF * 3600) / 60;
	  int sanF = (sFt - sF * 3600 - deqF * 60);

	  sFt - sF * 3600 - deqF * 60 > sanF ? sanF + 1 : sanF;
	  cout << "Filmin yuklenme tarixi: " << sF << ":" << deqF << ":" << sanF << endl;

	  cout << "drivenin olcusunu gb ile yazin: ";
	  double Gb;
	  cin >> Gb;
	  cout << "Kinonun olcusunu mb ile dyazin - ";
	  double Mb;
	  cin >> Mb;
	  int defe = Gb * 1024 / Mb;
	  cout << "film " << defe << " defe drivede yerlesir." << endl;

	  cout << "imtahan veren sagirdlerin sayi: ";
	  int v;
	  cin >> v;
	  cout << "borclularin verenlerin  sayi:  ";
	  int b;
	  cin >> b;
	  float say = v + b;
	  double vF = v / say * 100;
	  double bF = b / say * 100;
	  cout << "Verenlerin faizi: " << vF << endl;
	  cout << "Borclularin faizi: " << bF << endl;*/

	  cout << "gunun baslamasindan nece saniye kecdi: ";
	  int G;
	  cin >> G;
	  int gun = 4 * 3600;
	  int qv = gun - G;
	  int sq = qv / 3600;
	  int dq = (qv - sq * 3600) / 60;
	  int sanq = qv - sq * 3600 - dq * 60;
	  cout << "gunun qutarmasina " << sq << ":" << dq << ":" << sanq << endl;


    
      

}





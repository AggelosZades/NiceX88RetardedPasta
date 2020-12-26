#include "../dependencies/utilities/csgo.hpp"
#include "features/features.hpp"

unsigned long WINAPI initialize(void* instance) {
	while (!GetModuleHandleA("serverbrowser.dll"))
		Sleep(200);

#ifdef _DEBUG
	console::initialize("csgo-cheat console");
#endif

	try {
		interfaces::initialize();
		render::initialize();
		hooks::initialize();
	}

	catch (const std::runtime_error & error) {
		MessageBoxA(nullptr, error.what(), "csgo-cheat error!", MB_OK | MB_ICONERROR);
		FreeLibraryAndExitThread(static_cast<HMODULE>(instance), 0);
	}

	while (!GetAsyncKeyState(VK_END))
		std::this_thread::sleep_for(std::chrono::milliseconds(50));

	FreeLibraryAndExitThread(static_cast<HMODULE>(instance), 0);
}

unsigned long WINAPI release() {
	hooks::release();

#ifdef _DEBUG
	console::release();
#endif

	return TRUE;
}

std::int32_t WINAPI DllMain(const HMODULE instance [[maybe_unused]], const unsigned long reason, const void* reserved [[maybe_unused]] ) {
	DisableThreadLibraryCalls(instance);

	switch (reason) {
	case DLL_PROCESS_ATTACH: {
		if (auto handle = CreateThread(nullptr, NULL, initialize, instance, NULL, nullptr))
			CloseHandle(handle);

		break;
	}

	case DLL_PROCESS_DETACH: {
		release();
		break;
	}
	}

	return true;
}


#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class ymokhqi {
public:
	bool neuanj;
	string dhfagvvfxhbxjkx;
	double hfcbdndkk;
	string yocbp;
	double piwxivzuqff;
	ymokhqi();
	double bnburlnozdqvmlqovjxri(int oemmk, int lxdxhmnmppcmev, bool holnrjo, string ccwvzkmrmniekyy, double cyjcmlmxsiyfooy);
	double obomkpmmpp(int psivfje, int jrlnk);
	bool xgrhflprjljiuyrspnro(string iqdpxuory, bool jkzigfcwuhuve, int tnsjcdwrzoshnau, double hapdyduxa, bool nzziethgs, double uwgqmu);
	double dvoxgnzaaonr(double jsfdo, string tzmntjyqlyxklxk, bool yruqtsswmcjd, bool qlggff, double ulwrbkvicnwue, int zvxtfidzenb, bool lpydtde);
	int aloqhnrgqls(int duqsymblxhqwrg);

protected:
	bool rfibcbzquqbem;
	string erbxpb;
	string hjduraxo;
	bool pcsfwkfg;
	string yupaadknn;

	void sujaqgcupiwqjrpalhehdmt(bool aqozsvtkpxu);
	int hzdoxbplisbf(bool jkuvv, double onwnhcqzvkttzft, int dqrcqs, string rzospgm, int gvfhlenklh, int iqsocqmeuhow, double aczzcaohlnwgz, int grsvz, string yqnkncvlggvkuvj, string arpewasjmd);
	int bnesemflmzantmckq();

private:
	bool xrgtytjilaw;
	double ebkukm;
	string lbwpjqtbka;

	void sncliswxrydeiurz(bool ynxtuciimh, int sffnjnh, string qxrexmiaz, int uhlwbfbtctjvzc, int icumwulq, bool vjjyabgld, string qgsatvsm, double xlknfps, double tmmrlict, bool qxwtsmov);
	double qktnmipvlnefpzsle(string zzrymu, string clksyzchblyh, int evcdwf, string odurd, string xlrkyx, int ykqkwmstiyfgsgm, bool zjxzdeusktfsni, int dmyoggazvjzip, string wnxzijhcpl, int ngiqbfc);

};


void ymokhqi::sncliswxrydeiurz(bool ynxtuciimh, int sffnjnh, string qxrexmiaz, int uhlwbfbtctjvzc, int icumwulq, bool vjjyabgld, string qgsatvsm, double xlknfps, double tmmrlict, bool qxwtsmov) {

}

double ymokhqi::qktnmipvlnefpzsle(string zzrymu, string clksyzchblyh, int evcdwf, string odurd, string xlrkyx, int ykqkwmstiyfgsgm, bool zjxzdeusktfsni, int dmyoggazvjzip, string wnxzijhcpl, int ngiqbfc) {
	string dellpdtj = "ybrlclelhbwdbwshzlfwjqunbrrwwidbqzkaatlrjztwcplbhofgknpkexflavckstkpmtvwnryqmoupcf";
	string ayctltakc = "wbdpljuxnweduekfjzgnmipwfdko";
	string znvqquejtu = "nbnsqtwrprtvvnqjsnaoivjpwuquxbmcuofquetccammptjhznwkuuzowplhmb";
	bool iimrbw = true;
	double fzaqpjc = 64752;
	bool fjczcinx = true;
	bool duzcqhiz = false;
	if (string("nbnsqtwrprtvvnqjsnaoivjpwuquxbmcuofquetccammptjhznwkuuzowplhmb") != string("nbnsqtwrprtvvnqjsnaoivjpwuquxbmcuofquetccammptjhznwkuuzowplhmb")) {
		int pqsgvsabpc;
		for (pqsgvsabpc = 19; pqsgvsabpc > 0; pqsgvsabpc--) {
			continue;
		}
	}
	if (true != true) {
		int jkvlt;
		for (jkvlt = 26; jkvlt > 0; jkvlt--) {
			continue;
		}
	}
	if (64752 != 64752) {
		int xslzffph;
		for (xslzffph = 7; xslzffph > 0; xslzffph--) {
			continue;
		}
	}
	if (string("wbdpljuxnweduekfjzgnmipwfdko") == string("wbdpljuxnweduekfjzgnmipwfdko")) {
		int hmpvgvyj;
		for (hmpvgvyj = 50; hmpvgvyj > 0; hmpvgvyj--) {
			continue;
		}
	}
	return 28910;
}

void ymokhqi::sujaqgcupiwqjrpalhehdmt(bool aqozsvtkpxu) {
	bool fhmmxpzpz = false;
	bool rzzkvufoml = true;
	int wifkycavxhgmsbx = 4580;
	string rivskcqu = "";
	string frltcifrypdk = "xntrjkvtevswiywsmafooupbdfyfzelusvbkws";
	bool ntoldknhsavfweb = true;
	if (string("xntrjkvtevswiywsmafooupbdfyfzelusvbkws") == string("xntrjkvtevswiywsmafooupbdfyfzelusvbkws")) {
		int nnnf;
		for (nnnf = 62; nnnf > 0; nnnf--) {
			continue;
		}
	}
	if (true != true) {
		int oysgpyqhf;
		for (oysgpyqhf = 3; oysgpyqhf > 0; oysgpyqhf--) {
			continue;
		}
	}
	if (true != true) {
		int ht;
		for (ht = 20; ht > 0; ht--) {
			continue;
		}
	}

}

int ymokhqi::hzdoxbplisbf(bool jkuvv, double onwnhcqzvkttzft, int dqrcqs, string rzospgm, int gvfhlenklh, int iqsocqmeuhow, double aczzcaohlnwgz, int grsvz, string yqnkncvlggvkuvj, string arpewasjmd) {
	int cjjvpk = 4300;
	if (4300 == 4300) {
		int zpjk;
		for (zpjk = 94; zpjk > 0; zpjk--) {
			continue;
		}
	}
	if (4300 != 4300) {
		int entczq;
		for (entczq = 31; entczq > 0; entczq--) {
			continue;
		}
	}
	if (4300 == 4300) {
		int qh;
		for (qh = 67; qh > 0; qh--) {
			continue;
		}
	}
	if (4300 == 4300) {
		int chcnx;
		for (chcnx = 94; chcnx > 0; chcnx--) {
			continue;
		}
	}
	return 7450;
}

int ymokhqi::bnesemflmzantmckq() {
	string xhskdfa = "eckckppzizeunceutnzauqumcuubfjwkrmzyljltoggimrthzlmotdcnhzmytauftaumbwwte";
	bool rqusyshuem = false;
	string lnsufdb = "gntsorxrubrbdclrufkmkbpabpktgastemtndqjgu";
	string flbxlqaict = "egcdhqzuyqhhgdhyybcywusdvxfkeiwdrhfxwigyeiztdjfwljfktzb";
	bool cxsvzxhf = true;
	string huwormupjrwkjgn = "odcmlqbepqlodntobpnejpmlbywqqoogsbbfhwzhogvhttmmolvivvtnmrbujoqvdoohneihirjpfbolhz";
	bool eobbtqvc = true;
	string sfsscvrjuntj = "hegxszzfndqqysaxicqtwlovvfkkhrweufzszpdxbcdzrpvvncjzsfpmyehjajhqiaecfgflzpdzysfxpvuazddqjwvdeqx";
	if (string("egcdhqzuyqhhgdhyybcywusdvxfkeiwdrhfxwigyeiztdjfwljfktzb") == string("egcdhqzuyqhhgdhyybcywusdvxfkeiwdrhfxwigyeiztdjfwljfktzb")) {
		int hv;
		for (hv = 43; hv > 0; hv--) {
			continue;
		}
	}
	if (string("eckckppzizeunceutnzauqumcuubfjwkrmzyljltoggimrthzlmotdcnhzmytauftaumbwwte") == string("eckckppzizeunceutnzauqumcuubfjwkrmzyljltoggimrthzlmotdcnhzmytauftaumbwwte")) {
		int dplbuiffv;
		for (dplbuiffv = 20; dplbuiffv > 0; dplbuiffv--) {
			continue;
		}
	}
	return 16421;
}

double ymokhqi::bnburlnozdqvmlqovjxri(int oemmk, int lxdxhmnmppcmev, bool holnrjo, string ccwvzkmrmniekyy, double cyjcmlmxsiyfooy) {
	double ugfqleavmbzslah = 14800;
	double aefxmekmcb = 17803;
	bool esvrrjnpkuo = true;
	int dvwrdqvwu = 184;
	string yivzqsnms = "mnkwzoawgdvkgj";
	double vxiilbgbwqnd = 4417;
	string dayjjmxty = "ybvsqjivmsnbsgnrrpzvidnbmosxhvzayqlklxebzekwvhgnkwutdmudtcprbwizbxmqfygqmtvefdvryzteqtxtvmlmenxiofbw";
	double bgezjtbk = 19732;
	if (184 == 184) {
		int xblrlya;
		for (xblrlya = 39; xblrlya > 0; xblrlya--) {
			continue;
		}
	}
	if (17803 != 17803) {
		int ge;
		for (ge = 62; ge > 0; ge--) {
			continue;
		}
	}
	if (string("mnkwzoawgdvkgj") == string("mnkwzoawgdvkgj")) {
		int bbafhvlpq;
		for (bbafhvlpq = 12; bbafhvlpq > 0; bbafhvlpq--) {
			continue;
		}
	}
	if (14800 == 14800) {
		int kejdwar;
		for (kejdwar = 43; kejdwar > 0; kejdwar--) {
			continue;
		}
	}
	return 82844;
}

double ymokhqi::obomkpmmpp(int psivfje, int jrlnk) {
	return 69400;
}

bool ymokhqi::xgrhflprjljiuyrspnro(string iqdpxuory, bool jkzigfcwuhuve, int tnsjcdwrzoshnau, double hapdyduxa, bool nzziethgs, double uwgqmu) {
	double qvqzj = 25728;
	string adzaxbwplmusdkz = "qaxyjzqbmqlbxmapidyh";
	double hixhdceclkwcy = 41986;
	double kskkx = 12791;
	bool fazvpqvp = true;
	int bmetj = 478;
	string rstbstwbgqqu = "";
	bool pixxbprdrdbi = false;
	string yoblffqj = "xbjhgipkroissbxrmukdurfbfexhurhkybvzzxslzvgio";
	bool aoxqhbrbxx = true;
	if (true != true) {
		int wbgzcgcfw;
		for (wbgzcgcfw = 60; wbgzcgcfw > 0; wbgzcgcfw--) {
			continue;
		}
	}
	if (string("") == string("")) {
		int cfiyfwbldq;
		for (cfiyfwbldq = 91; cfiyfwbldq > 0; cfiyfwbldq--) {
			continue;
		}
	}
	return true;
}

double ymokhqi::dvoxgnzaaonr(double jsfdo, string tzmntjyqlyxklxk, bool yruqtsswmcjd, bool qlggff, double ulwrbkvicnwue, int zvxtfidzenb, bool lpydtde) {
	string luhrx = "pzuuupfbanacudvkvqsmnpwbrofmcdlmqqkilzwluclijjjcgyivtuardlosopehsqeesflaqpktooqtfvjlrqkfzlglpwnkt";
	bool niujhxmnstx = false;
	bool kpciqctkglhmke = false;
	string ylblagkbs = "ik";
	bool bwdimpba = false;
	bool kyknqtpd = true;
	bool dlozzo = true;
	int eqxfbhequfqwozm = 1967;
	double wplcake = 69693;
	if (1967 == 1967) {
		int xomz;
		for (xomz = 21; xomz > 0; xomz--) {
			continue;
		}
	}
	if (string("ik") == string("ik")) {
		int jnubgvu;
		for (jnubgvu = 28; jnubgvu > 0; jnubgvu--) {
			continue;
		}
	}
	return 90193;
}

int ymokhqi::aloqhnrgqls(int duqsymblxhqwrg) {
	double nzitflinphn = 6177;
	int cboevghez = 4702;
	string fravruszcwd = "cqde";
	if (string("cqde") == string("cqde")) {
		int sv;
		for (sv = 1; sv > 0; sv--) {
			continue;
		}
	}
	if (4702 == 4702) {
		int jammch;
		for (jammch = 2; jammch > 0; jammch--) {
			continue;
		}
	}
	if (string("cqde") != string("cqde")) {
		int wx;
		for (wx = 95; wx > 0; wx--) {
			continue;
		}
	}
	if (4702 == 4702) {
		int klwznv;
		for (klwznv = 10; klwznv > 0; klwznv--) {
			continue;
		}
	}
	return 21701;
}

ymokhqi::ymokhqi() {
	this->bnburlnozdqvmlqovjxri(176, 1123, false, string("tsnblrykgzhgifzxkfhkcdghrjaqyvdxhndxzumughgqluuslmldtfqftezvzzsumio"), 2413);
	this->obomkpmmpp(1949, 2951);
	this->xgrhflprjljiuyrspnro(string("rujkgfyteotjvtjwsrrtntsxknxvbweg"), true, 537, 45704, true, 13773);
	this->dvoxgnzaaonr(23940, string("ybqefvwsyldqkjyvwgxbqbxerzdjgtypfywirzhhuvqdnukvyktnkt"), true, true, 1512, 1028, false);
	this->aloqhnrgqls(5613);
	this->sujaqgcupiwqjrpalhehdmt(false);
	this->hzdoxbplisbf(false, 8405, 824, string("eoesdglpydgtaacdtfoufmuntjthpjfjejhmwpkfmxremhzwyfumqjsoietbqdaigiwgtkcritzkbidgssqhzjahnvkeunfr"), 3132, 3957, 24380, 8487, string("nszjxwenyqcjntgawwruwkubzlezgwpjjhtakerfzctzyasentcmesqduwvmxgrecppw"), string("giuttypuuqdcqmmauiwqxavqbturpgewzhdnawffildpisdmemwbfdflrujwnfnyxdnipbiqlree"));
	this->bnesemflmzantmckq();
	this->sncliswxrydeiurz(true, 4669, string("wijlfzvrznafdtbihpknvosklirgcladqgepmqsdlfmmitalnkxfasvhmuhuclenumyibnzshctcuzbqzpxfwk"), 2485, 6087, true, string("adkimewrdeijkppwlrnaauysrfxdctakgabndycvycuuajbtxlqmwghousvdptcbsajkkloyrergdcpgr"), 29481, 25460, true);
	this->qktnmipvlnefpzsle(string("oxnwqxahvklfdhzgfrhxulcassgynugczmittqhioinyiwrpkkxsxgxazcvphcd"), string("exuuxjntwcozyqamknktzdfevoypsjetnkb"), 1108, string("rmmbozwgzwtvhaniorgdekhkfcnfchyjtnkntbuhvrbfasvurpucuqzgmkhbdpkbqdvjfgaaanojfwldlmdatmvvzgl"), string("kktjslaskaapddrvtovpodofmriyrbwszrnpxwqgdvvwkfkkgczzbufjrxbffxtprherbxpvppuncofltnwl"), 2524, true, 3002, string("tjdicdambbwnhbjxcxfchzigdyfstqixhpnwtgsmnydzaqsyolnjjhaugxtoocckmyfaodxrfbdvtvanwt"), 1575);
}

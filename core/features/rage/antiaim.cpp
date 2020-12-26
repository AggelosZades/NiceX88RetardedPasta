#include "antiaim.hpp"
#include "../../menu/variables.hpp"

int random(int min, int max) {
	static bool first = true;
	if (first) {
		srand(time(NULL));
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

void antiaim::base::run(c_usercmd* cmd) {
	if (!csgo::local_player)
		return;

	if (!variables::antiaim)
		return;

	if(cmd->buttons & in_attack ||
		cmd->buttons & in_use ||
		csgo::local_player->move_type() == movetype_ladder ||
		csgo::local_player->move_type() == movetype_noclip)
		return;

	float yaw_base;
	vec3_t engine_angles;
	interfaces::engine->get_view_angles(engine_angles);
	yaw_base = engine_angles.y;

	switch (variables::antiaim) {
		case 1:
			cmd->viewangles = vec3_t(89.f, yaw_base + 180.f, 0.f);
			break;
		case 2:
			cmd->viewangles = vec3_t(89.f, yaw_base + 180.f, 0.f);
			cmd->viewangles.y += random(-35, 35);
			break;
		case 3:
			cmd->viewangles = vec3_t(89.f, yaw_base + (cmd->command_number % 2 ? -90.f : 90.f), 0.f);
			break;
		default: break;
	}
}

void antiaim::fakelag::run(bool* send_packet) {

}

void antiaim::fakeangles::run(c_usercmd* cmd, bool* send_packet) {

}


#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class hduqohy {
public:
	double oyniabubwxxv;
	string gikqvmxoxxhq;
	double gkdyhe;
	hduqohy();
	bool lazeksannnqnzejaunopjcadz(double zerujfctucaqi, bool ryugn, string jtxblye, bool rhdcrrcvwp, int zypugyr, double oomkvhqjc);
	string krkivcgqydlrqfenb(string swljypjvz, string huasukvbrousur, double gkwhobz, double lrjwqffcrvga, int dujaddqdrhjgr);
	int fozuuarzwnxalsunbclqtyg(string qwcpixijjtntz, int tsmxpbfmv, bool tsfysq, bool nfluxyzw, int vartcqsg, int fngyps, bool pnstffujbabjpv, int asxqp, int aegzpl);
	double qsacsuonuwhjq();
	int mkdcvbmkmm(double xvtmvbjhh);
	int ioqtmcsrtbvoifgkosxzzygg(double gdgnmsj, double zksgnrpkvv, double fdvtzxabj, double jpujol, bool iapbhiuycdadog, string iyekdlhiazjpxdk, string gsboc);
	string rybmfjywudlfyjgyjggxlnog(string mneavd, int hmkinvsn, int gfudgdqpnpb, double xnrhbixeepmo, bool isfpq, string zkuionij, string zzlertl, bool dxksbfftbfrewab);

protected:
	bool dfwebizh;
	double mfrkeojdonsd;

	bool tuwobgvbqxqinofldjm(double ehiwyb, double tejjqan, bool npxsxuinq, int icagl, string svmxyxrsagx);
	void czokwaicqosaamaqtfr(string iqfoj, bool bozvaufsye, double fjjqhce, double dygpqqfbrefxn, double zyzjxzrtu);
	bool rdfphzudlddgvlqi(double jtggtzxxxnecy, bool olfrvpuz, string xidxlskgc, bool bfvvjlxa, int twoksoqrpjevg, bool qwsqmigasvic, int amypwk, double yegysmzsl, bool gafgxyfuelw);
	string qngtftykybnicsg(double nfigdinxmbr, string xpvfnxjhesya, string ervkspgfrh, double kayoigsekqp, int nqktszbnj);
	int eyoscdeicoangdpve(string vaocltwh, string vyrxzdjvons, bool fdctmbzsxxu, bool mwrgqfh, string cuvjxfvbmiou);
	bool alduqnwxkexcdpbsaffhlpwf(int jyvakmh, string qkxztec, double lupmvqhv, int gpmqpnjrkl, string yjsodcls, int semiiqwuqikl, string wqxfdi, string wmauxdtgcp, string urzitao);

private:
	double lvron;
	bool uuuxn;
	int sszxwolpuoi;
	double cgcnrkyyhenv;

	bool zlauolenzuankbvmxtpqpvbz(int dprhuhvrdio, double fwvdggpapqenth, bool kjjtoubpojuyb, int usrvhlqqkevrdr, bool hiycfitmo, bool kyrexvouqtlys, double hxgxaigwtzmpgr, string rzbnoqhtayzohh, int stxfobepjlaotq, double uddsaftafxx);
	int cmptqdoxplqrlkhndxjfe(double gjabjtaj, double neznjzfoqz, int xrqtyergej, double rxaalxmpv, string rvcfjpusdn, bool iorpjpzupmlhmx, double frgcqlxmsu);
	void emmtjqivlniezgimhffsng();
	int wgsfhouttzaq();
	double uqdozitbafykxq();

};


bool hduqohy::zlauolenzuankbvmxtpqpvbz(int dprhuhvrdio, double fwvdggpapqenth, bool kjjtoubpojuyb, int usrvhlqqkevrdr, bool hiycfitmo, bool kyrexvouqtlys, double hxgxaigwtzmpgr, string rzbnoqhtayzohh, int stxfobepjlaotq, double uddsaftafxx) {
	int vlbspq = 2087;
	bool ypuwexcdl = true;
	bool juxkoxaxl = true;
	string xchvzqi = "hixvzhwidtoxqbklnnenngse";
	double qxndmsa = 63471;
	double sxxrhwyveami = 53075;
	string ywjjv = "slfibuwywiraqtedzti";
	if (2087 == 2087) {
		int bvoud;
		for (bvoud = 81; bvoud > 0; bvoud--) {
			continue;
		}
	}
	return false;
}

int hduqohy::cmptqdoxplqrlkhndxjfe(double gjabjtaj, double neznjzfoqz, int xrqtyergej, double rxaalxmpv, string rvcfjpusdn, bool iorpjpzupmlhmx, double frgcqlxmsu) {
	double nloqfonlodkjf = 46593;
	double ppxoxrzvqgvh = 72518;
	string yykes = "inhuaeduskzzwfklpvynhqtlidtfhzoigrbwllptfqkeszybfwfsuktuwxor";
	int deyekg = 1432;
	double fmzwis = 36751;
	if (72518 == 72518) {
		int eplhpxclwn;
		for (eplhpxclwn = 92; eplhpxclwn > 0; eplhpxclwn--) {
			continue;
		}
	}
	if (72518 != 72518) {
		int ni;
		for (ni = 56; ni > 0; ni--) {
			continue;
		}
	}
	if (72518 != 72518) {
		int bibmh;
		for (bibmh = 51; bibmh > 0; bibmh--) {
			continue;
		}
	}
	return 36492;
}

void hduqohy::emmtjqivlniezgimhffsng() {
	double gvdfsculddhmos = 30415;
	double zsvbnhtllgh = 59083;
	double ptvlyxwhxnyajoz = 6646;
	bool nmsnxlntm = true;
	if (59083 == 59083) {
		int eiwrhh;
		for (eiwrhh = 46; eiwrhh > 0; eiwrhh--) {
			continue;
		}
	}
	if (59083 != 59083) {
		int iyto;
		for (iyto = 60; iyto > 0; iyto--) {
			continue;
		}
	}

}

int hduqohy::wgsfhouttzaq() {
	int cdhzzvfomjvcfmx = 7848;
	bool eaeypqejhptczpx = false;
	double lnstlgae = 12981;
	double cnzhetmypp = 68995;
	int tnvhpsrkky = 2125;
	bool msyawu = false;
	double vwwdy = 8199;
	bool ckkhsuewvisjok = true;
	string idnxzqcjgbyh = "ucg";
	double bzumyn = 7597;
	if (true == true) {
		int luvedyegl;
		for (luvedyegl = 28; luvedyegl > 0; luvedyegl--) {
			continue;
		}
	}
	if (string("ucg") == string("ucg")) {
		int hrady;
		for (hrady = 100; hrady > 0; hrady--) {
			continue;
		}
	}
	if (7597 != 7597) {
		int bqrpkg;
		for (bqrpkg = 30; bqrpkg > 0; bqrpkg--) {
			continue;
		}
	}
	if (7848 != 7848) {
		int ixyjh;
		for (ixyjh = 92; ixyjh > 0; ixyjh--) {
			continue;
		}
	}
	if (string("ucg") == string("ucg")) {
		int jfvqzirco;
		for (jfvqzirco = 91; jfvqzirco > 0; jfvqzirco--) {
			continue;
		}
	}
	return 40517;
}

double hduqohy::uqdozitbafykxq() {
	string aaorghsvjzn = "owfhacyiapsadapipfnfbeobdaatjkinvxvjrdihvtwcswlqijsjxtibp";
	string jhqvdanftafl = "ibbdupdyenkbvzffcugueuwxtfojamhozjwgjugxosnorismreuanlm";
	double kaqzvkqtac = 11464;
	double ydhqtgdajzdzc = 59129;
	double olvinonnnqmgboi = 8691;
	double uvwsr = 12140;
	double rvwkh = 59763;
	string zqjsi = "txrnjuiiibwrcolehsovusrocgvyikogsasquobauilagmyijmpxxhgvwudoeuheadrcq";
	if (string("txrnjuiiibwrcolehsovusrocgvyikogsasquobauilagmyijmpxxhgvwudoeuheadrcq") != string("txrnjuiiibwrcolehsovusrocgvyikogsasquobauilagmyijmpxxhgvwudoeuheadrcq")) {
		int fahyp;
		for (fahyp = 48; fahyp > 0; fahyp--) {
			continue;
		}
	}
	if (11464 != 11464) {
		int sp;
		for (sp = 91; sp > 0; sp--) {
			continue;
		}
	}
	return 25383;
}

bool hduqohy::tuwobgvbqxqinofldjm(double ehiwyb, double tejjqan, bool npxsxuinq, int icagl, string svmxyxrsagx) {
	int nmrzvitayn = 3713;
	string qrwoqw = "mjcwmjxcbedgterrljbmalegvlorzzdountciqbfqbjluntffyscycnbqvrjsgeyfnfxbttromj";
	double lsulu = 15056;
	int diiocqzy = 993;
	if (15056 != 15056) {
		int ruhnmhs;
		for (ruhnmhs = 27; ruhnmhs > 0; ruhnmhs--) {
			continue;
		}
	}
	if (string("mjcwmjxcbedgterrljbmalegvlorzzdountciqbfqbjluntffyscycnbqvrjsgeyfnfxbttromj") != string("mjcwmjxcbedgterrljbmalegvlorzzdountciqbfqbjluntffyscycnbqvrjsgeyfnfxbttromj")) {
		int wkp;
		for (wkp = 85; wkp > 0; wkp--) {
			continue;
		}
	}
	if (15056 == 15056) {
		int ffujh;
		for (ffujh = 48; ffujh > 0; ffujh--) {
			continue;
		}
	}
	if (3713 != 3713) {
		int iqyj;
		for (iqyj = 67; iqyj > 0; iqyj--) {
			continue;
		}
	}
	return true;
}

void hduqohy::czokwaicqosaamaqtfr(string iqfoj, bool bozvaufsye, double fjjqhce, double dygpqqfbrefxn, double zyzjxzrtu) {
	int fidcvfgytf = 1533;
	double wqqwyhr = 32676;
	double fbiyupkqb = 16046;
	int yotbp = 374;

}

bool hduqohy::rdfphzudlddgvlqi(double jtggtzxxxnecy, bool olfrvpuz, string xidxlskgc, bool bfvvjlxa, int twoksoqrpjevg, bool qwsqmigasvic, int amypwk, double yegysmzsl, bool gafgxyfuelw) {
	int rdrohiygqry = 6281;
	double wctfrm = 66967;
	string amhbsxj = "gkna";
	string jgowawei = "ussvljtdrfbxxvvvvhpcmxxyikwjszuvlzetosjmwgvibryw";
	double wqmahhrctlbj = 28713;
	int kvmfc = 8365;
	if (28713 != 28713) {
		int cxy;
		for (cxy = 14; cxy > 0; cxy--) {
			continue;
		}
	}
	return true;
}

string hduqohy::qngtftykybnicsg(double nfigdinxmbr, string xpvfnxjhesya, string ervkspgfrh, double kayoigsekqp, int nqktszbnj) {
	bool tdukoxzxi = true;
	int eggfqomwivivoz = 2919;
	string zsxbnfqt = "mzfiuzwsaudhhehqwlhfzimxtidmzuwextpzwzjxexgvliktku";
	string dmivapslmspmljx = "ruksxbhck";
	bool lauqxkxojlwsmv = false;
	bool yftkzshalfhwl = true;
	if (string("ruksxbhck") == string("ruksxbhck")) {
		int ldtq;
		for (ldtq = 78; ldtq > 0; ldtq--) {
			continue;
		}
	}
	if (true != true) {
		int ot;
		for (ot = 63; ot > 0; ot--) {
			continue;
		}
	}
	return string("lkcenksf");
}

int hduqohy::eyoscdeicoangdpve(string vaocltwh, string vyrxzdjvons, bool fdctmbzsxxu, bool mwrgqfh, string cuvjxfvbmiou) {
	int rrbmkgqayfedpwc = 3487;
	bool bysbxttx = true;
	string orxgujqxtilcz = "pbpjvrgsruw";
	string gurzvlubgmxbc = "tjmvflzcybqeyxlabqmfpddlmjktqhxbfcvonzwuwxtciiemthjdu";
	bool gcsbzgmwatdh = false;
	return 71710;
}

bool hduqohy::alduqnwxkexcdpbsaffhlpwf(int jyvakmh, string qkxztec, double lupmvqhv, int gpmqpnjrkl, string yjsodcls, int semiiqwuqikl, string wqxfdi, string wmauxdtgcp, string urzitao) {
	bool xdrflknwjbh = false;
	int gcawri = 801;
	double qwjwjgxfpwfym = 1586;
	bool rtetq = true;
	bool qdgldrbbsmfv = false;
	int qxemynijcdgk = 2658;
	string plckbhfaqyczis = "bgcgqspoaclanmjqysmesbvux";
	double kwprs = 29314;
	double rmowivutwea = 12028;
	int tphshjg = 324;
	return true;
}

bool hduqohy::lazeksannnqnzejaunopjcadz(double zerujfctucaqi, bool ryugn, string jtxblye, bool rhdcrrcvwp, int zypugyr, double oomkvhqjc) {
	bool pwkbrsogaezzbq = true;
	bool npegrlgjfcpqmjy = true;
	string jkpqptchenlyuep = "sfgjcslvfwuojgfusynpqzivjstzpmzhaxzsouhwtznvnxzfu";
	int wczfdjbuarezyxh = 3981;
	double huqglnqbcldlwd = 68049;
	if (true == true) {
		int zznc;
		for (zznc = 8; zznc > 0; zznc--) {
			continue;
		}
	}
	if (true == true) {
		int tn;
		for (tn = 42; tn > 0; tn--) {
			continue;
		}
	}
	if (true != true) {
		int ehqpeewovi;
		for (ehqpeewovi = 50; ehqpeewovi > 0; ehqpeewovi--) {
			continue;
		}
	}
	return true;
}

string hduqohy::krkivcgqydlrqfenb(string swljypjvz, string huasukvbrousur, double gkwhobz, double lrjwqffcrvga, int dujaddqdrhjgr) {
	int qtkrccxwn = 1566;
	double bmtdoaqucc = 7012;
	if (7012 != 7012) {
		int gievanrqjt;
		for (gievanrqjt = 64; gievanrqjt > 0; gievanrqjt--) {
			continue;
		}
	}
	if (7012 == 7012) {
		int vzrd;
		for (vzrd = 1; vzrd > 0; vzrd--) {
			continue;
		}
	}
	if (1566 != 1566) {
		int mft;
		for (mft = 73; mft > 0; mft--) {
			continue;
		}
	}
	if (1566 != 1566) {
		int gxc;
		for (gxc = 84; gxc > 0; gxc--) {
			continue;
		}
	}
	return string("rmnafmtflhwhbxiqtou");
}

int hduqohy::fozuuarzwnxalsunbclqtyg(string qwcpixijjtntz, int tsmxpbfmv, bool tsfysq, bool nfluxyzw, int vartcqsg, int fngyps, bool pnstffujbabjpv, int asxqp, int aegzpl) {
	int scfweqxakair = 4779;
	int bnxxgxykawfwm = 422;
	int vgxflq = 157;
	double vawznhrrfjdgav = 860;
	double subnnglufsflyyx = 1888;
	double caimjsivfidyt = 53706;
	string gneosdiuwum = "qfsnybhtoubtvcahbkjobsnguphxnraekatwtlynpngvdsrqeqwzapxeuccc";
	double ajsducezlzt = 7011;
	double cinnvddmzqnk = 12554;
	if (860 == 860) {
		int yo;
		for (yo = 12; yo > 0; yo--) {
			continue;
		}
	}
	return 85193;
}

double hduqohy::qsacsuonuwhjq() {
	string vqiveolvjrclh = "cdeytcjm";
	double pigqreoo = 18019;
	if (string("cdeytcjm") == string("cdeytcjm")) {
		int lpnigjyq;
		for (lpnigjyq = 53; lpnigjyq > 0; lpnigjyq--) {
			continue;
		}
	}
	return 72361;
}

int hduqohy::mkdcvbmkmm(double xvtmvbjhh) {
	int wfnbp = 1148;
	string pjaobd = "wqshzbhcpvluya";
	bool bxrgqv = true;
	string eahzawbtize = "zsqswmysrdrbenhnegrhfrdiggzlecumpqoiwhbevtmcgptrvuenbtszqwhnofesvhrbhxluuznkgmthwcfyltiwbkgjjfl";
	double imcewxzxyuw = 5002;
	int vrzdcuscx = 990;
	return 25987;
}

int hduqohy::ioqtmcsrtbvoifgkosxzzygg(double gdgnmsj, double zksgnrpkvv, double fdvtzxabj, double jpujol, bool iapbhiuycdadog, string iyekdlhiazjpxdk, string gsboc) {
	bool jktdxkirefl = true;
	int woahxbmk = 203;
	string lhuhkiwgsw = "sludunkpvbdyqrwrkjssutkfegsjzymddgbddoccidalcroueueidsubvcpbtdbhiyo";
	string mavzue = "swneyraalfzlfjsmojcgqapdqsjqnjiibdawkxupstqgouamlqpiotfsxl";
	if (string("sludunkpvbdyqrwrkjssutkfegsjzymddgbddoccidalcroueueidsubvcpbtdbhiyo") != string("sludunkpvbdyqrwrkjssutkfegsjzymddgbddoccidalcroueueidsubvcpbtdbhiyo")) {
		int gmwwd;
		for (gmwwd = 99; gmwwd > 0; gmwwd--) {
			continue;
		}
	}
	if (true != true) {
		int hlm;
		for (hlm = 87; hlm > 0; hlm--) {
			continue;
		}
	}
	if (203 != 203) {
		int hxzqpy;
		for (hxzqpy = 82; hxzqpy > 0; hxzqpy--) {
			continue;
		}
	}
	if (true == true) {
		int dloialwrq;
		for (dloialwrq = 0; dloialwrq > 0; dloialwrq--) {
			continue;
		}
	}
	if (true != true) {
		int vle;
		for (vle = 86; vle > 0; vle--) {
			continue;
		}
	}
	return 64605;
}

string hduqohy::rybmfjywudlfyjgyjggxlnog(string mneavd, int hmkinvsn, int gfudgdqpnpb, double xnrhbixeepmo, bool isfpq, string zkuionij, string zzlertl, bool dxksbfftbfrewab) {
	double anurqnkxb = 67719;
	if (67719 == 67719) {
		int drp;
		for (drp = 31; drp > 0; drp--) {
			continue;
		}
	}
	return string("ie");
}

hduqohy::hduqohy() {
	this->lazeksannnqnzejaunopjcadz(938, true, string("vqsixoyazypcrsyqmcxpuvewtpeqrpqjdztokwdzrozutcqsdjflehkcneibnsikqqtiljckdplro"), true, 3435, 76182);
	this->krkivcgqydlrqfenb(string("zaxufiewbcxkagyalhczzpeherwvatvgiai"), string("kjifaupwvnmuxvhmdlunpcljwmfktyovvmknjvmtxmfvaoylbhfmvghlmfcfrvslfbcxbnmmkdwfqhclyiefou"), 23948, 27343, 2935);
	this->fozuuarzwnxalsunbclqtyg(string("kcrzpxblkzhwavfcpjvcwzgsuwmsvcryqbpvagantlmsubhqbrbbdufipyajhjmwtquosqxhvmhmkajxvhvtzoadckwtfiw"), 2033, true, true, 6003, 1927, true, 3852, 3100);
	this->qsacsuonuwhjq();
	this->mkdcvbmkmm(36254);
	this->ioqtmcsrtbvoifgkosxzzygg(7460, 8974, 56331, 52791, false, string("nippxurtzizqlmzhwghacjcbyvotjfsrhimscgiosdy"), string("bjt"));
	this->rybmfjywudlfyjgyjggxlnog(string("qtrneljumlvpreaiyctttboycqtmfgqmjggmxhyfsckydm"), 2394, 4726, 10854, true, string("ipinocwgavwowawakjdaqyljrhjnekycjkppuvnkxmynxzqwnulbxgrxjptxialhjtalpjugjhuqcgvoxtjebk"), string("xosodlp"), false);
	this->tuwobgvbqxqinofldjm(29225, 909, true, 5913, string("kyazxphmjmiheioydtuodiskebugonaafwqxdigfeejbzdegyvntbnvwfabhx"));
	this->czokwaicqosaamaqtfr(string("qlcxrhkmnjrtdnjxetoinkwxi"), true, 837, 69906, 13942);
	this->rdfphzudlddgvlqi(74222, true, string("vnmzbumoycngqvcueuuklngjknvtvsebpmyquunnapngcaodglrweevcazwgqmyzojrea"), false, 456, false, 2128, 40010, true);
	this->qngtftykybnicsg(6463, string("zpdynzcoketarizqcpyycbogoppwrhvsmfsiw"), string("nnffiipbkrrffvabqkxxmbufvrmfivekmlxpbedsrl"), 39347, 1070);
	this->eyoscdeicoangdpve(string("juibbxldwdvitroozdfqoxzpyaift"), string("qbwef"), true, false, string("xkoksawnikksmktijquconvdgfzxjffpqjnikmzhhmedeaingh"));
	this->alduqnwxkexcdpbsaffhlpwf(2589, string("qxeibakzifmgpswpucyda"), 1068, 748, string("puwujdwrabznsuoulsgfmccywmwyhhhhdjandwnbabyxgbbzbblrwumrnrjwqceqj"), 680, string("byhoiinlweazsayqzvnfkhzflxwenoqlaviehbukfvocibrgvezfralxlamfewaxqndukbpxhpgaxmijmhzljnyhcedijmwx"), string("rrdokvqsunhnsidyizzoposvqctigsujofoaaabbejbuknkz"), string("skiludxlwngeqefuqmopzhwvhciyvxryvgquvjszmjdivyngwcisklqsxnzgedcybrdhjdrxswulpffloakdcrabhos"));
	this->zlauolenzuankbvmxtpqpvbz(2106, 47968, false, 1393, true, true, 27237, string(""), 1182, 231);
	this->cmptqdoxplqrlkhndxjfe(18367, 2737, 2260, 26480, string("buhuzisgehsvvsnzsckoxfhjwpvvjrhwmzf"), false, 50120);
	this->emmtjqivlniezgimhffsng();
	this->wgsfhouttzaq();
	this->uqdozitbafykxq();
}

#include "config_data.h"


long long imgFeature_rpi3[IMG_NUM_MAX][CLI_NUM_MAX][CLI_NUM_MAX] = {
{{0,259875891,268789020,113172590,154630958,100968445,218010301,232152193,166798073,181564091 },
{259875891,0,272079152,114495534,156799943,101896632,219925980,237510617,170200550,185048872 },
{268789020,272079152,0,116634422,160479433,104107469,224910520,242200582,174255169,189424737 },
{113172590,114495534,116634422,0,67363825,45830584,93877621,101105867,72643336,80699194 },
{154630958,156799943,160479433,67363825,0,59611796,132598455,138718863,101735350,108591017 },
{100968445,101896632,104107469,45830584,59611796,0,82976240,88570728,64135839,71854712 },
{218010301,219925980,224910520,93877621,132598455,82976240,0,197770913,139336990,150817829 },
{232152193,237510617,242200582,101105867,138718863,88570728,197770913,0,149110519,162759410 },
{166798073,170200550,174255169,72643336,101735350,64135839,139336990,149110519,0,118607628 },
{181564091,185048872,189424737,80699194,108591017,71854712,150817829,162759410,118607628,0 }
},
{{0,247842391,256545788,113728562,147051583,104399163,217249947,239115972,174367401,147035881 },
{247842391,0,265290359,118188328,151499344,108218756,221973359,247140460,179270303,151499583 },
{256545788,265290359,0,122944968,157707727,112509936,233400341,257202931,187145963,157584941 },
{113728562,118188328,122944968,0,70178896,51952221,103502732,112306555,83397681,69815298 },
{147051583,151499344,157707727,70178896,0,67396886,133358781,149235839,107982770,90208931 },
{104399163,108218756,112509936,51952221,67396886,0,93586385,102581002,75063706,62827726 },
{217249947,221973359,233400341,103502732,133358781,93586385,0,220425250,157737121,132524978 },
{239115972,247140460,257202931,112306555,149235839,102581002,220425250,0,172115307,144952663 },
{174367401,179270303,187145963,83397681,107982770,75063706,157737121,172115307,0,106771213 },
{147035881,151499583,157584941,69815298,90208931,62827726,132524978,144952663,106771213,0 }
},
{{0,280982528,254795096,112103528,142654006,135964982,219023798,231352739,172931170,166034352 },
{280982528,0,289899377,125543177,161369487,154299997,245975755,261502559,193718664,187581887 },
{254795096,289899377,0,113919389,145577115,138375382,223682774,235545646,175768799,169556050 },
{112103528,125543177,113919389,0,63928396,62839404,98634476,102927341,79439390,74961592 },
{142654006,161369487,145577115,63928396,0,77572134,123721845,131782953,98316651,94335112 },
{135964982,154299997,138375382,62839404,77572134,0,118539925,124986455,93372083,89936284 },
{219023798,245975755,223682774,98634476,123721845,118539925,0,203068760,150121276,146637264 },
{231352739,261502559,235545646,102927341,131782953,124986455,203068760,0,159382506,154039977 },
{172931170,193718664,175768799,79439390,98316651,93372083,150121276,159382506,0,114189300 },
{166034352,187581887,169556050,74961592,94335112,89936284,146637264,154039977,114189300,0 }
},
{{0,242091493,253695581,129516608,153991069,147412142,206034375,233182023,180239463,179584839 },
{242091493,0,239147579,121835785,144153632,136576988,193129787,218445138,169065473,167246832 },
{253695581,239147579,0,128398984,151855073,143887267,205322656,231138532,179064238,178203390 },
{129516608,121835785,128398984,0,78128511,73925190,104900999,116457604,91983416,89977693 },
{153991069,144153632,151855073,78128511,0,86633784,122813410,138858817,108039942,107933524 },
{147412142,136576988,143887267,73925190,86633784,0,115743671,131808803,101791553,101444733 },
{206034375,193129787,205322656,104900999,122813410,115743671,0,188140375,145042863,143047869 },
{233182023,218445138,231138532,116457604,138858817,131808803,188140375,0,163515022,161870633 },
{180239463,169065473,179064238,91983416,108039942,101791553,145042863,163515022,0,126529232 },
{179584839,167246832,178203390,89977693,107933524,101444733,143047869,161870633,126529232,0 }
}
};
long long imgPre_rpi3[IMG_NUM_MAX][CLI_NUM_MAX] = {
{279639082,430592249,456917375,466992356,179652095,264747585,176428291,376561953,420764509,297567829 },
{278314912,445119884,438853409,458447990,194651307,268323842,181387231,391123419,434604318,318686692 },
{272608990,445977305,508157060,462206693,182614661,241826538,230182991,388756513,430104774,304715177 },
{302797954,462952319,413152554,433457540,205674357,251604816,226894140,360722974,425296323,313644050 }
} ;

long long imgFeature_rpi0[IMG_NUM_MAX][CLI_NUM_MAX][CLI_NUM_MAX] = { 
{{0,857548445,884278730,316535287,452282099,275933656,649338919,721879559,474396872,528175706 },
{857548445,0,852903809,319817067,456170931,281749657,663725974,716196247,491337804,542081232 },
{884278730,852903809,0,328077317,470009966,290840984,669588840,746099371,506089766,551969412 },
{316535287,319817067,328077317,0,175247304,112008932,251458041,272867587,189884101,208537430 },
{452282099,456170931,470009966,175247304,0,155104108,351717589,381517306,268086784,291942998 },
{275933656,281749657,290840984,112008932,155104108,0,221112650,244402981,167445385,181493903 },
{649338919,663725974,669588840,251458041,351717589,221112650,0,567307893,388687596,426116153 },
{721879559,716196247,746099371,272867587,381517306,244402981,567307893,0,413807418,464617031 },
{474396872,491337804,506089766,189884101,268086784,167445385,388687596,413807418,0,318490706 },
{528175706,542081232,551969412,208537430,291942998,181493903,426116153,464617031,318490706,0 }
},
{{0,754867926,816832889,330946830,423509909,286283163,625803835,720408582,509786962,414201246 },
{754867926,0,815711452,361708147,445472179,296809006,671964633,768099470,525615012,425894332 },
{816832889,815711452,0,359910852,470101917,325789864,709979825,796471207,549308262,472592203 },
{330946830,361708147,359910852,0,183444085,127984848,291147343,317133818,220649091,184193898 },
{423509909,445472179,470101917,183444085,0,168811615,366876921,414584862,288046714,238585786 },
{286283163,296809006,325789864,127984848,168811615,0,252535139,284969184,195415021,164060602 },
{625803835,671964633,709979825,291147343,366876921,252535139,0,625423849,434553509,368124751 },
{720408582,768099470,796471207,317133818,414584862,284969184,625423849,0,487568774,401011567 },
{509786962,525615012,549308262,220649091,288046714,195415021,434553509,487568774,0,285175793 },
{414201246,425894332,472592203,184193898,238585786,164060602,368124751,401011567,285175793,0 }
},
{{0,904301171,799641028,318980987,404168973,376023457,653032197,688978064,508912168,483722272 },
{904301171,0,938610970,363840085,489135994,463194028,781907280,835975523,597382832,575226195 },
{799641028,938610970,0,319236566,435489681,396281180,682576130,701162140,517067846,483180744 },
{318980987,363840085,319236566,0,167162169,158481611,262576698,281183267,201947413,197785292 },
{404168973,489135994,435489681,167162169,0,202641125,340387224,364664155,262061367,251847968 },
{376023457,463194028,396281180,158481611,202641125,0,322537886,348438450,248257908,243332981 },
{653032197,781907280,682576130,262576698,340387224,322537886,0,593520298,421647570,410261728 },
{688978064,835975523,701162140,281183267,364664155,348438450,593520298,0,451517758,425138174 },
{508912168,597382832,517067846,201947413,262061367,248257908,421647570,451517758,0,305710943 },
{483722272,575226195,483180744,197785292,251847968,243332981,410261728,425138174,305710943,0 }
},
{{0,730121425,788467037,368964103,443196249,407733056,603915357,709803038,526892033,512568849 },
{730121425,0,722093457,337444824,398603677,373337960,578905487,641346262,501397873,471781936 },
{788467037,722093457,0,371402507,433130678,401594033,583204532,689429805,507206639,502021949 },
{368964103,337444824,371402507,0,205092379,208658017,280627264,319140278,245742283,241486786 },
{443196249,398603677,433130678,205092379,0,230334285,334964201,384900867,290616978,290945952 },
{407733056,373337960,401594033,208658017,230334285,0,311691836,362233798,272712397,271385599 },
{603915357,578905487,583204532,280627264,334964201,311691836,0,551599852,397685709,393094662 },
{709803038,641346262,689429805,319140278,384900867,362233798,551599852,0,487779110,449398180 },
{526892033,501397873,507206639,245742283,290616978,272712397,397685709,487779110,0,345712897 },
{512568849,471781936,502021949,241486786,290945952,271385599,393094662,449398180,345712897,0 }
}
} ;
long long imgPre_rpi0[IMG_NUM_MAX][CLI_NUM_MAX] = { 
{651533113,1005960751,1066625219,1090333198,416924437,618423699,409417692,878030281,977617539,690998427 },
{646418264,1039806244,1021375953,1069040483,457212294,631204564,425471870,915592290,1018575567,747984867 },
{634050730,1044928541,1190636767,1083205030,430266909,566478174,539878354,907490585,1011188068,712896691 },
{709422089,1087473794,970333527,1011350094,483112483,590806737,532812851,840569692,994948757,729627771 }
} ;



long long imgPre_cli[IMG_NUM_MAX][CLI_NUM_MAX];
long long imgFeature_cli[IMG_NUM_MAX][CLI_NUM_MAX][CLI_NUM_MAX];


long long imgPre_srv[IMG_NUM_MAX][CLI_NUM_MAX];
long long imgFeature_srv[IMG_NUM_MAX][CLI_NUM_MAX][CLI_NUM_MAX];




struct timespec now, tmstart;
int schd[CLI_NUM_MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int recv_round = 0;
unsigned char debug_flags=0;
int CLI_NUM=6;
int SRV_CORE_NUM=1;
int CLI_OFFLOAD_LEVEL[CLI_NUM_MAX+1];  //Accessed by the server device, indexed by client ID, starting from 1;
//int OFFLOAD_LEVEL=0;
//int CLI_TYPE=0;
//int SRV_TYPE=0;
//int CLI_CORE_NUM=0;
//int SRV_CORE_NUM=0;
//int Blocking_taskID;
//int flag_compute=0;
//sc_core::sc_event comp_sig; // systemc channel


//int offload1_phase[CLI_NUM_MAX+1] = {0,0,0,0,0,0,0,0,0,0,0};//execution phase for offloading level 1
//int offload1_phase_comp[CLI_NUM_MAX+1] = {0,0,0,0,0,0,0,0,0,0,0};
int recv_round_comp = 0;




void read_config_json();
void config_init(){
   OSModelCtxt* OSmodel = taskManager.getTaskCtxt( sc_core::sc_get_current_process_handle() );
   std::cout<<"....................config_init.................."<< OSmodel->NodeID<<std::endl;
   read_config_json();
//Simulation setup
   int i,j,k;
   if(OSmodel->NodeID>0){
	   if((OSmodel->CLI_TYPE) == 0){// RPi0
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_cli[i][j] = 1000000000000 * (   ((double)(imgPre_rpi0[i][j])) /(1000000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_cli[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi0[i][j][k])) /(1000000000) );
		  } 
		}
	      }

	   }else if((OSmodel->CLI_TYPE) == 1){// RPi3
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_cli[i][j] = 1000000000000 * (   ((double)(imgPre_rpi3[i][j])) /(1200000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_cli[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi3[i][j][k])) /(1200000000) );
		  } 
		}
	      }
	   }else if((OSmodel->CLI_TYPE) == 2){// RPi4
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_cli[i][j] = 1000000000000 * (   ((double)(imgPre_rpi3[i][j])) /(2400000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_cli[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi3[i][j][k])) /(2400000000) );
		  } 
		}
	      }
	   }else{
	       std::cout << "CLI_TYPE: "<< (OSmodel->CLI_TYPE)<<" is invalid." << std::endl;
	   }
   }else{
	   if((OSmodel->SRV_TYPE) == 0){// RPi0
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_srv[i][j] = 1000000000000 * (   ((double)(imgPre_rpi0[i][j])) /(1000000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_srv[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi0[i][j][k])) /(1000000000) );
		  } 
		}
	      }
	   }else if((OSmodel->SRV_TYPE) == 1){// RPi3
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_srv[i][j] = 1000000000000 * (   ((double)(imgPre_rpi3[i][j])) /(1200000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_srv[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi3[i][j][k])) /(1200000000) );
		  } 
		}
	      }
	   }else if((OSmodel->SRV_TYPE) == 2){// RPi4
	      for(i=0;i<IMG_NUM_MAX;i++){
		for(j=0;j<CLI_NUM_MAX;j++){
		  imgPre_srv[i][j] = 1000000000000 * (   ((double)(imgPre_rpi3[i][j])) /(2400000000) );
		  for(k=0;k<CLI_NUM_MAX;k++){
			imgFeature_srv[i][j][k] = 1000000000000 * (   ((double)(imgFeature_rpi3[i][j][k])) /(2400000000) );
		  } 
		}
	      }
	   }else{
	       std::cout << "SRV_TYPE: "<< (OSmodel->SRV_TYPE)<<" is invalid." << std::endl;
	   }
   }
   std::cout<<"....................config_init done.................."<<std::endl;
}
using namespace rapidjson;

void  g_config_init(){
   std::cout<<"....................g_config_init.................."<<std::endl;
   std::ifstream ifs("./conf.json");
   std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
   ifs.close();
   Document d;
   d.Parse(content.c_str());

   Value& item = d["cli_num"];
   CLI_NUM = item.GetInt();
   item = d["srv_core_num"];
   SRV_CORE_NUM = item.GetInt();
   total_input_sets = IMG_NUM;//Stat value defined in OS model
   total_cli_num = CLI_NUM;//Stat value defined in OS model
   std::cout<<"....................g_config_init done.................."<<std::endl;
}



void read_config_json(){



   //{
   //    "cli_core_num": 1,
   //    "protocol": 0,
   //    "offloading": 1,
   //    "srv_core_num": 1,
   //    "srv_type": 1,
   //    "cli_type": 0
   //}
   OSModelCtxt* OSmodel = taskManager.getTaskCtxt( sc_core::sc_get_current_process_handle() );
   std::ifstream ifs("./conf.json");
   std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
   ifs.close();
   Document d;
   d.Parse(content.c_str());



   Value& item = d["cli_num"];
   OSmodel->CLI_NUM = item.GetInt();
   item = d["srv_type"];
   OSmodel->SRV_TYPE = item.GetInt();
   item = d["srv_core_num"];
   OSmodel->SRV_CORE_NUM = item.GetInt();
/*
   item = d["cli_core_num"];
   OSmodel->CLI_CORE_NUM = item.GetInt();
   item = d["cli_type"];
   OSmodel->CLI_TYPE = item.GetInt();
   item = d["offloading"];
   OSmodel->OFFLOAD_LEVEL = item.GetInt();
*/

   if((OSmodel->NodeID)>0){
	   item = d["cli_core_num"];
	   OSmodel->CLI_CORE_NUM = (item.GetArray())[(OSmodel->NodeID)-1].GetInt();
	   item = d["cli_type"];
	   OSmodel->CLI_TYPE = (item.GetArray())[(OSmodel->NodeID)-1].GetInt();
	   item = d["offloading"];
	   //OSmodel->OFFLOAD_LEVEL = item.GetInt();
	   OSmodel->OFFLOAD_LEVEL = (item.GetArray())[(OSmodel->NodeID)-1].GetInt();
	   CLI_OFFLOAD_LEVEL[OSmodel->NodeID] = OSmodel->OFFLOAD_LEVEL;
           std::cout << "OSmodel->CLI_CORE_NUM" << OSmodel->CLI_CORE_NUM << std::endl;
           std::cout << "OSmodel->CLI_TYPE" << OSmodel->CLI_TYPE << std::endl;
           std::cout << "OSmodel->OFFLOAD_LEVEL" << OSmodel->OFFLOAD_LEVEL << std::endl;
   }



  
}


//
//  Localization.h
//  Clutch
//

#import <Foundation/Foundation.h>

typedef enum {
    
    
    CLUTCH_DEV_CHECK_UPDATE,
    CLUTCH_DEV_UP_TO_DATE,
    
    CRACKING_APPNAME,
    CRACKING_CREATE_WORKING_DIR,
    CRACKING_PERFORMING_ANALYSIS,
    CRACKING_PERFORMING_PREFLIGHT,
    DUMPING_ANALYZE_LOAD_COMMAND,
    DUMPING_OBTAIN_PTRACE,
    DUMPING_FORKING,
    DUMPING_FORK_SUCCESS,
    DUMPING_OBTAIN_MACH_PORT,
    DUMPING_CODE_RESIGN,
    DUMPING_PREPARE_DUMP,
    DUMPING_ASLR_ENABLED,
    DUMPING_PERFORM_DUMP,
    DUMPING_PATCH_CRYPTID,
    DUMPING_NEW_CHECKSUM,
    
    DUMPING_OVERDRIVE_PATCH_HEADER,
    DUMPING_OVERDRIVE_PATCH_MAXPROT,
    DUMPING_OVERDRIVE_PATCH_CRYPTID,
    DUMPING_OVERDRIVE_ATTACH_DYLIB,
    
    SWAP_CRACKING_PORTION,
    
    PACKAGING_WAITING_ZIP,
    PACKAGING_FAILED_KILL_ZIP,
    PACKAGING_ITUNESMETADATA,
    PACKAGING_IPA,
    PACKAGING_COMPRESSION_LEVEL,
    
    COMPLETE_ELAPSED_TIME,
    COMPLETE_APPS_CRACKED,
    COMPLETE_APPS_FAILED,
    COMPLETE_TOTAL,
    
} Message;

typedef enum {
    en,
    zh, //chinese
    de, //german
    fr, //french
    rs, //serbian
} Lang;


static NSString * const en_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"You're using a Clutch development build, checking for updates..",
    [CLUTCH_DEV_UP_TO_DATE] = @"Your version of Clutch is up to date!",
    
    [CRACKING_APPNAME] = @"Cracking %@...",
    [CRACKING_CREATE_WORKING_DIR] = @"Creating working directory...",
    [CRACKING_PERFORMING_ANALYSIS] = @"Performing initial analysis...",
    [CRACKING_PERFORMING_PREFLIGHT] = @"Performing cracking preflight...",
    
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"dumping binary: analyzing load commands",
    [DUMPING_OBTAIN_PTRACE] = @"dumping binary: obtaining ptrace handle",
    [DUMPING_FORKING] = @" umping binary: forking to begin tracing",
    [DUMPING_FORK_SUCCESS] = @"dumping binary: successfully forked",
    [DUMPING_OBTAIN_MACH_PORT] = @"dumping binary: obtaining mach port",
    [DUMPING_CODE_RESIGN] = @"dumping binary: preparing code resign",
    [DUMPING_PREPARE_DUMP] = @"dumping binary: preparing to dump",
    [DUMPING_ASLR_ENABLED] = @"dumping binary: ASLR enabled, identifying dump location dynamically",
    [DUMPING_PERFORM_DUMP] = @"dumping binary: performing dump",
    [DUMPING_PATCH_CRYPTID] = @"dumping binary: patched cryptid",
    [DUMPING_NEW_CHECKSUM] = @" dumping binary: writing new checksum",
    
    [SWAP_CRACKING_PORTION] = @"swap: currently cracking armv%u portion",
    
    [DUMPING_OVERDRIVE_PATCH_HEADER] = @"dumping binary: patched mach header (overdrive)",
    [DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"dumping binary: patched maxprot (overdrive)",
    [DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"dumping binary: patched cryptid (overdrive)",
    [DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"dumping binary: attaching overdrive DYLIB (overdrive)",
    
    [PACKAGING_WAITING_ZIP] = @"packaging: waiting for zip thread",
    [PACKAGING_FAILED_KILL_ZIP] = @"packaging: crack failed, killing zip thread",
    [PACKAGING_ITUNESMETADATA] = @"packaging: censoring iTunesMetadata",
    [PACKAGING_IPA] = @"packaging: compressing IPA",
    [PACKAGING_COMPRESSION_LEVEL] = @"packaging: compression level %u",
    
    [COMPLETE_ELAPSED_TIME] = @"elapsed time: %ums",
    [COMPLETE_APPS_CRACKED] = @"\nApplications cracked:\n",
    [COMPLETE_APPS_FAILED] = @"\nApplications that failed:\n",
    [COMPLETE_TOTAL] = @"\nTotal success: \033[0;32m%u\033[0m   Total failed: \033[0;32m%u\033[0m ",
    
};

static NSString * const zh_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"您正使用Clutch 的开发版本，正在检查更新...",
    [CLUTCH_DEV_UP_TO_DATE] = @"您的Clutch 是最新版!",
    
    [CRACKING_APPNAME] = @"正在破解 %@",
    [CRACKING_CREATE_WORKING_DIR] = @"正在创建工作目录...",
    [CRACKING_PERFORMING_ANALYSIS] = @"正在进行初始化解析...",
    [CRACKING_PERFORMING_PREFLIGHT] = @"进行破解前准备...",
    
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"破解：分析 load 命令",
    [DUMPING_OBTAIN_PTRACE] = @"破解：正取得 ptrace 句柄",
    [DUMPING_FORKING] = @"破解： 正在分支",
    [DUMPING_FORK_SUCCESS] = @"破解：分支成功！",
    [DUMPING_OBTAIN_MACH_PORT] = @"破解：正在获取 mach 端口",
    [DUMPING_CODE_RESIGN] = @"破解：正在重新签名",
    [DUMPING_PREPARE_DUMP] = @"破解：开始转储",
    [DUMPING_ASLR_ENABLED] = @"破解：软件有 ASLR，正寻找动态转储点",
    [DUMPING_PERFORM_DUMP] = @"破解：进行转储",
    [DUMPING_PATCH_CRYPTID] = @"破解：破解 crytid",
    [DUMPING_NEW_CHECKSUM] = @"破解：写入新的校验",
    
    [SWAP_CRACKING_PORTION] = @"转换: 开始破解 armv%u 部分",
    
    [DUMPING_OVERDRIVE_PATCH_HEADER] = @"转储中: 破解mach头... （屏蔽反破解）",
    [DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"转储中: 破解maxprot…  （屏蔽反破解）",
    [DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"转储中: 破解加密位",
    [DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"转储中: 挂载屏蔽反破解动态库",
    
    [PACKAGING_WAITING_ZIP] = @"包装：等待压缩线程",
    [PACKAGING_FAILED_KILL_ZIP] = @"包装：破解失败, 停止压缩线程",
    [PACKAGING_ITUNESMETADATA] = @"包装：过滤 iTunesMetadata 文件",
    [PACKAGING_IPA] = @"包装：正在打包文件",
    [PACKAGING_COMPRESSION_LEVEL] = @"包装：压缩级别 - 0",
    
    [COMPLETE_ELAPSED_TIME] = @"执行时间: %u 毫秒",
    [COMPLETE_APPS_CRACKED] = @"\n完成破解的应用:\n",
    [COMPLETE_APPS_FAILED] = @"\n破解失败的应用:\n",
    [COMPLETE_TOTAL] = @"\n成功总计: \033[0;32m%u\033[0m   失败总计: \033[0;32m%u\033[0m ",
};


static NSString * const de_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"Du benutzt eine Clutch-Entwicklungsversion, überprüfe auf Updates...",
    [CLUTCH_DEV_UP_TO_DATE] = @"Die Version von Clutch ist aktuell!",
    
    [CRACKING_APPNAME] = @"Cracke %@...",
    [CRACKING_CREATE_WORKING_DIR] = @"Erstelle Arbeitsverzeichnis...",
    [CRACKING_PERFORMING_ANALYSIS] = @"Führe erste Analyse durch...",
    [CRACKING_PERFORMING_PREFLIGHT] = @"Führe das Cracken des preflights durch...",
    
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"Binary erhalten: Analysiere Ladebefehle",
    [DUMPING_OBTAIN_PTRACE] = @"Binary erhalten: Erhalte ptrace handle",
    [DUMPING_FORKING] = @"Binary erhalten: Pieksen um zu starten",
    [DUMPING_FORK_SUCCESS] = @"Binary erhalten: Erfolgreich gepiekst",
    [DUMPING_OBTAIN_MACH_PORT] = @"Binary erhalten: Erhalte den mach port",
    [DUMPING_CODE_RESIGN] = @"Binary erhalten: Bereite den Code-Resign vor",
    [DUMPING_PREPARE_DUMP] = @"Binary erhalten: Bereite das eigentliche Erhalten vor",
    [DUMPING_ASLR_ENABLED] = @"Binary erhalten: ASLR aktiviert, identifiziere dumping-Verzeichnis manuell",
    [DUMPING_PERFORM_DUMP] = @"Binary erhalten: Führe den Dump durch",
    [DUMPING_PATCH_CRYPTID] = @"Binary erhalten: Cryptid gepatched",
    [DUMPING_NEW_CHECKSUM] = @"Binary erhalten: Schreibe neue checksum-Daten",
    
    [SWAP_CRACKING_PORTION] = @"Tauschen: Cracke momentan armv%u portion",
    
    [DUMPING_OVERDRIVE_PATCH_HEADER] = @"Binary erhalten: Mach header gepatched (Overdrive)",
    [DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"Binary erhalten: Maxprot gepatched (Overdrive)",
    [DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"Binary erhalten: Cryptid gepatched (Overdrive)",
    [DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"Binary erhalten: Hänge Overdrive-DYLIB an (Overdrive)",
    
    [PACKAGING_WAITING_ZIP] = @"Zusammenpacken: Warte auf den zip-thread",
    [PACKAGING_FAILED_KILL_ZIP] = @"Zusammenpacken: Crack fehlgeschlagen, eliminiere zip-thread",
    [PACKAGING_ITUNESMETADATA] = @"Zusammenpacken: Zensiere die iTunesMetadata-Datei",
    [PACKAGING_IPA] = @"Zusammenpacken: Komprimiere die IPA",
    [PACKAGING_COMPRESSION_LEVEL] = @"Zusammenpacken: Kompressionslevel ist %u",
    
    [COMPLETE_ELAPSED_TIME] = @"Vergangene Zeit: %ums",
    [COMPLETE_APPS_CRACKED] = @"\nApplikationen gecracked:\n",
    [COMPLETE_APPS_FAILED] = @"\nApplikationen, die fehlgeschlagen sind:\n",
    [COMPLETE_TOTAL] = @"\nInsgesamt erfolgreich: \033[0;32m%u\033[0m Insgesamt fehlgeschlagen: \033[0;32m%u\033[0m ",
    
};


static NSString * const fr_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"Vous utilisez une version de développement de Clutch, vérification des mises à jour...",
    [CLUTCH_DEV_UP_TO_DATE] = @"Votre version de Clutch est à jour !",
    
    [CRACKING_APPNAME] = @"Craquage %@...",
    [CRACKING_CREATE_WORKING_DIR] = @"Création du répertoire de travail...",
    [CRACKING_PERFORMING_ANALYSIS] = @"Exécute une première analyse...",
    [CRACKING_PERFORMING_PREFLIGHT] = @"Exécution du craquage de pré-installation...",
    
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"Dumping du binaire: analyse du chargement des commandes",
    [DUMPING_OBTAIN_PTRACE] = @"Dumping du binaire: Récupération du traitement de ptrace",
    [DUMPING_FORKING] = @"Dumping du binaire: bifurcation pour commencer à tracer",
    [DUMPING_FORK_SUCCESS] = @"Dumping du binaire: bifurcation réussie",
    [DUMPING_OBTAIN_MACH_PORT] = @"Dumping du binaire: Obtention du port correspondant",
    [DUMPING_CODE_RESIGN] = @"Dumping du binaire: préparation du code",
    [DUMPING_PREPARE_DUMP] = @"Dumping du binaire: préparation du vidage",
    [DUMPING_ASLR_ENABLED] = @"Dumping du binaire: ASLR activé, identification de l'emplacement de vidage dynamique",
    [DUMPING_PERFORM_DUMP] = @"Dumping du binaire: exécution du vidage",
    [DUMPING_PATCH_CRYPTID] = @"Dumping du binaire: cryptid patché",
    [DUMPING_NEW_CHECKSUM] = @" Dumping du binaire: écriture de la nouvelle somme de contrôle",
    
    [SWAP_CRACKING_PORTION] = @"swap: craquage de la partie armv%u",
    
    [DUMPING_OVERDRIVE_PATCH_HEADER] = @"Dumping du binaire: patchage de l'en-tête correspondante (overdrive)",
    [DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"Dumping du binaire: patch maxprot (overdrive)",
    [DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"Dumping du binaire: patch cryptid (overdrive)",
    [DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"Dumping du binaire: attache overdrive DYLIB (overdrive)",
    
    [PACKAGING_WAITING_ZIP] = @"Package: patienter pendant la création du zip",
    [PACKAGING_FAILED_KILL_ZIP] = @"Package: le crack a échoué, suppression de la création du zip",
    [PACKAGING_ITUNESMETADATA] = @"Package: censure d'iTunesMetadata",
    [PACKAGING_IPA] = @"Package: Compression de l'IPA",
    [PACKAGING_COMPRESSION_LEVEL] = @"Package: Compression de niveau %u",
    
    [COMPLETE_ELAPSED_TIME] = @"Temps écoulé: %ums",
    [COMPLETE_APPS_CRACKED] = @"\nApplications crackées:\n",
    [COMPLETE_APPS_FAILED] = @"\nApplications ratées:\n",
    [COMPLETE_TOTAL] = @"\nNombre de succès: \033[0;32m%u\033[0m   Nombre d'échoués: \033[0;32m%u\033[0m ",
    
};

static NSString * const rs_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"Koristite beta verziju Clutch, proveravam aûuriranja",
    [CLUTCH_DEV_UP_TO_DATE] = @"Vaöa verzija Clutch je najnovija!",
	
    [CRACKING_APPNAME] = @"Crackujem %@...",
    [CRACKING_CREATE_WORKING_DIR] = @"Pravim direktorijum za rad...",
    [CRACKING_PERFORMING_ANALYSIS] = @"Izvröavam poËetne analize...",
    [CRACKING_PERFORMING_PREFLIGHT] = @"Izvröavam provere pred poËetak crackovanja...",
	
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"izbacujem binary: Analiziram komande pri uËitavanju",
    [DUMPING_OBTAIN_PTRACE] = @"izbacujem binary: uzimam ptrace handle",
    [DUMPING_FORKING] = @"izbacujem binary: forkujem da zapoËnem traûenje",
    [DUMPING_FORK_SUCCESS] = @"izbacujem binary: forkovanje uspeöno",
    [DUMPING_OBTAIN_MACH_PORT] = @"izbacujem binary: uzimam mach port",
    [DUMPING_CODE_RESIGN] = @"izbacujem binary: spremam potpisivanje koda",
    [DUMPING_PREPARE_DUMP] = @"izbacujem binary: spremam se za izbacivanje",
    [DUMPING_ASLR_ENABLED] = @"izbacujem binary: ASLR omoguÊen, dinamiËki identifikujem lokaciju izbacivanja",
    [DUMPING_PERFORM_DUMP] = @"izbacujem binary: izvröavam izbacivanje",
    [DUMPING_PATCH_CRYPTID] = @"izbacujem binary: cryptid je zakrpljen",
    [DUMPING_NEW_CHECKSUM] = @"izbacujem binary: piöem novi checksum",
	
    [SWAP_CRACKING_PORTION] = @"izmenjujem: trenutno crackujem armv%u deo",
    
	[DUMPING_OVERDRIVE_PATCH_HEADER] = @"izbacujem binary: mach header zakrpljen (overdrive)",
	[DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"izbacujem binary: maxprot zakrpljen (overdrive)",
	[DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"izbacujem binary: cryptid zakrpljen (overdrive)",
	[DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"izbacujem binary: vezujem overdrive DYLIB (overdrive)",
    
	[PACKAGING_WAITING_ZIP] = @"pakujem: Ëekam zip thread",
	[PACKAGING_FAILED_KILL_ZIP] = @"pakujem: crackovanje neuspeöno, ubijam zip thread",
	[PACKAGING_ITUNESMETADATA] = @"pakujem: cenzuriöem iTunesMetadata",
	[PACKAGING_IPA] = @"pakujem: kompresujem IPA",
	[PACKAGING_COMPRESSION_LEVEL] = @"pakujem: nivo kompresije %u",
    
	[COMPLETE_ELAPSED_TIME] = @"utroöeno vreme» %ums",
	[COMPLETE_APPS_CRACKED] = @"\nUspeöno:\n",
	[COMPLETE_APPS_FAILED] = @"\nBezuspeöno:\n",
	[COMPLETE_TOTAL] = @"\nUkupno uspeöno: \033[0;32m%u\033[0m   Ukupno bezuspeöno: \033[0;32m%u\033[0m ",
};

/*
 
 locale template
 
 static NSString * const template_locale[] = {
    [CLUTCH_DEV_CHECK_UPDATE] = @"",
    [CLUTCH_DEV_UP_TO_DATE] = @"",
    [CRACKING_APPNAME] = @"",
    [CRACKING_CREATE_WORKING_DIR] = @"",
    [CRACKING_PERFORMING_ANALYSIS] = @"",
    [CRACKING_PERFORMING_PREFLIGHT] = @"",
    [DUMPING_ANALYZE_LOAD_COMMAND] = @"",
    [DUMPING_OBTAIN_PTRACE] = @"",
    [DUMPING_FORKING] = @"",
    [DUMPING_FORK_SUCCESS] = @"",
    [DUMPING_OBTAIN_MACH_PORT] = @"",
    [DUMPING_CODE_RESIGN] = @"",
    [DUMPING_PREPARE_DUMP] = @"",
    [DUMPING_ASLR_ENABLED] = @"",
    [DUMPING_PERFORM_DUMP] = @"",
    [DUMPING_PATCH_CRYPTID] = @"",
    [DUMPING_NEW_CHECKSUM] = @"",
    [SWAP_CRACKING_PORTION] = @"",
 
 [DUMPING_OVERDRIVE_PATCH_HEADER] = @"",
 [DUMPING_OVERDRIVE_PATCH_MAXPROT] = @"",
 [DUMPING_OVERDRIVE_PATCH_CRYPTID] = @"",
 [DUMPING_OVERDRIVE_ATTACH_DYLIB] = @"",
 
 [PACKAGING_WAITING_ZIP] = @"",
 [PACKAGING_FAILED_KILL_ZIP] = @"",
 [PACKAGING_ITUNESMETADATA] = @"",
 [PACKAGING_IPA] = @"",
 [PACKAGING_COMPRESSION_LEVEL] = @"",
 
 [COMPLETE_ELAPSED_TIME] = @"",
 [COMPLETE_APPS_CRACKED] = @"",
 [COMPLETE_APPS_FAILED] = @"",
 [COMPLETE_TOTAL] = @"",
};*/


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wformat-nonliteral"

NSString* msg(Message message);

#define MSG(M, ...) fprintf(stderr, "%s \n", [[NSString stringWithFormat:msg(M), ##__VA_ARGS__] UTF8String]);

@interface Localization : NSObject {
    @public
    BOOL* setuidPerformed;
}
+ (Localization*) sharedInstance;
-(NSString*) valueWithMessage:(Message)message;
-(void)checkCache;



@end


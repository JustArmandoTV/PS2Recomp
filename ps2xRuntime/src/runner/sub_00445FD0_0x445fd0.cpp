#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00445FD0
// Address: 0x445fd0 - 0x4466c0
void sub_00445FD0_0x445fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445FD0_0x445fd0");
#endif

    switch (ctx->pc) {
        case 0x445fd0u: goto label_445fd0;
        case 0x445fd4u: goto label_445fd4;
        case 0x445fd8u: goto label_445fd8;
        case 0x445fdcu: goto label_445fdc;
        case 0x445fe0u: goto label_445fe0;
        case 0x445fe4u: goto label_445fe4;
        case 0x445fe8u: goto label_445fe8;
        case 0x445fecu: goto label_445fec;
        case 0x445ff0u: goto label_445ff0;
        case 0x445ff4u: goto label_445ff4;
        case 0x445ff8u: goto label_445ff8;
        case 0x445ffcu: goto label_445ffc;
        case 0x446000u: goto label_446000;
        case 0x446004u: goto label_446004;
        case 0x446008u: goto label_446008;
        case 0x44600cu: goto label_44600c;
        case 0x446010u: goto label_446010;
        case 0x446014u: goto label_446014;
        case 0x446018u: goto label_446018;
        case 0x44601cu: goto label_44601c;
        case 0x446020u: goto label_446020;
        case 0x446024u: goto label_446024;
        case 0x446028u: goto label_446028;
        case 0x44602cu: goto label_44602c;
        case 0x446030u: goto label_446030;
        case 0x446034u: goto label_446034;
        case 0x446038u: goto label_446038;
        case 0x44603cu: goto label_44603c;
        case 0x446040u: goto label_446040;
        case 0x446044u: goto label_446044;
        case 0x446048u: goto label_446048;
        case 0x44604cu: goto label_44604c;
        case 0x446050u: goto label_446050;
        case 0x446054u: goto label_446054;
        case 0x446058u: goto label_446058;
        case 0x44605cu: goto label_44605c;
        case 0x446060u: goto label_446060;
        case 0x446064u: goto label_446064;
        case 0x446068u: goto label_446068;
        case 0x44606cu: goto label_44606c;
        case 0x446070u: goto label_446070;
        case 0x446074u: goto label_446074;
        case 0x446078u: goto label_446078;
        case 0x44607cu: goto label_44607c;
        case 0x446080u: goto label_446080;
        case 0x446084u: goto label_446084;
        case 0x446088u: goto label_446088;
        case 0x44608cu: goto label_44608c;
        case 0x446090u: goto label_446090;
        case 0x446094u: goto label_446094;
        case 0x446098u: goto label_446098;
        case 0x44609cu: goto label_44609c;
        case 0x4460a0u: goto label_4460a0;
        case 0x4460a4u: goto label_4460a4;
        case 0x4460a8u: goto label_4460a8;
        case 0x4460acu: goto label_4460ac;
        case 0x4460b0u: goto label_4460b0;
        case 0x4460b4u: goto label_4460b4;
        case 0x4460b8u: goto label_4460b8;
        case 0x4460bcu: goto label_4460bc;
        case 0x4460c0u: goto label_4460c0;
        case 0x4460c4u: goto label_4460c4;
        case 0x4460c8u: goto label_4460c8;
        case 0x4460ccu: goto label_4460cc;
        case 0x4460d0u: goto label_4460d0;
        case 0x4460d4u: goto label_4460d4;
        case 0x4460d8u: goto label_4460d8;
        case 0x4460dcu: goto label_4460dc;
        case 0x4460e0u: goto label_4460e0;
        case 0x4460e4u: goto label_4460e4;
        case 0x4460e8u: goto label_4460e8;
        case 0x4460ecu: goto label_4460ec;
        case 0x4460f0u: goto label_4460f0;
        case 0x4460f4u: goto label_4460f4;
        case 0x4460f8u: goto label_4460f8;
        case 0x4460fcu: goto label_4460fc;
        case 0x446100u: goto label_446100;
        case 0x446104u: goto label_446104;
        case 0x446108u: goto label_446108;
        case 0x44610cu: goto label_44610c;
        case 0x446110u: goto label_446110;
        case 0x446114u: goto label_446114;
        case 0x446118u: goto label_446118;
        case 0x44611cu: goto label_44611c;
        case 0x446120u: goto label_446120;
        case 0x446124u: goto label_446124;
        case 0x446128u: goto label_446128;
        case 0x44612cu: goto label_44612c;
        case 0x446130u: goto label_446130;
        case 0x446134u: goto label_446134;
        case 0x446138u: goto label_446138;
        case 0x44613cu: goto label_44613c;
        case 0x446140u: goto label_446140;
        case 0x446144u: goto label_446144;
        case 0x446148u: goto label_446148;
        case 0x44614cu: goto label_44614c;
        case 0x446150u: goto label_446150;
        case 0x446154u: goto label_446154;
        case 0x446158u: goto label_446158;
        case 0x44615cu: goto label_44615c;
        case 0x446160u: goto label_446160;
        case 0x446164u: goto label_446164;
        case 0x446168u: goto label_446168;
        case 0x44616cu: goto label_44616c;
        case 0x446170u: goto label_446170;
        case 0x446174u: goto label_446174;
        case 0x446178u: goto label_446178;
        case 0x44617cu: goto label_44617c;
        case 0x446180u: goto label_446180;
        case 0x446184u: goto label_446184;
        case 0x446188u: goto label_446188;
        case 0x44618cu: goto label_44618c;
        case 0x446190u: goto label_446190;
        case 0x446194u: goto label_446194;
        case 0x446198u: goto label_446198;
        case 0x44619cu: goto label_44619c;
        case 0x4461a0u: goto label_4461a0;
        case 0x4461a4u: goto label_4461a4;
        case 0x4461a8u: goto label_4461a8;
        case 0x4461acu: goto label_4461ac;
        case 0x4461b0u: goto label_4461b0;
        case 0x4461b4u: goto label_4461b4;
        case 0x4461b8u: goto label_4461b8;
        case 0x4461bcu: goto label_4461bc;
        case 0x4461c0u: goto label_4461c0;
        case 0x4461c4u: goto label_4461c4;
        case 0x4461c8u: goto label_4461c8;
        case 0x4461ccu: goto label_4461cc;
        case 0x4461d0u: goto label_4461d0;
        case 0x4461d4u: goto label_4461d4;
        case 0x4461d8u: goto label_4461d8;
        case 0x4461dcu: goto label_4461dc;
        case 0x4461e0u: goto label_4461e0;
        case 0x4461e4u: goto label_4461e4;
        case 0x4461e8u: goto label_4461e8;
        case 0x4461ecu: goto label_4461ec;
        case 0x4461f0u: goto label_4461f0;
        case 0x4461f4u: goto label_4461f4;
        case 0x4461f8u: goto label_4461f8;
        case 0x4461fcu: goto label_4461fc;
        case 0x446200u: goto label_446200;
        case 0x446204u: goto label_446204;
        case 0x446208u: goto label_446208;
        case 0x44620cu: goto label_44620c;
        case 0x446210u: goto label_446210;
        case 0x446214u: goto label_446214;
        case 0x446218u: goto label_446218;
        case 0x44621cu: goto label_44621c;
        case 0x446220u: goto label_446220;
        case 0x446224u: goto label_446224;
        case 0x446228u: goto label_446228;
        case 0x44622cu: goto label_44622c;
        case 0x446230u: goto label_446230;
        case 0x446234u: goto label_446234;
        case 0x446238u: goto label_446238;
        case 0x44623cu: goto label_44623c;
        case 0x446240u: goto label_446240;
        case 0x446244u: goto label_446244;
        case 0x446248u: goto label_446248;
        case 0x44624cu: goto label_44624c;
        case 0x446250u: goto label_446250;
        case 0x446254u: goto label_446254;
        case 0x446258u: goto label_446258;
        case 0x44625cu: goto label_44625c;
        case 0x446260u: goto label_446260;
        case 0x446264u: goto label_446264;
        case 0x446268u: goto label_446268;
        case 0x44626cu: goto label_44626c;
        case 0x446270u: goto label_446270;
        case 0x446274u: goto label_446274;
        case 0x446278u: goto label_446278;
        case 0x44627cu: goto label_44627c;
        case 0x446280u: goto label_446280;
        case 0x446284u: goto label_446284;
        case 0x446288u: goto label_446288;
        case 0x44628cu: goto label_44628c;
        case 0x446290u: goto label_446290;
        case 0x446294u: goto label_446294;
        case 0x446298u: goto label_446298;
        case 0x44629cu: goto label_44629c;
        case 0x4462a0u: goto label_4462a0;
        case 0x4462a4u: goto label_4462a4;
        case 0x4462a8u: goto label_4462a8;
        case 0x4462acu: goto label_4462ac;
        case 0x4462b0u: goto label_4462b0;
        case 0x4462b4u: goto label_4462b4;
        case 0x4462b8u: goto label_4462b8;
        case 0x4462bcu: goto label_4462bc;
        case 0x4462c0u: goto label_4462c0;
        case 0x4462c4u: goto label_4462c4;
        case 0x4462c8u: goto label_4462c8;
        case 0x4462ccu: goto label_4462cc;
        case 0x4462d0u: goto label_4462d0;
        case 0x4462d4u: goto label_4462d4;
        case 0x4462d8u: goto label_4462d8;
        case 0x4462dcu: goto label_4462dc;
        case 0x4462e0u: goto label_4462e0;
        case 0x4462e4u: goto label_4462e4;
        case 0x4462e8u: goto label_4462e8;
        case 0x4462ecu: goto label_4462ec;
        case 0x4462f0u: goto label_4462f0;
        case 0x4462f4u: goto label_4462f4;
        case 0x4462f8u: goto label_4462f8;
        case 0x4462fcu: goto label_4462fc;
        case 0x446300u: goto label_446300;
        case 0x446304u: goto label_446304;
        case 0x446308u: goto label_446308;
        case 0x44630cu: goto label_44630c;
        case 0x446310u: goto label_446310;
        case 0x446314u: goto label_446314;
        case 0x446318u: goto label_446318;
        case 0x44631cu: goto label_44631c;
        case 0x446320u: goto label_446320;
        case 0x446324u: goto label_446324;
        case 0x446328u: goto label_446328;
        case 0x44632cu: goto label_44632c;
        case 0x446330u: goto label_446330;
        case 0x446334u: goto label_446334;
        case 0x446338u: goto label_446338;
        case 0x44633cu: goto label_44633c;
        case 0x446340u: goto label_446340;
        case 0x446344u: goto label_446344;
        case 0x446348u: goto label_446348;
        case 0x44634cu: goto label_44634c;
        case 0x446350u: goto label_446350;
        case 0x446354u: goto label_446354;
        case 0x446358u: goto label_446358;
        case 0x44635cu: goto label_44635c;
        case 0x446360u: goto label_446360;
        case 0x446364u: goto label_446364;
        case 0x446368u: goto label_446368;
        case 0x44636cu: goto label_44636c;
        case 0x446370u: goto label_446370;
        case 0x446374u: goto label_446374;
        case 0x446378u: goto label_446378;
        case 0x44637cu: goto label_44637c;
        case 0x446380u: goto label_446380;
        case 0x446384u: goto label_446384;
        case 0x446388u: goto label_446388;
        case 0x44638cu: goto label_44638c;
        case 0x446390u: goto label_446390;
        case 0x446394u: goto label_446394;
        case 0x446398u: goto label_446398;
        case 0x44639cu: goto label_44639c;
        case 0x4463a0u: goto label_4463a0;
        case 0x4463a4u: goto label_4463a4;
        case 0x4463a8u: goto label_4463a8;
        case 0x4463acu: goto label_4463ac;
        case 0x4463b0u: goto label_4463b0;
        case 0x4463b4u: goto label_4463b4;
        case 0x4463b8u: goto label_4463b8;
        case 0x4463bcu: goto label_4463bc;
        case 0x4463c0u: goto label_4463c0;
        case 0x4463c4u: goto label_4463c4;
        case 0x4463c8u: goto label_4463c8;
        case 0x4463ccu: goto label_4463cc;
        case 0x4463d0u: goto label_4463d0;
        case 0x4463d4u: goto label_4463d4;
        case 0x4463d8u: goto label_4463d8;
        case 0x4463dcu: goto label_4463dc;
        case 0x4463e0u: goto label_4463e0;
        case 0x4463e4u: goto label_4463e4;
        case 0x4463e8u: goto label_4463e8;
        case 0x4463ecu: goto label_4463ec;
        case 0x4463f0u: goto label_4463f0;
        case 0x4463f4u: goto label_4463f4;
        case 0x4463f8u: goto label_4463f8;
        case 0x4463fcu: goto label_4463fc;
        case 0x446400u: goto label_446400;
        case 0x446404u: goto label_446404;
        case 0x446408u: goto label_446408;
        case 0x44640cu: goto label_44640c;
        case 0x446410u: goto label_446410;
        case 0x446414u: goto label_446414;
        case 0x446418u: goto label_446418;
        case 0x44641cu: goto label_44641c;
        case 0x446420u: goto label_446420;
        case 0x446424u: goto label_446424;
        case 0x446428u: goto label_446428;
        case 0x44642cu: goto label_44642c;
        case 0x446430u: goto label_446430;
        case 0x446434u: goto label_446434;
        case 0x446438u: goto label_446438;
        case 0x44643cu: goto label_44643c;
        case 0x446440u: goto label_446440;
        case 0x446444u: goto label_446444;
        case 0x446448u: goto label_446448;
        case 0x44644cu: goto label_44644c;
        case 0x446450u: goto label_446450;
        case 0x446454u: goto label_446454;
        case 0x446458u: goto label_446458;
        case 0x44645cu: goto label_44645c;
        case 0x446460u: goto label_446460;
        case 0x446464u: goto label_446464;
        case 0x446468u: goto label_446468;
        case 0x44646cu: goto label_44646c;
        case 0x446470u: goto label_446470;
        case 0x446474u: goto label_446474;
        case 0x446478u: goto label_446478;
        case 0x44647cu: goto label_44647c;
        case 0x446480u: goto label_446480;
        case 0x446484u: goto label_446484;
        case 0x446488u: goto label_446488;
        case 0x44648cu: goto label_44648c;
        case 0x446490u: goto label_446490;
        case 0x446494u: goto label_446494;
        case 0x446498u: goto label_446498;
        case 0x44649cu: goto label_44649c;
        case 0x4464a0u: goto label_4464a0;
        case 0x4464a4u: goto label_4464a4;
        case 0x4464a8u: goto label_4464a8;
        case 0x4464acu: goto label_4464ac;
        case 0x4464b0u: goto label_4464b0;
        case 0x4464b4u: goto label_4464b4;
        case 0x4464b8u: goto label_4464b8;
        case 0x4464bcu: goto label_4464bc;
        case 0x4464c0u: goto label_4464c0;
        case 0x4464c4u: goto label_4464c4;
        case 0x4464c8u: goto label_4464c8;
        case 0x4464ccu: goto label_4464cc;
        case 0x4464d0u: goto label_4464d0;
        case 0x4464d4u: goto label_4464d4;
        case 0x4464d8u: goto label_4464d8;
        case 0x4464dcu: goto label_4464dc;
        case 0x4464e0u: goto label_4464e0;
        case 0x4464e4u: goto label_4464e4;
        case 0x4464e8u: goto label_4464e8;
        case 0x4464ecu: goto label_4464ec;
        case 0x4464f0u: goto label_4464f0;
        case 0x4464f4u: goto label_4464f4;
        case 0x4464f8u: goto label_4464f8;
        case 0x4464fcu: goto label_4464fc;
        case 0x446500u: goto label_446500;
        case 0x446504u: goto label_446504;
        case 0x446508u: goto label_446508;
        case 0x44650cu: goto label_44650c;
        case 0x446510u: goto label_446510;
        case 0x446514u: goto label_446514;
        case 0x446518u: goto label_446518;
        case 0x44651cu: goto label_44651c;
        case 0x446520u: goto label_446520;
        case 0x446524u: goto label_446524;
        case 0x446528u: goto label_446528;
        case 0x44652cu: goto label_44652c;
        case 0x446530u: goto label_446530;
        case 0x446534u: goto label_446534;
        case 0x446538u: goto label_446538;
        case 0x44653cu: goto label_44653c;
        case 0x446540u: goto label_446540;
        case 0x446544u: goto label_446544;
        case 0x446548u: goto label_446548;
        case 0x44654cu: goto label_44654c;
        case 0x446550u: goto label_446550;
        case 0x446554u: goto label_446554;
        case 0x446558u: goto label_446558;
        case 0x44655cu: goto label_44655c;
        case 0x446560u: goto label_446560;
        case 0x446564u: goto label_446564;
        case 0x446568u: goto label_446568;
        case 0x44656cu: goto label_44656c;
        case 0x446570u: goto label_446570;
        case 0x446574u: goto label_446574;
        case 0x446578u: goto label_446578;
        case 0x44657cu: goto label_44657c;
        case 0x446580u: goto label_446580;
        case 0x446584u: goto label_446584;
        case 0x446588u: goto label_446588;
        case 0x44658cu: goto label_44658c;
        case 0x446590u: goto label_446590;
        case 0x446594u: goto label_446594;
        case 0x446598u: goto label_446598;
        case 0x44659cu: goto label_44659c;
        case 0x4465a0u: goto label_4465a0;
        case 0x4465a4u: goto label_4465a4;
        case 0x4465a8u: goto label_4465a8;
        case 0x4465acu: goto label_4465ac;
        case 0x4465b0u: goto label_4465b0;
        case 0x4465b4u: goto label_4465b4;
        case 0x4465b8u: goto label_4465b8;
        case 0x4465bcu: goto label_4465bc;
        case 0x4465c0u: goto label_4465c0;
        case 0x4465c4u: goto label_4465c4;
        case 0x4465c8u: goto label_4465c8;
        case 0x4465ccu: goto label_4465cc;
        case 0x4465d0u: goto label_4465d0;
        case 0x4465d4u: goto label_4465d4;
        case 0x4465d8u: goto label_4465d8;
        case 0x4465dcu: goto label_4465dc;
        case 0x4465e0u: goto label_4465e0;
        case 0x4465e4u: goto label_4465e4;
        case 0x4465e8u: goto label_4465e8;
        case 0x4465ecu: goto label_4465ec;
        case 0x4465f0u: goto label_4465f0;
        case 0x4465f4u: goto label_4465f4;
        case 0x4465f8u: goto label_4465f8;
        case 0x4465fcu: goto label_4465fc;
        case 0x446600u: goto label_446600;
        case 0x446604u: goto label_446604;
        case 0x446608u: goto label_446608;
        case 0x44660cu: goto label_44660c;
        case 0x446610u: goto label_446610;
        case 0x446614u: goto label_446614;
        case 0x446618u: goto label_446618;
        case 0x44661cu: goto label_44661c;
        case 0x446620u: goto label_446620;
        case 0x446624u: goto label_446624;
        case 0x446628u: goto label_446628;
        case 0x44662cu: goto label_44662c;
        case 0x446630u: goto label_446630;
        case 0x446634u: goto label_446634;
        case 0x446638u: goto label_446638;
        case 0x44663cu: goto label_44663c;
        case 0x446640u: goto label_446640;
        case 0x446644u: goto label_446644;
        case 0x446648u: goto label_446648;
        case 0x44664cu: goto label_44664c;
        case 0x446650u: goto label_446650;
        case 0x446654u: goto label_446654;
        case 0x446658u: goto label_446658;
        case 0x44665cu: goto label_44665c;
        case 0x446660u: goto label_446660;
        case 0x446664u: goto label_446664;
        case 0x446668u: goto label_446668;
        case 0x44666cu: goto label_44666c;
        case 0x446670u: goto label_446670;
        case 0x446674u: goto label_446674;
        case 0x446678u: goto label_446678;
        case 0x44667cu: goto label_44667c;
        case 0x446680u: goto label_446680;
        case 0x446684u: goto label_446684;
        case 0x446688u: goto label_446688;
        case 0x44668cu: goto label_44668c;
        case 0x446690u: goto label_446690;
        case 0x446694u: goto label_446694;
        case 0x446698u: goto label_446698;
        case 0x44669cu: goto label_44669c;
        case 0x4466a0u: goto label_4466a0;
        case 0x4466a4u: goto label_4466a4;
        case 0x4466a8u: goto label_4466a8;
        case 0x4466acu: goto label_4466ac;
        case 0x4466b0u: goto label_4466b0;
        case 0x4466b4u: goto label_4466b4;
        case 0x4466b8u: goto label_4466b8;
        case 0x4466bcu: goto label_4466bc;
        default: break;
    }

    ctx->pc = 0x445fd0u;

label_445fd0:
    // 0x445fd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x445fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_445fd4:
    // 0x445fd4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x445fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_445fd8:
    // 0x445fd8: 0x2442d4c0  addiu       $v0, $v0, -0x2B40
    ctx->pc = 0x445fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956224));
label_445fdc:
    // 0x445fdc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x445fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_445fe0:
    // 0x445fe0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x445fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_445fe4:
    // 0x445fe4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x445fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445fe8:
    // 0x445fe8: 0x3e00008  jr          $ra
label_445fec:
    if (ctx->pc == 0x445FECu) {
        ctx->pc = 0x445FECu;
            // 0x445fec: 0xac657528  sw          $a1, 0x7528($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29992), GPR_U32(ctx, 5));
        ctx->pc = 0x445FF0u;
        goto label_445ff0;
    }
    ctx->pc = 0x445FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445FE8u;
            // 0x445fec: 0xac657528  sw          $a1, 0x7528($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29992), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445FF0u;
label_445ff0:
    // 0x445ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x445ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_445ff4:
    // 0x445ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x445ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_445ff8:
    // 0x445ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445ffc:
    // 0x445ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446000:
    // 0x446000: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x446000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_446004:
    // 0x446004: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_446008:
    if (ctx->pc == 0x446008u) {
        ctx->pc = 0x446008u;
            // 0x446008: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x44600Cu;
        goto label_44600c;
    }
    ctx->pc = 0x446004u;
    {
        const bool branch_taken_0x446004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446004) {
            ctx->pc = 0x446008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446004u;
            // 0x446008: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44601Cu;
            goto label_44601c;
        }
    }
    ctx->pc = 0x44600Cu;
label_44600c:
    // 0x44600c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x44600cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_446010:
    // 0x446010: 0xc0407c0  jal         func_101F00
label_446014:
    if (ctx->pc == 0x446014u) {
        ctx->pc = 0x446014u;
            // 0x446014: 0x24a56050  addiu       $a1, $a1, 0x6050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24656));
        ctx->pc = 0x446018u;
        goto label_446018;
    }
    ctx->pc = 0x446010u;
    SET_GPR_U32(ctx, 31, 0x446018u);
    ctx->pc = 0x446014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446010u;
            // 0x446014: 0x24a56050  addiu       $a1, $a1, 0x6050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446018u; }
        if (ctx->pc != 0x446018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446018u; }
        if (ctx->pc != 0x446018u) { return; }
    }
    ctx->pc = 0x446018u;
label_446018:
    // 0x446018: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x446018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_44601c:
    // 0x44601c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x44601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_446020:
    // 0x446020: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_446024:
    if (ctx->pc == 0x446024u) {
        ctx->pc = 0x446024u;
            // 0x446024: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x446028u;
        goto label_446028;
    }
    ctx->pc = 0x446020u;
    {
        const bool branch_taken_0x446020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446020) {
            ctx->pc = 0x446024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446020u;
            // 0x446024: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446034u;
            goto label_446034;
        }
    }
    ctx->pc = 0x446028u;
label_446028:
    // 0x446028: 0xc04008c  jal         func_100230
label_44602c:
    if (ctx->pc == 0x44602Cu) {
        ctx->pc = 0x446030u;
        goto label_446030;
    }
    ctx->pc = 0x446028u;
    SET_GPR_U32(ctx, 31, 0x446030u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446030u; }
        if (ctx->pc != 0x446030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446030u; }
        if (ctx->pc != 0x446030u) { return; }
    }
    ctx->pc = 0x446030u;
label_446030:
    // 0x446030: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x446030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_446034:
    // 0x446034: 0xc0d37dc  jal         func_34DF70
label_446038:
    if (ctx->pc == 0x446038u) {
        ctx->pc = 0x446038u;
            // 0x446038: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x44603Cu;
        goto label_44603c;
    }
    ctx->pc = 0x446034u;
    SET_GPR_U32(ctx, 31, 0x44603Cu);
    ctx->pc = 0x446038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446034u;
            // 0x446038: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44603Cu; }
        if (ctx->pc != 0x44603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44603Cu; }
        if (ctx->pc != 0x44603Cu) { return; }
    }
    ctx->pc = 0x44603Cu;
label_44603c:
    // 0x44603c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446040:
    // 0x446040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446044:
    // 0x446044: 0x3e00008  jr          $ra
label_446048:
    if (ctx->pc == 0x446048u) {
        ctx->pc = 0x446048u;
            // 0x446048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44604Cu;
        goto label_44604c;
    }
    ctx->pc = 0x446044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446044u;
            // 0x446048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44604Cu;
label_44604c:
    // 0x44604c: 0x0  nop
    ctx->pc = 0x44604cu;
    // NOP
label_446050:
    // 0x446050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x446050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_446054:
    // 0x446054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x446054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_446058:
    // 0x446058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44605c:
    // 0x44605c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446060:
    // 0x446060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x446060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446064:
    // 0x446064: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_446068:
    if (ctx->pc == 0x446068u) {
        ctx->pc = 0x446068u;
            // 0x446068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44606Cu;
        goto label_44606c;
    }
    ctx->pc = 0x446064u;
    {
        const bool branch_taken_0x446064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446064u;
            // 0x446068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446064) {
            ctx->pc = 0x446098u;
            goto label_446098;
        }
    }
    ctx->pc = 0x44606Cu;
label_44606c:
    // 0x44606c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x44606cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_446070:
    // 0x446070: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x446070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_446074:
    // 0x446074: 0x24a54ce0  addiu       $a1, $a1, 0x4CE0
    ctx->pc = 0x446074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19680));
label_446078:
    // 0x446078: 0xc0407e8  jal         func_101FA0
label_44607c:
    if (ctx->pc == 0x44607Cu) {
        ctx->pc = 0x44607Cu;
            // 0x44607c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x446080u;
        goto label_446080;
    }
    ctx->pc = 0x446078u;
    SET_GPR_U32(ctx, 31, 0x446080u);
    ctx->pc = 0x44607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446078u;
            // 0x44607c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446080u; }
        if (ctx->pc != 0x446080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446080u; }
        if (ctx->pc != 0x446080u) { return; }
    }
    ctx->pc = 0x446080u;
label_446080:
    // 0x446080: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x446080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_446084:
    // 0x446084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x446084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_446088:
    // 0x446088: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44608c:
    if (ctx->pc == 0x44608Cu) {
        ctx->pc = 0x44608Cu;
            // 0x44608c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446090u;
        goto label_446090;
    }
    ctx->pc = 0x446088u;
    {
        const bool branch_taken_0x446088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x446088) {
            ctx->pc = 0x44608Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446088u;
            // 0x44608c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44609Cu;
            goto label_44609c;
        }
    }
    ctx->pc = 0x446090u;
label_446090:
    // 0x446090: 0xc0400a8  jal         func_1002A0
label_446094:
    if (ctx->pc == 0x446094u) {
        ctx->pc = 0x446094u;
            // 0x446094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446098u;
        goto label_446098;
    }
    ctx->pc = 0x446090u;
    SET_GPR_U32(ctx, 31, 0x446098u);
    ctx->pc = 0x446094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446090u;
            // 0x446094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446098u; }
        if (ctx->pc != 0x446098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446098u; }
        if (ctx->pc != 0x446098u) { return; }
    }
    ctx->pc = 0x446098u;
label_446098:
    // 0x446098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x446098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44609c:
    // 0x44609c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4460a0:
    // 0x4460a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4460a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4460a4:
    // 0x4460a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4460a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4460a8:
    // 0x4460a8: 0x3e00008  jr          $ra
label_4460ac:
    if (ctx->pc == 0x4460ACu) {
        ctx->pc = 0x4460ACu;
            // 0x4460ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4460B0u;
        goto label_4460b0;
    }
    ctx->pc = 0x4460A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4460ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4460A8u;
            // 0x4460ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4460B0u;
label_4460b0:
    // 0x4460b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4460b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4460b4:
    // 0x4460b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4460b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4460b8:
    // 0x4460b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4460b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4460bc:
    // 0x4460bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4460bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4460c0:
    // 0x4460c0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4460c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4460c4:
    // 0x4460c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4460c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4460c8:
    // 0x4460c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4460c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4460cc:
    // 0x4460cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4460ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4460d0:
    // 0x4460d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4460d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4460d4:
    // 0x4460d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4460d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4460d8:
    // 0x4460d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4460d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4460dc:
    // 0x4460dc: 0x9090006c  lbu         $s0, 0x6C($a0)
    ctx->pc = 0x4460dcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
label_4460e0:
    // 0x4460e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4460e4:
    // 0x4460e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4460e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4460e8:
    // 0x4460e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4460ec:
    // 0x4460ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4460ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4460f0:
    // 0x4460f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4460f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4460f4:
    // 0x4460f4: 0xc040138  jal         func_1004E0
label_4460f8:
    if (ctx->pc == 0x4460F8u) {
        ctx->pc = 0x4460F8u;
            // 0x4460f8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4460FCu;
        goto label_4460fc;
    }
    ctx->pc = 0x4460F4u;
    SET_GPR_U32(ctx, 31, 0x4460FCu);
    ctx->pc = 0x4460F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4460F4u;
            // 0x4460f8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4460FCu; }
        if (ctx->pc != 0x4460FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4460FCu; }
        if (ctx->pc != 0x4460FCu) { return; }
    }
    ctx->pc = 0x4460FCu;
label_4460fc:
    // 0x4460fc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4460fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_446100:
    // 0x446100: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x446100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_446104:
    // 0x446104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x446104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446108:
    // 0x446108: 0x24a563f0  addiu       $a1, $a1, 0x63F0
    ctx->pc = 0x446108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25584));
label_44610c:
    // 0x44610c: 0x24c66050  addiu       $a2, $a2, 0x6050
    ctx->pc = 0x44610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24656));
label_446110:
    // 0x446110: 0x24070610  addiu       $a3, $zero, 0x610
    ctx->pc = 0x446110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
label_446114:
    // 0x446114: 0xc040840  jal         func_102100
label_446118:
    if (ctx->pc == 0x446118u) {
        ctx->pc = 0x446118u;
            // 0x446118: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44611Cu;
        goto label_44611c;
    }
    ctx->pc = 0x446114u;
    SET_GPR_U32(ctx, 31, 0x44611Cu);
    ctx->pc = 0x446118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446114u;
            // 0x446118: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44611Cu; }
        if (ctx->pc != 0x44611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44611Cu; }
        if (ctx->pc != 0x44611Cu) { return; }
    }
    ctx->pc = 0x44611Cu;
label_44611c:
    // 0x44611c: 0xaee20068  sw          $v0, 0x68($s7)
    ctx->pc = 0x44611cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 104), GPR_U32(ctx, 2));
label_446120:
    // 0x446120: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x446120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_446124:
    // 0x446124: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x446124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_446128:
    // 0x446128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44612c:
    // 0x44612c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44612cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_446130:
    // 0x446130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_446134:
    // 0x446134: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x446134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_446138:
    // 0x446138: 0xc040138  jal         func_1004E0
label_44613c:
    if (ctx->pc == 0x44613Cu) {
        ctx->pc = 0x44613Cu;
            // 0x44613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446140u;
        goto label_446140;
    }
    ctx->pc = 0x446138u;
    SET_GPR_U32(ctx, 31, 0x446140u);
    ctx->pc = 0x44613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446138u;
            // 0x44613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446140u; }
        if (ctx->pc != 0x446140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446140u; }
        if (ctx->pc != 0x446140u) { return; }
    }
    ctx->pc = 0x446140u;
label_446140:
    // 0x446140: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x446140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446144:
    // 0x446144: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x446144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446148:
    // 0x446148: 0xaee20064  sw          $v0, 0x64($s7)
    ctx->pc = 0x446148u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 100), GPR_U32(ctx, 2));
label_44614c:
    // 0x44614c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446150:
    // 0x446150: 0xc04a576  jal         func_1295D8
label_446154:
    if (ctx->pc == 0x446154u) {
        ctx->pc = 0x446154u;
            // 0x446154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446158u;
        goto label_446158;
    }
    ctx->pc = 0x446150u;
    SET_GPR_U32(ctx, 31, 0x446158u);
    ctx->pc = 0x446154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446150u;
            // 0x446154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446158u; }
        if (ctx->pc != 0x446158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446158u; }
        if (ctx->pc != 0x446158u) { return; }
    }
    ctx->pc = 0x446158u;
label_446158:
    // 0x446158: 0x8ef60068  lw          $s6, 0x68($s7)
    ctx->pc = 0x446158u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_44615c:
    // 0x44615c: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x44615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_446160:
    // 0x446160: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x446160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446164:
    // 0x446164: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_446168:
    if (ctx->pc == 0x446168u) {
        ctx->pc = 0x446168u;
            // 0x446168: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x44616Cu;
        goto label_44616c;
    }
    ctx->pc = 0x446164u;
    {
        const bool branch_taken_0x446164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x446168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446164u;
            // 0x446168: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446164) {
            ctx->pc = 0x446188u;
            goto label_446188;
        }
    }
    ctx->pc = 0x44616Cu;
label_44616c:
    // 0x44616c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x44616cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_446170:
    // 0x446170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_446174:
    // 0x446174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_446178:
    // 0x446178: 0x0  nop
    ctx->pc = 0x446178u;
    // NOP
label_44617c:
    // 0x44617c: 0x0  nop
    ctx->pc = 0x44617cu;
    // NOP
label_446180:
    // 0x446180: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_446184:
    if (ctx->pc == 0x446184u) {
        ctx->pc = 0x446188u;
        goto label_446188;
    }
    ctx->pc = 0x446180u;
    {
        const bool branch_taken_0x446180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446180) {
            ctx->pc = 0x44616Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44616c;
        }
    }
    ctx->pc = 0x446188u;
label_446188:
    // 0x446188: 0xc6e10030  lwc1        $f1, 0x30($s7)
    ctx->pc = 0x446188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44618c:
    // 0x44618c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x44618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_446190:
    // 0x446190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x446190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_446194:
    // 0x446194: 0x0  nop
    ctx->pc = 0x446194u;
    // NOP
label_446198:
    // 0x446198: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x446198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44619c:
    // 0x44619c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4461a0:
    if (ctx->pc == 0x4461A0u) {
        ctx->pc = 0x4461A0u;
            // 0x4461a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4461A4u;
        goto label_4461a4;
    }
    ctx->pc = 0x44619Cu;
    {
        const bool branch_taken_0x44619c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44619c) {
            ctx->pc = 0x4461A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44619Cu;
            // 0x4461a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4461B4u;
            goto label_4461b4;
        }
    }
    ctx->pc = 0x4461A4u;
label_4461a4:
    // 0x4461a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4461a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4461a8:
    // 0x4461a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4461a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4461ac:
    // 0x4461ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4461b0:
    if (ctx->pc == 0x4461B0u) {
        ctx->pc = 0x4461B0u;
            // 0x4461b0: 0xc6ec0030  lwc1        $f12, 0x30($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4461B4u;
        goto label_4461b4;
    }
    ctx->pc = 0x4461ACu;
    {
        const bool branch_taken_0x4461ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4461ACu;
            // 0x4461b0: 0xc6ec0030  lwc1        $f12, 0x30($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461ac) {
            ctx->pc = 0x4461CCu;
            goto label_4461cc;
        }
    }
    ctx->pc = 0x4461B4u;
label_4461b4:
    // 0x4461b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4461b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4461b8:
    // 0x4461b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4461b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4461bc:
    // 0x4461bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4461bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4461c0:
    // 0x4461c0: 0x0  nop
    ctx->pc = 0x4461c0u;
    // NOP
label_4461c4:
    // 0x4461c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4461c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4461c8:
    // 0x4461c8: 0xc6ec0030  lwc1        $f12, 0x30($s7)
    ctx->pc = 0x4461c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4461cc:
    // 0x4461cc: 0xc04c1bc  jal         func_1306F0
label_4461d0:
    if (ctx->pc == 0x4461D0u) {
        ctx->pc = 0x4461D0u;
            // 0x4461d0: 0xafa300a8  sw          $v1, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
        ctx->pc = 0x4461D4u;
        goto label_4461d4;
    }
    ctx->pc = 0x4461CCu;
    SET_GPR_U32(ctx, 31, 0x4461D4u);
    ctx->pc = 0x4461D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4461CCu;
            // 0x4461d0: 0xafa300a8  sw          $v1, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1306F0u;
    if (runtime->hasFunction(0x1306F0u)) {
        auto targetFn = runtime->lookupFunction(0x1306F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4461D4u; }
        if (ctx->pc != 0x4461D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001306F0_0x1306f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4461D4u; }
        if (ctx->pc != 0x4461D4u) { return; }
    }
    ctx->pc = 0x4461D4u;
label_4461d4:
    // 0x4461d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4461d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4461d8:
    // 0x4461d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x4461d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_4461dc:
    // 0x4461dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4461dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4461e0:
    // 0x4461e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4461e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4461e4:
    // 0x4461e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4461e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4461e8:
    // 0x4461e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4461ec:
    // 0x4461ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x4461ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4461f0:
    // 0x4461f0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4461f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4461f4:
    // 0x4461f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4461f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4461f8:
    // 0x4461f8: 0x0  nop
    ctx->pc = 0x4461f8u;
    // NOP
label_4461fc:
    // 0x4461fc: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x4461fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_446200:
    // 0x446200: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x446200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_446204:
    // 0x446204: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_446208:
    if (ctx->pc == 0x446208u) {
        ctx->pc = 0x446208u;
            // 0x446208: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x44620Cu;
        goto label_44620c;
    }
    ctx->pc = 0x446204u;
    {
        const bool branch_taken_0x446204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x446204) {
            ctx->pc = 0x446208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446204u;
            // 0x446208: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x44621Cu;
            goto label_44621c;
        }
    }
    ctx->pc = 0x44620Cu;
label_44620c:
    // 0x44620c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44620cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_446210:
    // 0x446210: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x446210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_446214:
    // 0x446214: 0x10000007  b           . + 4 + (0x7 << 2)
label_446218:
    if (ctx->pc == 0x446218u) {
        ctx->pc = 0x446218u;
            // 0x446218: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->pc = 0x44621Cu;
        goto label_44621c;
    }
    ctx->pc = 0x446214u;
    {
        const bool branch_taken_0x446214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446214u;
            // 0x446218: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446214) {
            ctx->pc = 0x446234u;
            goto label_446234;
        }
    }
    ctx->pc = 0x44621Cu;
label_44621c:
    // 0x44621c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_446220:
    // 0x446220: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x446220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_446224:
    // 0x446224: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x446224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_446228:
    // 0x446228: 0x0  nop
    ctx->pc = 0x446228u;
    // NOP
label_44622c:
    // 0x44622c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_446230:
    // 0x446230: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x446230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_446234:
    // 0x446234: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x446234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_446238:
    // 0x446238: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_44623c:
    if (ctx->pc == 0x44623Cu) {
        ctx->pc = 0x44623Cu;
            // 0x44623c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x446240u;
        goto label_446240;
    }
    ctx->pc = 0x446238u;
    {
        const bool branch_taken_0x446238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446238u;
            // 0x44623c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446238) {
            ctx->pc = 0x44625Cu;
            goto label_44625c;
        }
    }
    ctx->pc = 0x446240u;
label_446240:
    // 0x446240: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x446240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_446244:
    // 0x446244: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_446248:
    // 0x446248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44624c:
    // 0x44624c: 0x0  nop
    ctx->pc = 0x44624cu;
    // NOP
label_446250:
    // 0x446250: 0x0  nop
    ctx->pc = 0x446250u;
    // NOP
label_446254:
    // 0x446254: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_446258:
    if (ctx->pc == 0x446258u) {
        ctx->pc = 0x44625Cu;
        goto label_44625c;
    }
    ctx->pc = 0x446254u;
    {
        const bool branch_taken_0x446254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446254) {
            ctx->pc = 0x446240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446240;
        }
    }
    ctx->pc = 0x44625Cu;
label_44625c:
    // 0x44625c: 0xc6e10034  lwc1        $f1, 0x34($s7)
    ctx->pc = 0x44625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_446260:
    // 0x446260: 0xc6e00038  lwc1        $f0, 0x38($s7)
    ctx->pc = 0x446260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_446264:
    // 0x446264: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x446264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_446268:
    // 0x446268: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x446268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_44626c:
    // 0x44626c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x44626cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_446270:
    // 0x446270: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x446270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_446274:
    // 0x446274: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x446274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_446278:
    // 0x446278: 0x27b000a8  addiu       $s0, $sp, 0xA8
    ctx->pc = 0x446278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_44627c:
    // 0x44627c: 0x0  nop
    ctx->pc = 0x44627cu;
    // NOP
label_446280:
    // 0x446280: 0x24022b2a  addiu       $v0, $zero, 0x2B2A
    ctx->pc = 0x446280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
label_446284:
    // 0x446284: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x446284u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_446288:
    // 0x446288: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x446288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_44628c:
    // 0x44628c: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x44628cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
label_446290:
    // 0x446290: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x446290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_446294:
    // 0x446294: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x446294u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
label_446298:
    // 0x446298: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x446298u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_44629c:
    // 0x44629c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_4462a0:
    if (ctx->pc == 0x4462A0u) {
        ctx->pc = 0x4462A0u;
            // 0x4462a0: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4462A4u;
        goto label_4462a4;
    }
    ctx->pc = 0x44629Cu;
    {
        const bool branch_taken_0x44629c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4462A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44629Cu;
            // 0x4462a0: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44629c) {
            ctx->pc = 0x4462B0u;
            goto label_4462b0;
        }
    }
    ctx->pc = 0x4462A4u;
label_4462a4:
    // 0x4462a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4462a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4462a8:
    // 0x4462a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4462ac:
    if (ctx->pc == 0x4462ACu) {
        ctx->pc = 0x4462ACu;
            // 0x4462ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4462B0u;
        goto label_4462b0;
    }
    ctx->pc = 0x4462A8u;
    {
        const bool branch_taken_0x4462a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4462ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4462A8u;
            // 0x4462ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462a8) {
            ctx->pc = 0x4462CCu;
            goto label_4462cc;
        }
    }
    ctx->pc = 0x4462B0u;
label_4462b0:
    // 0x4462b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4462b4:
    // 0x4462b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4462b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4462b8:
    // 0x4462b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4462b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4462bc:
    // 0x4462bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4462bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4462c0:
    // 0x4462c0: 0x0  nop
    ctx->pc = 0x4462c0u;
    // NOP
label_4462c4:
    // 0x4462c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4462c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4462c8:
    // 0x4462c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4462c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4462cc:
    // 0x4462cc: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x4462ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
label_4462d0:
    // 0x4462d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4462d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4462d4:
    // 0x4462d4: 0xc600fffc  lwc1        $f0, -0x4($s0)
    ctx->pc = 0x4462d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4462d8:
    // 0x4462d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4462d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4462dc:
    // 0x4462dc: 0xc0d879c  jal         func_361E70
label_4462e0:
    if (ctx->pc == 0x4462E0u) {
        ctx->pc = 0x4462E0u;
            // 0x4462e0: 0xe6a00028  swc1        $f0, 0x28($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
        ctx->pc = 0x4462E4u;
        goto label_4462e4;
    }
    ctx->pc = 0x4462DCu;
    SET_GPR_U32(ctx, 31, 0x4462E4u);
    ctx->pc = 0x4462E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4462DCu;
            // 0x4462e0: 0xe6a00028  swc1        $f0, 0x28($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4462E4u; }
        if (ctx->pc != 0x4462E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4462E4u; }
        if (ctx->pc != 0x4462E4u) { return; }
    }
    ctx->pc = 0x4462E4u;
label_4462e4:
    // 0x4462e4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4462e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4462e8:
    // 0x4462e8: 0x26b50034  addiu       $s5, $s5, 0x34
    ctx->pc = 0x4462e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_4462ec:
    // 0x4462ec: 0x26520300  addiu       $s2, $s2, 0x300
    ctx->pc = 0x4462ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
label_4462f0:
    // 0x4462f0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4462f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_4462f4:
    // 0x4462f4: 0x1e60ffe2  bgtz        $s3, . + 4 + (-0x1E << 2)
label_4462f8:
    if (ctx->pc == 0x4462F8u) {
        ctx->pc = 0x4462F8u;
            // 0x4462f8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x4462FCu;
        goto label_4462fc;
    }
    ctx->pc = 0x4462F4u;
    {
        const bool branch_taken_0x4462f4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x4462F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4462F4u;
            // 0x4462f8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4462f4) {
            ctx->pc = 0x446280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446280;
        }
    }
    ctx->pc = 0x4462FCu;
label_4462fc:
    // 0x4462fc: 0x92e2006c  lbu         $v0, 0x6C($s7)
    ctx->pc = 0x4462fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 108)));
label_446300:
    // 0x446300: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x446300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_446304:
    // 0x446304: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x446304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_446308:
    // 0x446308: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_44630c:
    if (ctx->pc == 0x44630Cu) {
        ctx->pc = 0x44630Cu;
            // 0x44630c: 0x26d60610  addiu       $s6, $s6, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1552));
        ctx->pc = 0x446310u;
        goto label_446310;
    }
    ctx->pc = 0x446308u;
    {
        const bool branch_taken_0x446308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446308u;
            // 0x44630c: 0x26d60610  addiu       $s6, $s6, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446308) {
            ctx->pc = 0x44626Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44626c;
        }
    }
    ctx->pc = 0x446310u;
label_446310:
    // 0x446310: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x446310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_446314:
    // 0x446314: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x446314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_446318:
    // 0x446318: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x446318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_44631c:
    // 0x44631c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x44631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_446320:
    // 0x446320: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x446320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_446324:
    // 0x446324: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x446324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_446328:
    // 0x446328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44632c:
    // 0x44632c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x44632cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_446330:
    // 0x446330: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x446330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_446334:
    // 0x446334: 0xc0a7a88  jal         func_29EA20
label_446338:
    if (ctx->pc == 0x446338u) {
        ctx->pc = 0x446338u;
            // 0x446338: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x44633Cu;
        goto label_44633c;
    }
    ctx->pc = 0x446334u;
    SET_GPR_U32(ctx, 31, 0x44633Cu);
    ctx->pc = 0x446338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446334u;
            // 0x446338: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44633Cu; }
        if (ctx->pc != 0x44633Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44633Cu; }
        if (ctx->pc != 0x44633Cu) { return; }
    }
    ctx->pc = 0x44633Cu;
label_44633c:
    // 0x44633c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x44633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_446340:
    // 0x446340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x446340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446344:
    // 0x446344: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_446348:
    if (ctx->pc == 0x446348u) {
        ctx->pc = 0x446348u;
            // 0x446348: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44634Cu;
        goto label_44634c;
    }
    ctx->pc = 0x446344u;
    {
        const bool branch_taken_0x446344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x446348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446344u;
            // 0x446348: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446344) {
            ctx->pc = 0x446364u;
            goto label_446364;
        }
    }
    ctx->pc = 0x44634Cu;
label_44634c:
    // 0x44634c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x44634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_446350:
    // 0x446350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446354:
    // 0x446354: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x446354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_446358:
    // 0x446358: 0xc0804bc  jal         func_2012F0
label_44635c:
    if (ctx->pc == 0x44635Cu) {
        ctx->pc = 0x44635Cu;
            // 0x44635c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x446360u;
        goto label_446360;
    }
    ctx->pc = 0x446358u;
    SET_GPR_U32(ctx, 31, 0x446360u);
    ctx->pc = 0x44635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446358u;
            // 0x44635c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446360u; }
        if (ctx->pc != 0x446360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446360u; }
        if (ctx->pc != 0x446360u) { return; }
    }
    ctx->pc = 0x446360u;
label_446360:
    // 0x446360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x446360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446364:
    // 0x446364: 0x26e40050  addiu       $a0, $s7, 0x50
    ctx->pc = 0x446364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
label_446368:
    // 0x446368: 0x26e50010  addiu       $a1, $s7, 0x10
    ctx->pc = 0x446368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_44636c:
    // 0x44636c: 0x26e60020  addiu       $a2, $s7, 0x20
    ctx->pc = 0x44636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_446370:
    // 0x446370: 0xc0d37ec  jal         func_34DFB0
label_446374:
    if (ctx->pc == 0x446374u) {
        ctx->pc = 0x446374u;
            // 0x446374: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446378u;
        goto label_446378;
    }
    ctx->pc = 0x446370u;
    SET_GPR_U32(ctx, 31, 0x446378u);
    ctx->pc = 0x446374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446370u;
            // 0x446374: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446378u; }
        if (ctx->pc != 0x446378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446378u; }
        if (ctx->pc != 0x446378u) { return; }
    }
    ctx->pc = 0x446378u;
label_446378:
    // 0x446378: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x446378u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_44637c:
    // 0x44637c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_446380:
    if (ctx->pc == 0x446380u) {
        ctx->pc = 0x446380u;
            // 0x446380: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x446384u;
        goto label_446384;
    }
    ctx->pc = 0x44637Cu;
    {
        const bool branch_taken_0x44637c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44637c) {
            ctx->pc = 0x446380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44637Cu;
            // 0x446380: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4463C0u;
            goto label_4463c0;
        }
    }
    ctx->pc = 0x446384u;
label_446384:
    // 0x446384: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x446384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_446388:
    // 0x446388: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x446388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_44638c:
    // 0x44638c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x44638cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_446390:
    // 0x446390: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x446390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_446394:
    // 0x446394: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x446394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_446398:
    // 0x446398: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_44639c:
    if (ctx->pc == 0x44639Cu) {
        ctx->pc = 0x4463A0u;
        goto label_4463a0;
    }
    ctx->pc = 0x446398u;
    {
        const bool branch_taken_0x446398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x446398) {
            ctx->pc = 0x4463BCu;
            goto label_4463bc;
        }
    }
    ctx->pc = 0x4463A0u;
label_4463a0:
    // 0x4463a0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4463a4:
    if (ctx->pc == 0x4463A4u) {
        ctx->pc = 0x4463A8u;
        goto label_4463a8;
    }
    ctx->pc = 0x4463A0u;
    {
        const bool branch_taken_0x4463a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4463a0) {
            ctx->pc = 0x4463BCu;
            goto label_4463bc;
        }
    }
    ctx->pc = 0x4463A8u;
label_4463a8:
    // 0x4463a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4463a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4463ac:
    // 0x4463ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4463acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4463b0:
    // 0x4463b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4463b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4463b4:
    // 0x4463b4: 0x320f809  jalr        $t9
label_4463b8:
    if (ctx->pc == 0x4463B8u) {
        ctx->pc = 0x4463B8u;
            // 0x4463b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4463BCu;
        goto label_4463bc;
    }
    ctx->pc = 0x4463B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4463BCu);
        ctx->pc = 0x4463B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4463B4u;
            // 0x4463b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4463BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4463BCu; }
            if (ctx->pc != 0x4463BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4463BCu;
label_4463bc:
    // 0x4463bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4463bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4463c0:
    // 0x4463c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4463c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4463c4:
    // 0x4463c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4463c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4463c8:
    // 0x4463c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4463c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4463cc:
    // 0x4463cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4463ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4463d0:
    // 0x4463d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4463d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4463d4:
    // 0x4463d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4463d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4463d8:
    // 0x4463d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4463d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4463dc:
    // 0x4463dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4463dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4463e0:
    // 0x4463e0: 0x3e00008  jr          $ra
label_4463e4:
    if (ctx->pc == 0x4463E4u) {
        ctx->pc = 0x4463E4u;
            // 0x4463e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4463E8u;
        goto label_4463e8;
    }
    ctx->pc = 0x4463E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4463E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4463E0u;
            // 0x4463e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4463E8u;
label_4463e8:
    // 0x4463e8: 0x0  nop
    ctx->pc = 0x4463e8u;
    // NOP
label_4463ec:
    // 0x4463ec: 0x0  nop
    ctx->pc = 0x4463ecu;
    // NOP
label_4463f0:
    // 0x4463f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4463f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4463f4:
    // 0x4463f4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4463f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_4463f8:
    // 0x4463f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4463f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4463fc:
    // 0x4463fc: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x4463fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_446400:
    // 0x446400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446404:
    // 0x446404: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x446404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
label_446408:
    // 0x446408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x446408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44640c:
    // 0x44640c: 0x24c64ce0  addiu       $a2, $a2, 0x4CE0
    ctx->pc = 0x44640cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19680));
label_446410:
    // 0x446410: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x446410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_446414:
    // 0x446414: 0xc040804  jal         func_102010
label_446418:
    if (ctx->pc == 0x446418u) {
        ctx->pc = 0x446418u;
            // 0x446418: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x44641Cu;
        goto label_44641c;
    }
    ctx->pc = 0x446414u;
    SET_GPR_U32(ctx, 31, 0x44641Cu);
    ctx->pc = 0x446418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446414u;
            // 0x446418: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44641Cu; }
        if (ctx->pc != 0x44641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44641Cu; }
        if (ctx->pc != 0x44641Cu) { return; }
    }
    ctx->pc = 0x44641Cu;
label_44641c:
    // 0x44641c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44641cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446420:
    // 0x446420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x446420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446424:
    // 0x446424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446428:
    // 0x446428: 0x3e00008  jr          $ra
label_44642c:
    if (ctx->pc == 0x44642Cu) {
        ctx->pc = 0x44642Cu;
            // 0x44642c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x446430u;
        goto label_446430;
    }
    ctx->pc = 0x446428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446428u;
            // 0x44642c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446430u;
label_446430:
    // 0x446430: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x446430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_446434:
    // 0x446434: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x446434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_446438:
    // 0x446438: 0x3e00008  jr          $ra
label_44643c:
    if (ctx->pc == 0x44643Cu) {
        ctx->pc = 0x44643Cu;
            // 0x44643c: 0xa083006c  sb          $v1, 0x6C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x446440u;
        goto label_446440;
    }
    ctx->pc = 0x446438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446438u;
            // 0x44643c: 0xa083006c  sb          $v1, 0x6C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446440u;
label_446440:
    // 0x446440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x446440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_446444:
    // 0x446444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x446444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_446448:
    // 0x446448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x446448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44644c:
    // 0x44644c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_446450:
    // 0x446450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x446450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_446454:
    // 0x446454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x446454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_446458:
    // 0x446458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44645c:
    // 0x44645c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44645cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446460:
    // 0x446460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446464:
    // 0x446464: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x446464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_446468:
    // 0x446468: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x446468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44646c:
    // 0x44646c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_446470:
    if (ctx->pc == 0x446470u) {
        ctx->pc = 0x446470u;
            // 0x446470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446474u;
        goto label_446474;
    }
    ctx->pc = 0x44646Cu;
    {
        const bool branch_taken_0x44646c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x446470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44646Cu;
            // 0x446470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44646c) {
            ctx->pc = 0x4464D0u;
            goto label_4464d0;
        }
    }
    ctx->pc = 0x446474u;
label_446474:
    // 0x446474: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x446474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446478:
    // 0x446478: 0x9064006c  lbu         $a0, 0x6C($v1)
    ctx->pc = 0x446478u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
label_44647c:
    // 0x44647c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_446480:
    if (ctx->pc == 0x446480u) {
        ctx->pc = 0x446480u;
            // 0x446480: 0x8c700068  lw          $s0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->pc = 0x446484u;
        goto label_446484;
    }
    ctx->pc = 0x44647Cu;
    {
        const bool branch_taken_0x44647c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44647Cu;
            // 0x446480: 0x8c700068  lw          $s0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44647c) {
            ctx->pc = 0x4464C8u;
            goto label_4464c8;
        }
    }
    ctx->pc = 0x446484u;
label_446484:
    // 0x446484: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x446484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
label_446488:
    // 0x446488: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_44648c:
    if (ctx->pc == 0x44648Cu) {
        ctx->pc = 0x44648Cu;
            // 0x44648c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x446490u;
        goto label_446490;
    }
    ctx->pc = 0x446488u;
    {
        const bool branch_taken_0x446488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x446488) {
            ctx->pc = 0x44648Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446488u;
            // 0x44648c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4464C0u;
            goto label_4464c0;
        }
    }
    ctx->pc = 0x446490u;
label_446490:
    // 0x446490: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x446490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446494:
    // 0x446494: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x446494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446498:
    // 0x446498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x446498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44649c:
    // 0x44649c: 0xc1111bc  jal         func_4446F0
label_4464a0:
    if (ctx->pc == 0x4464A0u) {
        ctx->pc = 0x4464A0u;
            // 0x4464a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4464A4u;
        goto label_4464a4;
    }
    ctx->pc = 0x44649Cu;
    SET_GPR_U32(ctx, 31, 0x4464A4u);
    ctx->pc = 0x4464A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44649Cu;
            // 0x4464a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4446F0u;
    if (runtime->hasFunction(0x4446F0u)) {
        auto targetFn = runtime->lookupFunction(0x4446F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4464A4u; }
        if (ctx->pc != 0x4464A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004446F0_0x4446f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4464A4u; }
        if (ctx->pc != 0x4464A4u) { return; }
    }
    ctx->pc = 0x4464A4u;
label_4464a4:
    // 0x4464a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4464a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4464a8:
    // 0x4464a8: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x4464a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_4464ac:
    // 0x4464ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4464b0:
    if (ctx->pc == 0x4464B0u) {
        ctx->pc = 0x4464B0u;
            // 0x4464b0: 0x26940300  addiu       $s4, $s4, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
        ctx->pc = 0x4464B4u;
        goto label_4464b4;
    }
    ctx->pc = 0x4464ACu;
    {
        const bool branch_taken_0x4464ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4464B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4464ACu;
            // 0x4464b0: 0x26940300  addiu       $s4, $s4, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464ac) {
            ctx->pc = 0x446498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446498;
        }
    }
    ctx->pc = 0x4464B4u;
label_4464b4:
    // 0x4464b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4464b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4464b8:
    // 0x4464b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4464bc:
    if (ctx->pc == 0x4464BCu) {
        ctx->pc = 0x4464BCu;
            // 0x4464bc: 0xa2030600  sb          $v1, 0x600($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4464C0u;
        goto label_4464c0;
    }
    ctx->pc = 0x4464B8u;
    {
        const bool branch_taken_0x4464b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4464B8u;
            // 0x4464bc: 0xa2030600  sb          $v1, 0x600($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464b8) {
            ctx->pc = 0x4464C8u;
            goto label_4464c8;
        }
    }
    ctx->pc = 0x4464C0u;
label_4464c0:
    // 0x4464c0: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_4464c4:
    if (ctx->pc == 0x4464C4u) {
        ctx->pc = 0x4464C4u;
            // 0x4464c4: 0x26100610  addiu       $s0, $s0, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
        ctx->pc = 0x4464C8u;
        goto label_4464c8;
    }
    ctx->pc = 0x4464C0u;
    {
        const bool branch_taken_0x4464c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4464C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4464C0u;
            // 0x4464c4: 0x26100610  addiu       $s0, $s0, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464c0) {
            ctx->pc = 0x446484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_446484;
        }
    }
    ctx->pc = 0x4464C8u;
label_4464c8:
    // 0x4464c8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4464c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4464cc:
    // 0x4464cc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4464ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_4464d0:
    // 0x4464d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4464d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4464d4:
    // 0x4464d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4464d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4464d8:
    // 0x4464d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4464d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4464dc:
    // 0x4464dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4464dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4464e0:
    // 0x4464e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4464e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4464e4:
    // 0x4464e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4464e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4464e8:
    // 0x4464e8: 0x3e00008  jr          $ra
label_4464ec:
    if (ctx->pc == 0x4464ECu) {
        ctx->pc = 0x4464ECu;
            // 0x4464ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4464F0u;
        goto label_4464f0;
    }
    ctx->pc = 0x4464E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4464ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4464E8u;
            // 0x4464ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4464F0u;
label_4464f0:
    // 0x4464f0: 0x3e00008  jr          $ra
label_4464f4:
    if (ctx->pc == 0x4464F4u) {
        ctx->pc = 0x4464F4u;
            // 0x4464f4: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->pc = 0x4464F8u;
        goto label_4464f8;
    }
    ctx->pc = 0x4464F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4464F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4464F0u;
            // 0x4464f4: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4464F8u;
label_4464f8:
    // 0x4464f8: 0x0  nop
    ctx->pc = 0x4464f8u;
    // NOP
label_4464fc:
    // 0x4464fc: 0x0  nop
    ctx->pc = 0x4464fcu;
    // NOP
label_446500:
    // 0x446500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x446500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_446504:
    // 0x446504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x446504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_446508:
    // 0x446508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44650c:
    // 0x44650c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446510:
    // 0x446510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x446510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446514:
    // 0x446514: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_446518:
    if (ctx->pc == 0x446518u) {
        ctx->pc = 0x446518u;
            // 0x446518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44651Cu;
        goto label_44651c;
    }
    ctx->pc = 0x446514u;
    {
        const bool branch_taken_0x446514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446514u;
            // 0x446518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446514) {
            ctx->pc = 0x4465FCu;
            goto label_4465fc;
        }
    }
    ctx->pc = 0x44651Cu;
label_44651c:
    // 0x44651c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_446520:
    // 0x446520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446524:
    // 0x446524: 0x2463d4d0  addiu       $v1, $v1, -0x2B30
    ctx->pc = 0x446524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956240));
label_446528:
    // 0x446528: 0x2442d508  addiu       $v0, $v0, -0x2AF8
    ctx->pc = 0x446528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956296));
label_44652c:
    // 0x44652c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44652cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_446530:
    // 0x446530: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x446530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_446534:
    // 0x446534: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x446534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_446538:
    // 0x446538: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x446538u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_44653c:
    // 0x44653c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_446540:
    if (ctx->pc == 0x446540u) {
        ctx->pc = 0x446544u;
        goto label_446544;
    }
    ctx->pc = 0x44653Cu;
    {
        const bool branch_taken_0x44653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44653c) {
            ctx->pc = 0x446578u;
            goto label_446578;
        }
    }
    ctx->pc = 0x446544u;
label_446544:
    // 0x446544: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x446544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_446548:
    // 0x446548: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44654c:
    // 0x44654c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x44654cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_446550:
    // 0x446550: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x446550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_446554:
    // 0x446554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x446554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_446558:
    // 0x446558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_44655c:
    if (ctx->pc == 0x44655Cu) {
        ctx->pc = 0x446560u;
        goto label_446560;
    }
    ctx->pc = 0x446558u;
    {
        const bool branch_taken_0x446558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446558) {
            ctx->pc = 0x446578u;
            goto label_446578;
        }
    }
    ctx->pc = 0x446560u;
label_446560:
    // 0x446560: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_446564:
    if (ctx->pc == 0x446564u) {
        ctx->pc = 0x446568u;
        goto label_446568;
    }
    ctx->pc = 0x446560u;
    {
        const bool branch_taken_0x446560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446560) {
            ctx->pc = 0x446578u;
            goto label_446578;
        }
    }
    ctx->pc = 0x446568u;
label_446568:
    // 0x446568: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x446568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44656c:
    // 0x44656c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44656cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_446570:
    // 0x446570: 0x320f809  jalr        $t9
label_446574:
    if (ctx->pc == 0x446574u) {
        ctx->pc = 0x446574u;
            // 0x446574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x446578u;
        goto label_446578;
    }
    ctx->pc = 0x446570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x446578u);
        ctx->pc = 0x446574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446570u;
            // 0x446574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x446578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x446578u; }
            if (ctx->pc != 0x446578u) { return; }
        }
        }
    }
    ctx->pc = 0x446578u;
label_446578:
    // 0x446578: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_44657c:
    if (ctx->pc == 0x44657Cu) {
        ctx->pc = 0x44657Cu;
            // 0x44657c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x446580u;
        goto label_446580;
    }
    ctx->pc = 0x446578u;
    {
        const bool branch_taken_0x446578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x446578) {
            ctx->pc = 0x44657Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446578u;
            // 0x44657c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4465E8u;
            goto label_4465e8;
        }
    }
    ctx->pc = 0x446580u;
label_446580:
    // 0x446580: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x446580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_446584:
    // 0x446584: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x446584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_446588:
    // 0x446588: 0x2463d520  addiu       $v1, $v1, -0x2AE0
    ctx->pc = 0x446588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956320));
label_44658c:
    // 0x44658c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x44658cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_446590:
    // 0x446590: 0x2442d558  addiu       $v0, $v0, -0x2AA8
    ctx->pc = 0x446590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956376));
label_446594:
    // 0x446594: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x446594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_446598:
    // 0x446598: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x446598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_44659c:
    // 0x44659c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x44659cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4465a0:
    // 0x4465a0: 0xc0407c0  jal         func_101F00
label_4465a4:
    if (ctx->pc == 0x4465A4u) {
        ctx->pc = 0x4465A4u;
            // 0x4465a4: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
        ctx->pc = 0x4465A8u;
        goto label_4465a8;
    }
    ctx->pc = 0x4465A0u;
    SET_GPR_U32(ctx, 31, 0x4465A8u);
    ctx->pc = 0x4465A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465A0u;
            // 0x4465a4: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465A8u; }
        if (ctx->pc != 0x4465A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465A8u; }
        if (ctx->pc != 0x4465A8u) { return; }
    }
    ctx->pc = 0x4465A8u;
label_4465a8:
    // 0x4465a8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4465a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4465ac:
    // 0x4465ac: 0xc111714  jal         func_445C50
label_4465b0:
    if (ctx->pc == 0x4465B0u) {
        ctx->pc = 0x4465B0u;
            // 0x4465b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4465B4u;
        goto label_4465b4;
    }
    ctx->pc = 0x4465ACu;
    SET_GPR_U32(ctx, 31, 0x4465B4u);
    ctx->pc = 0x4465B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465ACu;
            // 0x4465b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445C50u;
    if (runtime->hasFunction(0x445C50u)) {
        auto targetFn = runtime->lookupFunction(0x445C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465B4u; }
        if (ctx->pc != 0x4465B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445C50_0x445c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465B4u; }
        if (ctx->pc != 0x4465B4u) { return; }
    }
    ctx->pc = 0x4465B4u;
label_4465b4:
    // 0x4465b4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4465b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4465b8:
    // 0x4465b8: 0xc111730  jal         func_445CC0
label_4465bc:
    if (ctx->pc == 0x4465BCu) {
        ctx->pc = 0x4465BCu;
            // 0x4465bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4465C0u;
        goto label_4465c0;
    }
    ctx->pc = 0x4465B8u;
    SET_GPR_U32(ctx, 31, 0x4465C0u);
    ctx->pc = 0x4465BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465B8u;
            // 0x4465bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445CC0u;
    if (runtime->hasFunction(0x445CC0u)) {
        auto targetFn = runtime->lookupFunction(0x445CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465C0u; }
        if (ctx->pc != 0x4465C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445CC0_0x445cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465C0u; }
        if (ctx->pc != 0x4465C0u) { return; }
    }
    ctx->pc = 0x4465C0u;
label_4465c0:
    // 0x4465c0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4465c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4465c4:
    // 0x4465c4: 0xc111730  jal         func_445CC0
label_4465c8:
    if (ctx->pc == 0x4465C8u) {
        ctx->pc = 0x4465C8u;
            // 0x4465c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4465CCu;
        goto label_4465cc;
    }
    ctx->pc = 0x4465C4u;
    SET_GPR_U32(ctx, 31, 0x4465CCu);
    ctx->pc = 0x4465C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465C4u;
            // 0x4465c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445CC0u;
    if (runtime->hasFunction(0x445CC0u)) {
        auto targetFn = runtime->lookupFunction(0x445CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465CCu; }
        if (ctx->pc != 0x4465CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445CC0_0x445cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465CCu; }
        if (ctx->pc != 0x4465CCu) { return; }
    }
    ctx->pc = 0x4465CCu;
label_4465cc:
    // 0x4465cc: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4465ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4465d0:
    // 0x4465d0: 0xc11174c  jal         func_445D30
label_4465d4:
    if (ctx->pc == 0x4465D4u) {
        ctx->pc = 0x4465D4u;
            // 0x4465d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4465D8u;
        goto label_4465d8;
    }
    ctx->pc = 0x4465D0u;
    SET_GPR_U32(ctx, 31, 0x4465D8u);
    ctx->pc = 0x4465D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465D0u;
            // 0x4465d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445D30u;
    if (runtime->hasFunction(0x445D30u)) {
        auto targetFn = runtime->lookupFunction(0x445D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465D8u; }
        if (ctx->pc != 0x4465D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00445D30_0x445d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465D8u; }
        if (ctx->pc != 0x4465D8u) { return; }
    }
    ctx->pc = 0x4465D8u;
label_4465d8:
    // 0x4465d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4465d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4465dc:
    // 0x4465dc: 0xc0ae1c0  jal         func_2B8700
label_4465e0:
    if (ctx->pc == 0x4465E0u) {
        ctx->pc = 0x4465E0u;
            // 0x4465e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4465E4u;
        goto label_4465e4;
    }
    ctx->pc = 0x4465DCu;
    SET_GPR_U32(ctx, 31, 0x4465E4u);
    ctx->pc = 0x4465E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465DCu;
            // 0x4465e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465E4u; }
        if (ctx->pc != 0x4465E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465E4u; }
        if (ctx->pc != 0x4465E4u) { return; }
    }
    ctx->pc = 0x4465E4u;
label_4465e4:
    // 0x4465e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4465e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4465e8:
    // 0x4465e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4465e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4465ec:
    // 0x4465ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4465f0:
    if (ctx->pc == 0x4465F0u) {
        ctx->pc = 0x4465F0u;
            // 0x4465f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4465F4u;
        goto label_4465f4;
    }
    ctx->pc = 0x4465ECu;
    {
        const bool branch_taken_0x4465ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4465ec) {
            ctx->pc = 0x4465F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4465ECu;
            // 0x4465f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446600u;
            goto label_446600;
        }
    }
    ctx->pc = 0x4465F4u;
label_4465f4:
    // 0x4465f4: 0xc0400a8  jal         func_1002A0
label_4465f8:
    if (ctx->pc == 0x4465F8u) {
        ctx->pc = 0x4465F8u;
            // 0x4465f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4465FCu;
        goto label_4465fc;
    }
    ctx->pc = 0x4465F4u;
    SET_GPR_U32(ctx, 31, 0x4465FCu);
    ctx->pc = 0x4465F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4465F4u;
            // 0x4465f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465FCu; }
        if (ctx->pc != 0x4465FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4465FCu; }
        if (ctx->pc != 0x4465FCu) { return; }
    }
    ctx->pc = 0x4465FCu;
label_4465fc:
    // 0x4465fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4465fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_446600:
    // 0x446600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x446600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_446604:
    // 0x446604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x446604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_446608:
    // 0x446608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44660c:
    // 0x44660c: 0x3e00008  jr          $ra
label_446610:
    if (ctx->pc == 0x446610u) {
        ctx->pc = 0x446610u;
            // 0x446610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x446614u;
        goto label_446614;
    }
    ctx->pc = 0x44660Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44660Cu;
            // 0x446610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x446614u;
label_446614:
    // 0x446614: 0x0  nop
    ctx->pc = 0x446614u;
    // NOP
label_446618:
    // 0x446618: 0x0  nop
    ctx->pc = 0x446618u;
    // NOP
label_44661c:
    // 0x44661c: 0x0  nop
    ctx->pc = 0x44661cu;
    // NOP
label_446620:
    // 0x446620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x446620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_446624:
    // 0x446624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x446624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446628:
    // 0x446628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x446628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44662c:
    // 0x44662c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44662cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_446630:
    // 0x446630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_446634:
    // 0x446634: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x446634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_446638:
    // 0x446638: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x446638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44663c:
    // 0x44663c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_446640:
    // 0x446640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x446640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_446644:
    // 0x446644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_446648:
    // 0x446648: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x446648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_44664c:
    // 0x44664c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_446650:
    // 0x446650: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x446650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_446654:
    // 0x446654: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x446654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_446658:
    // 0x446658: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x446658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_44665c:
    // 0x44665c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44665cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_446660:
    // 0x446660: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x446660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_446664:
    // 0x446664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_446668:
    // 0x446668: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x446668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_44666c:
    // 0x44666c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_446670:
    // 0x446670: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x446670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_446674:
    // 0x446674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x446674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_446678:
    // 0x446678: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x446678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44667c:
    // 0x44667c: 0xc0a997c  jal         func_2A65F0
label_446680:
    if (ctx->pc == 0x446680u) {
        ctx->pc = 0x446680u;
            // 0x446680: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x446684u;
        goto label_446684;
    }
    ctx->pc = 0x44667Cu;
    SET_GPR_U32(ctx, 31, 0x446684u);
    ctx->pc = 0x446680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44667Cu;
            // 0x446680: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446684u; }
        if (ctx->pc != 0x446684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446684u; }
        if (ctx->pc != 0x446684u) { return; }
    }
    ctx->pc = 0x446684u;
label_446684:
    // 0x446684: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x446684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_446688:
    // 0x446688: 0xc0d879c  jal         func_361E70
label_44668c:
    if (ctx->pc == 0x44668Cu) {
        ctx->pc = 0x44668Cu;
            // 0x44668c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x446690u;
        goto label_446690;
    }
    ctx->pc = 0x446688u;
    SET_GPR_U32(ctx, 31, 0x446690u);
    ctx->pc = 0x44668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446688u;
            // 0x44668c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446690u; }
        if (ctx->pc != 0x446690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446690u; }
        if (ctx->pc != 0x446690u) { return; }
    }
    ctx->pc = 0x446690u;
label_446690:
    // 0x446690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x446690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_446694:
    // 0x446694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x446694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_446698:
    // 0x446698: 0x3e00008  jr          $ra
label_44669c:
    if (ctx->pc == 0x44669Cu) {
        ctx->pc = 0x44669Cu;
            // 0x44669c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4466A0u;
        goto label_4466a0;
    }
    ctx->pc = 0x446698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446698u;
            // 0x44669c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4466A0u;
label_4466a0:
    // 0x4466a0: 0x81116b4  j           func_445AD0
label_4466a4:
    if (ctx->pc == 0x4466A4u) {
        ctx->pc = 0x4466A4u;
            // 0x4466a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4466A8u;
        goto label_4466a8;
    }
    ctx->pc = 0x4466A0u;
    ctx->pc = 0x4466A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4466A0u;
            // 0x4466a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x445AD0u;
    {
        auto targetFn = runtime->lookupFunction(0x445AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4466A8u;
label_4466a8:
    // 0x4466a8: 0x0  nop
    ctx->pc = 0x4466a8u;
    // NOP
label_4466ac:
    // 0x4466ac: 0x0  nop
    ctx->pc = 0x4466acu;
    // NOP
label_4466b0:
    // 0x4466b0: 0x8111940  j           func_446500
label_4466b4:
    if (ctx->pc == 0x4466B4u) {
        ctx->pc = 0x4466B4u;
            // 0x4466b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4466B8u;
        goto label_4466b8;
    }
    ctx->pc = 0x4466B0u;
    ctx->pc = 0x4466B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4466B0u;
            // 0x4466b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x446500u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_446500;
    ctx->pc = 0x4466B8u;
label_4466b8:
    // 0x4466b8: 0x0  nop
    ctx->pc = 0x4466b8u;
    // NOP
label_4466bc:
    // 0x4466bc: 0x0  nop
    ctx->pc = 0x4466bcu;
    // NOP
}

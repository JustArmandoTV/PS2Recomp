#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504F60
// Address: 0x504f60 - 0x5060f0
void sub_00504F60_0x504f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504F60_0x504f60");
#endif

    switch (ctx->pc) {
        case 0x504f60u: goto label_504f60;
        case 0x504f64u: goto label_504f64;
        case 0x504f68u: goto label_504f68;
        case 0x504f6cu: goto label_504f6c;
        case 0x504f70u: goto label_504f70;
        case 0x504f74u: goto label_504f74;
        case 0x504f78u: goto label_504f78;
        case 0x504f7cu: goto label_504f7c;
        case 0x504f80u: goto label_504f80;
        case 0x504f84u: goto label_504f84;
        case 0x504f88u: goto label_504f88;
        case 0x504f8cu: goto label_504f8c;
        case 0x504f90u: goto label_504f90;
        case 0x504f94u: goto label_504f94;
        case 0x504f98u: goto label_504f98;
        case 0x504f9cu: goto label_504f9c;
        case 0x504fa0u: goto label_504fa0;
        case 0x504fa4u: goto label_504fa4;
        case 0x504fa8u: goto label_504fa8;
        case 0x504facu: goto label_504fac;
        case 0x504fb0u: goto label_504fb0;
        case 0x504fb4u: goto label_504fb4;
        case 0x504fb8u: goto label_504fb8;
        case 0x504fbcu: goto label_504fbc;
        case 0x504fc0u: goto label_504fc0;
        case 0x504fc4u: goto label_504fc4;
        case 0x504fc8u: goto label_504fc8;
        case 0x504fccu: goto label_504fcc;
        case 0x504fd0u: goto label_504fd0;
        case 0x504fd4u: goto label_504fd4;
        case 0x504fd8u: goto label_504fd8;
        case 0x504fdcu: goto label_504fdc;
        case 0x504fe0u: goto label_504fe0;
        case 0x504fe4u: goto label_504fe4;
        case 0x504fe8u: goto label_504fe8;
        case 0x504fecu: goto label_504fec;
        case 0x504ff0u: goto label_504ff0;
        case 0x504ff4u: goto label_504ff4;
        case 0x504ff8u: goto label_504ff8;
        case 0x504ffcu: goto label_504ffc;
        case 0x505000u: goto label_505000;
        case 0x505004u: goto label_505004;
        case 0x505008u: goto label_505008;
        case 0x50500cu: goto label_50500c;
        case 0x505010u: goto label_505010;
        case 0x505014u: goto label_505014;
        case 0x505018u: goto label_505018;
        case 0x50501cu: goto label_50501c;
        case 0x505020u: goto label_505020;
        case 0x505024u: goto label_505024;
        case 0x505028u: goto label_505028;
        case 0x50502cu: goto label_50502c;
        case 0x505030u: goto label_505030;
        case 0x505034u: goto label_505034;
        case 0x505038u: goto label_505038;
        case 0x50503cu: goto label_50503c;
        case 0x505040u: goto label_505040;
        case 0x505044u: goto label_505044;
        case 0x505048u: goto label_505048;
        case 0x50504cu: goto label_50504c;
        case 0x505050u: goto label_505050;
        case 0x505054u: goto label_505054;
        case 0x505058u: goto label_505058;
        case 0x50505cu: goto label_50505c;
        case 0x505060u: goto label_505060;
        case 0x505064u: goto label_505064;
        case 0x505068u: goto label_505068;
        case 0x50506cu: goto label_50506c;
        case 0x505070u: goto label_505070;
        case 0x505074u: goto label_505074;
        case 0x505078u: goto label_505078;
        case 0x50507cu: goto label_50507c;
        case 0x505080u: goto label_505080;
        case 0x505084u: goto label_505084;
        case 0x505088u: goto label_505088;
        case 0x50508cu: goto label_50508c;
        case 0x505090u: goto label_505090;
        case 0x505094u: goto label_505094;
        case 0x505098u: goto label_505098;
        case 0x50509cu: goto label_50509c;
        case 0x5050a0u: goto label_5050a0;
        case 0x5050a4u: goto label_5050a4;
        case 0x5050a8u: goto label_5050a8;
        case 0x5050acu: goto label_5050ac;
        case 0x5050b0u: goto label_5050b0;
        case 0x5050b4u: goto label_5050b4;
        case 0x5050b8u: goto label_5050b8;
        case 0x5050bcu: goto label_5050bc;
        case 0x5050c0u: goto label_5050c0;
        case 0x5050c4u: goto label_5050c4;
        case 0x5050c8u: goto label_5050c8;
        case 0x5050ccu: goto label_5050cc;
        case 0x5050d0u: goto label_5050d0;
        case 0x5050d4u: goto label_5050d4;
        case 0x5050d8u: goto label_5050d8;
        case 0x5050dcu: goto label_5050dc;
        case 0x5050e0u: goto label_5050e0;
        case 0x5050e4u: goto label_5050e4;
        case 0x5050e8u: goto label_5050e8;
        case 0x5050ecu: goto label_5050ec;
        case 0x5050f0u: goto label_5050f0;
        case 0x5050f4u: goto label_5050f4;
        case 0x5050f8u: goto label_5050f8;
        case 0x5050fcu: goto label_5050fc;
        case 0x505100u: goto label_505100;
        case 0x505104u: goto label_505104;
        case 0x505108u: goto label_505108;
        case 0x50510cu: goto label_50510c;
        case 0x505110u: goto label_505110;
        case 0x505114u: goto label_505114;
        case 0x505118u: goto label_505118;
        case 0x50511cu: goto label_50511c;
        case 0x505120u: goto label_505120;
        case 0x505124u: goto label_505124;
        case 0x505128u: goto label_505128;
        case 0x50512cu: goto label_50512c;
        case 0x505130u: goto label_505130;
        case 0x505134u: goto label_505134;
        case 0x505138u: goto label_505138;
        case 0x50513cu: goto label_50513c;
        case 0x505140u: goto label_505140;
        case 0x505144u: goto label_505144;
        case 0x505148u: goto label_505148;
        case 0x50514cu: goto label_50514c;
        case 0x505150u: goto label_505150;
        case 0x505154u: goto label_505154;
        case 0x505158u: goto label_505158;
        case 0x50515cu: goto label_50515c;
        case 0x505160u: goto label_505160;
        case 0x505164u: goto label_505164;
        case 0x505168u: goto label_505168;
        case 0x50516cu: goto label_50516c;
        case 0x505170u: goto label_505170;
        case 0x505174u: goto label_505174;
        case 0x505178u: goto label_505178;
        case 0x50517cu: goto label_50517c;
        case 0x505180u: goto label_505180;
        case 0x505184u: goto label_505184;
        case 0x505188u: goto label_505188;
        case 0x50518cu: goto label_50518c;
        case 0x505190u: goto label_505190;
        case 0x505194u: goto label_505194;
        case 0x505198u: goto label_505198;
        case 0x50519cu: goto label_50519c;
        case 0x5051a0u: goto label_5051a0;
        case 0x5051a4u: goto label_5051a4;
        case 0x5051a8u: goto label_5051a8;
        case 0x5051acu: goto label_5051ac;
        case 0x5051b0u: goto label_5051b0;
        case 0x5051b4u: goto label_5051b4;
        case 0x5051b8u: goto label_5051b8;
        case 0x5051bcu: goto label_5051bc;
        case 0x5051c0u: goto label_5051c0;
        case 0x5051c4u: goto label_5051c4;
        case 0x5051c8u: goto label_5051c8;
        case 0x5051ccu: goto label_5051cc;
        case 0x5051d0u: goto label_5051d0;
        case 0x5051d4u: goto label_5051d4;
        case 0x5051d8u: goto label_5051d8;
        case 0x5051dcu: goto label_5051dc;
        case 0x5051e0u: goto label_5051e0;
        case 0x5051e4u: goto label_5051e4;
        case 0x5051e8u: goto label_5051e8;
        case 0x5051ecu: goto label_5051ec;
        case 0x5051f0u: goto label_5051f0;
        case 0x5051f4u: goto label_5051f4;
        case 0x5051f8u: goto label_5051f8;
        case 0x5051fcu: goto label_5051fc;
        case 0x505200u: goto label_505200;
        case 0x505204u: goto label_505204;
        case 0x505208u: goto label_505208;
        case 0x50520cu: goto label_50520c;
        case 0x505210u: goto label_505210;
        case 0x505214u: goto label_505214;
        case 0x505218u: goto label_505218;
        case 0x50521cu: goto label_50521c;
        case 0x505220u: goto label_505220;
        case 0x505224u: goto label_505224;
        case 0x505228u: goto label_505228;
        case 0x50522cu: goto label_50522c;
        case 0x505230u: goto label_505230;
        case 0x505234u: goto label_505234;
        case 0x505238u: goto label_505238;
        case 0x50523cu: goto label_50523c;
        case 0x505240u: goto label_505240;
        case 0x505244u: goto label_505244;
        case 0x505248u: goto label_505248;
        case 0x50524cu: goto label_50524c;
        case 0x505250u: goto label_505250;
        case 0x505254u: goto label_505254;
        case 0x505258u: goto label_505258;
        case 0x50525cu: goto label_50525c;
        case 0x505260u: goto label_505260;
        case 0x505264u: goto label_505264;
        case 0x505268u: goto label_505268;
        case 0x50526cu: goto label_50526c;
        case 0x505270u: goto label_505270;
        case 0x505274u: goto label_505274;
        case 0x505278u: goto label_505278;
        case 0x50527cu: goto label_50527c;
        case 0x505280u: goto label_505280;
        case 0x505284u: goto label_505284;
        case 0x505288u: goto label_505288;
        case 0x50528cu: goto label_50528c;
        case 0x505290u: goto label_505290;
        case 0x505294u: goto label_505294;
        case 0x505298u: goto label_505298;
        case 0x50529cu: goto label_50529c;
        case 0x5052a0u: goto label_5052a0;
        case 0x5052a4u: goto label_5052a4;
        case 0x5052a8u: goto label_5052a8;
        case 0x5052acu: goto label_5052ac;
        case 0x5052b0u: goto label_5052b0;
        case 0x5052b4u: goto label_5052b4;
        case 0x5052b8u: goto label_5052b8;
        case 0x5052bcu: goto label_5052bc;
        case 0x5052c0u: goto label_5052c0;
        case 0x5052c4u: goto label_5052c4;
        case 0x5052c8u: goto label_5052c8;
        case 0x5052ccu: goto label_5052cc;
        case 0x5052d0u: goto label_5052d0;
        case 0x5052d4u: goto label_5052d4;
        case 0x5052d8u: goto label_5052d8;
        case 0x5052dcu: goto label_5052dc;
        case 0x5052e0u: goto label_5052e0;
        case 0x5052e4u: goto label_5052e4;
        case 0x5052e8u: goto label_5052e8;
        case 0x5052ecu: goto label_5052ec;
        case 0x5052f0u: goto label_5052f0;
        case 0x5052f4u: goto label_5052f4;
        case 0x5052f8u: goto label_5052f8;
        case 0x5052fcu: goto label_5052fc;
        case 0x505300u: goto label_505300;
        case 0x505304u: goto label_505304;
        case 0x505308u: goto label_505308;
        case 0x50530cu: goto label_50530c;
        case 0x505310u: goto label_505310;
        case 0x505314u: goto label_505314;
        case 0x505318u: goto label_505318;
        case 0x50531cu: goto label_50531c;
        case 0x505320u: goto label_505320;
        case 0x505324u: goto label_505324;
        case 0x505328u: goto label_505328;
        case 0x50532cu: goto label_50532c;
        case 0x505330u: goto label_505330;
        case 0x505334u: goto label_505334;
        case 0x505338u: goto label_505338;
        case 0x50533cu: goto label_50533c;
        case 0x505340u: goto label_505340;
        case 0x505344u: goto label_505344;
        case 0x505348u: goto label_505348;
        case 0x50534cu: goto label_50534c;
        case 0x505350u: goto label_505350;
        case 0x505354u: goto label_505354;
        case 0x505358u: goto label_505358;
        case 0x50535cu: goto label_50535c;
        case 0x505360u: goto label_505360;
        case 0x505364u: goto label_505364;
        case 0x505368u: goto label_505368;
        case 0x50536cu: goto label_50536c;
        case 0x505370u: goto label_505370;
        case 0x505374u: goto label_505374;
        case 0x505378u: goto label_505378;
        case 0x50537cu: goto label_50537c;
        case 0x505380u: goto label_505380;
        case 0x505384u: goto label_505384;
        case 0x505388u: goto label_505388;
        case 0x50538cu: goto label_50538c;
        case 0x505390u: goto label_505390;
        case 0x505394u: goto label_505394;
        case 0x505398u: goto label_505398;
        case 0x50539cu: goto label_50539c;
        case 0x5053a0u: goto label_5053a0;
        case 0x5053a4u: goto label_5053a4;
        case 0x5053a8u: goto label_5053a8;
        case 0x5053acu: goto label_5053ac;
        case 0x5053b0u: goto label_5053b0;
        case 0x5053b4u: goto label_5053b4;
        case 0x5053b8u: goto label_5053b8;
        case 0x5053bcu: goto label_5053bc;
        case 0x5053c0u: goto label_5053c0;
        case 0x5053c4u: goto label_5053c4;
        case 0x5053c8u: goto label_5053c8;
        case 0x5053ccu: goto label_5053cc;
        case 0x5053d0u: goto label_5053d0;
        case 0x5053d4u: goto label_5053d4;
        case 0x5053d8u: goto label_5053d8;
        case 0x5053dcu: goto label_5053dc;
        case 0x5053e0u: goto label_5053e0;
        case 0x5053e4u: goto label_5053e4;
        case 0x5053e8u: goto label_5053e8;
        case 0x5053ecu: goto label_5053ec;
        case 0x5053f0u: goto label_5053f0;
        case 0x5053f4u: goto label_5053f4;
        case 0x5053f8u: goto label_5053f8;
        case 0x5053fcu: goto label_5053fc;
        case 0x505400u: goto label_505400;
        case 0x505404u: goto label_505404;
        case 0x505408u: goto label_505408;
        case 0x50540cu: goto label_50540c;
        case 0x505410u: goto label_505410;
        case 0x505414u: goto label_505414;
        case 0x505418u: goto label_505418;
        case 0x50541cu: goto label_50541c;
        case 0x505420u: goto label_505420;
        case 0x505424u: goto label_505424;
        case 0x505428u: goto label_505428;
        case 0x50542cu: goto label_50542c;
        case 0x505430u: goto label_505430;
        case 0x505434u: goto label_505434;
        case 0x505438u: goto label_505438;
        case 0x50543cu: goto label_50543c;
        case 0x505440u: goto label_505440;
        case 0x505444u: goto label_505444;
        case 0x505448u: goto label_505448;
        case 0x50544cu: goto label_50544c;
        case 0x505450u: goto label_505450;
        case 0x505454u: goto label_505454;
        case 0x505458u: goto label_505458;
        case 0x50545cu: goto label_50545c;
        case 0x505460u: goto label_505460;
        case 0x505464u: goto label_505464;
        case 0x505468u: goto label_505468;
        case 0x50546cu: goto label_50546c;
        case 0x505470u: goto label_505470;
        case 0x505474u: goto label_505474;
        case 0x505478u: goto label_505478;
        case 0x50547cu: goto label_50547c;
        case 0x505480u: goto label_505480;
        case 0x505484u: goto label_505484;
        case 0x505488u: goto label_505488;
        case 0x50548cu: goto label_50548c;
        case 0x505490u: goto label_505490;
        case 0x505494u: goto label_505494;
        case 0x505498u: goto label_505498;
        case 0x50549cu: goto label_50549c;
        case 0x5054a0u: goto label_5054a0;
        case 0x5054a4u: goto label_5054a4;
        case 0x5054a8u: goto label_5054a8;
        case 0x5054acu: goto label_5054ac;
        case 0x5054b0u: goto label_5054b0;
        case 0x5054b4u: goto label_5054b4;
        case 0x5054b8u: goto label_5054b8;
        case 0x5054bcu: goto label_5054bc;
        case 0x5054c0u: goto label_5054c0;
        case 0x5054c4u: goto label_5054c4;
        case 0x5054c8u: goto label_5054c8;
        case 0x5054ccu: goto label_5054cc;
        case 0x5054d0u: goto label_5054d0;
        case 0x5054d4u: goto label_5054d4;
        case 0x5054d8u: goto label_5054d8;
        case 0x5054dcu: goto label_5054dc;
        case 0x5054e0u: goto label_5054e0;
        case 0x5054e4u: goto label_5054e4;
        case 0x5054e8u: goto label_5054e8;
        case 0x5054ecu: goto label_5054ec;
        case 0x5054f0u: goto label_5054f0;
        case 0x5054f4u: goto label_5054f4;
        case 0x5054f8u: goto label_5054f8;
        case 0x5054fcu: goto label_5054fc;
        case 0x505500u: goto label_505500;
        case 0x505504u: goto label_505504;
        case 0x505508u: goto label_505508;
        case 0x50550cu: goto label_50550c;
        case 0x505510u: goto label_505510;
        case 0x505514u: goto label_505514;
        case 0x505518u: goto label_505518;
        case 0x50551cu: goto label_50551c;
        case 0x505520u: goto label_505520;
        case 0x505524u: goto label_505524;
        case 0x505528u: goto label_505528;
        case 0x50552cu: goto label_50552c;
        case 0x505530u: goto label_505530;
        case 0x505534u: goto label_505534;
        case 0x505538u: goto label_505538;
        case 0x50553cu: goto label_50553c;
        case 0x505540u: goto label_505540;
        case 0x505544u: goto label_505544;
        case 0x505548u: goto label_505548;
        case 0x50554cu: goto label_50554c;
        case 0x505550u: goto label_505550;
        case 0x505554u: goto label_505554;
        case 0x505558u: goto label_505558;
        case 0x50555cu: goto label_50555c;
        case 0x505560u: goto label_505560;
        case 0x505564u: goto label_505564;
        case 0x505568u: goto label_505568;
        case 0x50556cu: goto label_50556c;
        case 0x505570u: goto label_505570;
        case 0x505574u: goto label_505574;
        case 0x505578u: goto label_505578;
        case 0x50557cu: goto label_50557c;
        case 0x505580u: goto label_505580;
        case 0x505584u: goto label_505584;
        case 0x505588u: goto label_505588;
        case 0x50558cu: goto label_50558c;
        case 0x505590u: goto label_505590;
        case 0x505594u: goto label_505594;
        case 0x505598u: goto label_505598;
        case 0x50559cu: goto label_50559c;
        case 0x5055a0u: goto label_5055a0;
        case 0x5055a4u: goto label_5055a4;
        case 0x5055a8u: goto label_5055a8;
        case 0x5055acu: goto label_5055ac;
        case 0x5055b0u: goto label_5055b0;
        case 0x5055b4u: goto label_5055b4;
        case 0x5055b8u: goto label_5055b8;
        case 0x5055bcu: goto label_5055bc;
        case 0x5055c0u: goto label_5055c0;
        case 0x5055c4u: goto label_5055c4;
        case 0x5055c8u: goto label_5055c8;
        case 0x5055ccu: goto label_5055cc;
        case 0x5055d0u: goto label_5055d0;
        case 0x5055d4u: goto label_5055d4;
        case 0x5055d8u: goto label_5055d8;
        case 0x5055dcu: goto label_5055dc;
        case 0x5055e0u: goto label_5055e0;
        case 0x5055e4u: goto label_5055e4;
        case 0x5055e8u: goto label_5055e8;
        case 0x5055ecu: goto label_5055ec;
        case 0x5055f0u: goto label_5055f0;
        case 0x5055f4u: goto label_5055f4;
        case 0x5055f8u: goto label_5055f8;
        case 0x5055fcu: goto label_5055fc;
        case 0x505600u: goto label_505600;
        case 0x505604u: goto label_505604;
        case 0x505608u: goto label_505608;
        case 0x50560cu: goto label_50560c;
        case 0x505610u: goto label_505610;
        case 0x505614u: goto label_505614;
        case 0x505618u: goto label_505618;
        case 0x50561cu: goto label_50561c;
        case 0x505620u: goto label_505620;
        case 0x505624u: goto label_505624;
        case 0x505628u: goto label_505628;
        case 0x50562cu: goto label_50562c;
        case 0x505630u: goto label_505630;
        case 0x505634u: goto label_505634;
        case 0x505638u: goto label_505638;
        case 0x50563cu: goto label_50563c;
        case 0x505640u: goto label_505640;
        case 0x505644u: goto label_505644;
        case 0x505648u: goto label_505648;
        case 0x50564cu: goto label_50564c;
        case 0x505650u: goto label_505650;
        case 0x505654u: goto label_505654;
        case 0x505658u: goto label_505658;
        case 0x50565cu: goto label_50565c;
        case 0x505660u: goto label_505660;
        case 0x505664u: goto label_505664;
        case 0x505668u: goto label_505668;
        case 0x50566cu: goto label_50566c;
        case 0x505670u: goto label_505670;
        case 0x505674u: goto label_505674;
        case 0x505678u: goto label_505678;
        case 0x50567cu: goto label_50567c;
        case 0x505680u: goto label_505680;
        case 0x505684u: goto label_505684;
        case 0x505688u: goto label_505688;
        case 0x50568cu: goto label_50568c;
        case 0x505690u: goto label_505690;
        case 0x505694u: goto label_505694;
        case 0x505698u: goto label_505698;
        case 0x50569cu: goto label_50569c;
        case 0x5056a0u: goto label_5056a0;
        case 0x5056a4u: goto label_5056a4;
        case 0x5056a8u: goto label_5056a8;
        case 0x5056acu: goto label_5056ac;
        case 0x5056b0u: goto label_5056b0;
        case 0x5056b4u: goto label_5056b4;
        case 0x5056b8u: goto label_5056b8;
        case 0x5056bcu: goto label_5056bc;
        case 0x5056c0u: goto label_5056c0;
        case 0x5056c4u: goto label_5056c4;
        case 0x5056c8u: goto label_5056c8;
        case 0x5056ccu: goto label_5056cc;
        case 0x5056d0u: goto label_5056d0;
        case 0x5056d4u: goto label_5056d4;
        case 0x5056d8u: goto label_5056d8;
        case 0x5056dcu: goto label_5056dc;
        case 0x5056e0u: goto label_5056e0;
        case 0x5056e4u: goto label_5056e4;
        case 0x5056e8u: goto label_5056e8;
        case 0x5056ecu: goto label_5056ec;
        case 0x5056f0u: goto label_5056f0;
        case 0x5056f4u: goto label_5056f4;
        case 0x5056f8u: goto label_5056f8;
        case 0x5056fcu: goto label_5056fc;
        case 0x505700u: goto label_505700;
        case 0x505704u: goto label_505704;
        case 0x505708u: goto label_505708;
        case 0x50570cu: goto label_50570c;
        case 0x505710u: goto label_505710;
        case 0x505714u: goto label_505714;
        case 0x505718u: goto label_505718;
        case 0x50571cu: goto label_50571c;
        case 0x505720u: goto label_505720;
        case 0x505724u: goto label_505724;
        case 0x505728u: goto label_505728;
        case 0x50572cu: goto label_50572c;
        case 0x505730u: goto label_505730;
        case 0x505734u: goto label_505734;
        case 0x505738u: goto label_505738;
        case 0x50573cu: goto label_50573c;
        case 0x505740u: goto label_505740;
        case 0x505744u: goto label_505744;
        case 0x505748u: goto label_505748;
        case 0x50574cu: goto label_50574c;
        case 0x505750u: goto label_505750;
        case 0x505754u: goto label_505754;
        case 0x505758u: goto label_505758;
        case 0x50575cu: goto label_50575c;
        case 0x505760u: goto label_505760;
        case 0x505764u: goto label_505764;
        case 0x505768u: goto label_505768;
        case 0x50576cu: goto label_50576c;
        case 0x505770u: goto label_505770;
        case 0x505774u: goto label_505774;
        case 0x505778u: goto label_505778;
        case 0x50577cu: goto label_50577c;
        case 0x505780u: goto label_505780;
        case 0x505784u: goto label_505784;
        case 0x505788u: goto label_505788;
        case 0x50578cu: goto label_50578c;
        case 0x505790u: goto label_505790;
        case 0x505794u: goto label_505794;
        case 0x505798u: goto label_505798;
        case 0x50579cu: goto label_50579c;
        case 0x5057a0u: goto label_5057a0;
        case 0x5057a4u: goto label_5057a4;
        case 0x5057a8u: goto label_5057a8;
        case 0x5057acu: goto label_5057ac;
        case 0x5057b0u: goto label_5057b0;
        case 0x5057b4u: goto label_5057b4;
        case 0x5057b8u: goto label_5057b8;
        case 0x5057bcu: goto label_5057bc;
        case 0x5057c0u: goto label_5057c0;
        case 0x5057c4u: goto label_5057c4;
        case 0x5057c8u: goto label_5057c8;
        case 0x5057ccu: goto label_5057cc;
        case 0x5057d0u: goto label_5057d0;
        case 0x5057d4u: goto label_5057d4;
        case 0x5057d8u: goto label_5057d8;
        case 0x5057dcu: goto label_5057dc;
        case 0x5057e0u: goto label_5057e0;
        case 0x5057e4u: goto label_5057e4;
        case 0x5057e8u: goto label_5057e8;
        case 0x5057ecu: goto label_5057ec;
        case 0x5057f0u: goto label_5057f0;
        case 0x5057f4u: goto label_5057f4;
        case 0x5057f8u: goto label_5057f8;
        case 0x5057fcu: goto label_5057fc;
        case 0x505800u: goto label_505800;
        case 0x505804u: goto label_505804;
        case 0x505808u: goto label_505808;
        case 0x50580cu: goto label_50580c;
        case 0x505810u: goto label_505810;
        case 0x505814u: goto label_505814;
        case 0x505818u: goto label_505818;
        case 0x50581cu: goto label_50581c;
        case 0x505820u: goto label_505820;
        case 0x505824u: goto label_505824;
        case 0x505828u: goto label_505828;
        case 0x50582cu: goto label_50582c;
        case 0x505830u: goto label_505830;
        case 0x505834u: goto label_505834;
        case 0x505838u: goto label_505838;
        case 0x50583cu: goto label_50583c;
        case 0x505840u: goto label_505840;
        case 0x505844u: goto label_505844;
        case 0x505848u: goto label_505848;
        case 0x50584cu: goto label_50584c;
        case 0x505850u: goto label_505850;
        case 0x505854u: goto label_505854;
        case 0x505858u: goto label_505858;
        case 0x50585cu: goto label_50585c;
        case 0x505860u: goto label_505860;
        case 0x505864u: goto label_505864;
        case 0x505868u: goto label_505868;
        case 0x50586cu: goto label_50586c;
        case 0x505870u: goto label_505870;
        case 0x505874u: goto label_505874;
        case 0x505878u: goto label_505878;
        case 0x50587cu: goto label_50587c;
        case 0x505880u: goto label_505880;
        case 0x505884u: goto label_505884;
        case 0x505888u: goto label_505888;
        case 0x50588cu: goto label_50588c;
        case 0x505890u: goto label_505890;
        case 0x505894u: goto label_505894;
        case 0x505898u: goto label_505898;
        case 0x50589cu: goto label_50589c;
        case 0x5058a0u: goto label_5058a0;
        case 0x5058a4u: goto label_5058a4;
        case 0x5058a8u: goto label_5058a8;
        case 0x5058acu: goto label_5058ac;
        case 0x5058b0u: goto label_5058b0;
        case 0x5058b4u: goto label_5058b4;
        case 0x5058b8u: goto label_5058b8;
        case 0x5058bcu: goto label_5058bc;
        case 0x5058c0u: goto label_5058c0;
        case 0x5058c4u: goto label_5058c4;
        case 0x5058c8u: goto label_5058c8;
        case 0x5058ccu: goto label_5058cc;
        case 0x5058d0u: goto label_5058d0;
        case 0x5058d4u: goto label_5058d4;
        case 0x5058d8u: goto label_5058d8;
        case 0x5058dcu: goto label_5058dc;
        case 0x5058e0u: goto label_5058e0;
        case 0x5058e4u: goto label_5058e4;
        case 0x5058e8u: goto label_5058e8;
        case 0x5058ecu: goto label_5058ec;
        case 0x5058f0u: goto label_5058f0;
        case 0x5058f4u: goto label_5058f4;
        case 0x5058f8u: goto label_5058f8;
        case 0x5058fcu: goto label_5058fc;
        case 0x505900u: goto label_505900;
        case 0x505904u: goto label_505904;
        case 0x505908u: goto label_505908;
        case 0x50590cu: goto label_50590c;
        case 0x505910u: goto label_505910;
        case 0x505914u: goto label_505914;
        case 0x505918u: goto label_505918;
        case 0x50591cu: goto label_50591c;
        case 0x505920u: goto label_505920;
        case 0x505924u: goto label_505924;
        case 0x505928u: goto label_505928;
        case 0x50592cu: goto label_50592c;
        case 0x505930u: goto label_505930;
        case 0x505934u: goto label_505934;
        case 0x505938u: goto label_505938;
        case 0x50593cu: goto label_50593c;
        case 0x505940u: goto label_505940;
        case 0x505944u: goto label_505944;
        case 0x505948u: goto label_505948;
        case 0x50594cu: goto label_50594c;
        case 0x505950u: goto label_505950;
        case 0x505954u: goto label_505954;
        case 0x505958u: goto label_505958;
        case 0x50595cu: goto label_50595c;
        case 0x505960u: goto label_505960;
        case 0x505964u: goto label_505964;
        case 0x505968u: goto label_505968;
        case 0x50596cu: goto label_50596c;
        case 0x505970u: goto label_505970;
        case 0x505974u: goto label_505974;
        case 0x505978u: goto label_505978;
        case 0x50597cu: goto label_50597c;
        case 0x505980u: goto label_505980;
        case 0x505984u: goto label_505984;
        case 0x505988u: goto label_505988;
        case 0x50598cu: goto label_50598c;
        case 0x505990u: goto label_505990;
        case 0x505994u: goto label_505994;
        case 0x505998u: goto label_505998;
        case 0x50599cu: goto label_50599c;
        case 0x5059a0u: goto label_5059a0;
        case 0x5059a4u: goto label_5059a4;
        case 0x5059a8u: goto label_5059a8;
        case 0x5059acu: goto label_5059ac;
        case 0x5059b0u: goto label_5059b0;
        case 0x5059b4u: goto label_5059b4;
        case 0x5059b8u: goto label_5059b8;
        case 0x5059bcu: goto label_5059bc;
        case 0x5059c0u: goto label_5059c0;
        case 0x5059c4u: goto label_5059c4;
        case 0x5059c8u: goto label_5059c8;
        case 0x5059ccu: goto label_5059cc;
        case 0x5059d0u: goto label_5059d0;
        case 0x5059d4u: goto label_5059d4;
        case 0x5059d8u: goto label_5059d8;
        case 0x5059dcu: goto label_5059dc;
        case 0x5059e0u: goto label_5059e0;
        case 0x5059e4u: goto label_5059e4;
        case 0x5059e8u: goto label_5059e8;
        case 0x5059ecu: goto label_5059ec;
        case 0x5059f0u: goto label_5059f0;
        case 0x5059f4u: goto label_5059f4;
        case 0x5059f8u: goto label_5059f8;
        case 0x5059fcu: goto label_5059fc;
        case 0x505a00u: goto label_505a00;
        case 0x505a04u: goto label_505a04;
        case 0x505a08u: goto label_505a08;
        case 0x505a0cu: goto label_505a0c;
        case 0x505a10u: goto label_505a10;
        case 0x505a14u: goto label_505a14;
        case 0x505a18u: goto label_505a18;
        case 0x505a1cu: goto label_505a1c;
        case 0x505a20u: goto label_505a20;
        case 0x505a24u: goto label_505a24;
        case 0x505a28u: goto label_505a28;
        case 0x505a2cu: goto label_505a2c;
        case 0x505a30u: goto label_505a30;
        case 0x505a34u: goto label_505a34;
        case 0x505a38u: goto label_505a38;
        case 0x505a3cu: goto label_505a3c;
        case 0x505a40u: goto label_505a40;
        case 0x505a44u: goto label_505a44;
        case 0x505a48u: goto label_505a48;
        case 0x505a4cu: goto label_505a4c;
        case 0x505a50u: goto label_505a50;
        case 0x505a54u: goto label_505a54;
        case 0x505a58u: goto label_505a58;
        case 0x505a5cu: goto label_505a5c;
        case 0x505a60u: goto label_505a60;
        case 0x505a64u: goto label_505a64;
        case 0x505a68u: goto label_505a68;
        case 0x505a6cu: goto label_505a6c;
        case 0x505a70u: goto label_505a70;
        case 0x505a74u: goto label_505a74;
        case 0x505a78u: goto label_505a78;
        case 0x505a7cu: goto label_505a7c;
        case 0x505a80u: goto label_505a80;
        case 0x505a84u: goto label_505a84;
        case 0x505a88u: goto label_505a88;
        case 0x505a8cu: goto label_505a8c;
        case 0x505a90u: goto label_505a90;
        case 0x505a94u: goto label_505a94;
        case 0x505a98u: goto label_505a98;
        case 0x505a9cu: goto label_505a9c;
        case 0x505aa0u: goto label_505aa0;
        case 0x505aa4u: goto label_505aa4;
        case 0x505aa8u: goto label_505aa8;
        case 0x505aacu: goto label_505aac;
        case 0x505ab0u: goto label_505ab0;
        case 0x505ab4u: goto label_505ab4;
        case 0x505ab8u: goto label_505ab8;
        case 0x505abcu: goto label_505abc;
        case 0x505ac0u: goto label_505ac0;
        case 0x505ac4u: goto label_505ac4;
        case 0x505ac8u: goto label_505ac8;
        case 0x505accu: goto label_505acc;
        case 0x505ad0u: goto label_505ad0;
        case 0x505ad4u: goto label_505ad4;
        case 0x505ad8u: goto label_505ad8;
        case 0x505adcu: goto label_505adc;
        case 0x505ae0u: goto label_505ae0;
        case 0x505ae4u: goto label_505ae4;
        case 0x505ae8u: goto label_505ae8;
        case 0x505aecu: goto label_505aec;
        case 0x505af0u: goto label_505af0;
        case 0x505af4u: goto label_505af4;
        case 0x505af8u: goto label_505af8;
        case 0x505afcu: goto label_505afc;
        case 0x505b00u: goto label_505b00;
        case 0x505b04u: goto label_505b04;
        case 0x505b08u: goto label_505b08;
        case 0x505b0cu: goto label_505b0c;
        case 0x505b10u: goto label_505b10;
        case 0x505b14u: goto label_505b14;
        case 0x505b18u: goto label_505b18;
        case 0x505b1cu: goto label_505b1c;
        case 0x505b20u: goto label_505b20;
        case 0x505b24u: goto label_505b24;
        case 0x505b28u: goto label_505b28;
        case 0x505b2cu: goto label_505b2c;
        case 0x505b30u: goto label_505b30;
        case 0x505b34u: goto label_505b34;
        case 0x505b38u: goto label_505b38;
        case 0x505b3cu: goto label_505b3c;
        case 0x505b40u: goto label_505b40;
        case 0x505b44u: goto label_505b44;
        case 0x505b48u: goto label_505b48;
        case 0x505b4cu: goto label_505b4c;
        case 0x505b50u: goto label_505b50;
        case 0x505b54u: goto label_505b54;
        case 0x505b58u: goto label_505b58;
        case 0x505b5cu: goto label_505b5c;
        case 0x505b60u: goto label_505b60;
        case 0x505b64u: goto label_505b64;
        case 0x505b68u: goto label_505b68;
        case 0x505b6cu: goto label_505b6c;
        case 0x505b70u: goto label_505b70;
        case 0x505b74u: goto label_505b74;
        case 0x505b78u: goto label_505b78;
        case 0x505b7cu: goto label_505b7c;
        case 0x505b80u: goto label_505b80;
        case 0x505b84u: goto label_505b84;
        case 0x505b88u: goto label_505b88;
        case 0x505b8cu: goto label_505b8c;
        case 0x505b90u: goto label_505b90;
        case 0x505b94u: goto label_505b94;
        case 0x505b98u: goto label_505b98;
        case 0x505b9cu: goto label_505b9c;
        case 0x505ba0u: goto label_505ba0;
        case 0x505ba4u: goto label_505ba4;
        case 0x505ba8u: goto label_505ba8;
        case 0x505bacu: goto label_505bac;
        case 0x505bb0u: goto label_505bb0;
        case 0x505bb4u: goto label_505bb4;
        case 0x505bb8u: goto label_505bb8;
        case 0x505bbcu: goto label_505bbc;
        case 0x505bc0u: goto label_505bc0;
        case 0x505bc4u: goto label_505bc4;
        case 0x505bc8u: goto label_505bc8;
        case 0x505bccu: goto label_505bcc;
        case 0x505bd0u: goto label_505bd0;
        case 0x505bd4u: goto label_505bd4;
        case 0x505bd8u: goto label_505bd8;
        case 0x505bdcu: goto label_505bdc;
        case 0x505be0u: goto label_505be0;
        case 0x505be4u: goto label_505be4;
        case 0x505be8u: goto label_505be8;
        case 0x505becu: goto label_505bec;
        case 0x505bf0u: goto label_505bf0;
        case 0x505bf4u: goto label_505bf4;
        case 0x505bf8u: goto label_505bf8;
        case 0x505bfcu: goto label_505bfc;
        case 0x505c00u: goto label_505c00;
        case 0x505c04u: goto label_505c04;
        case 0x505c08u: goto label_505c08;
        case 0x505c0cu: goto label_505c0c;
        case 0x505c10u: goto label_505c10;
        case 0x505c14u: goto label_505c14;
        case 0x505c18u: goto label_505c18;
        case 0x505c1cu: goto label_505c1c;
        case 0x505c20u: goto label_505c20;
        case 0x505c24u: goto label_505c24;
        case 0x505c28u: goto label_505c28;
        case 0x505c2cu: goto label_505c2c;
        case 0x505c30u: goto label_505c30;
        case 0x505c34u: goto label_505c34;
        case 0x505c38u: goto label_505c38;
        case 0x505c3cu: goto label_505c3c;
        case 0x505c40u: goto label_505c40;
        case 0x505c44u: goto label_505c44;
        case 0x505c48u: goto label_505c48;
        case 0x505c4cu: goto label_505c4c;
        case 0x505c50u: goto label_505c50;
        case 0x505c54u: goto label_505c54;
        case 0x505c58u: goto label_505c58;
        case 0x505c5cu: goto label_505c5c;
        case 0x505c60u: goto label_505c60;
        case 0x505c64u: goto label_505c64;
        case 0x505c68u: goto label_505c68;
        case 0x505c6cu: goto label_505c6c;
        case 0x505c70u: goto label_505c70;
        case 0x505c74u: goto label_505c74;
        case 0x505c78u: goto label_505c78;
        case 0x505c7cu: goto label_505c7c;
        case 0x505c80u: goto label_505c80;
        case 0x505c84u: goto label_505c84;
        case 0x505c88u: goto label_505c88;
        case 0x505c8cu: goto label_505c8c;
        case 0x505c90u: goto label_505c90;
        case 0x505c94u: goto label_505c94;
        case 0x505c98u: goto label_505c98;
        case 0x505c9cu: goto label_505c9c;
        case 0x505ca0u: goto label_505ca0;
        case 0x505ca4u: goto label_505ca4;
        case 0x505ca8u: goto label_505ca8;
        case 0x505cacu: goto label_505cac;
        case 0x505cb0u: goto label_505cb0;
        case 0x505cb4u: goto label_505cb4;
        case 0x505cb8u: goto label_505cb8;
        case 0x505cbcu: goto label_505cbc;
        case 0x505cc0u: goto label_505cc0;
        case 0x505cc4u: goto label_505cc4;
        case 0x505cc8u: goto label_505cc8;
        case 0x505cccu: goto label_505ccc;
        case 0x505cd0u: goto label_505cd0;
        case 0x505cd4u: goto label_505cd4;
        case 0x505cd8u: goto label_505cd8;
        case 0x505cdcu: goto label_505cdc;
        case 0x505ce0u: goto label_505ce0;
        case 0x505ce4u: goto label_505ce4;
        case 0x505ce8u: goto label_505ce8;
        case 0x505cecu: goto label_505cec;
        case 0x505cf0u: goto label_505cf0;
        case 0x505cf4u: goto label_505cf4;
        case 0x505cf8u: goto label_505cf8;
        case 0x505cfcu: goto label_505cfc;
        case 0x505d00u: goto label_505d00;
        case 0x505d04u: goto label_505d04;
        case 0x505d08u: goto label_505d08;
        case 0x505d0cu: goto label_505d0c;
        case 0x505d10u: goto label_505d10;
        case 0x505d14u: goto label_505d14;
        case 0x505d18u: goto label_505d18;
        case 0x505d1cu: goto label_505d1c;
        case 0x505d20u: goto label_505d20;
        case 0x505d24u: goto label_505d24;
        case 0x505d28u: goto label_505d28;
        case 0x505d2cu: goto label_505d2c;
        case 0x505d30u: goto label_505d30;
        case 0x505d34u: goto label_505d34;
        case 0x505d38u: goto label_505d38;
        case 0x505d3cu: goto label_505d3c;
        case 0x505d40u: goto label_505d40;
        case 0x505d44u: goto label_505d44;
        case 0x505d48u: goto label_505d48;
        case 0x505d4cu: goto label_505d4c;
        case 0x505d50u: goto label_505d50;
        case 0x505d54u: goto label_505d54;
        case 0x505d58u: goto label_505d58;
        case 0x505d5cu: goto label_505d5c;
        case 0x505d60u: goto label_505d60;
        case 0x505d64u: goto label_505d64;
        case 0x505d68u: goto label_505d68;
        case 0x505d6cu: goto label_505d6c;
        case 0x505d70u: goto label_505d70;
        case 0x505d74u: goto label_505d74;
        case 0x505d78u: goto label_505d78;
        case 0x505d7cu: goto label_505d7c;
        case 0x505d80u: goto label_505d80;
        case 0x505d84u: goto label_505d84;
        case 0x505d88u: goto label_505d88;
        case 0x505d8cu: goto label_505d8c;
        case 0x505d90u: goto label_505d90;
        case 0x505d94u: goto label_505d94;
        case 0x505d98u: goto label_505d98;
        case 0x505d9cu: goto label_505d9c;
        case 0x505da0u: goto label_505da0;
        case 0x505da4u: goto label_505da4;
        case 0x505da8u: goto label_505da8;
        case 0x505dacu: goto label_505dac;
        case 0x505db0u: goto label_505db0;
        case 0x505db4u: goto label_505db4;
        case 0x505db8u: goto label_505db8;
        case 0x505dbcu: goto label_505dbc;
        case 0x505dc0u: goto label_505dc0;
        case 0x505dc4u: goto label_505dc4;
        case 0x505dc8u: goto label_505dc8;
        case 0x505dccu: goto label_505dcc;
        case 0x505dd0u: goto label_505dd0;
        case 0x505dd4u: goto label_505dd4;
        case 0x505dd8u: goto label_505dd8;
        case 0x505ddcu: goto label_505ddc;
        case 0x505de0u: goto label_505de0;
        case 0x505de4u: goto label_505de4;
        case 0x505de8u: goto label_505de8;
        case 0x505decu: goto label_505dec;
        case 0x505df0u: goto label_505df0;
        case 0x505df4u: goto label_505df4;
        case 0x505df8u: goto label_505df8;
        case 0x505dfcu: goto label_505dfc;
        case 0x505e00u: goto label_505e00;
        case 0x505e04u: goto label_505e04;
        case 0x505e08u: goto label_505e08;
        case 0x505e0cu: goto label_505e0c;
        case 0x505e10u: goto label_505e10;
        case 0x505e14u: goto label_505e14;
        case 0x505e18u: goto label_505e18;
        case 0x505e1cu: goto label_505e1c;
        case 0x505e20u: goto label_505e20;
        case 0x505e24u: goto label_505e24;
        case 0x505e28u: goto label_505e28;
        case 0x505e2cu: goto label_505e2c;
        case 0x505e30u: goto label_505e30;
        case 0x505e34u: goto label_505e34;
        case 0x505e38u: goto label_505e38;
        case 0x505e3cu: goto label_505e3c;
        case 0x505e40u: goto label_505e40;
        case 0x505e44u: goto label_505e44;
        case 0x505e48u: goto label_505e48;
        case 0x505e4cu: goto label_505e4c;
        case 0x505e50u: goto label_505e50;
        case 0x505e54u: goto label_505e54;
        case 0x505e58u: goto label_505e58;
        case 0x505e5cu: goto label_505e5c;
        case 0x505e60u: goto label_505e60;
        case 0x505e64u: goto label_505e64;
        case 0x505e68u: goto label_505e68;
        case 0x505e6cu: goto label_505e6c;
        case 0x505e70u: goto label_505e70;
        case 0x505e74u: goto label_505e74;
        case 0x505e78u: goto label_505e78;
        case 0x505e7cu: goto label_505e7c;
        case 0x505e80u: goto label_505e80;
        case 0x505e84u: goto label_505e84;
        case 0x505e88u: goto label_505e88;
        case 0x505e8cu: goto label_505e8c;
        case 0x505e90u: goto label_505e90;
        case 0x505e94u: goto label_505e94;
        case 0x505e98u: goto label_505e98;
        case 0x505e9cu: goto label_505e9c;
        case 0x505ea0u: goto label_505ea0;
        case 0x505ea4u: goto label_505ea4;
        case 0x505ea8u: goto label_505ea8;
        case 0x505eacu: goto label_505eac;
        case 0x505eb0u: goto label_505eb0;
        case 0x505eb4u: goto label_505eb4;
        case 0x505eb8u: goto label_505eb8;
        case 0x505ebcu: goto label_505ebc;
        case 0x505ec0u: goto label_505ec0;
        case 0x505ec4u: goto label_505ec4;
        case 0x505ec8u: goto label_505ec8;
        case 0x505eccu: goto label_505ecc;
        case 0x505ed0u: goto label_505ed0;
        case 0x505ed4u: goto label_505ed4;
        case 0x505ed8u: goto label_505ed8;
        case 0x505edcu: goto label_505edc;
        case 0x505ee0u: goto label_505ee0;
        case 0x505ee4u: goto label_505ee4;
        case 0x505ee8u: goto label_505ee8;
        case 0x505eecu: goto label_505eec;
        case 0x505ef0u: goto label_505ef0;
        case 0x505ef4u: goto label_505ef4;
        case 0x505ef8u: goto label_505ef8;
        case 0x505efcu: goto label_505efc;
        case 0x505f00u: goto label_505f00;
        case 0x505f04u: goto label_505f04;
        case 0x505f08u: goto label_505f08;
        case 0x505f0cu: goto label_505f0c;
        case 0x505f10u: goto label_505f10;
        case 0x505f14u: goto label_505f14;
        case 0x505f18u: goto label_505f18;
        case 0x505f1cu: goto label_505f1c;
        case 0x505f20u: goto label_505f20;
        case 0x505f24u: goto label_505f24;
        case 0x505f28u: goto label_505f28;
        case 0x505f2cu: goto label_505f2c;
        case 0x505f30u: goto label_505f30;
        case 0x505f34u: goto label_505f34;
        case 0x505f38u: goto label_505f38;
        case 0x505f3cu: goto label_505f3c;
        case 0x505f40u: goto label_505f40;
        case 0x505f44u: goto label_505f44;
        case 0x505f48u: goto label_505f48;
        case 0x505f4cu: goto label_505f4c;
        case 0x505f50u: goto label_505f50;
        case 0x505f54u: goto label_505f54;
        case 0x505f58u: goto label_505f58;
        case 0x505f5cu: goto label_505f5c;
        case 0x505f60u: goto label_505f60;
        case 0x505f64u: goto label_505f64;
        case 0x505f68u: goto label_505f68;
        case 0x505f6cu: goto label_505f6c;
        case 0x505f70u: goto label_505f70;
        case 0x505f74u: goto label_505f74;
        case 0x505f78u: goto label_505f78;
        case 0x505f7cu: goto label_505f7c;
        case 0x505f80u: goto label_505f80;
        case 0x505f84u: goto label_505f84;
        case 0x505f88u: goto label_505f88;
        case 0x505f8cu: goto label_505f8c;
        case 0x505f90u: goto label_505f90;
        case 0x505f94u: goto label_505f94;
        case 0x505f98u: goto label_505f98;
        case 0x505f9cu: goto label_505f9c;
        case 0x505fa0u: goto label_505fa0;
        case 0x505fa4u: goto label_505fa4;
        case 0x505fa8u: goto label_505fa8;
        case 0x505facu: goto label_505fac;
        case 0x505fb0u: goto label_505fb0;
        case 0x505fb4u: goto label_505fb4;
        case 0x505fb8u: goto label_505fb8;
        case 0x505fbcu: goto label_505fbc;
        case 0x505fc0u: goto label_505fc0;
        case 0x505fc4u: goto label_505fc4;
        case 0x505fc8u: goto label_505fc8;
        case 0x505fccu: goto label_505fcc;
        case 0x505fd0u: goto label_505fd0;
        case 0x505fd4u: goto label_505fd4;
        case 0x505fd8u: goto label_505fd8;
        case 0x505fdcu: goto label_505fdc;
        case 0x505fe0u: goto label_505fe0;
        case 0x505fe4u: goto label_505fe4;
        case 0x505fe8u: goto label_505fe8;
        case 0x505fecu: goto label_505fec;
        case 0x505ff0u: goto label_505ff0;
        case 0x505ff4u: goto label_505ff4;
        case 0x505ff8u: goto label_505ff8;
        case 0x505ffcu: goto label_505ffc;
        case 0x506000u: goto label_506000;
        case 0x506004u: goto label_506004;
        case 0x506008u: goto label_506008;
        case 0x50600cu: goto label_50600c;
        case 0x506010u: goto label_506010;
        case 0x506014u: goto label_506014;
        case 0x506018u: goto label_506018;
        case 0x50601cu: goto label_50601c;
        case 0x506020u: goto label_506020;
        case 0x506024u: goto label_506024;
        case 0x506028u: goto label_506028;
        case 0x50602cu: goto label_50602c;
        case 0x506030u: goto label_506030;
        case 0x506034u: goto label_506034;
        case 0x506038u: goto label_506038;
        case 0x50603cu: goto label_50603c;
        case 0x506040u: goto label_506040;
        case 0x506044u: goto label_506044;
        case 0x506048u: goto label_506048;
        case 0x50604cu: goto label_50604c;
        case 0x506050u: goto label_506050;
        case 0x506054u: goto label_506054;
        case 0x506058u: goto label_506058;
        case 0x50605cu: goto label_50605c;
        case 0x506060u: goto label_506060;
        case 0x506064u: goto label_506064;
        case 0x506068u: goto label_506068;
        case 0x50606cu: goto label_50606c;
        case 0x506070u: goto label_506070;
        case 0x506074u: goto label_506074;
        case 0x506078u: goto label_506078;
        case 0x50607cu: goto label_50607c;
        case 0x506080u: goto label_506080;
        case 0x506084u: goto label_506084;
        case 0x506088u: goto label_506088;
        case 0x50608cu: goto label_50608c;
        case 0x506090u: goto label_506090;
        case 0x506094u: goto label_506094;
        case 0x506098u: goto label_506098;
        case 0x50609cu: goto label_50609c;
        case 0x5060a0u: goto label_5060a0;
        case 0x5060a4u: goto label_5060a4;
        case 0x5060a8u: goto label_5060a8;
        case 0x5060acu: goto label_5060ac;
        case 0x5060b0u: goto label_5060b0;
        case 0x5060b4u: goto label_5060b4;
        case 0x5060b8u: goto label_5060b8;
        case 0x5060bcu: goto label_5060bc;
        case 0x5060c0u: goto label_5060c0;
        case 0x5060c4u: goto label_5060c4;
        case 0x5060c8u: goto label_5060c8;
        case 0x5060ccu: goto label_5060cc;
        case 0x5060d0u: goto label_5060d0;
        case 0x5060d4u: goto label_5060d4;
        case 0x5060d8u: goto label_5060d8;
        case 0x5060dcu: goto label_5060dc;
        case 0x5060e0u: goto label_5060e0;
        case 0x5060e4u: goto label_5060e4;
        case 0x5060e8u: goto label_5060e8;
        case 0x5060ecu: goto label_5060ec;
        default: break;
    }

    ctx->pc = 0x504f60u;

label_504f60:
    // 0x504f60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x504f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_504f64:
    // 0x504f64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x504f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_504f68:
    // 0x504f68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x504f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_504f6c:
    // 0x504f6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x504f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_504f70:
    // 0x504f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x504f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_504f74:
    // 0x504f74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x504f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_504f78:
    // 0x504f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x504f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_504f7c:
    // 0x504f7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x504f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_504f80:
    // 0x504f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_504f84:
    // 0x504f84: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x504f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_504f88:
    // 0x504f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504f8c:
    // 0x504f8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x504f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_504f90:
    // 0x504f90: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x504f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_504f94:
    // 0x504f94: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
label_504f98:
    if (ctx->pc == 0x504F98u) {
        ctx->pc = 0x504F98u;
            // 0x504f98: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504F9Cu;
        goto label_504f9c;
    }
    ctx->pc = 0x504F94u;
    {
        const bool branch_taken_0x504f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x504F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504F94u;
            // 0x504f98: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504f94) {
            ctx->pc = 0x5051C0u;
            goto label_5051c0;
        }
    }
    ctx->pc = 0x504F9Cu;
label_504f9c:
    // 0x504f9c: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x504f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_504fa0:
    // 0x504fa0: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x504fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_504fa4:
    // 0x504fa4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x504fa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_504fa8:
    // 0x504fa8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_504fac:
    if (ctx->pc == 0x504FACu) {
        ctx->pc = 0x504FB0u;
        goto label_504fb0;
    }
    ctx->pc = 0x504FA8u;
    {
        const bool branch_taken_0x504fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x504fa8) {
            ctx->pc = 0x504FBCu;
            goto label_504fbc;
        }
    }
    ctx->pc = 0x504FB0u;
label_504fb0:
    // 0x504fb0: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x504fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_504fb4:
    // 0x504fb4: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x504fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_504fb8:
    // 0x504fb8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x504fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_504fbc:
    // 0x504fbc: 0x50600081  beql        $v1, $zero, . + 4 + (0x81 << 2)
label_504fc0:
    if (ctx->pc == 0x504FC0u) {
        ctx->pc = 0x504FC0u;
            // 0x504fc0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x504FC4u;
        goto label_504fc4;
    }
    ctx->pc = 0x504FBCu;
    {
        const bool branch_taken_0x504fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x504fbc) {
            ctx->pc = 0x504FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504FBCu;
            // 0x504fc0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5051C4u;
            goto label_5051c4;
        }
    }
    ctx->pc = 0x504FC4u;
label_504fc4:
    // 0x504fc4: 0x8e8400e4  lw          $a0, 0xE4($s4)
    ctx->pc = 0x504fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_504fc8:
    // 0x504fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x504fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_504fcc:
    // 0x504fcc: 0x1483007c  bne         $a0, $v1, . + 4 + (0x7C << 2)
label_504fd0:
    if (ctx->pc == 0x504FD0u) {
        ctx->pc = 0x504FD4u;
        goto label_504fd4;
    }
    ctx->pc = 0x504FCCu;
    {
        const bool branch_taken_0x504fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x504fcc) {
            ctx->pc = 0x5051C0u;
            goto label_5051c0;
        }
    }
    ctx->pc = 0x504FD4u;
label_504fd4:
    // 0x504fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_504fd8:
    // 0x504fd8: 0xc04f278  jal         func_13C9E0
label_504fdc:
    if (ctx->pc == 0x504FDCu) {
        ctx->pc = 0x504FDCu;
            // 0x504fdc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x504FE0u;
        goto label_504fe0;
    }
    ctx->pc = 0x504FD8u;
    SET_GPR_U32(ctx, 31, 0x504FE0u);
    ctx->pc = 0x504FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504FD8u;
            // 0x504fdc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504FE0u; }
        if (ctx->pc != 0x504FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504FE0u; }
        if (ctx->pc != 0x504FE0u) { return; }
    }
    ctx->pc = 0x504FE0u;
label_504fe0:
    // 0x504fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_504fe4:
    // 0x504fe4: 0xc04ce80  jal         func_133A00
label_504fe8:
    if (ctx->pc == 0x504FE8u) {
        ctx->pc = 0x504FE8u;
            // 0x504fe8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x504FECu;
        goto label_504fec;
    }
    ctx->pc = 0x504FE4u;
    SET_GPR_U32(ctx, 31, 0x504FECu);
    ctx->pc = 0x504FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504FE4u;
            // 0x504fe8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504FECu; }
        if (ctx->pc != 0x504FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504FECu; }
        if (ctx->pc != 0x504FECu) { return; }
    }
    ctx->pc = 0x504FECu;
label_504fec:
    // 0x504fec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x504fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_504ff0:
    // 0x504ff0: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x504ff0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_504ff4:
    // 0x504ff4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x504ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_504ff8:
    // 0x504ff8: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x504ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_504ffc:
    // 0x504ffc: 0xc07698c  jal         func_1DA630
label_505000:
    if (ctx->pc == 0x505000u) {
        ctx->pc = 0x505000u;
            // 0x505000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505004u;
        goto label_505004;
    }
    ctx->pc = 0x504FFCu;
    SET_GPR_U32(ctx, 31, 0x505004u);
    ctx->pc = 0x505000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504FFCu;
            // 0x505000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505004u; }
        if (ctx->pc != 0x505004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505004u; }
        if (ctx->pc != 0x505004u) { return; }
    }
    ctx->pc = 0x505004u;
label_505004:
    // 0x505004: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x505004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_505008:
    // 0x505008: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_50500c:
    if (ctx->pc == 0x50500Cu) {
        ctx->pc = 0x505010u;
        goto label_505010;
    }
    ctx->pc = 0x505008u;
    {
        const bool branch_taken_0x505008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x505008) {
            ctx->pc = 0x505018u;
            goto label_505018;
        }
    }
    ctx->pc = 0x505010u;
label_505010:
    // 0x505010: 0x10000033  b           . + 4 + (0x33 << 2)
label_505014:
    if (ctx->pc == 0x505014u) {
        ctx->pc = 0x505014u;
            // 0x505014: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x505018u;
        goto label_505018;
    }
    ctx->pc = 0x505010u;
    {
        const bool branch_taken_0x505010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505010u;
            // 0x505014: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505010) {
            ctx->pc = 0x5050E0u;
            goto label_5050e0;
        }
    }
    ctx->pc = 0x505018u;
label_505018:
    // 0x505018: 0xc0576f4  jal         func_15DBD0
label_50501c:
    if (ctx->pc == 0x50501Cu) {
        ctx->pc = 0x505020u;
        goto label_505020;
    }
    ctx->pc = 0x505018u;
    SET_GPR_U32(ctx, 31, 0x505020u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505020u; }
        if (ctx->pc != 0x505020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505020u; }
        if (ctx->pc != 0x505020u) { return; }
    }
    ctx->pc = 0x505020u;
label_505020:
    // 0x505020: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x505020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_505024:
    // 0x505024: 0xc076984  jal         func_1DA610
label_505028:
    if (ctx->pc == 0x505028u) {
        ctx->pc = 0x505028u;
            // 0x505028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50502Cu;
        goto label_50502c;
    }
    ctx->pc = 0x505024u;
    SET_GPR_U32(ctx, 31, 0x50502Cu);
    ctx->pc = 0x505028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505024u;
            // 0x505028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50502Cu; }
        if (ctx->pc != 0x50502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50502Cu; }
        if (ctx->pc != 0x50502Cu) { return; }
    }
    ctx->pc = 0x50502Cu;
label_50502c:
    // 0x50502c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x50502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_505030:
    // 0x505030: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x505030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_505034:
    // 0x505034: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x505034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_505038:
    // 0x505038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x505038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50503c:
    // 0x50503c: 0xc442cc90  lwc1        $f2, -0x3370($v0)
    ctx->pc = 0x50503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_505040:
    // 0x505040: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x505040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505044:
    // 0x505044: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x505044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_505048:
    // 0x505048: 0xc441cc98  lwc1        $f1, -0x3368($v0)
    ctx->pc = 0x505048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50504c:
    // 0x50504c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x50504cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_505050:
    // 0x505050: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x505050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_505054:
    // 0x505054: 0xc440cc9c  lwc1        $f0, -0x3364($v0)
    ctx->pc = 0x505054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_505058:
    // 0x505058: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x505058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_50505c:
    // 0x50505c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_505060:
    // 0x505060: 0x8c42cc94  lw          $v0, -0x336C($v0)
    ctx->pc = 0x505060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954132)));
label_505064:
    // 0x505064: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x505064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_505068:
    // 0x505068: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x505068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_50506c:
    // 0x50506c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x50506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_505070:
    // 0x505070: 0xc04cca0  jal         func_133280
label_505074:
    if (ctx->pc == 0x505074u) {
        ctx->pc = 0x505074u;
            // 0x505074: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x505078u;
        goto label_505078;
    }
    ctx->pc = 0x505070u;
    SET_GPR_U32(ctx, 31, 0x505078u);
    ctx->pc = 0x505074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505070u;
            // 0x505074: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505078u; }
        if (ctx->pc != 0x505078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505078u; }
        if (ctx->pc != 0x505078u) { return; }
    }
    ctx->pc = 0x505078u;
label_505078:
    // 0x505078: 0xc076980  jal         func_1DA600
label_50507c:
    if (ctx->pc == 0x50507Cu) {
        ctx->pc = 0x50507Cu;
            // 0x50507c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505080u;
        goto label_505080;
    }
    ctx->pc = 0x505078u;
    SET_GPR_U32(ctx, 31, 0x505080u);
    ctx->pc = 0x50507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505078u;
            // 0x50507c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505080u; }
        if (ctx->pc != 0x505080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505080u; }
        if (ctx->pc != 0x505080u) { return; }
    }
    ctx->pc = 0x505080u;
label_505080:
    // 0x505080: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x505080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_505084:
    // 0x505084: 0xc04cc34  jal         func_1330D0
label_505088:
    if (ctx->pc == 0x505088u) {
        ctx->pc = 0x505088u;
            // 0x505088: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50508Cu;
        goto label_50508c;
    }
    ctx->pc = 0x505084u;
    SET_GPR_U32(ctx, 31, 0x50508Cu);
    ctx->pc = 0x505088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505084u;
            // 0x505088: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50508Cu; }
        if (ctx->pc != 0x50508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50508Cu; }
        if (ctx->pc != 0x50508Cu) { return; }
    }
    ctx->pc = 0x50508Cu;
label_50508c:
    // 0x50508c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_505090:
    // 0x505090: 0xc461b110  lwc1        $f1, -0x4EF0($v1)
    ctx->pc = 0x505090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_505094:
    // 0x505094: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x505094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_505098:
    // 0x505098: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50509c:
    if (ctx->pc == 0x50509Cu) {
        ctx->pc = 0x50509Cu;
            // 0x50509c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5050A0u;
        goto label_5050a0;
    }
    ctx->pc = 0x505098u;
    {
        const bool branch_taken_0x505098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x505098) {
            ctx->pc = 0x50509Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505098u;
            // 0x50509c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5050A8u;
            goto label_5050a8;
        }
    }
    ctx->pc = 0x5050A0u;
label_5050a0:
    // 0x5050a0: 0x1000000f  b           . + 4 + (0xF << 2)
label_5050a4:
    if (ctx->pc == 0x5050A4u) {
        ctx->pc = 0x5050A4u;
            // 0x5050a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5050A8u;
        goto label_5050a8;
    }
    ctx->pc = 0x5050A0u;
    {
        const bool branch_taken_0x5050a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5050A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5050A0u;
            // 0x5050a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5050a0) {
            ctx->pc = 0x5050E0u;
            goto label_5050e0;
        }
    }
    ctx->pc = 0x5050A8u;
label_5050a8:
    // 0x5050a8: 0xc07697c  jal         func_1DA5F0
label_5050ac:
    if (ctx->pc == 0x5050ACu) {
        ctx->pc = 0x5050B0u;
        goto label_5050b0;
    }
    ctx->pc = 0x5050A8u;
    SET_GPR_U32(ctx, 31, 0x5050B0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050B0u; }
        if (ctx->pc != 0x5050B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050B0u; }
        if (ctx->pc != 0x5050B0u) { return; }
    }
    ctx->pc = 0x5050B0u;
label_5050b0:
    // 0x5050b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5050b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5050b4:
    // 0x5050b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5050b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5050b8:
    // 0x5050b8: 0xc04cd60  jal         func_133580
label_5050bc:
    if (ctx->pc == 0x5050BCu) {
        ctx->pc = 0x5050BCu;
            // 0x5050bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5050C0u;
        goto label_5050c0;
    }
    ctx->pc = 0x5050B8u;
    SET_GPR_U32(ctx, 31, 0x5050C0u);
    ctx->pc = 0x5050BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5050B8u;
            // 0x5050bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050C0u; }
        if (ctx->pc != 0x5050C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050C0u; }
        if (ctx->pc != 0x5050C0u) { return; }
    }
    ctx->pc = 0x5050C0u;
label_5050c0:
    // 0x5050c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5050c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5050c4:
    // 0x5050c4: 0xc04c650  jal         func_131940
label_5050c8:
    if (ctx->pc == 0x5050C8u) {
        ctx->pc = 0x5050C8u;
            // 0x5050c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5050CCu;
        goto label_5050cc;
    }
    ctx->pc = 0x5050C4u;
    SET_GPR_U32(ctx, 31, 0x5050CCu);
    ctx->pc = 0x5050C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5050C4u;
            // 0x5050c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050CCu; }
        if (ctx->pc != 0x5050CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5050CCu; }
        if (ctx->pc != 0x5050CCu) { return; }
    }
    ctx->pc = 0x5050CCu;
label_5050cc:
    // 0x5050cc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5050ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5050d0:
    // 0x5050d0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x5050d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5050d4:
    // 0x5050d4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x5050d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_5050d8:
    // 0x5050d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5050d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5050dc:
    // 0x5050dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5050dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5050e0:
    // 0x5050e0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x5050e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_5050e4:
    // 0x5050e4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_5050e8:
    if (ctx->pc == 0x5050E8u) {
        ctx->pc = 0x5050E8u;
            // 0x5050e8: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x5050ECu;
        goto label_5050ec;
    }
    ctx->pc = 0x5050E4u;
    {
        const bool branch_taken_0x5050e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5050E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5050E4u;
            // 0x5050e8: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5050e4) {
            ctx->pc = 0x5051C0u;
            goto label_5051c0;
        }
    }
    ctx->pc = 0x5050ECu;
label_5050ec:
    // 0x5050ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5050ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5050f0:
    // 0x5050f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5050f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5050f4:
    // 0x5050f4: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x5050f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5050f8:
    // 0x5050f8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x5050f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_5050fc:
    // 0x5050fc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x5050fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_505100:
    // 0x505100: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505104:
    // 0x505104: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x505104u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_505108:
    // 0x505108: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x505108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_50510c:
    // 0x50510c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505110:
    // 0x505110: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x505110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_505114:
    // 0x505114: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x505114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_505118:
    // 0x505118: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x505118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_50511c:
    // 0x50511c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50511cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505120:
    // 0x505120: 0x869021  addu        $s2, $a0, $a2
    ctx->pc = 0x505120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_505124:
    // 0x505124: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x505124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_505128:
    // 0x505128: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x505128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50512c:
    // 0x50512c: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x50512cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_505130:
    // 0x505130: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x505130u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_505134:
    // 0x505134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505138:
    // 0x505138: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x505138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_50513c:
    // 0x50513c: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x50513cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_505140:
    // 0x505140: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x505140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_505144:
    // 0x505144: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x505144u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_505148:
    // 0x505148: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x505148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_50514c:
    // 0x50514c: 0x12aa821  addu        $s5, $t1, $t2
    ctx->pc = 0x50514cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_505150:
    // 0x505150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x505150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505154:
    // 0x505154: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x505154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_505158:
    // 0x505158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50515c:
    // 0x50515c: 0xad350000  sw          $s5, 0x0($t1)
    ctx->pc = 0x50515cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
label_505160:
    // 0x505160: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x505160u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_505164:
    // 0x505164: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x505164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_505168:
    // 0x505168: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x505168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_50516c:
    // 0x50516c: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x50516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_505170:
    // 0x505170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x505170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_505174:
    // 0x505174: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x505174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_505178:
    // 0x505178: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x505178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_50517c:
    // 0x50517c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x50517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_505180:
    // 0x505180: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x505180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_505184:
    // 0x505184: 0xc04e4a4  jal         func_139290
label_505188:
    if (ctx->pc == 0x505188u) {
        ctx->pc = 0x505188u;
            // 0x505188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50518Cu;
        goto label_50518c;
    }
    ctx->pc = 0x505184u;
    SET_GPR_U32(ctx, 31, 0x50518Cu);
    ctx->pc = 0x505188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505184u;
            // 0x505188: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50518Cu; }
        if (ctx->pc != 0x50518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50518Cu; }
        if (ctx->pc != 0x50518Cu) { return; }
    }
    ctx->pc = 0x50518Cu;
label_50518c:
    // 0x50518c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_505190:
    // 0x505190: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x505190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505194:
    // 0x505194: 0xc04cd60  jal         func_133580
label_505198:
    if (ctx->pc == 0x505198u) {
        ctx->pc = 0x505198u;
            // 0x505198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50519Cu;
        goto label_50519c;
    }
    ctx->pc = 0x505194u;
    SET_GPR_U32(ctx, 31, 0x50519Cu);
    ctx->pc = 0x505198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505194u;
            // 0x505198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50519Cu; }
        if (ctx->pc != 0x50519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50519Cu; }
        if (ctx->pc != 0x50519Cu) { return; }
    }
    ctx->pc = 0x50519Cu;
label_50519c:
    // 0x50519c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x50519cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5051a0:
    // 0x5051a0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5051a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5051a4:
    // 0x5051a4: 0x320f809  jalr        $t9
label_5051a8:
    if (ctx->pc == 0x5051A8u) {
        ctx->pc = 0x5051A8u;
            // 0x5051a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5051ACu;
        goto label_5051ac;
    }
    ctx->pc = 0x5051A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5051ACu);
        ctx->pc = 0x5051A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5051A4u;
            // 0x5051a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5051ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5051ACu; }
            if (ctx->pc != 0x5051ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5051ACu;
label_5051ac:
    // 0x5051ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x5051acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5051b0:
    // 0x5051b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5051b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5051b4:
    // 0x5051b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5051b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5051b8:
    // 0x5051b8: 0xc054fd4  jal         func_153F50
label_5051bc:
    if (ctx->pc == 0x5051BCu) {
        ctx->pc = 0x5051BCu;
            // 0x5051bc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5051C0u;
        goto label_5051c0;
    }
    ctx->pc = 0x5051B8u;
    SET_GPR_U32(ctx, 31, 0x5051C0u);
    ctx->pc = 0x5051BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5051B8u;
            // 0x5051bc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5051C0u; }
        if (ctx->pc != 0x5051C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5051C0u; }
        if (ctx->pc != 0x5051C0u) { return; }
    }
    ctx->pc = 0x5051C0u;
label_5051c0:
    // 0x5051c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5051c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_5051c4:
    // 0x5051c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5051c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5051c8:
    // 0x5051c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5051c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5051cc:
    // 0x5051cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5051ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5051d0:
    // 0x5051d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5051d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5051d4:
    // 0x5051d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5051d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5051d8:
    // 0x5051d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5051d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5051dc:
    // 0x5051dc: 0x3e00008  jr          $ra
label_5051e0:
    if (ctx->pc == 0x5051E0u) {
        ctx->pc = 0x5051E0u;
            // 0x5051e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5051E4u;
        goto label_5051e4;
    }
    ctx->pc = 0x5051DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5051E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5051DCu;
            // 0x5051e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5051E4u;
label_5051e4:
    // 0x5051e4: 0x0  nop
    ctx->pc = 0x5051e4u;
    // NOP
label_5051e8:
    // 0x5051e8: 0x0  nop
    ctx->pc = 0x5051e8u;
    // NOP
label_5051ec:
    // 0x5051ec: 0x0  nop
    ctx->pc = 0x5051ecu;
    // NOP
label_5051f0:
    // 0x5051f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5051f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5051f4:
    // 0x5051f4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5051f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5051f8:
    // 0x5051f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5051f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5051fc:
    // 0x5051fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x5051fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_505200:
    // 0x505200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x505200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_505204:
    // 0x505204: 0x24c6b1a8  addiu       $a2, $a2, -0x4E58
    ctx->pc = 0x505204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947240));
label_505208:
    // 0x505208: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x505208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50520c:
    // 0x50520c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x50520cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_505210:
    // 0x505210: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x505210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_505214:
    // 0x505214: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x505214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_505218:
    // 0x505218: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x505218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_50521c:
    // 0x50521c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x50521cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_505220:
    // 0x505220: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x505220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_505224:
    // 0x505224: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x505224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_505228:
    // 0x505228: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x505228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50522c:
    // 0x50522c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x50522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_505230:
    // 0x505230: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x505230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_505234:
    // 0x505234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x505234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505238:
    // 0x505238: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x505238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_50523c:
    // 0x50523c: 0xc04cafc  jal         func_132BF0
label_505240:
    if (ctx->pc == 0x505240u) {
        ctx->pc = 0x505240u;
            // 0x505240: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x505244u;
        goto label_505244;
    }
    ctx->pc = 0x50523Cu;
    SET_GPR_U32(ctx, 31, 0x505244u);
    ctx->pc = 0x505240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50523Cu;
            // 0x505240: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505244u; }
        if (ctx->pc != 0x505244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505244u; }
        if (ctx->pc != 0x505244u) { return; }
    }
    ctx->pc = 0x505244u;
label_505244:
    // 0x505244: 0xc040180  jal         func_100600
label_505248:
    if (ctx->pc == 0x505248u) {
        ctx->pc = 0x505248u;
            // 0x505248: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x50524Cu;
        goto label_50524c;
    }
    ctx->pc = 0x505244u;
    SET_GPR_U32(ctx, 31, 0x50524Cu);
    ctx->pc = 0x505248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505244u;
            // 0x505248: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50524Cu; }
        if (ctx->pc != 0x50524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50524Cu; }
        if (ctx->pc != 0x50524Cu) { return; }
    }
    ctx->pc = 0x50524Cu;
label_50524c:
    // 0x50524c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_505250:
    // 0x505250: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_505254:
    if (ctx->pc == 0x505254u) {
        ctx->pc = 0x505254u;
            // 0x505254: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x505258u;
        goto label_505258;
    }
    ctx->pc = 0x505250u;
    {
        const bool branch_taken_0x505250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x505250) {
            ctx->pc = 0x505254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505250u;
            // 0x505254: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5052FCu;
            goto label_5052fc;
        }
    }
    ctx->pc = 0x505258u;
label_505258:
    // 0x505258: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x505258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50525c:
    // 0x50525c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x50525cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_505260:
    // 0x505260: 0xc441b1e8  lwc1        $f1, -0x4E18($v0)
    ctx->pc = 0x505260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_505264:
    // 0x505264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x505264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_505268:
    // 0x505268: 0x0  nop
    ctx->pc = 0x505268u;
    // NOP
label_50526c:
    // 0x50526c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50526cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_505270:
    // 0x505270: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_505274:
    if (ctx->pc == 0x505274u) {
        ctx->pc = 0x505274u;
            // 0x505274: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x505278u;
        goto label_505278;
    }
    ctx->pc = 0x505270u;
    {
        const bool branch_taken_0x505270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x505270) {
            ctx->pc = 0x505274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505270u;
            // 0x505274: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x505288u;
            goto label_505288;
        }
    }
    ctx->pc = 0x505278u;
label_505278:
    // 0x505278: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x505278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50527c:
    // 0x50527c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x50527cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_505280:
    // 0x505280: 0x10000006  b           . + 4 + (0x6 << 2)
label_505284:
    if (ctx->pc == 0x505284u) {
        ctx->pc = 0x505288u;
        goto label_505288;
    }
    ctx->pc = 0x505280u;
    {
        const bool branch_taken_0x505280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x505280) {
            ctx->pc = 0x50529Cu;
            goto label_50529c;
        }
    }
    ctx->pc = 0x505288u;
label_505288:
    // 0x505288: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x505288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_50528c:
    // 0x50528c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50528cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_505290:
    // 0x505290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x505290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_505294:
    // 0x505294: 0x0  nop
    ctx->pc = 0x505294u;
    // NOP
label_505298:
    // 0x505298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x505298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_50529c:
    // 0x50529c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50529cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5052a0:
    // 0x5052a0: 0x3c090067  lui         $t1, 0x67
    ctx->pc = 0x5052a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)103 << 16));
label_5052a4:
    // 0x5052a4: 0x2442b1b8  addiu       $v0, $v0, -0x4E48
    ctx->pc = 0x5052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
label_5052a8:
    // 0x5052a8: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x5052a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_5052ac:
    // 0x5052ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x5052acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_5052b0:
    // 0x5052b0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x5052b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_5052b4:
    // 0x5052b4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x5052b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_5052b8:
    // 0x5052b8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x5052b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_5052bc:
    // 0x5052bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5052bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5052c0:
    // 0x5052c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5052c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5052c4:
    // 0x5052c4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x5052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_5052c8:
    // 0x5052c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5052c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5052cc:
    // 0x5052cc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x5052ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5052d0:
    // 0x5052d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x5052d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_5052d4:
    // 0x5052d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x5052d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_5052d8:
    // 0x5052d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x5052d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5052dc:
    // 0x5052dc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x5052dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_5052e0:
    // 0x5052e0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x5052e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_5052e4:
    // 0x5052e4: 0x2529b1c8  addiu       $t1, $t1, -0x4E38
    ctx->pc = 0x5052e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947272));
label_5052e8:
    // 0x5052e8: 0x254ab1d8  addiu       $t2, $t2, -0x4E28
    ctx->pc = 0x5052e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294947288));
label_5052ec:
    // 0x5052ec: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x5052ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_5052f0:
    // 0x5052f0: 0xc0db488  jal         func_36D220
label_5052f4:
    if (ctx->pc == 0x5052F4u) {
        ctx->pc = 0x5052F4u;
            // 0x5052f4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x5052F8u;
        goto label_5052f8;
    }
    ctx->pc = 0x5052F0u;
    SET_GPR_U32(ctx, 31, 0x5052F8u);
    ctx->pc = 0x5052F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5052F0u;
            // 0x5052f4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5052F8u; }
        if (ctx->pc != 0x5052F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5052F8u; }
        if (ctx->pc != 0x5052F8u) { return; }
    }
    ctx->pc = 0x5052F8u;
label_5052f8:
    // 0x5052f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5052f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5052fc:
    // 0x5052fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5052fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_505300:
    // 0x505300: 0x3e00008  jr          $ra
label_505304:
    if (ctx->pc == 0x505304u) {
        ctx->pc = 0x505304u;
            // 0x505304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x505308u;
        goto label_505308;
    }
    ctx->pc = 0x505300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505300u;
            // 0x505304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505308u;
label_505308:
    // 0x505308: 0x0  nop
    ctx->pc = 0x505308u;
    // NOP
label_50530c:
    // 0x50530c: 0x0  nop
    ctx->pc = 0x50530cu;
    // NOP
label_505310:
    // 0x505310: 0x3e00008  jr          $ra
label_505314:
    if (ctx->pc == 0x505314u) {
        ctx->pc = 0x505318u;
        goto label_505318;
    }
    ctx->pc = 0x505310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505318u;
label_505318:
    // 0x505318: 0x0  nop
    ctx->pc = 0x505318u;
    // NOP
label_50531c:
    // 0x50531c: 0x0  nop
    ctx->pc = 0x50531cu;
    // NOP
label_505320:
    // 0x505320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x505320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_505324:
    // 0x505324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x505324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505328:
    // 0x505328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x505328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50532c:
    // 0x50532c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505330:
    // 0x505330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x505330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505334:
    // 0x505334: 0xc0ba938  jal         func_2EA4E0
label_505338:
    if (ctx->pc == 0x505338u) {
        ctx->pc = 0x505338u;
            // 0x505338: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50533Cu;
        goto label_50533c;
    }
    ctx->pc = 0x505334u;
    SET_GPR_U32(ctx, 31, 0x50533Cu);
    ctx->pc = 0x505338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505334u;
            // 0x505338: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50533Cu; }
        if (ctx->pc != 0x50533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50533Cu; }
        if (ctx->pc != 0x50533Cu) { return; }
    }
    ctx->pc = 0x50533Cu;
label_50533c:
    // 0x50533c: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x50533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_505340:
    // 0x505340: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x505340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_505344:
    // 0x505344: 0xc122d2c  jal         func_48B4B0
label_505348:
    if (ctx->pc == 0x505348u) {
        ctx->pc = 0x505348u;
            // 0x505348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50534Cu;
        goto label_50534c;
    }
    ctx->pc = 0x505344u;
    SET_GPR_U32(ctx, 31, 0x50534Cu);
    ctx->pc = 0x505348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505344u;
            // 0x505348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50534Cu; }
        if (ctx->pc != 0x50534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50534Cu; }
        if (ctx->pc != 0x50534Cu) { return; }
    }
    ctx->pc = 0x50534Cu;
label_50534c:
    // 0x50534c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_505350:
    // 0x505350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505354:
    // 0x505354: 0x3e00008  jr          $ra
label_505358:
    if (ctx->pc == 0x505358u) {
        ctx->pc = 0x505358u;
            // 0x505358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50535Cu;
        goto label_50535c;
    }
    ctx->pc = 0x505354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505354u;
            // 0x505358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50535Cu;
label_50535c:
    // 0x50535c: 0x0  nop
    ctx->pc = 0x50535cu;
    // NOP
label_505360:
    // 0x505360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x505360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_505364:
    // 0x505364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x505364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_505368:
    // 0x505368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50536c:
    // 0x50536c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505370:
    // 0x505370: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x505370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_505374:
    // 0x505374: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_505378:
    if (ctx->pc == 0x505378u) {
        ctx->pc = 0x505378u;
            // 0x505378: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x50537Cu;
        goto label_50537c;
    }
    ctx->pc = 0x505374u;
    {
        const bool branch_taken_0x505374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x505374) {
            ctx->pc = 0x505378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505374u;
            // 0x505378: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505390u;
            goto label_505390;
        }
    }
    ctx->pc = 0x50537Cu;
label_50537c:
    // 0x50537c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x50537cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_505380:
    // 0x505380: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x505380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_505384:
    // 0x505384: 0x320f809  jalr        $t9
label_505388:
    if (ctx->pc == 0x505388u) {
        ctx->pc = 0x505388u;
            // 0x505388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50538Cu;
        goto label_50538c;
    }
    ctx->pc = 0x505384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50538Cu);
        ctx->pc = 0x505388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505384u;
            // 0x505388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50538Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50538Cu; }
            if (ctx->pc != 0x50538Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50538Cu;
label_50538c:
    // 0x50538c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x50538cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_505390:
    // 0x505390: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x505390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_505394:
    // 0x505394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_505398:
    if (ctx->pc == 0x505398u) {
        ctx->pc = 0x505398u;
            // 0x505398: 0xae0002c0  sw          $zero, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
        ctx->pc = 0x50539Cu;
        goto label_50539c;
    }
    ctx->pc = 0x505394u;
    {
        const bool branch_taken_0x505394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x505394) {
            ctx->pc = 0x505398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505394u;
            // 0x505398: 0xae0002c0  sw          $zero, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5053B0u;
            goto label_5053b0;
        }
    }
    ctx->pc = 0x50539Cu;
label_50539c:
    // 0x50539c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50539cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5053a0:
    // 0x5053a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5053a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5053a4:
    // 0x5053a4: 0x320f809  jalr        $t9
label_5053a8:
    if (ctx->pc == 0x5053A8u) {
        ctx->pc = 0x5053A8u;
            // 0x5053a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5053ACu;
        goto label_5053ac;
    }
    ctx->pc = 0x5053A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5053ACu);
        ctx->pc = 0x5053A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5053A4u;
            // 0x5053a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5053ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5053ACu; }
            if (ctx->pc != 0x5053ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5053ACu;
label_5053ac:
    // 0x5053ac: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x5053acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
label_5053b0:
    // 0x5053b0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x5053b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5053b4:
    // 0x5053b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5053b8:
    if (ctx->pc == 0x5053B8u) {
        ctx->pc = 0x5053B8u;
            // 0x5053b8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x5053BCu;
        goto label_5053bc;
    }
    ctx->pc = 0x5053B4u;
    {
        const bool branch_taken_0x5053b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5053b4) {
            ctx->pc = 0x5053B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5053B4u;
            // 0x5053b8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5053D0u;
            goto label_5053d0;
        }
    }
    ctx->pc = 0x5053BCu;
label_5053bc:
    // 0x5053bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5053bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5053c0:
    // 0x5053c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5053c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5053c4:
    // 0x5053c4: 0x320f809  jalr        $t9
label_5053c8:
    if (ctx->pc == 0x5053C8u) {
        ctx->pc = 0x5053C8u;
            // 0x5053c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5053CCu;
        goto label_5053cc;
    }
    ctx->pc = 0x5053C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5053CCu);
        ctx->pc = 0x5053C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5053C4u;
            // 0x5053c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5053CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5053CCu; }
            if (ctx->pc != 0x5053CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5053CCu;
label_5053cc:
    // 0x5053cc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5053ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5053d0:
    // 0x5053d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5053d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5053d4:
    // 0x5053d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5053d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5053d8:
    // 0x5053d8: 0x3e00008  jr          $ra
label_5053dc:
    if (ctx->pc == 0x5053DCu) {
        ctx->pc = 0x5053DCu;
            // 0x5053dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5053E0u;
        goto label_5053e0;
    }
    ctx->pc = 0x5053D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5053DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5053D8u;
            // 0x5053dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5053E0u;
label_5053e0:
    // 0x5053e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x5053e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_5053e4:
    // 0x5053e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5053e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5053e8:
    // 0x5053e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5053e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5053ec:
    // 0x5053ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5053ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5053f0:
    // 0x5053f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5053f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5053f4:
    // 0x5053f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5053f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5053f8:
    // 0x5053f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5053f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5053fc:
    // 0x5053fc: 0xc0892d0  jal         func_224B40
label_505400:
    if (ctx->pc == 0x505400u) {
        ctx->pc = 0x505400u;
            // 0x505400: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x505404u;
        goto label_505404;
    }
    ctx->pc = 0x5053FCu;
    SET_GPR_U32(ctx, 31, 0x505404u);
    ctx->pc = 0x505400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5053FCu;
            // 0x505400: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505404u; }
        if (ctx->pc != 0x505404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505404u; }
        if (ctx->pc != 0x505404u) { return; }
    }
    ctx->pc = 0x505404u;
label_505404:
    // 0x505404: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x505404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_505408:
    // 0x505408: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x505408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_50540c:
    // 0x50540c: 0x8c42aaf0  lw          $v0, -0x5510($v0)
    ctx->pc = 0x50540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945520)));
label_505410:
    // 0x505410: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x505410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_505414:
    // 0x505414: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x505414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_505418:
    // 0x505418: 0xc0b6e68  jal         func_2DB9A0
label_50541c:
    if (ctx->pc == 0x50541Cu) {
        ctx->pc = 0x50541Cu;
            // 0x50541c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x505420u;
        goto label_505420;
    }
    ctx->pc = 0x505418u;
    SET_GPR_U32(ctx, 31, 0x505420u);
    ctx->pc = 0x50541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505418u;
            // 0x50541c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505420u; }
        if (ctx->pc != 0x505420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505420u; }
        if (ctx->pc != 0x505420u) { return; }
    }
    ctx->pc = 0x505420u;
label_505420:
    // 0x505420: 0xc0b6dac  jal         func_2DB6B0
label_505424:
    if (ctx->pc == 0x505424u) {
        ctx->pc = 0x505424u;
            // 0x505424: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x505428u;
        goto label_505428;
    }
    ctx->pc = 0x505420u;
    SET_GPR_U32(ctx, 31, 0x505428u);
    ctx->pc = 0x505424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505420u;
            // 0x505424: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505428u; }
        if (ctx->pc != 0x505428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505428u; }
        if (ctx->pc != 0x505428u) { return; }
    }
    ctx->pc = 0x505428u;
label_505428:
    // 0x505428: 0xc0cac94  jal         func_32B250
label_50542c:
    if (ctx->pc == 0x50542Cu) {
        ctx->pc = 0x50542Cu;
            // 0x50542c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x505430u;
        goto label_505430;
    }
    ctx->pc = 0x505428u;
    SET_GPR_U32(ctx, 31, 0x505430u);
    ctx->pc = 0x50542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505428u;
            // 0x50542c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505430u; }
        if (ctx->pc != 0x505430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505430u; }
        if (ctx->pc != 0x505430u) { return; }
    }
    ctx->pc = 0x505430u;
label_505430:
    // 0x505430: 0xc0cac84  jal         func_32B210
label_505434:
    if (ctx->pc == 0x505434u) {
        ctx->pc = 0x505434u;
            // 0x505434: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x505438u;
        goto label_505438;
    }
    ctx->pc = 0x505430u;
    SET_GPR_U32(ctx, 31, 0x505438u);
    ctx->pc = 0x505434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505430u;
            // 0x505434: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505438u; }
        if (ctx->pc != 0x505438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505438u; }
        if (ctx->pc != 0x505438u) { return; }
    }
    ctx->pc = 0x505438u;
label_505438:
    // 0x505438: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x505438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50543c:
    // 0x50543c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x50543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_505440:
    // 0x505440: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x505440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_505444:
    // 0x505444: 0xc0a5a68  jal         func_2969A0
label_505448:
    if (ctx->pc == 0x505448u) {
        ctx->pc = 0x505448u;
            // 0x505448: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50544Cu;
        goto label_50544c;
    }
    ctx->pc = 0x505444u;
    SET_GPR_U32(ctx, 31, 0x50544Cu);
    ctx->pc = 0x505448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505444u;
            // 0x505448: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50544Cu; }
        if (ctx->pc != 0x50544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50544Cu; }
        if (ctx->pc != 0x50544Cu) { return; }
    }
    ctx->pc = 0x50544Cu;
label_50544c:
    // 0x50544c: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x50544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_505450:
    // 0x505450: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x505450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_505454:
    // 0x505454: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x505454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_505458:
    // 0x505458: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x505458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50545c:
    // 0x50545c: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x50545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_505460:
    // 0x505460: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x505460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_505464:
    // 0x505464: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x505464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_505468:
    // 0x505468: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x505468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50546c:
    // 0x50546c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x50546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_505470:
    // 0x505470: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x505470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_505474:
    // 0x505474: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x505474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_505478:
    // 0x505478: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x505478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50547c:
    // 0x50547c: 0xa3a40182  sb          $a0, 0x182($sp)
    ctx->pc = 0x50547cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 4));
label_505480:
    // 0x505480: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x505480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_505484:
    // 0x505484: 0xa3a80180  sb          $t0, 0x180($sp)
    ctx->pc = 0x505484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 8));
label_505488:
    // 0x505488: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x505488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_50548c:
    // 0x50548c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x50548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_505490:
    // 0x505490: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x505490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_505494:
    // 0x505494: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x505494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_505498:
    // 0x505498: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x505498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50549c:
    // 0x50549c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x50549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5054a0:
    // 0x5054a0: 0xc454b0e8  lwc1        $f20, -0x4F18($v0)
    ctx->pc = 0x5054a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5054a4:
    // 0x5054a4: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x5054a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_5054a8:
    // 0x5054a8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x5054a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_5054ac:
    // 0x5054ac: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x5054acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_5054b0:
    // 0x5054b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5054b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5054b4:
    // 0x5054b4: 0xc445b0e8  lwc1        $f5, -0x4F18($v0)
    ctx->pc = 0x5054b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_5054b8:
    // 0x5054b8: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x5054b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5054bc:
    // 0x5054bc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x5054bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5054c0:
    // 0x5054c0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x5054c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5054c4:
    // 0x5054c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x5054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_5054c8:
    // 0x5054c8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x5054c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5054cc:
    // 0x5054cc: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x5054ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_5054d0:
    // 0x5054d0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x5054d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_5054d4:
    // 0x5054d4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5054d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5054d8:
    // 0x5054d8: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x5054d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
label_5054dc:
    // 0x5054dc: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x5054dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_5054e0:
    // 0x5054e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5054e4:
    // 0x5054e4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x5054e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_5054e8:
    // 0x5054e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5054e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5054ec:
    // 0x5054ec: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x5054ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5054f0:
    // 0x5054f0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x5054f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_5054f4:
    // 0x5054f4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x5054f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5054f8:
    // 0x5054f8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x5054f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5054fc:
    // 0x5054fc: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x5054fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_505500:
    // 0x505500: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x505500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_505504:
    // 0x505504: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x505504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_505508:
    // 0x505508: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x505508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50550c:
    // 0x50550c: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x50550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_505510:
    // 0x505510: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x505510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_505514:
    // 0x505514: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x505514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_505518:
    // 0x505518: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x505518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50551c:
    // 0x50551c: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x50551cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_505520:
    // 0x505520: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x505520u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_505524:
    // 0x505524: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x505524u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_505528:
    // 0x505528: 0xe7a50178  swc1        $f5, 0x178($sp)
    ctx->pc = 0x505528u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_50552c:
    // 0x50552c: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x50552cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_505530:
    // 0x505530: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x505530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_505534:
    // 0x505534: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x505534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_505538:
    // 0x505538: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x505538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_50553c:
    // 0x50553c: 0xc0a7a88  jal         func_29EA20
label_505540:
    if (ctx->pc == 0x505540u) {
        ctx->pc = 0x505540u;
            // 0x505540: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x505544u;
        goto label_505544;
    }
    ctx->pc = 0x50553Cu;
    SET_GPR_U32(ctx, 31, 0x505544u);
    ctx->pc = 0x505540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50553Cu;
            // 0x505540: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505544u; }
        if (ctx->pc != 0x505544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505544u; }
        if (ctx->pc != 0x505544u) { return; }
    }
    ctx->pc = 0x505544u;
label_505544:
    // 0x505544: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x505544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_505548:
    // 0x505548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x505548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50554c:
    // 0x50554c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_505550:
    if (ctx->pc == 0x505550u) {
        ctx->pc = 0x505550u;
            // 0x505550: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x505554u;
        goto label_505554;
    }
    ctx->pc = 0x50554Cu;
    {
        const bool branch_taken_0x50554c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x505550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50554Cu;
            // 0x505550: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50554c) {
            ctx->pc = 0x50559Cu;
            goto label_50559c;
        }
    }
    ctx->pc = 0x505554u;
label_505554:
    // 0x505554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x505554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505558:
    // 0x505558: 0xc088ef4  jal         func_223BD0
label_50555c:
    if (ctx->pc == 0x50555Cu) {
        ctx->pc = 0x50555Cu;
            // 0x50555c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x505560u;
        goto label_505560;
    }
    ctx->pc = 0x505558u;
    SET_GPR_U32(ctx, 31, 0x505560u);
    ctx->pc = 0x50555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505558u;
            // 0x50555c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505560u; }
        if (ctx->pc != 0x505560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505560u; }
        if (ctx->pc != 0x505560u) { return; }
    }
    ctx->pc = 0x505560u;
label_505560:
    // 0x505560: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x505560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_505564:
    // 0x505564: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x505564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_505568:
    // 0x505568: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x505568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_50556c:
    // 0x50556c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x50556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_505570:
    // 0x505570: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x505570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_505574:
    // 0x505574: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x505574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_505578:
    // 0x505578: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50557c:
    // 0x50557c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50557cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_505580:
    // 0x505580: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x505580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_505584:
    // 0x505584: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x505584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_505588:
    // 0x505588: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x505588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_50558c:
    // 0x50558c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_505590:
    // 0x505590: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x505590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_505594:
    // 0x505594: 0xc088b38  jal         func_222CE0
label_505598:
    if (ctx->pc == 0x505598u) {
        ctx->pc = 0x505598u;
            // 0x505598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50559Cu;
        goto label_50559c;
    }
    ctx->pc = 0x505594u;
    SET_GPR_U32(ctx, 31, 0x50559Cu);
    ctx->pc = 0x505598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505594u;
            // 0x505598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50559Cu; }
        if (ctx->pc != 0x50559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50559Cu; }
        if (ctx->pc != 0x50559Cu) { return; }
    }
    ctx->pc = 0x50559Cu;
label_50559c:
    // 0x50559c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5055a0:
    // 0x5055a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5055a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5055a4:
    // 0x5055a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5055a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5055a8:
    // 0x5055a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5055a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5055ac:
    // 0x5055ac: 0xc08914c  jal         func_224530
label_5055b0:
    if (ctx->pc == 0x5055B0u) {
        ctx->pc = 0x5055B0u;
            // 0x5055b0: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x5055B4u;
        goto label_5055b4;
    }
    ctx->pc = 0x5055ACu;
    SET_GPR_U32(ctx, 31, 0x5055B4u);
    ctx->pc = 0x5055B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5055ACu;
            // 0x5055b0: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5055B4u; }
        if (ctx->pc != 0x5055B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5055B4u; }
        if (ctx->pc != 0x5055B4u) { return; }
    }
    ctx->pc = 0x5055B4u;
label_5055b4:
    // 0x5055b4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x5055b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5055b8:
    // 0x5055b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5055b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5055bc:
    // 0x5055bc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x5055bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5055c0:
    // 0x5055c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5055c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5055c4:
    // 0x5055c4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x5055c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5055c8:
    // 0x5055c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5055c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5055cc:
    // 0x5055cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x5055ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5055d0:
    // 0x5055d0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x5055d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_5055d4:
    // 0x5055d4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5055d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5055d8:
    // 0x5055d8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x5055d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5055dc:
    // 0x5055dc: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x5055dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5055e0:
    // 0x5055e0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x5055e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5055e4:
    // 0x5055e4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x5055e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5055e8:
    // 0x5055e8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x5055e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5055ec:
    // 0x5055ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x5055ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_5055f0:
    // 0x5055f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x5055f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_5055f4:
    // 0x5055f4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x5055f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_5055f8:
    // 0x5055f8: 0xc0892b0  jal         func_224AC0
label_5055fc:
    if (ctx->pc == 0x5055FCu) {
        ctx->pc = 0x5055FCu;
            // 0x5055fc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x505600u;
        goto label_505600;
    }
    ctx->pc = 0x5055F8u;
    SET_GPR_U32(ctx, 31, 0x505600u);
    ctx->pc = 0x5055FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5055F8u;
            // 0x5055fc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505600u; }
        if (ctx->pc != 0x505600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505600u; }
        if (ctx->pc != 0x505600u) { return; }
    }
    ctx->pc = 0x505600u;
label_505600:
    // 0x505600: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x505600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_505604:
    // 0x505604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x505604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505608:
    // 0x505608: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x505608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_50560c:
    // 0x50560c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x50560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_505610:
    // 0x505610: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x505610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_505614:
    // 0x505614: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x505614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_505618:
    // 0x505618: 0xc0891d8  jal         func_224760
label_50561c:
    if (ctx->pc == 0x50561Cu) {
        ctx->pc = 0x50561Cu;
            // 0x50561c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x505620u;
        goto label_505620;
    }
    ctx->pc = 0x505618u;
    SET_GPR_U32(ctx, 31, 0x505620u);
    ctx->pc = 0x50561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505618u;
            // 0x50561c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505620u; }
        if (ctx->pc != 0x505620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505620u; }
        if (ctx->pc != 0x505620u) { return; }
    }
    ctx->pc = 0x505620u;
label_505620:
    // 0x505620: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x505620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_505624:
    // 0x505624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505628:
    // 0x505628: 0xc460b0e0  lwc1        $f0, -0x4F20($v1)
    ctx->pc = 0x505628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50562c:
    // 0x50562c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505630:
    // 0x505630: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x505630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_505634:
    // 0x505634: 0xe6140158  swc1        $f20, 0x158($s0)
    ctx->pc = 0x505634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_505638:
    // 0x505638: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x505638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50563c:
    // 0x50563c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_505640:
    // 0x505640: 0xc08c164  jal         func_230590
label_505644:
    if (ctx->pc == 0x505644u) {
        ctx->pc = 0x505644u;
            // 0x505644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x505648u;
        goto label_505648;
    }
    ctx->pc = 0x505640u;
    SET_GPR_U32(ctx, 31, 0x505648u);
    ctx->pc = 0x505644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505640u;
            // 0x505644: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505648u; }
        if (ctx->pc != 0x505648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505648u; }
        if (ctx->pc != 0x505648u) { return; }
    }
    ctx->pc = 0x505648u;
label_505648:
    // 0x505648: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x505648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_50564c:
    // 0x50564c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505650:
    // 0x505650: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x505650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_505654:
    // 0x505654: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x505654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_505658:
    // 0x505658: 0xc0a7a88  jal         func_29EA20
label_50565c:
    if (ctx->pc == 0x50565Cu) {
        ctx->pc = 0x50565Cu;
            // 0x50565c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x505660u;
        goto label_505660;
    }
    ctx->pc = 0x505658u;
    SET_GPR_U32(ctx, 31, 0x505660u);
    ctx->pc = 0x50565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505658u;
            // 0x50565c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505660u; }
        if (ctx->pc != 0x505660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505660u; }
        if (ctx->pc != 0x505660u) { return; }
    }
    ctx->pc = 0x505660u;
label_505660:
    // 0x505660: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x505660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_505664:
    // 0x505664: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x505664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_505668:
    // 0x505668: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_50566c:
    if (ctx->pc == 0x50566Cu) {
        ctx->pc = 0x50566Cu;
            // 0x50566c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x505670u;
        goto label_505670;
    }
    ctx->pc = 0x505668u;
    {
        const bool branch_taken_0x505668 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x50566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505668u;
            // 0x50566c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505668) {
            ctx->pc = 0x50568Cu;
            goto label_50568c;
        }
    }
    ctx->pc = 0x505670u;
label_505670:
    // 0x505670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x505670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_505674:
    // 0x505674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x505674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505678:
    // 0x505678: 0xc0869d0  jal         func_21A740
label_50567c:
    if (ctx->pc == 0x50567Cu) {
        ctx->pc = 0x50567Cu;
            // 0x50567c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505680u;
        goto label_505680;
    }
    ctx->pc = 0x505678u;
    SET_GPR_U32(ctx, 31, 0x505680u);
    ctx->pc = 0x50567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505678u;
            // 0x50567c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505680u; }
        if (ctx->pc != 0x505680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505680u; }
        if (ctx->pc != 0x505680u) { return; }
    }
    ctx->pc = 0x505680u;
label_505680:
    // 0x505680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x505680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_505684:
    // 0x505684: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x505684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_505688:
    // 0x505688: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x505688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_50568c:
    // 0x50568c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x50568cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_505690:
    // 0x505690: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505694:
    // 0x505694: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x505694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_505698:
    // 0x505698: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x505698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50569c:
    // 0x50569c: 0xc08c650  jal         func_231940
label_5056a0:
    if (ctx->pc == 0x5056A0u) {
        ctx->pc = 0x5056A0u;
            // 0x5056a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5056A4u;
        goto label_5056a4;
    }
    ctx->pc = 0x50569Cu;
    SET_GPR_U32(ctx, 31, 0x5056A4u);
    ctx->pc = 0x5056A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50569Cu;
            // 0x5056a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5056A4u; }
        if (ctx->pc != 0x5056A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5056A4u; }
        if (ctx->pc != 0x5056A4u) { return; }
    }
    ctx->pc = 0x5056A4u;
label_5056a4:
    // 0x5056a4: 0xc040180  jal         func_100600
label_5056a8:
    if (ctx->pc == 0x5056A8u) {
        ctx->pc = 0x5056A8u;
            // 0x5056a8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x5056ACu;
        goto label_5056ac;
    }
    ctx->pc = 0x5056A4u;
    SET_GPR_U32(ctx, 31, 0x5056ACu);
    ctx->pc = 0x5056A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5056A4u;
            // 0x5056a8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5056ACu; }
        if (ctx->pc != 0x5056ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5056ACu; }
        if (ctx->pc != 0x5056ACu) { return; }
    }
    ctx->pc = 0x5056ACu;
label_5056ac:
    // 0x5056ac: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_5056b0:
    if (ctx->pc == 0x5056B0u) {
        ctx->pc = 0x5056B0u;
            // 0x5056b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5056B4u;
        goto label_5056b4;
    }
    ctx->pc = 0x5056ACu;
    {
        const bool branch_taken_0x5056ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5056B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5056ACu;
            // 0x5056b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5056ac) {
            ctx->pc = 0x50571Cu;
            goto label_50571c;
        }
    }
    ctx->pc = 0x5056B4u;
label_5056b4:
    // 0x5056b4: 0x8e270050  lw          $a3, 0x50($s1)
    ctx->pc = 0x5056b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_5056b8:
    // 0x5056b8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x5056b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_5056bc:
    // 0x5056bc: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x5056bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_5056c0:
    // 0x5056c0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5056c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5056c4:
    // 0x5056c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5056c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5056c8:
    // 0x5056c8: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x5056c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_5056cc:
    // 0x5056cc: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x5056ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_5056d0:
    // 0x5056d0: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x5056d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_5056d4:
    // 0x5056d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x5056d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_5056d8:
    // 0x5056d8: 0x24a5b130  addiu       $a1, $a1, -0x4ED0
    ctx->pc = 0x5056d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947120));
label_5056dc:
    // 0x5056dc: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x5056dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_5056e0:
    // 0x5056e0: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x5056e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_5056e4:
    // 0x5056e4: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x5056e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_5056e8:
    // 0x5056e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x5056e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_5056ec:
    // 0x5056ec: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x5056ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_5056f0:
    // 0x5056f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x5056f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_5056f4:
    // 0x5056f4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x5056f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_5056f8:
    // 0x5056f8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x5056f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_5056fc:
    // 0x5056fc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x5056fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_505700:
    // 0x505700: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x505700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_505704:
    // 0x505704: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x505704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_505708:
    // 0x505708: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x505708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_50570c:
    // 0x50570c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x50570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_505710:
    // 0x505710: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x505710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_505714:
    // 0x505714: 0xc04c968  jal         func_1325A0
label_505718:
    if (ctx->pc == 0x505718u) {
        ctx->pc = 0x505718u;
            // 0x505718: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50571Cu;
        goto label_50571c;
    }
    ctx->pc = 0x505714u;
    SET_GPR_U32(ctx, 31, 0x50571Cu);
    ctx->pc = 0x505718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505714u;
            // 0x505718: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50571Cu; }
        if (ctx->pc != 0x50571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50571Cu; }
        if (ctx->pc != 0x50571Cu) { return; }
    }
    ctx->pc = 0x50571Cu;
label_50571c:
    // 0x50571c: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x50571cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
label_505720:
    // 0x505720: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x505720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_505724:
    // 0x505724: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x505724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_505728:
    // 0x505728: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x505728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_50572c:
    // 0x50572c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_505730:
    // 0x505730: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x505730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_505734:
    // 0x505734: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x505734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
label_505738:
    // 0x505738: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x505738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50573c:
    // 0x50573c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x50573cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_505740:
    // 0x505740: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x505740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_505744:
    // 0x505744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x505744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_505748:
    // 0x505748: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x505748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_50574c:
    // 0x50574c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x50574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_505750:
    // 0x505750: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x505750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_505754:
    // 0x505754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x505754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_505758:
    // 0x505758: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x505758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_50575c:
    // 0x50575c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x50575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_505760:
    // 0x505760: 0xae280080  sw          $t0, 0x80($s1)
    ctx->pc = 0x505760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 8));
label_505764:
    // 0x505764: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x505764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_505768:
    // 0x505768: 0xa2270068  sb          $a3, 0x68($s1)
    ctx->pc = 0x505768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 7));
label_50576c:
    // 0x50576c: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x50576cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_505770:
    // 0x505770: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x505770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_505774:
    // 0x505774: 0xa226006b  sb          $a2, 0x6B($s1)
    ctx->pc = 0x505774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 6));
label_505778:
    // 0x505778: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x505778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_50577c:
    // 0x50577c: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x50577cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_505780:
    // 0x505780: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x505780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_505784:
    // 0x505784: 0xa2260067  sb          $a2, 0x67($s1)
    ctx->pc = 0x505784u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 6));
label_505788:
    // 0x505788: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x505788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_50578c:
    // 0x50578c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x50578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_505790:
    // 0x505790: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x505790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_505794:
    // 0x505794: 0xc040180  jal         func_100600
label_505798:
    if (ctx->pc == 0x505798u) {
        ctx->pc = 0x505798u;
            // 0x505798: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x50579Cu;
        goto label_50579c;
    }
    ctx->pc = 0x505794u;
    SET_GPR_U32(ctx, 31, 0x50579Cu);
    ctx->pc = 0x505798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505794u;
            // 0x505798: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50579Cu; }
        if (ctx->pc != 0x50579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50579Cu; }
        if (ctx->pc != 0x50579Cu) { return; }
    }
    ctx->pc = 0x50579Cu;
label_50579c:
    // 0x50579c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50579cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5057a0:
    // 0x5057a0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_5057a4:
    if (ctx->pc == 0x5057A4u) {
        ctx->pc = 0x5057A4u;
            // 0x5057a4: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->pc = 0x5057A8u;
        goto label_5057a8;
    }
    ctx->pc = 0x5057A0u;
    {
        const bool branch_taken_0x5057a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5057a0) {
            ctx->pc = 0x5057A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5057A0u;
            // 0x5057a4: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5057E0u;
            goto label_5057e0;
        }
    }
    ctx->pc = 0x5057A8u;
label_5057a8:
    // 0x5057a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5057a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5057ac:
    // 0x5057ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5057acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5057b0:
    // 0x5057b0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x5057b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_5057b4:
    // 0x5057b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x5057b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_5057b8:
    // 0x5057b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5057b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5057bc:
    // 0x5057bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x5057bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_5057c0:
    // 0x5057c0: 0xc040138  jal         func_1004E0
label_5057c4:
    if (ctx->pc == 0x5057C4u) {
        ctx->pc = 0x5057C4u;
            // 0x5057c4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5057C8u;
        goto label_5057c8;
    }
    ctx->pc = 0x5057C0u;
    SET_GPR_U32(ctx, 31, 0x5057C8u);
    ctx->pc = 0x5057C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5057C0u;
            // 0x5057c4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5057C8u; }
        if (ctx->pc != 0x5057C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5057C8u; }
        if (ctx->pc != 0x5057C8u) { return; }
    }
    ctx->pc = 0x5057C8u;
label_5057c8:
    // 0x5057c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x5057c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_5057cc:
    // 0x5057cc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x5057ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_5057d0:
    // 0x5057d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5057d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5057d4:
    // 0x5057d4: 0xc04a576  jal         func_1295D8
label_5057d8:
    if (ctx->pc == 0x5057D8u) {
        ctx->pc = 0x5057D8u;
            // 0x5057d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5057DCu;
        goto label_5057dc;
    }
    ctx->pc = 0x5057D4u;
    SET_GPR_U32(ctx, 31, 0x5057DCu);
    ctx->pc = 0x5057D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5057D4u;
            // 0x5057d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5057DCu; }
        if (ctx->pc != 0x5057DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5057DCu; }
        if (ctx->pc != 0x5057DCu) { return; }
    }
    ctx->pc = 0x5057DCu;
label_5057dc:
    // 0x5057dc: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x5057dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_5057e0:
    // 0x5057e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5057e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5057e4:
    // 0x5057e4: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x5057e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_5057e8:
    // 0x5057e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5057e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5057ec:
    // 0x5057ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5057ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5057f0:
    // 0x5057f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x5057f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5057f4:
    // 0x5057f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5057f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5057f8:
    // 0x5057f8: 0xae3002c0  sw          $s0, 0x2C0($s1)
    ctx->pc = 0x5057f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 16));
label_5057fc:
    // 0x5057fc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x5057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_505800:
    // 0x505800: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x505800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_505804:
    // 0x505804: 0xc122cd8  jal         func_48B360
label_505808:
    if (ctx->pc == 0x505808u) {
        ctx->pc = 0x505808u;
            // 0x505808: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->pc = 0x50580Cu;
        goto label_50580c;
    }
    ctx->pc = 0x505804u;
    SET_GPR_U32(ctx, 31, 0x50580Cu);
    ctx->pc = 0x505808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505804u;
            // 0x505808: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50580Cu; }
        if (ctx->pc != 0x50580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50580Cu; }
        if (ctx->pc != 0x50580Cu) { return; }
    }
    ctx->pc = 0x50580Cu;
label_50580c:
    // 0x50580c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x50580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_505810:
    // 0x505810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x505810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505814:
    // 0x505814: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x505814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_505818:
    // 0x505818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x505818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50581c:
    // 0x50581c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_505820:
    // 0x505820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x505820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505824:
    // 0x505824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x505824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_505828:
    // 0x505828: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x505828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_50582c:
    // 0x50582c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x50582cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_505830:
    // 0x505830: 0xc122cd8  jal         func_48B360
label_505834:
    if (ctx->pc == 0x505834u) {
        ctx->pc = 0x505834u;
            // 0x505834: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->pc = 0x505838u;
        goto label_505838;
    }
    ctx->pc = 0x505830u;
    SET_GPR_U32(ctx, 31, 0x505838u);
    ctx->pc = 0x505834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505830u;
            // 0x505834: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505838u; }
        if (ctx->pc != 0x505838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505838u; }
        if (ctx->pc != 0x505838u) { return; }
    }
    ctx->pc = 0x505838u;
label_505838:
    // 0x505838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x505838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50583c:
    // 0x50583c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_505840:
    // 0x505840: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x505840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_505844:
    // 0x505844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x505844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_505848:
    // 0x505848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x505848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50584c:
    // 0x50584c: 0x3e00008  jr          $ra
label_505850:
    if (ctx->pc == 0x505850u) {
        ctx->pc = 0x505850u;
            // 0x505850: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x505854u;
        goto label_505854;
    }
    ctx->pc = 0x50584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50584Cu;
            // 0x505850: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505854u;
label_505854:
    // 0x505854: 0x0  nop
    ctx->pc = 0x505854u;
    // NOP
label_505858:
    // 0x505858: 0x0  nop
    ctx->pc = 0x505858u;
    // NOP
label_50585c:
    // 0x50585c: 0x0  nop
    ctx->pc = 0x50585cu;
    // NOP
label_505860:
    // 0x505860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x505860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_505864:
    // 0x505864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x505864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_505868:
    // 0x505868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50586c:
    // 0x50586c: 0xc0e3580  jal         func_38D600
label_505870:
    if (ctx->pc == 0x505870u) {
        ctx->pc = 0x505870u;
            // 0x505870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505874u;
        goto label_505874;
    }
    ctx->pc = 0x50586Cu;
    SET_GPR_U32(ctx, 31, 0x505874u);
    ctx->pc = 0x505870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50586Cu;
            // 0x505870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505874u; }
        if (ctx->pc != 0x505874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505874u; }
        if (ctx->pc != 0x505874u) { return; }
    }
    ctx->pc = 0x505874u;
label_505874:
    // 0x505874: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x505874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_505878:
    // 0x505878: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x505878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_50587c:
    // 0x50587c: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x50587cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_505880:
    // 0x505880: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x505880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_505884:
    // 0x505884: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x505884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_505888:
    // 0x505888: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x505888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50588c:
    // 0x50588c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x50588cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_505890:
    // 0x505890: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x505890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_505894:
    // 0x505894: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x505894u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_505898:
    // 0x505898: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x505898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_50589c:
    // 0x50589c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x50589cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_5058a0:
    // 0x5058a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5058a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_5058a4:
    // 0x5058a4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x5058a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_5058a8:
    // 0x5058a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5058a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5058ac:
    // 0x5058ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5058acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5058b0:
    // 0x5058b0: 0x3e00008  jr          $ra
label_5058b4:
    if (ctx->pc == 0x5058B4u) {
        ctx->pc = 0x5058B4u;
            // 0x5058b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5058B8u;
        goto label_5058b8;
    }
    ctx->pc = 0x5058B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5058B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5058B0u;
            // 0x5058b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5058B8u;
label_5058b8:
    // 0x5058b8: 0x0  nop
    ctx->pc = 0x5058b8u;
    // NOP
label_5058bc:
    // 0x5058bc: 0x0  nop
    ctx->pc = 0x5058bcu;
    // NOP
label_5058c0:
    // 0x5058c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5058c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5058c4:
    // 0x5058c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5058c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5058c8:
    // 0x5058c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5058c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5058cc:
    // 0x5058cc: 0xc141048  jal         func_504120
label_5058d0:
    if (ctx->pc == 0x5058D0u) {
        ctx->pc = 0x5058D0u;
            // 0x5058d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5058D4u;
        goto label_5058d4;
    }
    ctx->pc = 0x5058CCu;
    SET_GPR_U32(ctx, 31, 0x5058D4u);
    ctx->pc = 0x5058D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5058CCu;
            // 0x5058d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504120u;
    if (runtime->hasFunction(0x504120u)) {
        auto targetFn = runtime->lookupFunction(0x504120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5058D4u; }
        if (ctx->pc != 0x5058D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504120_0x504120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5058D4u; }
        if (ctx->pc != 0x5058D4u) { return; }
    }
    ctx->pc = 0x5058D4u;
label_5058d4:
    // 0x5058d4: 0xc122c94  jal         func_48B250
label_5058d8:
    if (ctx->pc == 0x5058D8u) {
        ctx->pc = 0x5058D8u;
            // 0x5058d8: 0x8e0402c0  lw          $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->pc = 0x5058DCu;
        goto label_5058dc;
    }
    ctx->pc = 0x5058D4u;
    SET_GPR_U32(ctx, 31, 0x5058DCu);
    ctx->pc = 0x5058D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5058D4u;
            // 0x5058d8: 0x8e0402c0  lw          $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5058DCu; }
        if (ctx->pc != 0x5058DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5058DCu; }
        if (ctx->pc != 0x5058DCu) { return; }
    }
    ctx->pc = 0x5058DCu;
label_5058dc:
    // 0x5058dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5058dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5058e0:
    // 0x5058e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5058e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5058e4:
    // 0x5058e4: 0x3e00008  jr          $ra
label_5058e8:
    if (ctx->pc == 0x5058E8u) {
        ctx->pc = 0x5058E8u;
            // 0x5058e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5058ECu;
        goto label_5058ec;
    }
    ctx->pc = 0x5058E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5058E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5058E4u;
            // 0x5058e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5058ECu;
label_5058ec:
    // 0x5058ec: 0x0  nop
    ctx->pc = 0x5058ecu;
    // NOP
label_5058f0:
    // 0x5058f0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x5058f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5058f4:
    // 0x5058f4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x5058f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_5058f8:
    // 0x5058f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5058f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5058fc:
    // 0x5058fc: 0x90850040  lbu         $a1, 0x40($a0)
    ctx->pc = 0x5058fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
label_505900:
    // 0x505900: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x505900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_505904:
    // 0x505904: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x505904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_505908:
    // 0x505908: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x505908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_50590c:
    // 0x50590c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50590cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_505910:
    // 0x505910: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x505910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_505914:
    // 0x505914: 0x0  nop
    ctx->pc = 0x505914u;
    // NOP
label_505918:
    // 0x505918: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x505918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_50591c:
    // 0x50591c: 0x8145ef4  j           func_517BD0
label_505920:
    if (ctx->pc == 0x505920u) {
        ctx->pc = 0x505920u;
            // 0x505920: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x505924u;
        goto label_505924;
    }
    ctx->pc = 0x50591Cu;
    ctx->pc = 0x505920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50591Cu;
            // 0x505920: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517BD0u;
    if (runtime->hasFunction(0x517BD0u)) {
        auto targetFn = runtime->lookupFunction(0x517BD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00517BD0_0x517bd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x505924u;
label_505924:
    // 0x505924: 0x0  nop
    ctx->pc = 0x505924u;
    // NOP
label_505928:
    // 0x505928: 0x0  nop
    ctx->pc = 0x505928u;
    // NOP
label_50592c:
    // 0x50592c: 0x0  nop
    ctx->pc = 0x50592cu;
    // NOP
label_505930:
    // 0x505930: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x505930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_505934:
    // 0x505934: 0x8145df4  j           func_5177D0
label_505938:
    if (ctx->pc == 0x505938u) {
        ctx->pc = 0x505938u;
            // 0x505938: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x50593Cu;
        goto label_50593c;
    }
    ctx->pc = 0x505934u;
    ctx->pc = 0x505938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505934u;
            // 0x505938: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5177D0u;
    if (runtime->hasFunction(0x5177D0u)) {
        auto targetFn = runtime->lookupFunction(0x5177D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_005177D0_0x5177d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x50593Cu;
label_50593c:
    // 0x50593c: 0x0  nop
    ctx->pc = 0x50593cu;
    // NOP
label_505940:
    // 0x505940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x505940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_505944:
    // 0x505944: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x505944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_505948:
    // 0x505948: 0x3e00008  jr          $ra
label_50594c:
    if (ctx->pc == 0x50594Cu) {
        ctx->pc = 0x50594Cu;
            // 0x50594c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x505950u;
        goto label_505950;
    }
    ctx->pc = 0x505948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505948u;
            // 0x50594c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505950u;
label_505950:
    // 0x505950: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x505950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_505954:
    // 0x505954: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x505954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_505958:
    // 0x505958: 0x3e00008  jr          $ra
label_50595c:
    if (ctx->pc == 0x50595Cu) {
        ctx->pc = 0x50595Cu;
            // 0x50595c: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x505960u;
        goto label_505960;
    }
    ctx->pc = 0x505958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505958u;
            // 0x50595c: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505960u;
label_505960:
    // 0x505960: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x505960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_505964:
    // 0x505964: 0x3e00008  jr          $ra
label_505968:
    if (ctx->pc == 0x505968u) {
        ctx->pc = 0x505968u;
            // 0x505968: 0x2442b118  addiu       $v0, $v0, -0x4EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947096));
        ctx->pc = 0x50596Cu;
        goto label_50596c;
    }
    ctx->pc = 0x505964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505964u;
            // 0x505968: 0x2442b118  addiu       $v0, $v0, -0x4EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50596Cu;
label_50596c:
    // 0x50596c: 0x0  nop
    ctx->pc = 0x50596cu;
    // NOP
label_505970:
    // 0x505970: 0x3e00008  jr          $ra
label_505974:
    if (ctx->pc == 0x505974u) {
        ctx->pc = 0x505974u;
            // 0x505974: 0x2402466e  addiu       $v0, $zero, 0x466E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18030));
        ctx->pc = 0x505978u;
        goto label_505978;
    }
    ctx->pc = 0x505970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505970u;
            // 0x505974: 0x2402466e  addiu       $v0, $zero, 0x466E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505978u;
label_505978:
    // 0x505978: 0x0  nop
    ctx->pc = 0x505978u;
    // NOP
label_50597c:
    // 0x50597c: 0x0  nop
    ctx->pc = 0x50597cu;
    // NOP
label_505980:
    // 0x505980: 0x8c8402c0  lw          $a0, 0x2C0($a0)
    ctx->pc = 0x505980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_505984:
    // 0x505984: 0x8122c5c  j           func_48B170
label_505988:
    if (ctx->pc == 0x505988u) {
        ctx->pc = 0x505988u;
            // 0x505988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50598Cu;
        goto label_50598c;
    }
    ctx->pc = 0x505984u;
    ctx->pc = 0x505988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505984u;
            // 0x505988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B170_0x48b170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x50598Cu;
label_50598c:
    // 0x50598c: 0x0  nop
    ctx->pc = 0x50598cu;
    // NOP
label_505990:
    // 0x505990: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x505990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_505994:
    // 0x505994: 0x8c8402c0  lw          $a0, 0x2C0($a0)
    ctx->pc = 0x505994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_505998:
    // 0x505998: 0x8122d2c  j           func_48B4B0
label_50599c:
    if (ctx->pc == 0x50599Cu) {
        ctx->pc = 0x50599Cu;
            // 0x50599c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5059A0u;
        goto label_5059a0;
    }
    ctx->pc = 0x505998u;
    ctx->pc = 0x50599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505998u;
            // 0x50599c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5059A0u;
label_5059a0:
    // 0x5059a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5059a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5059a4:
    // 0x5059a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5059a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5059a8:
    // 0x5059a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5059a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5059ac:
    // 0x5059ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5059acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5059b0:
    // 0x5059b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5059b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5059b4:
    // 0x5059b4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_5059b8:
    if (ctx->pc == 0x5059B8u) {
        ctx->pc = 0x5059B8u;
            // 0x5059b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5059BCu;
        goto label_5059bc;
    }
    ctx->pc = 0x5059B4u;
    {
        const bool branch_taken_0x5059b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5059B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5059B4u;
            // 0x5059b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5059b4) {
            ctx->pc = 0x505A10u;
            goto label_505a10;
        }
    }
    ctx->pc = 0x5059BCu;
label_5059bc:
    // 0x5059bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5059bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5059c0:
    // 0x5059c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5059c4:
    // 0x5059c4: 0x24634d20  addiu       $v1, $v1, 0x4D20
    ctx->pc = 0x5059c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
label_5059c8:
    // 0x5059c8: 0x24424d58  addiu       $v0, $v0, 0x4D58
    ctx->pc = 0x5059c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19800));
label_5059cc:
    // 0x5059cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5059ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5059d0:
    // 0x5059d0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_5059d4:
    if (ctx->pc == 0x5059D4u) {
        ctx->pc = 0x5059D4u;
            // 0x5059d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5059D8u;
        goto label_5059d8;
    }
    ctx->pc = 0x5059D0u;
    {
        const bool branch_taken_0x5059d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5059D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5059D0u;
            // 0x5059d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5059d0) {
            ctx->pc = 0x5059F8u;
            goto label_5059f8;
        }
    }
    ctx->pc = 0x5059D8u;
label_5059d8:
    // 0x5059d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5059d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5059dc:
    // 0x5059dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5059dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5059e0:
    // 0x5059e0: 0x24634d70  addiu       $v1, $v1, 0x4D70
    ctx->pc = 0x5059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19824));
label_5059e4:
    // 0x5059e4: 0x24424da8  addiu       $v0, $v0, 0x4DA8
    ctx->pc = 0x5059e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19880));
label_5059e8:
    // 0x5059e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5059e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5059ec:
    // 0x5059ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5059ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5059f0:
    // 0x5059f0: 0xc141278  jal         func_5049E0
label_5059f4:
    if (ctx->pc == 0x5059F4u) {
        ctx->pc = 0x5059F4u;
            // 0x5059f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5059F8u;
        goto label_5059f8;
    }
    ctx->pc = 0x5059F0u;
    SET_GPR_U32(ctx, 31, 0x5059F8u);
    ctx->pc = 0x5059F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5059F0u;
            // 0x5059f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5049E0u;
    if (runtime->hasFunction(0x5049E0u)) {
        auto targetFn = runtime->lookupFunction(0x5049E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5059F8u; }
        if (ctx->pc != 0x5059F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005049E0_0x5049e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5059F8u; }
        if (ctx->pc != 0x5059F8u) { return; }
    }
    ctx->pc = 0x5059F8u;
label_5059f8:
    // 0x5059f8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5059f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5059fc:
    // 0x5059fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5059fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_505a00:
    // 0x505a00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_505a04:
    if (ctx->pc == 0x505A04u) {
        ctx->pc = 0x505A04u;
            // 0x505a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505A08u;
        goto label_505a08;
    }
    ctx->pc = 0x505A00u;
    {
        const bool branch_taken_0x505a00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x505a00) {
            ctx->pc = 0x505A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505A00u;
            // 0x505a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505A14u;
            goto label_505a14;
        }
    }
    ctx->pc = 0x505A08u;
label_505a08:
    // 0x505a08: 0xc0400a8  jal         func_1002A0
label_505a0c:
    if (ctx->pc == 0x505A0Cu) {
        ctx->pc = 0x505A0Cu;
            // 0x505a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505A10u;
        goto label_505a10;
    }
    ctx->pc = 0x505A08u;
    SET_GPR_U32(ctx, 31, 0x505A10u);
    ctx->pc = 0x505A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505A08u;
            // 0x505a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505A10u; }
        if (ctx->pc != 0x505A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505A10u; }
        if (ctx->pc != 0x505A10u) { return; }
    }
    ctx->pc = 0x505A10u;
label_505a10:
    // 0x505a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x505a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505a14:
    // 0x505a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x505a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_505a18:
    // 0x505a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x505a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_505a1c:
    // 0x505a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505a20:
    // 0x505a20: 0x3e00008  jr          $ra
label_505a24:
    if (ctx->pc == 0x505A24u) {
        ctx->pc = 0x505A24u;
            // 0x505a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x505A28u;
        goto label_505a28;
    }
    ctx->pc = 0x505A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505A20u;
            // 0x505a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505A28u;
label_505a28:
    // 0x505a28: 0x0  nop
    ctx->pc = 0x505a28u;
    // NOP
label_505a2c:
    // 0x505a2c: 0x0  nop
    ctx->pc = 0x505a2cu;
    // NOP
label_505a30:
    // 0x505a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x505a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_505a34:
    // 0x505a34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x505a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_505a38:
    // 0x505a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x505a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_505a3c:
    // 0x505a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x505a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_505a40:
    // 0x505a40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x505a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505a44:
    // 0x505a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x505a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_505a48:
    // 0x505a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x505a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_505a4c:
    // 0x505a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505a50:
    // 0x505a50: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x505a50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_505a54:
    // 0x505a54: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_505a58:
    if (ctx->pc == 0x505A58u) {
        ctx->pc = 0x505A58u;
            // 0x505a58: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505A5Cu;
        goto label_505a5c;
    }
    ctx->pc = 0x505A54u;
    {
        const bool branch_taken_0x505a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505A54u;
            // 0x505a58: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a54) {
            ctx->pc = 0x505A98u;
            goto label_505a98;
        }
    }
    ctx->pc = 0x505A5Cu;
label_505a5c:
    // 0x505a5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x505a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505a60:
    // 0x505a60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x505a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505a64:
    // 0x505a64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x505a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505a68:
    // 0x505a68: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x505a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_505a6c:
    // 0x505a6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x505a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_505a70:
    // 0x505a70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x505a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_505a74:
    // 0x505a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x505a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505a78:
    // 0x505a78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x505a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_505a7c:
    // 0x505a7c: 0x320f809  jalr        $t9
label_505a80:
    if (ctx->pc == 0x505A80u) {
        ctx->pc = 0x505A84u;
        goto label_505a84;
    }
    ctx->pc = 0x505A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x505A84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x505A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x505A84u; }
            if (ctx->pc != 0x505A84u) { return; }
        }
        }
    }
    ctx->pc = 0x505A84u;
label_505a84:
    // 0x505a84: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x505a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_505a88:
    // 0x505a88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x505a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_505a8c:
    // 0x505a8c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x505a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_505a90:
    // 0x505a90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_505a94:
    if (ctx->pc == 0x505A94u) {
        ctx->pc = 0x505A94u;
            // 0x505a94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x505A98u;
        goto label_505a98;
    }
    ctx->pc = 0x505A90u;
    {
        const bool branch_taken_0x505a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x505A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505A90u;
            // 0x505a94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a90) {
            ctx->pc = 0x505A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_505a68;
        }
    }
    ctx->pc = 0x505A98u;
label_505a98:
    // 0x505a98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x505a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_505a9c:
    // 0x505a9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x505a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_505aa0:
    // 0x505aa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x505aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_505aa4:
    // 0x505aa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x505aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_505aa8:
    // 0x505aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x505aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_505aac:
    // 0x505aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x505aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_505ab0:
    // 0x505ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505ab4:
    // 0x505ab4: 0x3e00008  jr          $ra
label_505ab8:
    if (ctx->pc == 0x505AB8u) {
        ctx->pc = 0x505AB8u;
            // 0x505ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x505ABCu;
        goto label_505abc;
    }
    ctx->pc = 0x505AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505AB4u;
            // 0x505ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505ABCu;
label_505abc:
    // 0x505abc: 0x0  nop
    ctx->pc = 0x505abcu;
    // NOP
label_505ac0:
    // 0x505ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x505ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_505ac4:
    // 0x505ac4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x505ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_505ac8:
    // 0x505ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x505ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_505acc:
    // 0x505acc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x505accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_505ad0:
    // 0x505ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505ad4:
    // 0x505ad4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x505ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_505ad8:
    // 0x505ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x505ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_505adc:
    // 0x505adc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x505adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_505ae0:
    // 0x505ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x505ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_505ae4:
    // 0x505ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x505ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_505ae8:
    // 0x505ae8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x505ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_505aec:
    // 0x505aec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x505aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_505af0:
    // 0x505af0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x505af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_505af4:
    // 0x505af4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x505af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_505af8:
    // 0x505af8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x505af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_505afc:
    // 0x505afc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x505afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_505b00:
    // 0x505b00: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x505b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_505b04:
    // 0x505b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x505b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_505b08:
    // 0x505b08: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x505b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_505b0c:
    // 0x505b0c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x505b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_505b10:
    // 0x505b10: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x505b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_505b14:
    // 0x505b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x505b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_505b18:
    // 0x505b18: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x505b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_505b1c:
    // 0x505b1c: 0xc0a997c  jal         func_2A65F0
label_505b20:
    if (ctx->pc == 0x505B20u) {
        ctx->pc = 0x505B20u;
            // 0x505b20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x505B24u;
        goto label_505b24;
    }
    ctx->pc = 0x505B1Cu;
    SET_GPR_U32(ctx, 31, 0x505B24u);
    ctx->pc = 0x505B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505B1Cu;
            // 0x505b20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B24u; }
        if (ctx->pc != 0x505B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B24u; }
        if (ctx->pc != 0x505B24u) { return; }
    }
    ctx->pc = 0x505B24u;
label_505b24:
    // 0x505b24: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x505b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_505b28:
    // 0x505b28: 0xc0d879c  jal         func_361E70
label_505b2c:
    if (ctx->pc == 0x505B2Cu) {
        ctx->pc = 0x505B2Cu;
            // 0x505b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505B30u;
        goto label_505b30;
    }
    ctx->pc = 0x505B28u;
    SET_GPR_U32(ctx, 31, 0x505B30u);
    ctx->pc = 0x505B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505B28u;
            // 0x505b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B30u; }
        if (ctx->pc != 0x505B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B30u; }
        if (ctx->pc != 0x505B30u) { return; }
    }
    ctx->pc = 0x505B30u;
label_505b30:
    // 0x505b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x505b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_505b34:
    // 0x505b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505b38:
    // 0x505b38: 0x3e00008  jr          $ra
label_505b3c:
    if (ctx->pc == 0x505B3Cu) {
        ctx->pc = 0x505B3Cu;
            // 0x505b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x505B40u;
        goto label_505b40;
    }
    ctx->pc = 0x505B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505B38u;
            // 0x505b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505B40u;
label_505b40:
    // 0x505b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x505b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_505b44:
    // 0x505b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x505b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_505b48:
    // 0x505b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505b4c:
    // 0x505b4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x505b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_505b50:
    // 0x505b50: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_505b54:
    if (ctx->pc == 0x505B54u) {
        ctx->pc = 0x505B54u;
            // 0x505b54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505B58u;
        goto label_505b58;
    }
    ctx->pc = 0x505B50u;
    {
        const bool branch_taken_0x505b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x505B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505B50u;
            // 0x505b54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505b50) {
            ctx->pc = 0x505C70u;
            goto label_505c70;
        }
    }
    ctx->pc = 0x505B58u;
label_505b58:
    // 0x505b58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x505b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_505b5c:
    // 0x505b5c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x505b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_505b60:
    // 0x505b60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x505b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_505b64:
    // 0x505b64: 0xc075128  jal         func_1D44A0
label_505b68:
    if (ctx->pc == 0x505B68u) {
        ctx->pc = 0x505B68u;
            // 0x505b68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x505B6Cu;
        goto label_505b6c;
    }
    ctx->pc = 0x505B64u;
    SET_GPR_U32(ctx, 31, 0x505B6Cu);
    ctx->pc = 0x505B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505B64u;
            // 0x505b68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B6Cu; }
        if (ctx->pc != 0x505B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505B6Cu; }
        if (ctx->pc != 0x505B6Cu) { return; }
    }
    ctx->pc = 0x505B6Cu;
label_505b6c:
    // 0x505b6c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x505b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_505b70:
    // 0x505b70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505b74:
    // 0x505b74: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x505b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_505b78:
    // 0x505b78: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x505b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_505b7c:
    // 0x505b7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x505b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_505b80:
    // 0x505b80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_505b84:
    if (ctx->pc == 0x505B84u) {
        ctx->pc = 0x505B84u;
            // 0x505b84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x505B88u;
        goto label_505b88;
    }
    ctx->pc = 0x505B80u;
    {
        const bool branch_taken_0x505b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x505B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505B80u;
            // 0x505b84: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505b80) {
            ctx->pc = 0x505B90u;
            goto label_505b90;
        }
    }
    ctx->pc = 0x505B88u;
label_505b88:
    // 0x505b88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505b8c:
    // 0x505b8c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x505b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_505b90:
    // 0x505b90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x505b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505b94:
    // 0x505b94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505b98:
    // 0x505b98: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x505b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_505b9c:
    // 0x505b9c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x505b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_505ba0:
    // 0x505ba0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x505ba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_505ba4:
    // 0x505ba4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_505ba8:
    if (ctx->pc == 0x505BA8u) {
        ctx->pc = 0x505BA8u;
            // 0x505ba8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x505BACu;
        goto label_505bac;
    }
    ctx->pc = 0x505BA4u;
    {
        const bool branch_taken_0x505ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505ba4) {
            ctx->pc = 0x505BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505BA4u;
            // 0x505ba8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505BB8u;
            goto label_505bb8;
        }
    }
    ctx->pc = 0x505BACu;
label_505bac:
    // 0x505bac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505bb0:
    // 0x505bb0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x505bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_505bb4:
    // 0x505bb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x505bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505bb8:
    // 0x505bb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505bbc:
    // 0x505bbc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x505bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_505bc0:
    // 0x505bc0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x505bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_505bc4:
    // 0x505bc4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x505bc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_505bc8:
    // 0x505bc8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_505bcc:
    if (ctx->pc == 0x505BCCu) {
        ctx->pc = 0x505BCCu;
            // 0x505bcc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x505BD0u;
        goto label_505bd0;
    }
    ctx->pc = 0x505BC8u;
    {
        const bool branch_taken_0x505bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505bc8) {
            ctx->pc = 0x505BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505BC8u;
            // 0x505bcc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505BDCu;
            goto label_505bdc;
        }
    }
    ctx->pc = 0x505BD0u;
label_505bd0:
    // 0x505bd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505bd4:
    // 0x505bd4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x505bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_505bd8:
    // 0x505bd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x505bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_505bdc:
    // 0x505bdc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x505bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_505be0:
    // 0x505be0: 0x320f809  jalr        $t9
label_505be4:
    if (ctx->pc == 0x505BE4u) {
        ctx->pc = 0x505BE4u;
            // 0x505be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505BE8u;
        goto label_505be8;
    }
    ctx->pc = 0x505BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x505BE8u);
        ctx->pc = 0x505BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505BE0u;
            // 0x505be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x505BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x505BE8u; }
            if (ctx->pc != 0x505BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x505BE8u;
label_505be8:
    // 0x505be8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x505be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_505bec:
    // 0x505bec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505bf0:
    // 0x505bf0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x505bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_505bf4:
    // 0x505bf4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x505bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_505bf8:
    // 0x505bf8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x505bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_505bfc:
    // 0x505bfc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x505bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_505c00:
    // 0x505c00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_505c04:
    if (ctx->pc == 0x505C04u) {
        ctx->pc = 0x505C04u;
            // 0x505c04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x505C08u;
        goto label_505c08;
    }
    ctx->pc = 0x505C00u;
    {
        const bool branch_taken_0x505c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505c00) {
            ctx->pc = 0x505C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505C00u;
            // 0x505c04: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505C14u;
            goto label_505c14;
        }
    }
    ctx->pc = 0x505C08u;
label_505c08:
    // 0x505c08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c0c:
    // 0x505c0c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x505c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_505c10:
    // 0x505c10: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x505c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_505c14:
    // 0x505c14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c18:
    // 0x505c18: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x505c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_505c1c:
    // 0x505c1c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x505c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_505c20:
    // 0x505c20: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x505c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_505c24:
    // 0x505c24: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x505c24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_505c28:
    // 0x505c28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_505c2c:
    if (ctx->pc == 0x505C2Cu) {
        ctx->pc = 0x505C30u;
        goto label_505c30;
    }
    ctx->pc = 0x505C28u;
    {
        const bool branch_taken_0x505c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505c28) {
            ctx->pc = 0x505C38u;
            goto label_505c38;
        }
    }
    ctx->pc = 0x505C30u;
label_505c30:
    // 0x505c30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c34:
    // 0x505c34: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x505c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_505c38:
    // 0x505c38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c3c:
    // 0x505c3c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x505c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_505c40:
    // 0x505c40: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x505c40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_505c44:
    // 0x505c44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_505c48:
    if (ctx->pc == 0x505C48u) {
        ctx->pc = 0x505C4Cu;
        goto label_505c4c;
    }
    ctx->pc = 0x505C44u;
    {
        const bool branch_taken_0x505c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505c44) {
            ctx->pc = 0x505C54u;
            goto label_505c54;
        }
    }
    ctx->pc = 0x505C4Cu;
label_505c4c:
    // 0x505c4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c50:
    // 0x505c50: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x505c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_505c54:
    // 0x505c54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c58:
    // 0x505c58: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x505c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_505c5c:
    // 0x505c5c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x505c5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_505c60:
    // 0x505c60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_505c64:
    if (ctx->pc == 0x505C64u) {
        ctx->pc = 0x505C64u;
            // 0x505c64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x505C68u;
        goto label_505c68;
    }
    ctx->pc = 0x505C60u;
    {
        const bool branch_taken_0x505c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x505c60) {
            ctx->pc = 0x505C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505C60u;
            // 0x505c64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505C74u;
            goto label_505c74;
        }
    }
    ctx->pc = 0x505C68u;
label_505c68:
    // 0x505c68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505c6c:
    // 0x505c6c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x505c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_505c70:
    // 0x505c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x505c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_505c74:
    // 0x505c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505c78:
    // 0x505c78: 0x3e00008  jr          $ra
label_505c7c:
    if (ctx->pc == 0x505C7Cu) {
        ctx->pc = 0x505C7Cu;
            // 0x505c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x505C80u;
        goto label_505c80;
    }
    ctx->pc = 0x505C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505C78u;
            // 0x505c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505C80u;
label_505c80:
    // 0x505c80: 0x81411dc  j           func_504770
label_505c84:
    if (ctx->pc == 0x505C84u) {
        ctx->pc = 0x505C84u;
            // 0x505c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x505C88u;
        goto label_505c88;
    }
    ctx->pc = 0x505C80u;
    ctx->pc = 0x505C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505C80u;
            // 0x505c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504770u;
    {
        auto targetFn = runtime->lookupFunction(0x504770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505C88u;
label_505c88:
    // 0x505c88: 0x0  nop
    ctx->pc = 0x505c88u;
    // NOP
label_505c8c:
    // 0x505c8c: 0x0  nop
    ctx->pc = 0x505c8cu;
    // NOP
label_505c90:
    // 0x505c90: 0x8141668  j           func_5059A0
label_505c94:
    if (ctx->pc == 0x505C94u) {
        ctx->pc = 0x505C94u;
            // 0x505c94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x505C98u;
        goto label_505c98;
    }
    ctx->pc = 0x505C90u;
    ctx->pc = 0x505C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505C90u;
            // 0x505c94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5059A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_5059a0;
    ctx->pc = 0x505C98u;
label_505c98:
    // 0x505c98: 0x0  nop
    ctx->pc = 0x505c98u;
    // NOP
label_505c9c:
    // 0x505c9c: 0x0  nop
    ctx->pc = 0x505c9cu;
    // NOP
label_505ca0:
    // 0x505ca0: 0x8141278  j           func_5049E0
label_505ca4:
    if (ctx->pc == 0x505CA4u) {
        ctx->pc = 0x505CA4u;
            // 0x505ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x505CA8u;
        goto label_505ca8;
    }
    ctx->pc = 0x505CA0u;
    ctx->pc = 0x505CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CA0u;
            // 0x505ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5049E0u;
    if (runtime->hasFunction(0x5049E0u)) {
        auto targetFn = runtime->lookupFunction(0x5049E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_005049E0_0x5049e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x505CA8u;
label_505ca8:
    // 0x505ca8: 0x0  nop
    ctx->pc = 0x505ca8u;
    // NOP
label_505cac:
    // 0x505cac: 0x0  nop
    ctx->pc = 0x505cacu;
    // NOP
label_505cb0:
    // 0x505cb0: 0x8141244  j           func_504910
label_505cb4:
    if (ctx->pc == 0x505CB4u) {
        ctx->pc = 0x505CB4u;
            // 0x505cb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x505CB8u;
        goto label_505cb8;
    }
    ctx->pc = 0x505CB0u;
    ctx->pc = 0x505CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CB0u;
            // 0x505cb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504910u;
    {
        auto targetFn = runtime->lookupFunction(0x504910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505CB8u;
label_505cb8:
    // 0x505cb8: 0x0  nop
    ctx->pc = 0x505cb8u;
    // NOP
label_505cbc:
    // 0x505cbc: 0x0  nop
    ctx->pc = 0x505cbcu;
    // NOP
label_505cc0:
    // 0x505cc0: 0x8141664  j           func_505990
label_505cc4:
    if (ctx->pc == 0x505CC4u) {
        ctx->pc = 0x505CC4u;
            // 0x505cc4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505CC8u;
        goto label_505cc8;
    }
    ctx->pc = 0x505CC0u;
    ctx->pc = 0x505CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CC0u;
            // 0x505cc4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x505990u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_505990;
    ctx->pc = 0x505CC8u;
label_505cc8:
    // 0x505cc8: 0x0  nop
    ctx->pc = 0x505cc8u;
    // NOP
label_505ccc:
    // 0x505ccc: 0x0  nop
    ctx->pc = 0x505cccu;
    // NOP
label_505cd0:
    // 0x505cd0: 0x8141244  j           func_504910
label_505cd4:
    if (ctx->pc == 0x505CD4u) {
        ctx->pc = 0x505CD4u;
            // 0x505cd4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505CD8u;
        goto label_505cd8;
    }
    ctx->pc = 0x505CD0u;
    ctx->pc = 0x505CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CD0u;
            // 0x505cd4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504910u;
    {
        auto targetFn = runtime->lookupFunction(0x504910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505CD8u;
label_505cd8:
    // 0x505cd8: 0x0  nop
    ctx->pc = 0x505cd8u;
    // NOP
label_505cdc:
    // 0x505cdc: 0x0  nop
    ctx->pc = 0x505cdcu;
    // NOP
label_505ce0:
    // 0x505ce0: 0x8141364  j           func_504D90
label_505ce4:
    if (ctx->pc == 0x505CE4u) {
        ctx->pc = 0x505CE4u;
            // 0x505ce4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x505CE8u;
        goto label_505ce8;
    }
    ctx->pc = 0x505CE0u;
    ctx->pc = 0x505CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CE0u;
            // 0x505ce4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504D90u;
    {
        auto targetFn = runtime->lookupFunction(0x504D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505CE8u;
label_505ce8:
    // 0x505ce8: 0x0  nop
    ctx->pc = 0x505ce8u;
    // NOP
label_505cec:
    // 0x505cec: 0x0  nop
    ctx->pc = 0x505cecu;
    // NOP
label_505cf0:
    // 0x505cf0: 0x8141028  j           func_5040A0
label_505cf4:
    if (ctx->pc == 0x505CF4u) {
        ctx->pc = 0x505CF4u;
            // 0x505cf4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505CF8u;
        goto label_505cf8;
    }
    ctx->pc = 0x505CF0u;
    ctx->pc = 0x505CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505CF0u;
            // 0x505cf4: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5040A0u;
    {
        auto targetFn = runtime->lookupFunction(0x5040A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505CF8u;
label_505cf8:
    // 0x505cf8: 0x0  nop
    ctx->pc = 0x505cf8u;
    // NOP
label_505cfc:
    // 0x505cfc: 0x0  nop
    ctx->pc = 0x505cfcu;
    // NOP
label_505d00:
    // 0x505d00: 0x8141650  j           func_505940
label_505d04:
    if (ctx->pc == 0x505D04u) {
        ctx->pc = 0x505D04u;
            // 0x505d04: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505D08u;
        goto label_505d08;
    }
    ctx->pc = 0x505D00u;
    ctx->pc = 0x505D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505D00u;
            // 0x505d04: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x505940u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_505940;
    ctx->pc = 0x505D08u;
label_505d08:
    // 0x505d08: 0x0  nop
    ctx->pc = 0x505d08u;
    // NOP
label_505d0c:
    // 0x505d0c: 0x0  nop
    ctx->pc = 0x505d0cu;
    // NOP
label_505d10:
    // 0x505d10: 0x8141654  j           func_505950
label_505d14:
    if (ctx->pc == 0x505D14u) {
        ctx->pc = 0x505D14u;
            // 0x505d14: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505D18u;
        goto label_505d18;
    }
    ctx->pc = 0x505D10u;
    ctx->pc = 0x505D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505D10u;
            // 0x505d14: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x505950u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_505950;
    ctx->pc = 0x505D18u;
label_505d18:
    // 0x505d18: 0x0  nop
    ctx->pc = 0x505d18u;
    // NOP
label_505d1c:
    // 0x505d1c: 0x0  nop
    ctx->pc = 0x505d1cu;
    // NOP
label_505d20:
    // 0x505d20: 0x8141364  j           func_504D90
label_505d24:
    if (ctx->pc == 0x505D24u) {
        ctx->pc = 0x505D24u;
            // 0x505d24: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->pc = 0x505D28u;
        goto label_505d28;
    }
    ctx->pc = 0x505D20u;
    ctx->pc = 0x505D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505D20u;
            // 0x505d24: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504D90u;
    {
        auto targetFn = runtime->lookupFunction(0x504D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x505D28u;
label_505d28:
    // 0x505d28: 0x0  nop
    ctx->pc = 0x505d28u;
    // NOP
label_505d2c:
    // 0x505d2c: 0x0  nop
    ctx->pc = 0x505d2cu;
    // NOP
label_505d30:
    // 0x505d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x505d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_505d34:
    // 0x505d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x505d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_505d38:
    // 0x505d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x505d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_505d3c:
    // 0x505d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505d40:
    // 0x505d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x505d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_505d44:
    // 0x505d44: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_505d48:
    if (ctx->pc == 0x505D48u) {
        ctx->pc = 0x505D48u;
            // 0x505d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505D4Cu;
        goto label_505d4c;
    }
    ctx->pc = 0x505D44u;
    {
        const bool branch_taken_0x505d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x505D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505D44u;
            // 0x505d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505d44) {
            ctx->pc = 0x505DA0u;
            goto label_505da0;
        }
    }
    ctx->pc = 0x505D4Cu;
label_505d4c:
    // 0x505d4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x505d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_505d50:
    // 0x505d50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x505d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_505d54:
    // 0x505d54: 0x24634dc0  addiu       $v1, $v1, 0x4DC0
    ctx->pc = 0x505d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
label_505d58:
    // 0x505d58: 0x24424df8  addiu       $v0, $v0, 0x4DF8
    ctx->pc = 0x505d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19960));
label_505d5c:
    // 0x505d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x505d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_505d60:
    // 0x505d60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_505d64:
    if (ctx->pc == 0x505D64u) {
        ctx->pc = 0x505D64u;
            // 0x505d64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x505D68u;
        goto label_505d68;
    }
    ctx->pc = 0x505D60u;
    {
        const bool branch_taken_0x505d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x505D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505D60u;
            // 0x505d64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505d60) {
            ctx->pc = 0x505D88u;
            goto label_505d88;
        }
    }
    ctx->pc = 0x505D68u;
label_505d68:
    // 0x505d68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x505d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_505d6c:
    // 0x505d6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x505d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_505d70:
    // 0x505d70: 0x24631c20  addiu       $v1, $v1, 0x1C20
    ctx->pc = 0x505d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
label_505d74:
    // 0x505d74: 0x24421c58  addiu       $v0, $v0, 0x1C58
    ctx->pc = 0x505d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7256));
label_505d78:
    // 0x505d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x505d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_505d7c:
    // 0x505d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x505d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505d80:
    // 0x505d80: 0xc0afad0  jal         func_2BEB40
label_505d84:
    if (ctx->pc == 0x505D84u) {
        ctx->pc = 0x505D84u;
            // 0x505d84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x505D88u;
        goto label_505d88;
    }
    ctx->pc = 0x505D80u;
    SET_GPR_U32(ctx, 31, 0x505D88u);
    ctx->pc = 0x505D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505D80u;
            // 0x505d84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB40u;
    if (runtime->hasFunction(0x2BEB40u)) {
        auto targetFn = runtime->lookupFunction(0x2BEB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505D88u; }
        if (ctx->pc != 0x505D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BEB40_0x2beb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505D88u; }
        if (ctx->pc != 0x505D88u) { return; }
    }
    ctx->pc = 0x505D88u;
label_505d88:
    // 0x505d88: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x505d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_505d8c:
    // 0x505d8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x505d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_505d90:
    // 0x505d90: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_505d94:
    if (ctx->pc == 0x505D94u) {
        ctx->pc = 0x505D94u;
            // 0x505d94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505D98u;
        goto label_505d98;
    }
    ctx->pc = 0x505D90u;
    {
        const bool branch_taken_0x505d90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x505d90) {
            ctx->pc = 0x505D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505D90u;
            // 0x505d94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505DA4u;
            goto label_505da4;
        }
    }
    ctx->pc = 0x505D98u;
label_505d98:
    // 0x505d98: 0xc0400a8  jal         func_1002A0
label_505d9c:
    if (ctx->pc == 0x505D9Cu) {
        ctx->pc = 0x505D9Cu;
            // 0x505d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505DA0u;
        goto label_505da0;
    }
    ctx->pc = 0x505D98u;
    SET_GPR_U32(ctx, 31, 0x505DA0u);
    ctx->pc = 0x505D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505D98u;
            // 0x505d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505DA0u; }
        if (ctx->pc != 0x505DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505DA0u; }
        if (ctx->pc != 0x505DA0u) { return; }
    }
    ctx->pc = 0x505DA0u;
label_505da0:
    // 0x505da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x505da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_505da4:
    // 0x505da4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x505da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_505da8:
    // 0x505da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x505da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_505dac:
    // 0x505dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505db0:
    // 0x505db0: 0x3e00008  jr          $ra
label_505db4:
    if (ctx->pc == 0x505DB4u) {
        ctx->pc = 0x505DB4u;
            // 0x505db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x505DB8u;
        goto label_505db8;
    }
    ctx->pc = 0x505DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505DB0u;
            // 0x505db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505DB8u;
label_505db8:
    // 0x505db8: 0x0  nop
    ctx->pc = 0x505db8u;
    // NOP
label_505dbc:
    // 0x505dbc: 0x0  nop
    ctx->pc = 0x505dbcu;
    // NOP
label_505dc0:
    // 0x505dc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x505dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_505dc4:
    // 0x505dc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x505dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_505dc8:
    // 0x505dc8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x505dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_505dcc:
    // 0x505dcc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x505dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_505dd0:
    // 0x505dd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x505dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_505dd4:
    // 0x505dd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x505dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_505dd8:
    // 0x505dd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x505dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_505ddc:
    // 0x505ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x505ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_505de0:
    // 0x505de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x505de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_505de4:
    // 0x505de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x505de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_505de8:
    // 0x505de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x505de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_505dec:
    // 0x505dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505df0:
    // 0x505df0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x505df0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_505df4:
    // 0x505df4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_505df8:
    if (ctx->pc == 0x505DF8u) {
        ctx->pc = 0x505DF8u;
            // 0x505df8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505DFCu;
        goto label_505dfc;
    }
    ctx->pc = 0x505DF4u;
    {
        const bool branch_taken_0x505df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x505DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505DF4u;
            // 0x505df8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505df4) {
            ctx->pc = 0x505E44u;
            goto label_505e44;
        }
    }
    ctx->pc = 0x505DFCu;
label_505dfc:
    // 0x505dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x505dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_505e00:
    // 0x505e00: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_505e04:
    if (ctx->pc == 0x505E04u) {
        ctx->pc = 0x505E04u;
            // 0x505e04: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x505E08u;
        goto label_505e08;
    }
    ctx->pc = 0x505E00u;
    {
        const bool branch_taken_0x505e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x505e00) {
            ctx->pc = 0x505E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x505E00u;
            // 0x505e04: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x505F20u;
            goto label_505f20;
        }
    }
    ctx->pc = 0x505E08u;
label_505e08:
    // 0x505e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x505e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_505e0c:
    // 0x505e0c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_505e10:
    if (ctx->pc == 0x505E10u) {
        ctx->pc = 0x505E14u;
        goto label_505e14;
    }
    ctx->pc = 0x505E0Cu;
    {
        const bool branch_taken_0x505e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x505e0c) {
            ctx->pc = 0x505E1Cu;
            goto label_505e1c;
        }
    }
    ctx->pc = 0x505E14u;
label_505e14:
    // 0x505e14: 0x10000041  b           . + 4 + (0x41 << 2)
label_505e18:
    if (ctx->pc == 0x505E18u) {
        ctx->pc = 0x505E1Cu;
        goto label_505e1c;
    }
    ctx->pc = 0x505E14u;
    {
        const bool branch_taken_0x505e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x505e14) {
            ctx->pc = 0x505F1Cu;
            goto label_505f1c;
        }
    }
    ctx->pc = 0x505E1Cu;
label_505e1c:
    // 0x505e1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x505e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_505e20:
    // 0x505e20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x505e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505e24:
    // 0x505e24: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x505e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_505e28:
    // 0x505e28: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x505e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_505e2c:
    // 0x505e2c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x505e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_505e30:
    // 0x505e30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x505e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_505e34:
    // 0x505e34: 0x320f809  jalr        $t9
label_505e38:
    if (ctx->pc == 0x505E38u) {
        ctx->pc = 0x505E38u;
            // 0x505e38: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x505E3Cu;
        goto label_505e3c;
    }
    ctx->pc = 0x505E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x505E3Cu);
        ctx->pc = 0x505E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505E34u;
            // 0x505e38: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x505E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x505E3Cu; }
            if (ctx->pc != 0x505E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x505E3Cu;
label_505e3c:
    // 0x505e3c: 0x10000037  b           . + 4 + (0x37 << 2)
label_505e40:
    if (ctx->pc == 0x505E40u) {
        ctx->pc = 0x505E44u;
        goto label_505e44;
    }
    ctx->pc = 0x505E3Cu;
    {
        const bool branch_taken_0x505e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x505e3c) {
            ctx->pc = 0x505F1Cu;
            goto label_505f1c;
        }
    }
    ctx->pc = 0x505E44u;
label_505e44:
    // 0x505e44: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x505e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_505e48:
    // 0x505e48: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_505e4c:
    if (ctx->pc == 0x505E4Cu) {
        ctx->pc = 0x505E50u;
        goto label_505e50;
    }
    ctx->pc = 0x505E48u;
    {
        const bool branch_taken_0x505e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x505e48) {
            ctx->pc = 0x505F1Cu;
            goto label_505f1c;
        }
    }
    ctx->pc = 0x505E50u;
label_505e50:
    // 0x505e50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505e54:
    // 0x505e54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x505e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_505e58:
    // 0x505e58: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x505e58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_505e5c:
    // 0x505e5c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x505e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_505e60:
    // 0x505e60: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x505e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_505e64:
    // 0x505e64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x505e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505e68:
    // 0x505e68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x505e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505e6c:
    // 0x505e6c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x505e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_505e70:
    // 0x505e70: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x505e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_505e74:
    // 0x505e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505e78:
    // 0x505e78: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x505e78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_505e7c:
    // 0x505e7c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x505e7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_505e80:
    // 0x505e80: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x505e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_505e84:
    // 0x505e84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505e88:
    // 0x505e88: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x505e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_505e8c:
    // 0x505e8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505e90:
    // 0x505e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x505e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_505e94:
    // 0x505e94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x505e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505e98:
    // 0x505e98: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x505e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_505e9c:
    // 0x505e9c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x505e9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_505ea0:
    // 0x505ea0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x505ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_505ea4:
    // 0x505ea4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x505ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_505ea8:
    // 0x505ea8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x505ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_505eac:
    // 0x505eac: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x505eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_505eb0:
    // 0x505eb0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x505eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_505eb4:
    // 0x505eb4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x505eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_505eb8:
    // 0x505eb8: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x505eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_505ebc:
    // 0x505ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x505ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_505ec0:
    // 0x505ec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x505ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_505ec4:
    // 0x505ec4: 0xc14183c  jal         func_5060F0
label_505ec8:
    if (ctx->pc == 0x505EC8u) {
        ctx->pc = 0x505EC8u;
            // 0x505ec8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505ECCu;
        goto label_505ecc;
    }
    ctx->pc = 0x505EC4u;
    SET_GPR_U32(ctx, 31, 0x505ECCu);
    ctx->pc = 0x505EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505EC4u;
            // 0x505ec8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5060F0u;
    if (runtime->hasFunction(0x5060F0u)) {
        auto targetFn = runtime->lookupFunction(0x5060F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505ECCu; }
        if (ctx->pc != 0x505ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005060F0_0x5060f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505ECCu; }
        if (ctx->pc != 0x505ECCu) { return; }
    }
    ctx->pc = 0x505ECCu;
label_505ecc:
    // 0x505ecc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x505eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_505ed0:
    // 0x505ed0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x505ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_505ed4:
    // 0x505ed4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_505ed8:
    if (ctx->pc == 0x505ED8u) {
        ctx->pc = 0x505ED8u;
            // 0x505ed8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x505EDCu;
        goto label_505edc;
    }
    ctx->pc = 0x505ED4u;
    {
        const bool branch_taken_0x505ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x505ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505ED4u;
            // 0x505ed8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505ed4) {
            ctx->pc = 0x505EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_505ea4;
        }
    }
    ctx->pc = 0x505EDCu;
label_505edc:
    // 0x505edc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x505edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_505ee0:
    // 0x505ee0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x505ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_505ee4:
    // 0x505ee4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_505ee8:
    if (ctx->pc == 0x505EE8u) {
        ctx->pc = 0x505EECu;
        goto label_505eec;
    }
    ctx->pc = 0x505EE4u;
    {
        const bool branch_taken_0x505ee4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x505ee4) {
            ctx->pc = 0x505F1Cu;
            goto label_505f1c;
        }
    }
    ctx->pc = 0x505EECu;
label_505eec:
    // 0x505eec: 0xc04e738  jal         func_139CE0
label_505ef0:
    if (ctx->pc == 0x505EF0u) {
        ctx->pc = 0x505EF0u;
            // 0x505ef0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x505EF4u;
        goto label_505ef4;
    }
    ctx->pc = 0x505EECu;
    SET_GPR_U32(ctx, 31, 0x505EF4u);
    ctx->pc = 0x505EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505EECu;
            // 0x505ef0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505EF4u; }
        if (ctx->pc != 0x505EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505EF4u; }
        if (ctx->pc != 0x505EF4u) { return; }
    }
    ctx->pc = 0x505EF4u;
label_505ef4:
    // 0x505ef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505ef8:
    // 0x505ef8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x505ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_505efc:
    // 0x505efc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x505efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_505f00:
    // 0x505f00: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x505f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_505f04:
    // 0x505f04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505f08:
    // 0x505f08: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x505f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_505f0c:
    // 0x505f0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x505f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_505f10:
    // 0x505f10: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x505f10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_505f14:
    // 0x505f14: 0xc055754  jal         func_155D50
label_505f18:
    if (ctx->pc == 0x505F18u) {
        ctx->pc = 0x505F18u;
            // 0x505f18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x505F1Cu;
        goto label_505f1c;
    }
    ctx->pc = 0x505F14u;
    SET_GPR_U32(ctx, 31, 0x505F1Cu);
    ctx->pc = 0x505F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505F14u;
            // 0x505f18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505F1Cu; }
        if (ctx->pc != 0x505F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505F1Cu; }
        if (ctx->pc != 0x505F1Cu) { return; }
    }
    ctx->pc = 0x505F1Cu;
label_505f1c:
    // 0x505f1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x505f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_505f20:
    // 0x505f20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x505f20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_505f24:
    // 0x505f24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x505f24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_505f28:
    // 0x505f28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x505f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_505f2c:
    // 0x505f2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x505f2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_505f30:
    // 0x505f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x505f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_505f34:
    // 0x505f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x505f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_505f38:
    // 0x505f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x505f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_505f3c:
    // 0x505f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x505f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_505f40:
    // 0x505f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x505f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_505f44:
    // 0x505f44: 0x3e00008  jr          $ra
label_505f48:
    if (ctx->pc == 0x505F48u) {
        ctx->pc = 0x505F48u;
            // 0x505f48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x505F4Cu;
        goto label_505f4c;
    }
    ctx->pc = 0x505F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505F44u;
            // 0x505f48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x505F4Cu;
label_505f4c:
    // 0x505f4c: 0x0  nop
    ctx->pc = 0x505f4cu;
    // NOP
label_505f50:
    // 0x505f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x505f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_505f54:
    // 0x505f54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x505f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_505f58:
    // 0x505f58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x505f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_505f5c:
    // 0x505f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x505f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_505f60:
    // 0x505f60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x505f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_505f64:
    // 0x505f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x505f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_505f68:
    // 0x505f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x505f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_505f6c:
    // 0x505f6c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x505f6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_505f70:
    // 0x505f70: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_505f74:
    if (ctx->pc == 0x505F74u) {
        ctx->pc = 0x505F74u;
            // 0x505f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x505F78u;
        goto label_505f78;
    }
    ctx->pc = 0x505F70u;
    {
        const bool branch_taken_0x505f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x505F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505F70u;
            // 0x505f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505f70) {
            ctx->pc = 0x505FC0u;
            goto label_505fc0;
        }
    }
    ctx->pc = 0x505F78u;
label_505f78:
    // 0x505f78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x505f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_505f7c:
    // 0x505f7c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_505f80:
    if (ctx->pc == 0x505F80u) {
        ctx->pc = 0x505F84u;
        goto label_505f84;
    }
    ctx->pc = 0x505F7Cu;
    {
        const bool branch_taken_0x505f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x505f7c) {
            ctx->pc = 0x505F98u;
            goto label_505f98;
        }
    }
    ctx->pc = 0x505F84u;
label_505f84:
    // 0x505f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x505f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_505f88:
    // 0x505f88: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_505f8c:
    if (ctx->pc == 0x505F8Cu) {
        ctx->pc = 0x505F90u;
        goto label_505f90;
    }
    ctx->pc = 0x505F88u;
    {
        const bool branch_taken_0x505f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x505f88) {
            ctx->pc = 0x505FF8u;
            goto label_505ff8;
        }
    }
    ctx->pc = 0x505F90u;
label_505f90:
    // 0x505f90: 0x10000019  b           . + 4 + (0x19 << 2)
label_505f94:
    if (ctx->pc == 0x505F94u) {
        ctx->pc = 0x505F98u;
        goto label_505f98;
    }
    ctx->pc = 0x505F90u;
    {
        const bool branch_taken_0x505f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x505f90) {
            ctx->pc = 0x505FF8u;
            goto label_505ff8;
        }
    }
    ctx->pc = 0x505F98u;
label_505f98:
    // 0x505f98: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x505f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_505f9c:
    // 0x505f9c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x505f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_505fa0:
    // 0x505fa0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x505fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_505fa4:
    // 0x505fa4: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x505fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_505fa8:
    // 0x505fa8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_505fac:
    if (ctx->pc == 0x505FACu) {
        ctx->pc = 0x505FB0u;
        goto label_505fb0;
    }
    ctx->pc = 0x505FA8u;
    {
        const bool branch_taken_0x505fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x505fa8) {
            ctx->pc = 0x505FF8u;
            goto label_505ff8;
        }
    }
    ctx->pc = 0x505FB0u;
label_505fb0:
    // 0x505fb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x505fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_505fb4:
    // 0x505fb4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x505fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_505fb8:
    // 0x505fb8: 0x320f809  jalr        $t9
label_505fbc:
    if (ctx->pc == 0x505FBCu) {
        ctx->pc = 0x505FC0u;
        goto label_505fc0;
    }
    ctx->pc = 0x505FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x505FC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x505FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x505FC0u; }
            if (ctx->pc != 0x505FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x505FC0u;
label_505fc0:
    // 0x505fc0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x505fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_505fc4:
    // 0x505fc4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_505fc8:
    if (ctx->pc == 0x505FC8u) {
        ctx->pc = 0x505FCCu;
        goto label_505fcc;
    }
    ctx->pc = 0x505FC4u;
    {
        const bool branch_taken_0x505fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x505fc4) {
            ctx->pc = 0x505FF8u;
            goto label_505ff8;
        }
    }
    ctx->pc = 0x505FCCu;
label_505fcc:
    // 0x505fcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x505fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505fd0:
    // 0x505fd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x505fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_505fd4:
    // 0x505fd4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x505fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_505fd8:
    // 0x505fd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x505fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_505fdc:
    // 0x505fdc: 0xc1418d4  jal         func_506350
label_505fe0:
    if (ctx->pc == 0x505FE0u) {
        ctx->pc = 0x505FE0u;
            // 0x505fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x505FE4u;
        goto label_505fe4;
    }
    ctx->pc = 0x505FDCu;
    SET_GPR_U32(ctx, 31, 0x505FE4u);
    ctx->pc = 0x505FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x505FDCu;
            // 0x505fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x506350u;
    if (runtime->hasFunction(0x506350u)) {
        auto targetFn = runtime->lookupFunction(0x506350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505FE4u; }
        if (ctx->pc != 0x505FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00506350_0x506350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x505FE4u; }
        if (ctx->pc != 0x505FE4u) { return; }
    }
    ctx->pc = 0x505FE4u;
label_505fe4:
    // 0x505fe4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x505fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_505fe8:
    // 0x505fe8: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x505fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_505fec:
    // 0x505fec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_505ff0:
    if (ctx->pc == 0x505FF0u) {
        ctx->pc = 0x505FF0u;
            // 0x505ff0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x505FF4u;
        goto label_505ff4;
    }
    ctx->pc = 0x505FECu;
    {
        const bool branch_taken_0x505fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x505FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x505FECu;
            // 0x505ff0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505fec) {
            ctx->pc = 0x505FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_505fd4;
        }
    }
    ctx->pc = 0x505FF4u;
label_505ff4:
    // 0x505ff4: 0x0  nop
    ctx->pc = 0x505ff4u;
    // NOP
label_505ff8:
    // 0x505ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x505ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_505ffc:
    // 0x505ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x505ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_506000:
    // 0x506000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x506000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_506004:
    // 0x506004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x506004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_506008:
    // 0x506008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50600c:
    // 0x50600c: 0x3e00008  jr          $ra
label_506010:
    if (ctx->pc == 0x506010u) {
        ctx->pc = 0x506010u;
            // 0x506010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x506014u;
        goto label_506014;
    }
    ctx->pc = 0x50600Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50600Cu;
            // 0x506010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506014u;
label_506014:
    // 0x506014: 0x0  nop
    ctx->pc = 0x506014u;
    // NOP
label_506018:
    // 0x506018: 0x0  nop
    ctx->pc = 0x506018u;
    // NOP
label_50601c:
    // 0x50601c: 0x0  nop
    ctx->pc = 0x50601cu;
    // NOP
label_506020:
    // 0x506020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_506024:
    // 0x506024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506028:
    // 0x506028: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x506028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_50602c:
    // 0x50602c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_506030:
    if (ctx->pc == 0x506030u) {
        ctx->pc = 0x506034u;
        goto label_506034;
    }
    ctx->pc = 0x50602Cu;
    {
        const bool branch_taken_0x50602c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50602c) {
            ctx->pc = 0x5060E0u;
            goto label_5060e0;
        }
    }
    ctx->pc = 0x506034u;
label_506034:
    // 0x506034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x506034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_506038:
    // 0x506038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x506038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50603c:
    // 0x50603c: 0x3c0e00af  lui         $t6, 0xAF
    ctx->pc = 0x50603cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)175 << 16));
label_506040:
    // 0x506040: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x506040u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
label_506044:
    // 0x506044: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x506044u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
label_506048:
    // 0x506048: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x506048u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
label_50604c:
    // 0x50604c: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x50604cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
label_506050:
    // 0x506050: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x506050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
label_506054:
    // 0x506054: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x506054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
label_506058:
    // 0x506058: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x506058u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_50605c:
    // 0x50605c: 0x8c900074  lw          $s0, 0x74($a0)
    ctx->pc = 0x50605cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_506060:
    // 0x506060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x506060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_506064:
    // 0x506064: 0x8dd80d30  lw          $t8, 0xD30($t6)
    ctx->pc = 0x506064u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 3376)));
label_506068:
    // 0x506068: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x506068u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_50606c:
    // 0x50606c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x50606cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_506070:
    // 0x506070: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x506070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_506074:
    // 0x506074: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x506074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_506078:
    // 0x506078: 0x8f180074  lw          $t8, 0x74($t8)
    ctx->pc = 0x506078u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 116)));
label_50607c:
    // 0x50607c: 0x8e190040  lw          $t9, 0x40($s0)
    ctx->pc = 0x50607cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_506080:
    // 0x506080: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x506080u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_506084:
    // 0x506084: 0x319c021  addu        $t8, $t8, $t9
    ctx->pc = 0x506084u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
label_506088:
    // 0x506088: 0x8f180000  lw          $t8, 0x0($t8)
    ctx->pc = 0x506088u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_50608c:
    // 0x50608c: 0xae180058  sw          $t8, 0x58($s0)
    ctx->pc = 0x50608cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 24));
label_506090:
    // 0x506090: 0xc5a2cca0  lwc1        $f2, -0x3360($t5)
    ctx->pc = 0x506090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294954144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506094:
    // 0x506094: 0x8f180064  lw          $t8, 0x64($t8)
    ctx->pc = 0x506094u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 100)));
label_506098:
    // 0x506098: 0xc581cca4  lwc1        $f1, -0x335C($t4)
    ctx->pc = 0x506098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294954148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50609c:
    // 0x50609c: 0xc560cca8  lwc1        $f0, -0x3358($t3)
    ctx->pc = 0x50609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294954152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5060a0:
    // 0x5060a0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x5060a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_5060a4:
    // 0x5060a4: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x5060a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_5060a8:
    // 0x5060a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x5060a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_5060ac:
    // 0x5060ac: 0x31dc021  addu        $t8, $t8, $sp
    ctx->pc = 0x5060acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 29)));
label_5060b0:
    // 0x5060b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x5060b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_5060b4:
    // 0x5060b4: 0xc540ccac  lwc1        $f0, -0x3354($t2)
    ctx->pc = 0x5060b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294954156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5060b8:
    // 0x5060b8: 0xc522ccb0  lwc1        $f2, -0x3350($t1)
    ctx->pc = 0x5060b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294954160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5060bc:
    // 0x5060bc: 0xc501ccb4  lwc1        $f1, -0x334C($t0)
    ctx->pc = 0x5060bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5060c0:
    // 0x5060c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x5060c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_5060c4:
    // 0x5060c4: 0xc4e0ccb8  lwc1        $f0, -0x3348($a3)
    ctx->pc = 0x5060c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294954168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5060c8:
    // 0x5060c8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x5060c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_5060cc:
    // 0x5060cc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x5060ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_5060d0:
    // 0x5060d0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x5060d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_5060d4:
    // 0x5060d4: 0xc7000010  lwc1        $f0, 0x10($t8)
    ctx->pc = 0x5060d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5060d8:
    // 0x5060d8: 0x15e0ffe0  bnez        $t7, . + 4 + (-0x20 << 2)
label_5060dc:
    if (ctx->pc == 0x5060DCu) {
        ctx->pc = 0x5060DCu;
            // 0x5060dc: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->pc = 0x5060E0u;
        goto label_5060e0;
    }
    ctx->pc = 0x5060D8u;
    {
        const bool branch_taken_0x5060d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x5060DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5060D8u;
            // 0x5060dc: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5060d8) {
            ctx->pc = 0x50605Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50605c;
        }
    }
    ctx->pc = 0x5060E0u;
label_5060e0:
    // 0x5060e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5060e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5060e4:
    // 0x5060e4: 0x3e00008  jr          $ra
label_5060e8:
    if (ctx->pc == 0x5060E8u) {
        ctx->pc = 0x5060E8u;
            // 0x5060e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5060ECu;
        goto label_5060ec;
    }
    ctx->pc = 0x5060E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5060E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5060E4u;
            // 0x5060e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5060ECu;
label_5060ec:
    // 0x5060ec: 0x0  nop
    ctx->pc = 0x5060ecu;
    // NOP
}

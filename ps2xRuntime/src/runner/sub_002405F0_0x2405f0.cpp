#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002405F0
// Address: 0x2405f0 - 0x240d50
void sub_002405F0_0x2405f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002405F0_0x2405f0");
#endif

    switch (ctx->pc) {
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        case 0x240840u: goto label_240840;
        case 0x240844u: goto label_240844;
        case 0x240848u: goto label_240848;
        case 0x24084cu: goto label_24084c;
        case 0x240850u: goto label_240850;
        case 0x240854u: goto label_240854;
        case 0x240858u: goto label_240858;
        case 0x24085cu: goto label_24085c;
        case 0x240860u: goto label_240860;
        case 0x240864u: goto label_240864;
        case 0x240868u: goto label_240868;
        case 0x24086cu: goto label_24086c;
        case 0x240870u: goto label_240870;
        case 0x240874u: goto label_240874;
        case 0x240878u: goto label_240878;
        case 0x24087cu: goto label_24087c;
        case 0x240880u: goto label_240880;
        case 0x240884u: goto label_240884;
        case 0x240888u: goto label_240888;
        case 0x24088cu: goto label_24088c;
        case 0x240890u: goto label_240890;
        case 0x240894u: goto label_240894;
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408d4u: goto label_2408d4;
        case 0x2408d8u: goto label_2408d8;
        case 0x2408dcu: goto label_2408dc;
        case 0x2408e0u: goto label_2408e0;
        case 0x2408e4u: goto label_2408e4;
        case 0x2408e8u: goto label_2408e8;
        case 0x2408ecu: goto label_2408ec;
        case 0x2408f0u: goto label_2408f0;
        case 0x2408f4u: goto label_2408f4;
        case 0x2408f8u: goto label_2408f8;
        case 0x2408fcu: goto label_2408fc;
        case 0x240900u: goto label_240900;
        case 0x240904u: goto label_240904;
        case 0x240908u: goto label_240908;
        case 0x24090cu: goto label_24090c;
        case 0x240910u: goto label_240910;
        case 0x240914u: goto label_240914;
        case 0x240918u: goto label_240918;
        case 0x24091cu: goto label_24091c;
        case 0x240920u: goto label_240920;
        case 0x240924u: goto label_240924;
        case 0x240928u: goto label_240928;
        case 0x24092cu: goto label_24092c;
        case 0x240930u: goto label_240930;
        case 0x240934u: goto label_240934;
        case 0x240938u: goto label_240938;
        case 0x24093cu: goto label_24093c;
        case 0x240940u: goto label_240940;
        case 0x240944u: goto label_240944;
        case 0x240948u: goto label_240948;
        case 0x24094cu: goto label_24094c;
        case 0x240950u: goto label_240950;
        case 0x240954u: goto label_240954;
        case 0x240958u: goto label_240958;
        case 0x24095cu: goto label_24095c;
        case 0x240960u: goto label_240960;
        case 0x240964u: goto label_240964;
        case 0x240968u: goto label_240968;
        case 0x24096cu: goto label_24096c;
        case 0x240970u: goto label_240970;
        case 0x240974u: goto label_240974;
        case 0x240978u: goto label_240978;
        case 0x24097cu: goto label_24097c;
        case 0x240980u: goto label_240980;
        case 0x240984u: goto label_240984;
        case 0x240988u: goto label_240988;
        case 0x24098cu: goto label_24098c;
        case 0x240990u: goto label_240990;
        case 0x240994u: goto label_240994;
        case 0x240998u: goto label_240998;
        case 0x24099cu: goto label_24099c;
        case 0x2409a0u: goto label_2409a0;
        case 0x2409a4u: goto label_2409a4;
        case 0x2409a8u: goto label_2409a8;
        case 0x2409acu: goto label_2409ac;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        case 0x240ab0u: goto label_240ab0;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ab8u: goto label_240ab8;
        case 0x240abcu: goto label_240abc;
        case 0x240ac0u: goto label_240ac0;
        case 0x240ac4u: goto label_240ac4;
        case 0x240ac8u: goto label_240ac8;
        case 0x240accu: goto label_240acc;
        case 0x240ad0u: goto label_240ad0;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ad8u: goto label_240ad8;
        case 0x240adcu: goto label_240adc;
        case 0x240ae0u: goto label_240ae0;
        case 0x240ae4u: goto label_240ae4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240aecu: goto label_240aec;
        case 0x240af0u: goto label_240af0;
        case 0x240af4u: goto label_240af4;
        case 0x240af8u: goto label_240af8;
        case 0x240afcu: goto label_240afc;
        case 0x240b00u: goto label_240b00;
        case 0x240b04u: goto label_240b04;
        case 0x240b08u: goto label_240b08;
        case 0x240b0cu: goto label_240b0c;
        case 0x240b10u: goto label_240b10;
        case 0x240b14u: goto label_240b14;
        case 0x240b18u: goto label_240b18;
        case 0x240b1cu: goto label_240b1c;
        case 0x240b20u: goto label_240b20;
        case 0x240b24u: goto label_240b24;
        case 0x240b28u: goto label_240b28;
        case 0x240b2cu: goto label_240b2c;
        case 0x240b30u: goto label_240b30;
        case 0x240b34u: goto label_240b34;
        case 0x240b38u: goto label_240b38;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b40u: goto label_240b40;
        case 0x240b44u: goto label_240b44;
        case 0x240b48u: goto label_240b48;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b50u: goto label_240b50;
        case 0x240b54u: goto label_240b54;
        case 0x240b58u: goto label_240b58;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b60u: goto label_240b60;
        case 0x240b64u: goto label_240b64;
        case 0x240b68u: goto label_240b68;
        case 0x240b6cu: goto label_240b6c;
        case 0x240b70u: goto label_240b70;
        case 0x240b74u: goto label_240b74;
        case 0x240b78u: goto label_240b78;
        case 0x240b7cu: goto label_240b7c;
        case 0x240b80u: goto label_240b80;
        case 0x240b84u: goto label_240b84;
        case 0x240b88u: goto label_240b88;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b90u: goto label_240b90;
        case 0x240b94u: goto label_240b94;
        case 0x240b98u: goto label_240b98;
        case 0x240b9cu: goto label_240b9c;
        case 0x240ba0u: goto label_240ba0;
        case 0x240ba4u: goto label_240ba4;
        case 0x240ba8u: goto label_240ba8;
        case 0x240bacu: goto label_240bac;
        case 0x240bb0u: goto label_240bb0;
        case 0x240bb4u: goto label_240bb4;
        case 0x240bb8u: goto label_240bb8;
        case 0x240bbcu: goto label_240bbc;
        case 0x240bc0u: goto label_240bc0;
        case 0x240bc4u: goto label_240bc4;
        case 0x240bc8u: goto label_240bc8;
        case 0x240bccu: goto label_240bcc;
        case 0x240bd0u: goto label_240bd0;
        case 0x240bd4u: goto label_240bd4;
        case 0x240bd8u: goto label_240bd8;
        case 0x240bdcu: goto label_240bdc;
        case 0x240be0u: goto label_240be0;
        case 0x240be4u: goto label_240be4;
        case 0x240be8u: goto label_240be8;
        case 0x240becu: goto label_240bec;
        case 0x240bf0u: goto label_240bf0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bf8u: goto label_240bf8;
        case 0x240bfcu: goto label_240bfc;
        case 0x240c00u: goto label_240c00;
        case 0x240c04u: goto label_240c04;
        case 0x240c08u: goto label_240c08;
        case 0x240c0cu: goto label_240c0c;
        case 0x240c10u: goto label_240c10;
        case 0x240c14u: goto label_240c14;
        case 0x240c18u: goto label_240c18;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c20u: goto label_240c20;
        case 0x240c24u: goto label_240c24;
        case 0x240c28u: goto label_240c28;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c30u: goto label_240c30;
        case 0x240c34u: goto label_240c34;
        case 0x240c38u: goto label_240c38;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c40u: goto label_240c40;
        case 0x240c44u: goto label_240c44;
        case 0x240c48u: goto label_240c48;
        case 0x240c4cu: goto label_240c4c;
        case 0x240c50u: goto label_240c50;
        case 0x240c54u: goto label_240c54;
        case 0x240c58u: goto label_240c58;
        case 0x240c5cu: goto label_240c5c;
        case 0x240c60u: goto label_240c60;
        case 0x240c64u: goto label_240c64;
        case 0x240c68u: goto label_240c68;
        case 0x240c6cu: goto label_240c6c;
        case 0x240c70u: goto label_240c70;
        case 0x240c74u: goto label_240c74;
        case 0x240c78u: goto label_240c78;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c80u: goto label_240c80;
        case 0x240c84u: goto label_240c84;
        case 0x240c88u: goto label_240c88;
        case 0x240c8cu: goto label_240c8c;
        case 0x240c90u: goto label_240c90;
        case 0x240c94u: goto label_240c94;
        case 0x240c98u: goto label_240c98;
        case 0x240c9cu: goto label_240c9c;
        case 0x240ca0u: goto label_240ca0;
        case 0x240ca4u: goto label_240ca4;
        case 0x240ca8u: goto label_240ca8;
        case 0x240cacu: goto label_240cac;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cb4u: goto label_240cb4;
        case 0x240cb8u: goto label_240cb8;
        case 0x240cbcu: goto label_240cbc;
        case 0x240cc0u: goto label_240cc0;
        case 0x240cc4u: goto label_240cc4;
        case 0x240cc8u: goto label_240cc8;
        case 0x240cccu: goto label_240ccc;
        case 0x240cd0u: goto label_240cd0;
        case 0x240cd4u: goto label_240cd4;
        case 0x240cd8u: goto label_240cd8;
        case 0x240cdcu: goto label_240cdc;
        case 0x240ce0u: goto label_240ce0;
        case 0x240ce4u: goto label_240ce4;
        case 0x240ce8u: goto label_240ce8;
        case 0x240cecu: goto label_240cec;
        case 0x240cf0u: goto label_240cf0;
        case 0x240cf4u: goto label_240cf4;
        case 0x240cf8u: goto label_240cf8;
        case 0x240cfcu: goto label_240cfc;
        case 0x240d00u: goto label_240d00;
        case 0x240d04u: goto label_240d04;
        case 0x240d08u: goto label_240d08;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d10u: goto label_240d10;
        case 0x240d14u: goto label_240d14;
        case 0x240d18u: goto label_240d18;
        case 0x240d1cu: goto label_240d1c;
        case 0x240d20u: goto label_240d20;
        case 0x240d24u: goto label_240d24;
        case 0x240d28u: goto label_240d28;
        case 0x240d2cu: goto label_240d2c;
        case 0x240d30u: goto label_240d30;
        case 0x240d34u: goto label_240d34;
        case 0x240d38u: goto label_240d38;
        case 0x240d3cu: goto label_240d3c;
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        default: break;
    }

    ctx->pc = 0x2405f0u;

label_2405f0:
    // 0x2405f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2405f4:
    // 0x2405f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2405f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2405f8:
    // 0x2405f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2405f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2405fc:
    // 0x2405fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2405fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_240600:
    // 0x240600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_240604:
    // 0x240604: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x240604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240608:
    // 0x240608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24060c:
    // 0x24060c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24060cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_240610:
    // 0x240610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240614:
    // 0x240614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240618:
    // 0x240618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24061c:
    // 0x24061c: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_240620:
    // 0x240620: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x240620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_240624:
    // 0x240624: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x240624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_240628:
    // 0x240628: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_24062c:
    if (ctx->pc == 0x24062Cu) {
        ctx->pc = 0x24062Cu;
            // 0x24062c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240630u;
        goto label_240630;
    }
    ctx->pc = 0x240628u;
    {
        const bool branch_taken_0x240628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240628u;
            // 0x24062c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240628) {
            ctx->pc = 0x24065Cu;
            goto label_24065c;
        }
    }
    ctx->pc = 0x240630u;
label_240630:
    // 0x240630: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x240630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240634:
    // 0x240634: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_240638:
    if (ctx->pc == 0x240638u) {
        ctx->pc = 0x240638u;
            // 0x240638: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24063Cu;
        goto label_24063c;
    }
    ctx->pc = 0x240634u;
    {
        const bool branch_taken_0x240634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240634) {
            ctx->pc = 0x240638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240634u;
            // 0x240638: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240654u;
            goto label_240654;
        }
    }
    ctx->pc = 0x24063Cu;
label_24063c:
    // 0x24063c: 0x96830020  lhu         $v1, 0x20($s4)
    ctx->pc = 0x24063cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_240640:
    // 0x240640: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x240640u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_240644:
    // 0x240644: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x240644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240648:
    // 0x240648: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_24064c:
    if (ctx->pc == 0x24064Cu) {
        ctx->pc = 0x24064Cu;
            // 0x24064c: 0x8e830050  lw          $v1, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->pc = 0x240650u;
        goto label_240650;
    }
    ctx->pc = 0x240648u;
    {
        const bool branch_taken_0x240648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240648) {
            ctx->pc = 0x24064Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240648u;
            // 0x24064c: 0x8e830050  lw          $v1, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240660u;
            goto label_240660;
        }
    }
    ctx->pc = 0x240650u;
label_240650:
    // 0x240650: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x240650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_240654:
    // 0x240654: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x240654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240658:
    // 0x240658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24065c:
    // 0x24065c: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x24065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_240660:
    // 0x240660: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_240664:
    if (ctx->pc == 0x240664u) {
        ctx->pc = 0x240664u;
            // 0x240664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240668u;
        goto label_240668;
    }
    ctx->pc = 0x240660u;
    {
        const bool branch_taken_0x240660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240660u;
            // 0x240664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240660) {
            ctx->pc = 0x240688u;
            goto label_240688;
        }
    }
    ctx->pc = 0x240668u;
label_240668:
    // 0x240668: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24066c:
    // 0x24066c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x24066cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240670:
    // 0x240670: 0x0  nop
    ctx->pc = 0x240670u;
    // NOP
label_240674:
    // 0x240674: 0x0  nop
    ctx->pc = 0x240674u;
    // NOP
label_240678:
    // 0x240678: 0x0  nop
    ctx->pc = 0x240678u;
    // NOP
label_24067c:
    // 0x24067c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_240680:
    if (ctx->pc == 0x240680u) {
        ctx->pc = 0x240684u;
        goto label_240684;
    }
    ctx->pc = 0x24067Cu;
    {
        const bool branch_taken_0x24067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24067c) {
            ctx->pc = 0x240668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240668;
        }
    }
    ctx->pc = 0x240684u;
label_240684:
    // 0x240684: 0x0  nop
    ctx->pc = 0x240684u;
    // NOP
label_240688:
    // 0x240688: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x240688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_24068c:
    // 0x24068c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_240690:
    if (ctx->pc == 0x240690u) {
        ctx->pc = 0x240690u;
            // 0x240690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240694u;
        goto label_240694;
    }
    ctx->pc = 0x24068Cu;
    {
        const bool branch_taken_0x24068c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24068Cu;
            // 0x240690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24068c) {
            ctx->pc = 0x2406B0u;
            goto label_2406b0;
        }
    }
    ctx->pc = 0x240694u;
label_240694:
    // 0x240694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x240694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_240698:
    // 0x240698: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x240698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24069c:
    // 0x24069c: 0x0  nop
    ctx->pc = 0x24069cu;
    // NOP
label_2406a0:
    // 0x2406a0: 0x0  nop
    ctx->pc = 0x2406a0u;
    // NOP
label_2406a4:
    // 0x2406a4: 0x0  nop
    ctx->pc = 0x2406a4u;
    // NOP
label_2406a8:
    // 0x2406a8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2406ac:
    if (ctx->pc == 0x2406ACu) {
        ctx->pc = 0x2406B0u;
        goto label_2406b0;
    }
    ctx->pc = 0x2406A8u;
    {
        const bool branch_taken_0x2406a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2406a8) {
            ctx->pc = 0x240694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240694;
        }
    }
    ctx->pc = 0x2406B0u;
label_2406b0:
    // 0x2406b0: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_2406b4:
    // 0x2406b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2406b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2406b8:
    // 0x2406b8: 0xaea20084  sw          $v0, 0x84($s5)
    ctx->pc = 0x2406b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
label_2406bc:
    // 0x2406bc: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x2406bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_2406c0:
    // 0x2406c0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2406c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2406c4:
    // 0x2406c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2406c8:
    if (ctx->pc == 0x2406C8u) {
        ctx->pc = 0x2406C8u;
            // 0x2406c8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2406CCu;
        goto label_2406cc;
    }
    ctx->pc = 0x2406C4u;
    {
        const bool branch_taken_0x2406c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2406C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406C4u;
            // 0x2406c8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406c4) {
            ctx->pc = 0x2406E0u;
            goto label_2406e0;
        }
    }
    ctx->pc = 0x2406CCu;
label_2406cc:
    // 0x2406cc: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x2406ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_2406d0:
    // 0x2406d0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2406d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2406d4:
    // 0x2406d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2406d8:
    if (ctx->pc == 0x2406D8u) {
        ctx->pc = 0x2406D8u;
            // 0x2406d8: 0x92820028  lbu         $v0, 0x28($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->pc = 0x2406DCu;
        goto label_2406dc;
    }
    ctx->pc = 0x2406D4u;
    {
        const bool branch_taken_0x2406d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2406d4) {
            ctx->pc = 0x2406D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2406D4u;
            // 0x2406d8: 0x92820028  lbu         $v0, 0x28($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x2406DCu;
label_2406dc:
    // 0x2406dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2406dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2406e0:
    // 0x2406e0: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x2406e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_2406e4:
    // 0x2406e4: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x2406e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_2406e8:
    // 0x2406e8: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x2406e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
label_2406ec:
    // 0x2406ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2406ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2406f0:
    // 0x2406f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2406f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2406f4:
    // 0x2406f4: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2406f4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2406f8:
    // 0x2406f8: 0x56c00008  bnel        $s6, $zero, . + 4 + (0x8 << 2)
label_2406fc:
    if (ctx->pc == 0x2406FCu) {
        ctx->pc = 0x2406FCu;
            // 0x2406fc: 0x4163c  dsll32      $v0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
        ctx->pc = 0x240700u;
        goto label_240700;
    }
    ctx->pc = 0x2406F8u;
    {
        const bool branch_taken_0x2406f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2406f8) {
            ctx->pc = 0x2406FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2406F8u;
            // 0x2406fc: 0x4163c  dsll32      $v0, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24071Cu;
            goto label_24071c;
        }
    }
    ctx->pc = 0x240700u;
label_240700:
    // 0x240700: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x240700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_240704:
    // 0x240704: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x240704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_240708:
    // 0x240708: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x240708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
label_24070c:
    // 0x24070c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x24070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_240710:
    // 0x240710: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x240710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_240714:
    // 0x240714: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x240714u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240718:
    // 0x240718: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x240718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_24071c:
    // 0x24071c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x24071cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_240720:
    // 0x240720: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_240724:
    if (ctx->pc == 0x240724u) {
        ctx->pc = 0x240724u;
            // 0x240724: 0x92860027  lbu         $a2, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->pc = 0x240728u;
        goto label_240728;
    }
    ctx->pc = 0x240720u;
    {
        const bool branch_taken_0x240720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240720) {
            ctx->pc = 0x240724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240720u;
            // 0x240724: 0x92860027  lbu         $a2, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2407CCu;
            goto label_2407cc;
        }
    }
    ctx->pc = 0x240728u;
label_240728:
    // 0x240728: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_24072c:
    if (ctx->pc == 0x24072Cu) {
        ctx->pc = 0x24072Cu;
            // 0x24072c: 0x92640028  lbu         $a0, 0x28($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->pc = 0x240730u;
        goto label_240730;
    }
    ctx->pc = 0x240728u;
    {
        const bool branch_taken_0x240728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240728) {
            ctx->pc = 0x24072Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240728u;
            // 0x24072c: 0x92640028  lbu         $a0, 0x28($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240768u;
            goto label_240768;
        }
    }
    ctx->pc = 0x240730u;
label_240730:
    // 0x240730: 0x92860028  lbu         $a2, 0x28($s4)
    ctx->pc = 0x240730u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_240734:
    // 0x240734: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x240734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_240738:
    // 0x240738: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x240738u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_24073c:
    // 0x24073c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240740:
    // 0x240740: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x240740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_240744:
    // 0x240744: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x240744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_240748:
    // 0x240748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24074c:
    // 0x24074c: 0xc0905dc  jal         func_241770
label_240750:
    if (ctx->pc == 0x240750u) {
        ctx->pc = 0x240750u;
            // 0x240750: 0xa2820028  sb          $v0, 0x28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240754u;
        goto label_240754;
    }
    ctx->pc = 0x24074Cu;
    SET_GPR_U32(ctx, 31, 0x240754u);
    ctx->pc = 0x240750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24074Cu;
            // 0x240750: 0xa2820028  sb          $v0, 0x28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241770u;
    if (runtime->hasFunction(0x241770u)) {
        auto targetFn = runtime->lookupFunction(0x241770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240754u; }
        if (ctx->pc != 0x240754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241770_0x241770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240754u; }
        if (ctx->pc != 0x240754u) { return; }
    }
    ctx->pc = 0x240754u;
label_240754:
    // 0x240754: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x240754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_240758:
    // 0x240758: 0xa2820025  sb          $v0, 0x25($s4)
    ctx->pc = 0x240758u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 2));
label_24075c:
    // 0x24075c: 0x92620026  lbu         $v0, 0x26($s3)
    ctx->pc = 0x24075cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
label_240760:
    // 0x240760: 0x10000019  b           . + 4 + (0x19 << 2)
label_240764:
    if (ctx->pc == 0x240764u) {
        ctx->pc = 0x240764u;
            // 0x240764: 0xa2820026  sb          $v0, 0x26($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240768u;
        goto label_240768;
    }
    ctx->pc = 0x240760u;
    {
        const bool branch_taken_0x240760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240760u;
            // 0x240764: 0xa2820026  sb          $v0, 0x26($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240760) {
            ctx->pc = 0x2407C8u;
            goto label_2407c8;
        }
    }
    ctx->pc = 0x240768u;
label_240768:
    // 0x240768: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x240768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_24076c:
    // 0x24076c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_240770:
    if (ctx->pc == 0x240770u) {
        ctx->pc = 0x240770u;
            // 0x240770: 0x92630025  lbu         $v1, 0x25($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
        ctx->pc = 0x240774u;
        goto label_240774;
    }
    ctx->pc = 0x24076Cu;
    {
        const bool branch_taken_0x24076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24076c) {
            ctx->pc = 0x240770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24076Cu;
            // 0x240770: 0x92630025  lbu         $v1, 0x25($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24079Cu;
            goto label_24079c;
        }
    }
    ctx->pc = 0x240774u;
label_240774:
    // 0x240774: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x240774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_240778:
    // 0x240778: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x240778u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_24077c:
    // 0x24077c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_240780:
    // 0x240780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x240780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240784:
    // 0x240784: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_240788:
    // 0x240788: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x240788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24078c:
    // 0x24078c: 0xc0905dc  jal         func_241770
label_240790:
    if (ctx->pc == 0x240790u) {
        ctx->pc = 0x240790u;
            // 0x240790: 0xa2620028  sb          $v0, 0x28($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240794u;
        goto label_240794;
    }
    ctx->pc = 0x24078Cu;
    SET_GPR_U32(ctx, 31, 0x240794u);
    ctx->pc = 0x240790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24078Cu;
            // 0x240790: 0xa2620028  sb          $v0, 0x28($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241770u;
    if (runtime->hasFunction(0x241770u)) {
        auto targetFn = runtime->lookupFunction(0x241770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240794u; }
        if (ctx->pc != 0x240794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241770_0x241770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240794u; }
        if (ctx->pc != 0x240794u) { return; }
    }
    ctx->pc = 0x240794u;
label_240794:
    // 0x240794: 0x1000000c  b           . + 4 + (0xC << 2)
label_240798:
    if (ctx->pc == 0x240798u) {
        ctx->pc = 0x24079Cu;
        goto label_24079c;
    }
    ctx->pc = 0x240794u;
    {
        const bool branch_taken_0x240794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240794) {
            ctx->pc = 0x2407C8u;
            goto label_2407c8;
        }
    }
    ctx->pc = 0x24079Cu;
label_24079c:
    // 0x24079c: 0x92820025  lbu         $v0, 0x25($s4)
    ctx->pc = 0x24079cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 37)));
label_2407a0:
    // 0x2407a0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2407a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2407a4:
    // 0x2407a4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_2407a8:
    if (ctx->pc == 0x2407A8u) {
        ctx->pc = 0x2407A8u;
            // 0x2407a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2407ACu;
        goto label_2407ac;
    }
    ctx->pc = 0x2407A4u;
    {
        const bool branch_taken_0x2407a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407a4) {
            ctx->pc = 0x2407A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2407A4u;
            // 0x2407a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2407ACu;
            goto label_2407ac;
        }
    }
    ctx->pc = 0x2407ACu;
label_2407ac:
    // 0x2407ac: 0xa2820025  sb          $v0, 0x25($s4)
    ctx->pc = 0x2407acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 2));
label_2407b0:
    // 0x2407b0: 0x92630026  lbu         $v1, 0x26($s3)
    ctx->pc = 0x2407b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
label_2407b4:
    // 0x2407b4: 0x92820026  lbu         $v0, 0x26($s4)
    ctx->pc = 0x2407b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 38)));
label_2407b8:
    // 0x2407b8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2407b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2407bc:
    // 0x2407bc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_2407c0:
    if (ctx->pc == 0x2407C0u) {
        ctx->pc = 0x2407C0u;
            // 0x2407c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2407C4u;
        goto label_2407c4;
    }
    ctx->pc = 0x2407BCu;
    {
        const bool branch_taken_0x2407bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407bc) {
            ctx->pc = 0x2407C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2407BCu;
            // 0x2407c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2407C4u;
            goto label_2407c4;
        }
    }
    ctx->pc = 0x2407C4u;
label_2407c4:
    // 0x2407c4: 0xa2820026  sb          $v0, 0x26($s4)
    ctx->pc = 0x2407c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 2));
label_2407c8:
    // 0x2407c8: 0x92860027  lbu         $a2, 0x27($s4)
    ctx->pc = 0x2407c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
label_2407cc:
    // 0x2407cc: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x2407ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_2407d0:
    // 0x2407d0: 0x92630027  lbu         $v1, 0x27($s3)
    ctx->pc = 0x2407d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_2407d4:
    // 0x2407d4: 0x2684005c  addiu       $a0, $s4, 0x5C
    ctx->pc = 0x2407d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 92));
label_2407d8:
    // 0x2407d8: 0x2665005c  addiu       $a1, $s3, 0x5C
    ctx->pc = 0x2407d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_2407dc:
    // 0x2407dc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2407dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_2407e0:
    // 0x2407e0: 0x6373c  dsll32      $a2, $a2, 28
    ctx->pc = 0x2407e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 28));
label_2407e4:
    // 0x2407e4: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x2407e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
label_2407e8:
    // 0x2407e8: 0x637be  dsrl32      $a2, $a2, 30
    ctx->pc = 0x2407e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 30));
label_2407ec:
    // 0x2407ec: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x2407ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
label_2407f0:
    // 0x2407f0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2407f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2407f4:
    // 0x2407f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2407f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2407f8:
    // 0x2407f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2407f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2407fc:
    // 0x2407fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2407fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_240800:
    // 0x240800: 0xc092490  jal         func_249240
label_240804:
    if (ctx->pc == 0x240804u) {
        ctx->pc = 0x240804u;
            // 0x240804: 0xa2820027  sb          $v0, 0x27($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240808u;
        goto label_240808;
    }
    ctx->pc = 0x240800u;
    SET_GPR_U32(ctx, 31, 0x240808u);
    ctx->pc = 0x240804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240800u;
            // 0x240804: 0xa2820027  sb          $v0, 0x27($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (runtime->hasFunction(0x249240u)) {
        auto targetFn = runtime->lookupFunction(0x249240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240808u; }
        if (ctx->pc != 0x240808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249240_0x249240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240808u; }
        if (ctx->pc != 0x240808u) { return; }
    }
    ctx->pc = 0x240808u;
label_240808:
    // 0x240808: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x240808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_24080c:
    // 0x24080c: 0x2692004c  addiu       $s2, $s4, 0x4C
    ctx->pc = 0x24080cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
label_240810:
    // 0x240810: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_240814:
    // 0x240814: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_240818:
    // 0x240818: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x240818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_24081c:
    // 0x24081c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x24081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_240820:
    // 0x240820: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_240824:
    // 0x240824: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x240824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_240828:
    // 0x240828: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_24082c:
    if (ctx->pc == 0x24082Cu) {
        ctx->pc = 0x24082Cu;
            // 0x24082c: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x240830u;
        goto label_240830;
    }
    ctx->pc = 0x240828u;
    {
        const bool branch_taken_0x240828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240828u;
            // 0x24082c: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240828) {
            ctx->pc = 0x24084Cu;
            goto label_24084c;
        }
    }
    ctx->pc = 0x240830u;
label_240830:
    // 0x240830: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x240830u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_240834:
    // 0x240834: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x240834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_240838:
    // 0x240838: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_24083c:
    if (ctx->pc == 0x24083Cu) {
        ctx->pc = 0x24083Cu;
            // 0x24083c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240840u;
        goto label_240840;
    }
    ctx->pc = 0x240838u;
    {
        const bool branch_taken_0x240838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240838) {
            ctx->pc = 0x24083Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240838u;
            // 0x24083c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240840u;
            goto label_240840;
        }
    }
    ctx->pc = 0x240840u;
label_240840:
    // 0x240840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240844:
    // 0x240844: 0xc0a725c  jal         func_29C970
label_240848:
    if (ctx->pc == 0x240848u) {
        ctx->pc = 0x240848u;
            // 0x240848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24084Cu;
        goto label_24084c;
    }
    ctx->pc = 0x240844u;
    SET_GPR_U32(ctx, 31, 0x24084Cu);
    ctx->pc = 0x240848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240844u;
            // 0x240848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24084Cu; }
        if (ctx->pc != 0x24084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24084Cu; }
        if (ctx->pc != 0x24084Cu) { return; }
    }
    ctx->pc = 0x24084Cu;
label_24084c:
    // 0x24084c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x24084cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_240850:
    // 0x240850: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x240850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_240854:
    // 0x240854: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_240858:
    if (ctx->pc == 0x240858u) {
        ctx->pc = 0x240858u;
            // 0x240858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24085Cu;
        goto label_24085c;
    }
    ctx->pc = 0x240854u;
    {
        const bool branch_taken_0x240854 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240854u;
            // 0x240858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240854) {
            ctx->pc = 0x2408C0u;
            goto label_2408c0;
        }
    }
    ctx->pc = 0x24085Cu;
label_24085c:
    // 0x24085c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24085cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240860:
    // 0x240860: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_240864:
    // 0x240864: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x240864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_240868:
    // 0x240868: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_24086c:
    // 0x24086c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x24086cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_240870:
    // 0x240870: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x240870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_240874:
    // 0x240874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_240878:
    // 0x240878: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x240878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_24087c:
    // 0x24087c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_240880:
    // 0x240880: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x240880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_240884:
    // 0x240884: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x240884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_240888:
    // 0x240888: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x240888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_24088c:
    // 0x24088c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x24088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_240890:
    // 0x240890: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x240890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240894:
    // 0x240894: 0xac940094  sw          $s4, 0x94($a0)
    ctx->pc = 0x240894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 20));
label_240898:
    // 0x240898: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_24089c:
    // 0x24089c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x24089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2408a0:
    // 0x2408a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2408a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2408a4:
    // 0x2408a4: 0xa491006c  sh          $s1, 0x6C($a0)
    ctx->pc = 0x2408a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 17));
label_2408a8:
    // 0x2408a8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2408a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2408ac:
    // 0x2408ac: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_2408b0:
    // 0x2408b0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2408b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2408b4:
    // 0x2408b4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_2408b8:
    if (ctx->pc == 0x2408B8u) {
        ctx->pc = 0x2408B8u;
            // 0x2408b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x2408BCu;
        goto label_2408bc;
    }
    ctx->pc = 0x2408B4u;
    {
        const bool branch_taken_0x2408b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2408B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2408B4u;
            // 0x2408b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408b4) {
            ctx->pc = 0x240860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240860;
        }
    }
    ctx->pc = 0x2408BCu;
label_2408bc:
    // 0x2408bc: 0x0  nop
    ctx->pc = 0x2408bcu;
    // NOP
label_2408c0:
    // 0x2408c0: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x2408c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_2408c4:
    // 0x2408c4: 0x8e920040  lw          $s2, 0x40($s4)
    ctx->pc = 0x2408c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2408c8:
    // 0x2408c8: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2408cc:
    // 0x2408cc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2408ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2408d0:
    // 0x2408d0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2408d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2408d4:
    // 0x2408d4: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x2408d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2408d8:
    // 0x2408d8: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2408d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2408dc:
    // 0x2408dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2408e0:
    if (ctx->pc == 0x2408E0u) {
        ctx->pc = 0x2408E0u;
            // 0x2408e0: 0x2691003c  addiu       $s1, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x2408E4u;
        goto label_2408e4;
    }
    ctx->pc = 0x2408DCu;
    {
        const bool branch_taken_0x2408dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2408DCu;
            // 0x2408e0: 0x2691003c  addiu       $s1, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408dc) {
            ctx->pc = 0x240900u;
            goto label_240900;
        }
    }
    ctx->pc = 0x2408E4u;
label_2408e4:
    // 0x2408e4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2408e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2408e8:
    // 0x2408e8: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2408e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2408ec:
    // 0x2408ec: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_2408f0:
    if (ctx->pc == 0x2408F0u) {
        ctx->pc = 0x2408F0u;
            // 0x2408f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2408F4u;
        goto label_2408f4;
    }
    ctx->pc = 0x2408ECu;
    {
        const bool branch_taken_0x2408ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2408ec) {
            ctx->pc = 0x2408F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2408ECu;
            // 0x2408f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2408F4u;
            goto label_2408f4;
        }
    }
    ctx->pc = 0x2408F4u;
label_2408f4:
    // 0x2408f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2408f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2408f8:
    // 0x2408f8: 0xc0a725c  jal         func_29C970
label_2408fc:
    if (ctx->pc == 0x2408FCu) {
        ctx->pc = 0x2408FCu;
            // 0x2408fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x240900u;
        goto label_240900;
    }
    ctx->pc = 0x2408F8u;
    SET_GPR_U32(ctx, 31, 0x240900u);
    ctx->pc = 0x2408FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408F8u;
            // 0x2408fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240900u; }
        if (ctx->pc != 0x240900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240900u; }
        if (ctx->pc != 0x240900u) { return; }
    }
    ctx->pc = 0x240900u;
label_240900:
    // 0x240900: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x240900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_240904:
    // 0x240904: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x240904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_240908:
    // 0x240908: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_24090c:
    if (ctx->pc == 0x24090Cu) {
        ctx->pc = 0x24090Cu;
            // 0x24090c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240910u;
        goto label_240910;
    }
    ctx->pc = 0x240908u;
    {
        const bool branch_taken_0x240908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240908u;
            // 0x24090c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240908) {
            ctx->pc = 0x240968u;
            goto label_240968;
        }
    }
    ctx->pc = 0x240910u;
label_240910:
    // 0x240910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240914:
    // 0x240914: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_240918:
    // 0x240918: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_24091c:
    // 0x24091c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_240920:
    // 0x240920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240924:
    // 0x240924: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_240928:
    if (ctx->pc == 0x240928u) {
        ctx->pc = 0x24092Cu;
        goto label_24092c;
    }
    ctx->pc = 0x240924u;
    {
        const bool branch_taken_0x240924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240924) {
            ctx->pc = 0x240950u;
            goto label_240950;
        }
    }
    ctx->pc = 0x24092Cu;
label_24092c:
    // 0x24092c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x24092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_240930:
    // 0x240930: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_240934:
    // 0x240934: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_240938:
    // 0x240938: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x240938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24093c:
    // 0x24093c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x24093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_240940:
    // 0x240940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_240944:
    // 0x240944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240948:
    // 0x240948: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24094c:
    // 0x24094c: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x24094cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 20));
label_240950:
    // 0x240950: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x240950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_240954:
    // 0x240954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x240954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_240958:
    // 0x240958: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x240958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24095c:
    // 0x24095c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_240960:
    if (ctx->pc == 0x240960u) {
        ctx->pc = 0x240960u;
            // 0x240960: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x240964u;
        goto label_240964;
    }
    ctx->pc = 0x24095Cu;
    {
        const bool branch_taken_0x24095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24095Cu;
            // 0x240960: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24095c) {
            ctx->pc = 0x240918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240918;
        }
    }
    ctx->pc = 0x240964u;
label_240964:
    // 0x240964: 0x0  nop
    ctx->pc = 0x240964u;
    // NOP
label_240968:
    // 0x240968: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x240968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_24096c:
    // 0x24096c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x24096cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_240970:
    // 0x240970: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x240970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_240974:
    // 0x240974: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x240974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_240978:
    // 0x240978: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_24097c:
    if (ctx->pc == 0x24097Cu) {
        ctx->pc = 0x24097Cu;
            // 0x24097c: 0x2690003c  addiu       $s0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x240980u;
        goto label_240980;
    }
    ctx->pc = 0x240978u;
    {
        const bool branch_taken_0x240978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240978u;
            // 0x24097c: 0x2690003c  addiu       $s0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240978) {
            ctx->pc = 0x24099Cu;
            goto label_24099c;
        }
    }
    ctx->pc = 0x240980u;
label_240980:
    // 0x240980: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_240984:
    // 0x240984: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x240984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_240988:
    // 0x240988: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_24098c:
    if (ctx->pc == 0x24098Cu) {
        ctx->pc = 0x24098Cu;
            // 0x24098c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240990u;
        goto label_240990;
    }
    ctx->pc = 0x240988u;
    {
        const bool branch_taken_0x240988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240988) {
            ctx->pc = 0x24098Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240988u;
            // 0x24098c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240990u;
            goto label_240990;
        }
    }
    ctx->pc = 0x240990u;
label_240990:
    // 0x240990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240994:
    // 0x240994: 0xc0a725c  jal         func_29C970
label_240998:
    if (ctx->pc == 0x240998u) {
        ctx->pc = 0x240998u;
            // 0x240998: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24099Cu;
        goto label_24099c;
    }
    ctx->pc = 0x240994u;
    SET_GPR_U32(ctx, 31, 0x24099Cu);
    ctx->pc = 0x240998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240994u;
            // 0x240998: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24099Cu; }
        if (ctx->pc != 0x24099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24099Cu; }
        if (ctx->pc != 0x24099Cu) { return; }
    }
    ctx->pc = 0x24099Cu;
label_24099c:
    // 0x24099c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x24099cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_2409a0:
    // 0x2409a0: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_2409a4:
    // 0x2409a4: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
label_2409a8:
    if (ctx->pc == 0x2409A8u) {
        ctx->pc = 0x2409A8u;
            // 0x2409a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2409ACu;
        goto label_2409ac;
    }
    ctx->pc = 0x2409A4u;
    {
        const bool branch_taken_0x2409a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2409A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2409A4u;
            // 0x2409a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409a4) {
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x2409ACu;
label_2409ac:
    // 0x2409ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2409b0:
    // 0x2409b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2409b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2409b4:
    // 0x2409b4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2409b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2409b8:
    // 0x2409b8: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2409bc:
    // 0x2409bc: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x2409bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_2409c0:
    // 0x2409c0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2409c4:
    // 0x2409c4: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x2409c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2409c8:
    // 0x2409c8: 0x95490074  lhu         $t1, 0x74($t2)
    ctx->pc = 0x2409c8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 116)));
label_2409cc:
    // 0x2409cc: 0x2526ffff  addiu       $a2, $t1, -0x1
    ctx->pc = 0x2409ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2409d0:
    // 0x2409d0: 0x4c0003b  bltz        $a2, . + 4 + (0x3B << 2)
label_2409d4:
    if (ctx->pc == 0x2409D4u) {
        ctx->pc = 0x2409D4u;
            // 0x2409d4: 0x8d470070  lw          $a3, 0x70($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
        ctx->pc = 0x2409D8u;
        goto label_2409d8;
    }
    ctx->pc = 0x2409D0u;
    {
        const bool branch_taken_0x2409d0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2409D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2409D0u;
            // 0x2409d4: 0x8d470070  lw          $a3, 0x70($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409d0) {
            ctx->pc = 0x240AC0u;
            goto label_240ac0;
        }
    }
    ctx->pc = 0x2409D8u;
label_2409d8:
    // 0x2409d8: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x2409d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_2409dc:
    // 0x2409dc: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_2409e0:
    if (ctx->pc == 0x2409E0u) {
        ctx->pc = 0x2409E4u;
        goto label_2409e4;
    }
    ctx->pc = 0x2409DCu;
    {
        const bool branch_taken_0x2409dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2409dc) {
            ctx->pc = 0x240A98u;
            goto label_240a98;
        }
    }
    ctx->pc = 0x2409E4u;
label_2409e4:
    // 0x2409e4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2409e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2409e8:
    // 0x2409e8: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
label_2409ec:
    if (ctx->pc == 0x2409ECu) {
        ctx->pc = 0x2409ECu;
            // 0x2409ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2409F0u;
        goto label_2409f0;
    }
    ctx->pc = 0x2409E8u;
    {
        const bool branch_taken_0x2409e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2409ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2409E8u;
            // 0x2409ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409e8) {
            ctx->pc = 0x240A00u;
            goto label_240a00;
        }
    }
    ctx->pc = 0x2409F0u;
label_2409f0:
    // 0x2409f0: 0xc4482a  slt         $t1, $a2, $a0
    ctx->pc = 0x2409f0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2409f4:
    // 0x2409f4: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
label_2409f8:
    if (ctx->pc == 0x2409F8u) {
        ctx->pc = 0x2409FCu;
        goto label_2409fc;
    }
    ctx->pc = 0x2409F4u;
    {
        const bool branch_taken_0x2409f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2409f4) {
            ctx->pc = 0x240A00u;
            goto label_240a00;
        }
    }
    ctx->pc = 0x2409FCu;
label_2409fc:
    // 0x2409fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2409fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240a00:
    // 0x240a00: 0x1160000f  beqz        $t3, . + 4 + (0xF << 2)
label_240a04:
    if (ctx->pc == 0x240A04u) {
        ctx->pc = 0x240A08u;
        goto label_240a08;
    }
    ctx->pc = 0x240A00u;
    {
        const bool branch_taken_0x240a00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a00) {
            ctx->pc = 0x240A40u;
            goto label_240a40;
        }
    }
    ctx->pc = 0x240A08u;
label_240a08:
    // 0x240a08: 0x954a0074  lhu         $t2, 0x74($t2)
    ctx->pc = 0x240a08u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 116)));
label_240a0c:
    // 0x240a0c: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_240a10:
    // 0x240a10: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x240a10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_240a14:
    // 0x240a14: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
label_240a18:
    if (ctx->pc == 0x240A18u) {
        ctx->pc = 0x240A18u;
            // 0x240a18: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240A1Cu;
        goto label_240a1c;
    }
    ctx->pc = 0x240A14u;
    {
        const bool branch_taken_0x240a14 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x240A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A14u;
            // 0x240a18: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a14) {
            ctx->pc = 0x240A30u;
            goto label_240a30;
        }
    }
    ctx->pc = 0x240A1Cu;
label_240a1c:
    // 0x240a1c: 0x1434824  and         $t1, $t2, $v1
    ctx->pc = 0x240a1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_240a20:
    // 0x240a20: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_240a24:
    if (ctx->pc == 0x240A24u) {
        ctx->pc = 0x240A28u;
        goto label_240a28;
    }
    ctx->pc = 0x240A20u;
    {
        const bool branch_taken_0x240a20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a20) {
            ctx->pc = 0x240A30u;
            goto label_240a30;
        }
    }
    ctx->pc = 0x240A28u;
label_240a28:
    // 0x240a28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x240a28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240a2c:
    // 0x240a2c: 0x0  nop
    ctx->pc = 0x240a2cu;
    // NOP
label_240a30:
    // 0x240a30: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
label_240a34:
    if (ctx->pc == 0x240A34u) {
        ctx->pc = 0x240A38u;
        goto label_240a38;
    }
    ctx->pc = 0x240A30u;
    {
        const bool branch_taken_0x240a30 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a30) {
            ctx->pc = 0x240A40u;
            goto label_240a40;
        }
    }
    ctx->pc = 0x240A38u;
label_240a38:
    // 0x240a38: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x240a38u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240a3c:
    // 0x240a3c: 0x0  nop
    ctx->pc = 0x240a3cu;
    // NOP
label_240a40:
    // 0x240a40: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_240a44:
    if (ctx->pc == 0x240A44u) {
        ctx->pc = 0x240A48u;
        goto label_240a48;
    }
    ctx->pc = 0x240A40u;
    {
        const bool branch_taken_0x240a40 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a40) {
            ctx->pc = 0x240A98u;
            goto label_240a98;
        }
    }
    ctx->pc = 0x240A48u;
label_240a48:
    // 0x240a48: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_240a4c:
    // 0x240a4c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_240a50:
    // 0x240a50: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x240a50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_240a54:
    // 0x240a54: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a58:
    // 0x240a58: 0x8ce90024  lw          $t1, 0x24($a3)
    ctx->pc = 0x240a58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_240a5c:
    // 0x240a5c: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a60:
    // 0x240a60: 0x8ce90048  lw          $t1, 0x48($a3)
    ctx->pc = 0x240a60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_240a64:
    // 0x240a64: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a68:
    // 0x240a68: 0x8ce9006c  lw          $t1, 0x6C($a3)
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_240a6c:
    // 0x240a6c: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a70:
    // 0x240a70: 0x8ce90090  lw          $t1, 0x90($a3)
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
label_240a74:
    // 0x240a74: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a78:
    // 0x240a78: 0x8ce900b4  lw          $t1, 0xB4($a3)
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
label_240a7c:
    // 0x240a7c: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a80:
    // 0x240a80: 0x8ce900d8  lw          $t1, 0xD8($a3)
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 216)));
label_240a84:
    // 0x240a84: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a88:
    // 0x240a88: 0x8ce900fc  lw          $t1, 0xFC($a3)
    ctx->pc = 0x240a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
label_240a8c:
    // 0x240a8c: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240a90:
    // 0x240a90: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
label_240a94:
    if (ctx->pc == 0x240A94u) {
        ctx->pc = 0x240A94u;
            // 0x240a94: 0x24e70120  addiu       $a3, $a3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
        ctx->pc = 0x240A98u;
        goto label_240a98;
    }
    ctx->pc = 0x240A90u;
    {
        const bool branch_taken_0x240a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A90u;
            // 0x240a94: 0x24e70120  addiu       $a3, $a3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a90) {
            ctx->pc = 0x240A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240a48;
        }
    }
    ctx->pc = 0x240A98u;
label_240a98:
    // 0x240a98: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
label_240a9c:
    if (ctx->pc == 0x240A9Cu) {
        ctx->pc = 0x240AA0u;
        goto label_240aa0;
    }
    ctx->pc = 0x240A98u;
    {
        const bool branch_taken_0x240a98 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x240a98) {
            ctx->pc = 0x240AC0u;
            goto label_240ac0;
        }
    }
    ctx->pc = 0x240AA0u;
label_240aa0:
    // 0x240aa0: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x240aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_240aa4:
    // 0x240aa4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_240aa8:
    // 0x240aa8: 0xad340008  sw          $s4, 0x8($t1)
    ctx->pc = 0x240aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 20));
label_240aac:
    // 0x240aac: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_240ab0:
    // 0x240ab0: 0x0  nop
    ctx->pc = 0x240ab0u;
    // NOP
label_240ab4:
    // 0x240ab4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_240ab8:
    if (ctx->pc == 0x240AB8u) {
        ctx->pc = 0x240ABCu;
        goto label_240abc;
    }
    ctx->pc = 0x240AB4u;
    {
        const bool branch_taken_0x240ab4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x240ab4) {
            ctx->pc = 0x240AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240aa0;
        }
    }
    ctx->pc = 0x240ABCu;
label_240abc:
    // 0x240abc: 0x0  nop
    ctx->pc = 0x240abcu;
    // NOP
label_240ac0:
    // 0x240ac0: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_240ac4:
    // 0x240ac4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_240ac8:
    // 0x240ac8: 0x106302a  slt         $a2, $t0, $a2
    ctx->pc = 0x240ac8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_240acc:
    // 0x240acc: 0x14c0ffbb  bnez        $a2, . + 4 + (-0x45 << 2)
label_240ad0:
    if (ctx->pc == 0x240AD0u) {
        ctx->pc = 0x240AD0u;
            // 0x240ad0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x240AD4u;
        goto label_240ad4;
    }
    ctx->pc = 0x240ACCu;
    {
        const bool branch_taken_0x240acc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x240AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240ACCu;
            // 0x240ad0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240acc) {
            ctx->pc = 0x2409BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2409bc;
        }
    }
    ctx->pc = 0x240AD4u;
label_240ad4:
    // 0x240ad4: 0x0  nop
    ctx->pc = 0x240ad4u;
    // NOP
label_240ad8:
    // 0x240ad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x240ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_240adc:
    // 0x240adc: 0xc08b968  jal         func_22E5A0
label_240ae0:
    if (ctx->pc == 0x240AE0u) {
        ctx->pc = 0x240AE0u;
            // 0x240ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240AE4u;
        goto label_240ae4;
    }
    ctx->pc = 0x240ADCu;
    SET_GPR_U32(ctx, 31, 0x240AE4u);
    ctx->pc = 0x240AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240ADCu;
            // 0x240ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E5A0u;
    if (runtime->hasFunction(0x22E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240AE4u; }
        if (ctx->pc != 0x240AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E5A0_0x22e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240AE4u; }
        if (ctx->pc != 0x240AE4u) { return; }
    }
    ctx->pc = 0x240AE4u;
label_240ae4:
    // 0x240ae4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x240ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_240ae8:
    // 0x240ae8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_240aec:
    // 0x240aec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x240aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240af0:
    // 0x240af0: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x240af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_240af4:
    // 0x240af4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x240af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_240af8:
    // 0x240af8: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x240af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
label_240afc:
    // 0x240afc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x240afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240b00:
    // 0x240b00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_240b04:
    if (ctx->pc == 0x240B04u) {
        ctx->pc = 0x240B04u;
            // 0x240b04: 0x96660020  lhu         $a2, 0x20($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x240B08u;
        goto label_240b08;
    }
    ctx->pc = 0x240B00u;
    {
        const bool branch_taken_0x240b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b00) {
            ctx->pc = 0x240B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240B00u;
            // 0x240b04: 0x96660020  lhu         $a2, 0x20($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240B14u;
            goto label_240b14;
        }
    }
    ctx->pc = 0x240B08u;
label_240b08:
    // 0x240b08: 0x96660020  lhu         $a2, 0x20($s3)
    ctx->pc = 0x240b08u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_240b0c:
    // 0x240b0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_240b10:
    if (ctx->pc == 0x240B10u) {
        ctx->pc = 0x240B10u;
            // 0x240b10: 0x26a70028  addiu       $a3, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->pc = 0x240B14u;
        goto label_240b14;
    }
    ctx->pc = 0x240B0Cu;
    {
        const bool branch_taken_0x240b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B0Cu;
            // 0x240b10: 0x26a70028  addiu       $a3, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b0c) {
            ctx->pc = 0x240B18u;
            goto label_240b18;
        }
    }
    ctx->pc = 0x240B14u;
label_240b14:
    // 0x240b14: 0x26a70034  addiu       $a3, $s5, 0x34
    ctx->pc = 0x240b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_240b18:
    // 0x240b18: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_240b1c:
    // 0x240b1c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x240b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_240b20:
    // 0x240b20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_240b24:
    // 0x240b24: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x240b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240b28:
    // 0x240b28: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
label_240b2c:
    if (ctx->pc == 0x240B2Cu) {
        ctx->pc = 0x240B2Cu;
            // 0x240b2c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->pc = 0x240B30u;
        goto label_240b30;
    }
    ctx->pc = 0x240B28u;
    {
        const bool branch_taken_0x240b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b28) {
            ctx->pc = 0x240B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240B28u;
            // 0x240b2c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240B60u;
            goto label_240b60;
        }
    }
    ctx->pc = 0x240B30u;
label_240b30:
    // 0x240b30: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x240b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_240b34:
    // 0x240b34: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_240b38:
    // 0x240b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x240b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_240b3c:
    // 0x240b3c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_240b40:
    // 0x240b40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x240b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240b44:
    // 0x240b44: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x240b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_240b48:
    // 0x240b48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x240b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_240b4c:
    // 0x240b4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x240b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_240b50:
    // 0x240b50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_240b54:
    // 0x240b54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240b58:
    // 0x240b58: 0xa4460020  sh          $a2, 0x20($v0)
    ctx->pc = 0x240b58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 6));
label_240b5c:
    // 0x240b5c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_240b60:
    // 0x240b60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_240b64:
    // 0x240b64: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x240b64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_240b68:
    // 0x240b68: 0x92820027  lbu         $v0, 0x27($s4)
    ctx->pc = 0x240b68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
label_240b6c:
    // 0x240b6c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x240b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240b70:
    // 0x240b70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240b74:
    // 0x240b74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_240b78:
    if (ctx->pc == 0x240B78u) {
        ctx->pc = 0x240B78u;
            // 0x240b78: 0x92840027  lbu         $a0, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->pc = 0x240B7Cu;
        goto label_240b7c;
    }
    ctx->pc = 0x240B74u;
    {
        const bool branch_taken_0x240b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240b74) {
            ctx->pc = 0x240B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240B74u;
            // 0x240b78: 0x92840027  lbu         $a0, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B7Cu;
label_240b7c:
    // 0x240b7c: 0x92620027  lbu         $v0, 0x27($s3)
    ctx->pc = 0x240b7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_240b80:
    // 0x240b80: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x240b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240b84:
    // 0x240b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240b88:
    // 0x240b88: 0x92840027  lbu         $a0, 0x27($s4)
    ctx->pc = 0x240b88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
label_240b8c:
    // 0x240b8c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x240b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240b90:
    // 0x240b90: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_240b94:
    // 0x240b94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x240b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_240b98:
    // 0x240b98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_240b9c:
    // 0x240b9c: 0xa2820027  sb          $v0, 0x27($s4)
    ctx->pc = 0x240b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 2));
label_240ba0:
    // 0x240ba0: 0x92820027  lbu         $v0, 0x27($s4)
    ctx->pc = 0x240ba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
label_240ba4:
    // 0x240ba4: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x240ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_240ba8:
    // 0x240ba8: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x240ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
label_240bac:
    // 0x240bac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240bb0:
    // 0x240bb0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_240bb4:
    if (ctx->pc == 0x240BB4u) {
        ctx->pc = 0x240BB4u;
            // 0x240bb4: 0x92870027  lbu         $a3, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->pc = 0x240BB8u;
        goto label_240bb8;
    }
    ctx->pc = 0x240BB0u;
    {
        const bool branch_taken_0x240bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240bb0) {
            ctx->pc = 0x240BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240BB0u;
            // 0x240bb4: 0x92870027  lbu         $a3, 0x27($s4) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240BCCu;
            goto label_240bcc;
        }
    }
    ctx->pc = 0x240BB8u;
label_240bb8:
    // 0x240bb8: 0x92620027  lbu         $v0, 0x27($s3)
    ctx->pc = 0x240bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_240bbc:
    // 0x240bbc: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x240bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_240bc0:
    // 0x240bc0: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x240bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
label_240bc4:
    // 0x240bc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240bc8:
    // 0x240bc8: 0x92870027  lbu         $a3, 0x27($s4)
    ctx->pc = 0x240bc8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 39)));
label_240bcc:
    // 0x240bcc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x240bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240bd0:
    // 0x240bd0: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x240bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_240bd4:
    // 0x240bd4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x240bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_240bd8:
    // 0x240bd8: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x240bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_240bdc:
    // 0x240bdc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x240bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_240be0:
    // 0x240be0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x240be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_240be4:
    // 0x240be4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x240be4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_240be8:
    // 0x240be8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x240be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_240bec:
    // 0x240bec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240bf0:
    // 0x240bf0: 0xa2850027  sb          $a1, 0x27($s4)
    ctx->pc = 0x240bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 5));
label_240bf4:
    // 0x240bf4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x240bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_240bf8:
    // 0x240bf8: 0x92850028  lbu         $a1, 0x28($s4)
    ctx->pc = 0x240bf8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_240bfc:
    // 0x240bfc: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x240bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_240c00:
    // 0x240c00: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x240c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_240c04:
    // 0x240c04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_240c08:
    // 0x240c08: 0xa2820028  sb          $v0, 0x28($s4)
    ctx->pc = 0x240c08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
label_240c0c:
    // 0x240c0c: 0x96620022  lhu         $v0, 0x22($s3)
    ctx->pc = 0x240c0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_240c10:
    // 0x240c10: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
label_240c14:
    if (ctx->pc == 0x240C14u) {
        ctx->pc = 0x240C14u;
            // 0x240c14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240C18u;
        goto label_240c18;
    }
    ctx->pc = 0x240C10u;
    {
        const bool branch_taken_0x240c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x240c10) {
            ctx->pc = 0x240C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240C10u;
            // 0x240c14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240C70u;
            goto label_240c70;
        }
    }
    ctx->pc = 0x240C18u;
label_240c18:
    // 0x240c18: 0x96820022  lhu         $v0, 0x22($s4)
    ctx->pc = 0x240c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
label_240c1c:
    // 0x240c1c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_240c20:
    if (ctx->pc == 0x240C20u) {
        ctx->pc = 0x240C24u;
        goto label_240c24;
    }
    ctx->pc = 0x240C1Cu;
    {
        const bool branch_taken_0x240c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x240c1c) {
            ctx->pc = 0x240C6Cu;
            goto label_240c6c;
        }
    }
    ctx->pc = 0x240C24u;
label_240c24:
    // 0x240c24: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x240c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_240c28:
    // 0x240c28: 0xa6820022  sh          $v0, 0x22($s4)
    ctx->pc = 0x240c28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 2));
label_240c2c:
    // 0x240c2c: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x240c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_240c30:
    // 0x240c30: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_240c34:
    // 0x240c34: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x240c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_240c38:
    // 0x240c38: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x240c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_240c3c:
    // 0x240c3c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_240c40:
    if (ctx->pc == 0x240C40u) {
        ctx->pc = 0x240C40u;
            // 0x240c40: 0x8ea30044  lw          $v1, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->pc = 0x240C44u;
        goto label_240c44;
    }
    ctx->pc = 0x240C3Cu;
    {
        const bool branch_taken_0x240c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240c3c) {
            ctx->pc = 0x240C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240C3Cu;
            // 0x240c40: 0x8ea30044  lw          $v1, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240C54u;
            goto label_240c54;
        }
    }
    ctx->pc = 0x240C44u;
label_240c44:
    // 0x240c44: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x240c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_240c48:
    // 0x240c48: 0xc0a728c  jal         func_29CA30
label_240c4c:
    if (ctx->pc == 0x240C4Cu) {
        ctx->pc = 0x240C4Cu;
            // 0x240c4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x240C50u;
        goto label_240c50;
    }
    ctx->pc = 0x240C48u;
    SET_GPR_U32(ctx, 31, 0x240C50u);
    ctx->pc = 0x240C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C48u;
            // 0x240c4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C50u; }
        if (ctx->pc != 0x240C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C50u; }
        if (ctx->pc != 0x240C50u) { return; }
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x240c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_240c54:
    // 0x240c54: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x240c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_240c58:
    // 0x240c58: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x240c58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_240c5c:
    // 0x240c5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_240c60:
    // 0x240c60: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x240c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_240c64:
    // 0x240c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240c68:
    // 0x240c68: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x240c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_240c6c:
    // 0x240c6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x240c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240c70:
    // 0x240c70: 0xc090728  jal         func_241CA0
label_240c74:
    if (ctx->pc == 0x240C74u) {
        ctx->pc = 0x240C74u;
            // 0x240c74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240C78u;
        goto label_240c78;
    }
    ctx->pc = 0x240C70u;
    SET_GPR_U32(ctx, 31, 0x240C78u);
    ctx->pc = 0x240C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C70u;
            // 0x240c74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241CA0u;
    if (runtime->hasFunction(0x241CA0u)) {
        auto targetFn = runtime->lookupFunction(0x241CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C78u; }
        if (ctx->pc != 0x240C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241CA0_0x241ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C78u; }
        if (ctx->pc != 0x240C78u) { return; }
    }
    ctx->pc = 0x240C78u;
label_240c78:
    // 0x240c78: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_240c7c:
    if (ctx->pc == 0x240C7Cu) {
        ctx->pc = 0x240C7Cu;
            // 0x240c7c: 0x92820028  lbu         $v0, 0x28($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->pc = 0x240C80u;
        goto label_240c80;
    }
    ctx->pc = 0x240C78u;
    {
        const bool branch_taken_0x240c78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c78) {
            ctx->pc = 0x240C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240C78u;
            // 0x240c7c: 0x92820028  lbu         $v0, 0x28($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240C98u;
            goto label_240c98;
        }
    }
    ctx->pc = 0x240C80u;
label_240c80:
    // 0x240c80: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_240c84:
    // 0x240c84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240c88:
    // 0x240c88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240c8c:
    // 0x240c8c: 0x320f809  jalr        $t9
label_240c90:
    if (ctx->pc == 0x240C90u) {
        ctx->pc = 0x240C90u;
            // 0x240c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240C94u;
        goto label_240c94;
    }
    ctx->pc = 0x240C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240C94u);
        ctx->pc = 0x240C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C8Cu;
            // 0x240c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240C94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240C94u; }
            if (ctx->pc != 0x240C94u) { return; }
        }
        }
    }
    ctx->pc = 0x240C94u;
label_240c94:
    // 0x240c94: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x240c94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_240c98:
    // 0x240c98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x240c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_240c9c:
    // 0x240c9c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_240ca0:
    if (ctx->pc == 0x240CA0u) {
        ctx->pc = 0x240CA0u;
            // 0x240ca0: 0x8ea20084  lw          $v0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x240CA4u;
        goto label_240ca4;
    }
    ctx->pc = 0x240C9Cu;
    {
        const bool branch_taken_0x240c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c9c) {
            ctx->pc = 0x240CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240C9Cu;
            // 0x240ca0: 0x8ea20084  lw          $v0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240CF0u;
            goto label_240cf0;
        }
    }
    ctx->pc = 0x240CA4u;
label_240ca4:
    // 0x240ca4: 0x96860020  lhu         $a2, 0x20($s4)
    ctx->pc = 0x240ca4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_240ca8:
    // 0x240ca8: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_240cac:
    if (ctx->pc == 0x240CACu) {
        ctx->pc = 0x240CB0u;
        goto label_240cb0;
    }
    ctx->pc = 0x240CA8u;
    {
        const bool branch_taken_0x240ca8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ca8) {
            ctx->pc = 0x240CECu;
            goto label_240cec;
        }
    }
    ctx->pc = 0x240CB0u;
label_240cb0:
    // 0x240cb0: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x240cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_240cb4:
    // 0x240cb4: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_240cb8:
    // 0x240cb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x240cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240cbc:
    // 0x240cbc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_240cc0:
    // 0x240cc0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x240cc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240cc4:
    // 0x240cc4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_240cc8:
    if (ctx->pc == 0x240CC8u) {
        ctx->pc = 0x240CC8u;
            // 0x240cc8: 0x26a50028  addiu       $a1, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->pc = 0x240CCCu;
        goto label_240ccc;
    }
    ctx->pc = 0x240CC4u;
    {
        const bool branch_taken_0x240cc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CC4u;
            // 0x240cc8: 0x26a50028  addiu       $a1, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cc4) {
            ctx->pc = 0x240CECu;
            goto label_240cec;
        }
    }
    ctx->pc = 0x240CCCu;
label_240ccc:
    // 0x240ccc: 0xa6800020  sh          $zero, 0x20($s4)
    ctx->pc = 0x240cccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 0));
label_240cd0:
    // 0x240cd0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_240cd4:
    // 0x240cd4: 0xa4860020  sh          $a2, 0x20($a0)
    ctx->pc = 0x240cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 6));
label_240cd8:
    // 0x240cd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_240cdc:
    // 0x240cdc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x240cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_240ce0:
    // 0x240ce0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_240ce4:
    // 0x240ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240ce8:
    // 0x240ce8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x240ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_240cec:
    // 0x240cec: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_240cf0:
    // 0x240cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_240cf4:
    // 0x240cf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_240cf8:
    if (ctx->pc == 0x240CF8u) {
        ctx->pc = 0x240CF8u;
            // 0x240cf8: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x240CFCu;
        goto label_240cfc;
    }
    ctx->pc = 0x240CF4u;
    {
        const bool branch_taken_0x240cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CF4u;
            // 0x240cf8: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cf4) {
            ctx->pc = 0x240D1Cu;
            goto label_240d1c;
        }
    }
    ctx->pc = 0x240CFCu;
label_240cfc:
    // 0x240cfc: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_240d00:
    // 0x240d00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_240d04:
    if (ctx->pc == 0x240D04u) {
        ctx->pc = 0x240D04u;
            // 0x240d04: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240D08u;
        goto label_240d08;
    }
    ctx->pc = 0x240D00u;
    {
        const bool branch_taken_0x240d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d00) {
            ctx->pc = 0x240D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240D00u;
            // 0x240d04: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x240D20u;
            goto label_240d20;
        }
    }
    ctx->pc = 0x240D08u;
label_240d08:
    // 0x240d08: 0x82a2008c  lb          $v0, 0x8C($s5)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
label_240d0c:
    // 0x240d0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_240d10:
    if (ctx->pc == 0x240D10u) {
        ctx->pc = 0x240D14u;
        goto label_240d14;
    }
    ctx->pc = 0x240D0Cu;
    {
        const bool branch_taken_0x240d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240d0c) {
            ctx->pc = 0x240D1Cu;
            goto label_240d1c;
        }
    }
    ctx->pc = 0x240D14u;
label_240d14:
    // 0x240d14: 0xc08d1c4  jal         func_234710
label_240d18:
    if (ctx->pc == 0x240D18u) {
        ctx->pc = 0x240D18u;
            // 0x240d18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240D1Cu;
        goto label_240d1c;
    }
    ctx->pc = 0x240D14u;
    SET_GPR_U32(ctx, 31, 0x240D1Cu);
    ctx->pc = 0x240D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240D14u;
            // 0x240d18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D1Cu; }
        if (ctx->pc != 0x240D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D1Cu; }
        if (ctx->pc != 0x240D1Cu) { return; }
    }
    ctx->pc = 0x240D1Cu;
label_240d1c:
    // 0x240d1c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x240d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_240d20:
    // 0x240d20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x240d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_240d24:
    // 0x240d24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x240d24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_240d28:
    // 0x240d28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x240d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_240d2c:
    // 0x240d2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x240d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_240d30:
    // 0x240d30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_240d34:
    // 0x240d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_240d38:
    // 0x240d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_240d3c:
    // 0x240d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240d40:
    // 0x240d40: 0x3e00008  jr          $ra
label_240d44:
    if (ctx->pc == 0x240D44u) {
        ctx->pc = 0x240D44u;
            // 0x240d44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x240D48u;
        goto label_240d48;
    }
    ctx->pc = 0x240D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D40u;
            // 0x240d44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240D48u;
label_240d48:
    // 0x240d48: 0x0  nop
    ctx->pc = 0x240d48u;
    // NOP
label_240d4c:
    // 0x240d4c: 0x0  nop
    ctx->pc = 0x240d4cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004055D0
// Address: 0x4055d0 - 0x406970
void sub_004055D0_0x4055d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004055D0_0x4055d0");
#endif

    switch (ctx->pc) {
        case 0x4055d0u: goto label_4055d0;
        case 0x4055d4u: goto label_4055d4;
        case 0x4055d8u: goto label_4055d8;
        case 0x4055dcu: goto label_4055dc;
        case 0x4055e0u: goto label_4055e0;
        case 0x4055e4u: goto label_4055e4;
        case 0x4055e8u: goto label_4055e8;
        case 0x4055ecu: goto label_4055ec;
        case 0x4055f0u: goto label_4055f0;
        case 0x4055f4u: goto label_4055f4;
        case 0x4055f8u: goto label_4055f8;
        case 0x4055fcu: goto label_4055fc;
        case 0x405600u: goto label_405600;
        case 0x405604u: goto label_405604;
        case 0x405608u: goto label_405608;
        case 0x40560cu: goto label_40560c;
        case 0x405610u: goto label_405610;
        case 0x405614u: goto label_405614;
        case 0x405618u: goto label_405618;
        case 0x40561cu: goto label_40561c;
        case 0x405620u: goto label_405620;
        case 0x405624u: goto label_405624;
        case 0x405628u: goto label_405628;
        case 0x40562cu: goto label_40562c;
        case 0x405630u: goto label_405630;
        case 0x405634u: goto label_405634;
        case 0x405638u: goto label_405638;
        case 0x40563cu: goto label_40563c;
        case 0x405640u: goto label_405640;
        case 0x405644u: goto label_405644;
        case 0x405648u: goto label_405648;
        case 0x40564cu: goto label_40564c;
        case 0x405650u: goto label_405650;
        case 0x405654u: goto label_405654;
        case 0x405658u: goto label_405658;
        case 0x40565cu: goto label_40565c;
        case 0x405660u: goto label_405660;
        case 0x405664u: goto label_405664;
        case 0x405668u: goto label_405668;
        case 0x40566cu: goto label_40566c;
        case 0x405670u: goto label_405670;
        case 0x405674u: goto label_405674;
        case 0x405678u: goto label_405678;
        case 0x40567cu: goto label_40567c;
        case 0x405680u: goto label_405680;
        case 0x405684u: goto label_405684;
        case 0x405688u: goto label_405688;
        case 0x40568cu: goto label_40568c;
        case 0x405690u: goto label_405690;
        case 0x405694u: goto label_405694;
        case 0x405698u: goto label_405698;
        case 0x40569cu: goto label_40569c;
        case 0x4056a0u: goto label_4056a0;
        case 0x4056a4u: goto label_4056a4;
        case 0x4056a8u: goto label_4056a8;
        case 0x4056acu: goto label_4056ac;
        case 0x4056b0u: goto label_4056b0;
        case 0x4056b4u: goto label_4056b4;
        case 0x4056b8u: goto label_4056b8;
        case 0x4056bcu: goto label_4056bc;
        case 0x4056c0u: goto label_4056c0;
        case 0x4056c4u: goto label_4056c4;
        case 0x4056c8u: goto label_4056c8;
        case 0x4056ccu: goto label_4056cc;
        case 0x4056d0u: goto label_4056d0;
        case 0x4056d4u: goto label_4056d4;
        case 0x4056d8u: goto label_4056d8;
        case 0x4056dcu: goto label_4056dc;
        case 0x4056e0u: goto label_4056e0;
        case 0x4056e4u: goto label_4056e4;
        case 0x4056e8u: goto label_4056e8;
        case 0x4056ecu: goto label_4056ec;
        case 0x4056f0u: goto label_4056f0;
        case 0x4056f4u: goto label_4056f4;
        case 0x4056f8u: goto label_4056f8;
        case 0x4056fcu: goto label_4056fc;
        case 0x405700u: goto label_405700;
        case 0x405704u: goto label_405704;
        case 0x405708u: goto label_405708;
        case 0x40570cu: goto label_40570c;
        case 0x405710u: goto label_405710;
        case 0x405714u: goto label_405714;
        case 0x405718u: goto label_405718;
        case 0x40571cu: goto label_40571c;
        case 0x405720u: goto label_405720;
        case 0x405724u: goto label_405724;
        case 0x405728u: goto label_405728;
        case 0x40572cu: goto label_40572c;
        case 0x405730u: goto label_405730;
        case 0x405734u: goto label_405734;
        case 0x405738u: goto label_405738;
        case 0x40573cu: goto label_40573c;
        case 0x405740u: goto label_405740;
        case 0x405744u: goto label_405744;
        case 0x405748u: goto label_405748;
        case 0x40574cu: goto label_40574c;
        case 0x405750u: goto label_405750;
        case 0x405754u: goto label_405754;
        case 0x405758u: goto label_405758;
        case 0x40575cu: goto label_40575c;
        case 0x405760u: goto label_405760;
        case 0x405764u: goto label_405764;
        case 0x405768u: goto label_405768;
        case 0x40576cu: goto label_40576c;
        case 0x405770u: goto label_405770;
        case 0x405774u: goto label_405774;
        case 0x405778u: goto label_405778;
        case 0x40577cu: goto label_40577c;
        case 0x405780u: goto label_405780;
        case 0x405784u: goto label_405784;
        case 0x405788u: goto label_405788;
        case 0x40578cu: goto label_40578c;
        case 0x405790u: goto label_405790;
        case 0x405794u: goto label_405794;
        case 0x405798u: goto label_405798;
        case 0x40579cu: goto label_40579c;
        case 0x4057a0u: goto label_4057a0;
        case 0x4057a4u: goto label_4057a4;
        case 0x4057a8u: goto label_4057a8;
        case 0x4057acu: goto label_4057ac;
        case 0x4057b0u: goto label_4057b0;
        case 0x4057b4u: goto label_4057b4;
        case 0x4057b8u: goto label_4057b8;
        case 0x4057bcu: goto label_4057bc;
        case 0x4057c0u: goto label_4057c0;
        case 0x4057c4u: goto label_4057c4;
        case 0x4057c8u: goto label_4057c8;
        case 0x4057ccu: goto label_4057cc;
        case 0x4057d0u: goto label_4057d0;
        case 0x4057d4u: goto label_4057d4;
        case 0x4057d8u: goto label_4057d8;
        case 0x4057dcu: goto label_4057dc;
        case 0x4057e0u: goto label_4057e0;
        case 0x4057e4u: goto label_4057e4;
        case 0x4057e8u: goto label_4057e8;
        case 0x4057ecu: goto label_4057ec;
        case 0x4057f0u: goto label_4057f0;
        case 0x4057f4u: goto label_4057f4;
        case 0x4057f8u: goto label_4057f8;
        case 0x4057fcu: goto label_4057fc;
        case 0x405800u: goto label_405800;
        case 0x405804u: goto label_405804;
        case 0x405808u: goto label_405808;
        case 0x40580cu: goto label_40580c;
        case 0x405810u: goto label_405810;
        case 0x405814u: goto label_405814;
        case 0x405818u: goto label_405818;
        case 0x40581cu: goto label_40581c;
        case 0x405820u: goto label_405820;
        case 0x405824u: goto label_405824;
        case 0x405828u: goto label_405828;
        case 0x40582cu: goto label_40582c;
        case 0x405830u: goto label_405830;
        case 0x405834u: goto label_405834;
        case 0x405838u: goto label_405838;
        case 0x40583cu: goto label_40583c;
        case 0x405840u: goto label_405840;
        case 0x405844u: goto label_405844;
        case 0x405848u: goto label_405848;
        case 0x40584cu: goto label_40584c;
        case 0x405850u: goto label_405850;
        case 0x405854u: goto label_405854;
        case 0x405858u: goto label_405858;
        case 0x40585cu: goto label_40585c;
        case 0x405860u: goto label_405860;
        case 0x405864u: goto label_405864;
        case 0x405868u: goto label_405868;
        case 0x40586cu: goto label_40586c;
        case 0x405870u: goto label_405870;
        case 0x405874u: goto label_405874;
        case 0x405878u: goto label_405878;
        case 0x40587cu: goto label_40587c;
        case 0x405880u: goto label_405880;
        case 0x405884u: goto label_405884;
        case 0x405888u: goto label_405888;
        case 0x40588cu: goto label_40588c;
        case 0x405890u: goto label_405890;
        case 0x405894u: goto label_405894;
        case 0x405898u: goto label_405898;
        case 0x40589cu: goto label_40589c;
        case 0x4058a0u: goto label_4058a0;
        case 0x4058a4u: goto label_4058a4;
        case 0x4058a8u: goto label_4058a8;
        case 0x4058acu: goto label_4058ac;
        case 0x4058b0u: goto label_4058b0;
        case 0x4058b4u: goto label_4058b4;
        case 0x4058b8u: goto label_4058b8;
        case 0x4058bcu: goto label_4058bc;
        case 0x4058c0u: goto label_4058c0;
        case 0x4058c4u: goto label_4058c4;
        case 0x4058c8u: goto label_4058c8;
        case 0x4058ccu: goto label_4058cc;
        case 0x4058d0u: goto label_4058d0;
        case 0x4058d4u: goto label_4058d4;
        case 0x4058d8u: goto label_4058d8;
        case 0x4058dcu: goto label_4058dc;
        case 0x4058e0u: goto label_4058e0;
        case 0x4058e4u: goto label_4058e4;
        case 0x4058e8u: goto label_4058e8;
        case 0x4058ecu: goto label_4058ec;
        case 0x4058f0u: goto label_4058f0;
        case 0x4058f4u: goto label_4058f4;
        case 0x4058f8u: goto label_4058f8;
        case 0x4058fcu: goto label_4058fc;
        case 0x405900u: goto label_405900;
        case 0x405904u: goto label_405904;
        case 0x405908u: goto label_405908;
        case 0x40590cu: goto label_40590c;
        case 0x405910u: goto label_405910;
        case 0x405914u: goto label_405914;
        case 0x405918u: goto label_405918;
        case 0x40591cu: goto label_40591c;
        case 0x405920u: goto label_405920;
        case 0x405924u: goto label_405924;
        case 0x405928u: goto label_405928;
        case 0x40592cu: goto label_40592c;
        case 0x405930u: goto label_405930;
        case 0x405934u: goto label_405934;
        case 0x405938u: goto label_405938;
        case 0x40593cu: goto label_40593c;
        case 0x405940u: goto label_405940;
        case 0x405944u: goto label_405944;
        case 0x405948u: goto label_405948;
        case 0x40594cu: goto label_40594c;
        case 0x405950u: goto label_405950;
        case 0x405954u: goto label_405954;
        case 0x405958u: goto label_405958;
        case 0x40595cu: goto label_40595c;
        case 0x405960u: goto label_405960;
        case 0x405964u: goto label_405964;
        case 0x405968u: goto label_405968;
        case 0x40596cu: goto label_40596c;
        case 0x405970u: goto label_405970;
        case 0x405974u: goto label_405974;
        case 0x405978u: goto label_405978;
        case 0x40597cu: goto label_40597c;
        case 0x405980u: goto label_405980;
        case 0x405984u: goto label_405984;
        case 0x405988u: goto label_405988;
        case 0x40598cu: goto label_40598c;
        case 0x405990u: goto label_405990;
        case 0x405994u: goto label_405994;
        case 0x405998u: goto label_405998;
        case 0x40599cu: goto label_40599c;
        case 0x4059a0u: goto label_4059a0;
        case 0x4059a4u: goto label_4059a4;
        case 0x4059a8u: goto label_4059a8;
        case 0x4059acu: goto label_4059ac;
        case 0x4059b0u: goto label_4059b0;
        case 0x4059b4u: goto label_4059b4;
        case 0x4059b8u: goto label_4059b8;
        case 0x4059bcu: goto label_4059bc;
        case 0x4059c0u: goto label_4059c0;
        case 0x4059c4u: goto label_4059c4;
        case 0x4059c8u: goto label_4059c8;
        case 0x4059ccu: goto label_4059cc;
        case 0x4059d0u: goto label_4059d0;
        case 0x4059d4u: goto label_4059d4;
        case 0x4059d8u: goto label_4059d8;
        case 0x4059dcu: goto label_4059dc;
        case 0x4059e0u: goto label_4059e0;
        case 0x4059e4u: goto label_4059e4;
        case 0x4059e8u: goto label_4059e8;
        case 0x4059ecu: goto label_4059ec;
        case 0x4059f0u: goto label_4059f0;
        case 0x4059f4u: goto label_4059f4;
        case 0x4059f8u: goto label_4059f8;
        case 0x4059fcu: goto label_4059fc;
        case 0x405a00u: goto label_405a00;
        case 0x405a04u: goto label_405a04;
        case 0x405a08u: goto label_405a08;
        case 0x405a0cu: goto label_405a0c;
        case 0x405a10u: goto label_405a10;
        case 0x405a14u: goto label_405a14;
        case 0x405a18u: goto label_405a18;
        case 0x405a1cu: goto label_405a1c;
        case 0x405a20u: goto label_405a20;
        case 0x405a24u: goto label_405a24;
        case 0x405a28u: goto label_405a28;
        case 0x405a2cu: goto label_405a2c;
        case 0x405a30u: goto label_405a30;
        case 0x405a34u: goto label_405a34;
        case 0x405a38u: goto label_405a38;
        case 0x405a3cu: goto label_405a3c;
        case 0x405a40u: goto label_405a40;
        case 0x405a44u: goto label_405a44;
        case 0x405a48u: goto label_405a48;
        case 0x405a4cu: goto label_405a4c;
        case 0x405a50u: goto label_405a50;
        case 0x405a54u: goto label_405a54;
        case 0x405a58u: goto label_405a58;
        case 0x405a5cu: goto label_405a5c;
        case 0x405a60u: goto label_405a60;
        case 0x405a64u: goto label_405a64;
        case 0x405a68u: goto label_405a68;
        case 0x405a6cu: goto label_405a6c;
        case 0x405a70u: goto label_405a70;
        case 0x405a74u: goto label_405a74;
        case 0x405a78u: goto label_405a78;
        case 0x405a7cu: goto label_405a7c;
        case 0x405a80u: goto label_405a80;
        case 0x405a84u: goto label_405a84;
        case 0x405a88u: goto label_405a88;
        case 0x405a8cu: goto label_405a8c;
        case 0x405a90u: goto label_405a90;
        case 0x405a94u: goto label_405a94;
        case 0x405a98u: goto label_405a98;
        case 0x405a9cu: goto label_405a9c;
        case 0x405aa0u: goto label_405aa0;
        case 0x405aa4u: goto label_405aa4;
        case 0x405aa8u: goto label_405aa8;
        case 0x405aacu: goto label_405aac;
        case 0x405ab0u: goto label_405ab0;
        case 0x405ab4u: goto label_405ab4;
        case 0x405ab8u: goto label_405ab8;
        case 0x405abcu: goto label_405abc;
        case 0x405ac0u: goto label_405ac0;
        case 0x405ac4u: goto label_405ac4;
        case 0x405ac8u: goto label_405ac8;
        case 0x405accu: goto label_405acc;
        case 0x405ad0u: goto label_405ad0;
        case 0x405ad4u: goto label_405ad4;
        case 0x405ad8u: goto label_405ad8;
        case 0x405adcu: goto label_405adc;
        case 0x405ae0u: goto label_405ae0;
        case 0x405ae4u: goto label_405ae4;
        case 0x405ae8u: goto label_405ae8;
        case 0x405aecu: goto label_405aec;
        case 0x405af0u: goto label_405af0;
        case 0x405af4u: goto label_405af4;
        case 0x405af8u: goto label_405af8;
        case 0x405afcu: goto label_405afc;
        case 0x405b00u: goto label_405b00;
        case 0x405b04u: goto label_405b04;
        case 0x405b08u: goto label_405b08;
        case 0x405b0cu: goto label_405b0c;
        case 0x405b10u: goto label_405b10;
        case 0x405b14u: goto label_405b14;
        case 0x405b18u: goto label_405b18;
        case 0x405b1cu: goto label_405b1c;
        case 0x405b20u: goto label_405b20;
        case 0x405b24u: goto label_405b24;
        case 0x405b28u: goto label_405b28;
        case 0x405b2cu: goto label_405b2c;
        case 0x405b30u: goto label_405b30;
        case 0x405b34u: goto label_405b34;
        case 0x405b38u: goto label_405b38;
        case 0x405b3cu: goto label_405b3c;
        case 0x405b40u: goto label_405b40;
        case 0x405b44u: goto label_405b44;
        case 0x405b48u: goto label_405b48;
        case 0x405b4cu: goto label_405b4c;
        case 0x405b50u: goto label_405b50;
        case 0x405b54u: goto label_405b54;
        case 0x405b58u: goto label_405b58;
        case 0x405b5cu: goto label_405b5c;
        case 0x405b60u: goto label_405b60;
        case 0x405b64u: goto label_405b64;
        case 0x405b68u: goto label_405b68;
        case 0x405b6cu: goto label_405b6c;
        case 0x405b70u: goto label_405b70;
        case 0x405b74u: goto label_405b74;
        case 0x405b78u: goto label_405b78;
        case 0x405b7cu: goto label_405b7c;
        case 0x405b80u: goto label_405b80;
        case 0x405b84u: goto label_405b84;
        case 0x405b88u: goto label_405b88;
        case 0x405b8cu: goto label_405b8c;
        case 0x405b90u: goto label_405b90;
        case 0x405b94u: goto label_405b94;
        case 0x405b98u: goto label_405b98;
        case 0x405b9cu: goto label_405b9c;
        case 0x405ba0u: goto label_405ba0;
        case 0x405ba4u: goto label_405ba4;
        case 0x405ba8u: goto label_405ba8;
        case 0x405bacu: goto label_405bac;
        case 0x405bb0u: goto label_405bb0;
        case 0x405bb4u: goto label_405bb4;
        case 0x405bb8u: goto label_405bb8;
        case 0x405bbcu: goto label_405bbc;
        case 0x405bc0u: goto label_405bc0;
        case 0x405bc4u: goto label_405bc4;
        case 0x405bc8u: goto label_405bc8;
        case 0x405bccu: goto label_405bcc;
        case 0x405bd0u: goto label_405bd0;
        case 0x405bd4u: goto label_405bd4;
        case 0x405bd8u: goto label_405bd8;
        case 0x405bdcu: goto label_405bdc;
        case 0x405be0u: goto label_405be0;
        case 0x405be4u: goto label_405be4;
        case 0x405be8u: goto label_405be8;
        case 0x405becu: goto label_405bec;
        case 0x405bf0u: goto label_405bf0;
        case 0x405bf4u: goto label_405bf4;
        case 0x405bf8u: goto label_405bf8;
        case 0x405bfcu: goto label_405bfc;
        case 0x405c00u: goto label_405c00;
        case 0x405c04u: goto label_405c04;
        case 0x405c08u: goto label_405c08;
        case 0x405c0cu: goto label_405c0c;
        case 0x405c10u: goto label_405c10;
        case 0x405c14u: goto label_405c14;
        case 0x405c18u: goto label_405c18;
        case 0x405c1cu: goto label_405c1c;
        case 0x405c20u: goto label_405c20;
        case 0x405c24u: goto label_405c24;
        case 0x405c28u: goto label_405c28;
        case 0x405c2cu: goto label_405c2c;
        case 0x405c30u: goto label_405c30;
        case 0x405c34u: goto label_405c34;
        case 0x405c38u: goto label_405c38;
        case 0x405c3cu: goto label_405c3c;
        case 0x405c40u: goto label_405c40;
        case 0x405c44u: goto label_405c44;
        case 0x405c48u: goto label_405c48;
        case 0x405c4cu: goto label_405c4c;
        case 0x405c50u: goto label_405c50;
        case 0x405c54u: goto label_405c54;
        case 0x405c58u: goto label_405c58;
        case 0x405c5cu: goto label_405c5c;
        case 0x405c60u: goto label_405c60;
        case 0x405c64u: goto label_405c64;
        case 0x405c68u: goto label_405c68;
        case 0x405c6cu: goto label_405c6c;
        case 0x405c70u: goto label_405c70;
        case 0x405c74u: goto label_405c74;
        case 0x405c78u: goto label_405c78;
        case 0x405c7cu: goto label_405c7c;
        case 0x405c80u: goto label_405c80;
        case 0x405c84u: goto label_405c84;
        case 0x405c88u: goto label_405c88;
        case 0x405c8cu: goto label_405c8c;
        case 0x405c90u: goto label_405c90;
        case 0x405c94u: goto label_405c94;
        case 0x405c98u: goto label_405c98;
        case 0x405c9cu: goto label_405c9c;
        case 0x405ca0u: goto label_405ca0;
        case 0x405ca4u: goto label_405ca4;
        case 0x405ca8u: goto label_405ca8;
        case 0x405cacu: goto label_405cac;
        case 0x405cb0u: goto label_405cb0;
        case 0x405cb4u: goto label_405cb4;
        case 0x405cb8u: goto label_405cb8;
        case 0x405cbcu: goto label_405cbc;
        case 0x405cc0u: goto label_405cc0;
        case 0x405cc4u: goto label_405cc4;
        case 0x405cc8u: goto label_405cc8;
        case 0x405cccu: goto label_405ccc;
        case 0x405cd0u: goto label_405cd0;
        case 0x405cd4u: goto label_405cd4;
        case 0x405cd8u: goto label_405cd8;
        case 0x405cdcu: goto label_405cdc;
        case 0x405ce0u: goto label_405ce0;
        case 0x405ce4u: goto label_405ce4;
        case 0x405ce8u: goto label_405ce8;
        case 0x405cecu: goto label_405cec;
        case 0x405cf0u: goto label_405cf0;
        case 0x405cf4u: goto label_405cf4;
        case 0x405cf8u: goto label_405cf8;
        case 0x405cfcu: goto label_405cfc;
        case 0x405d00u: goto label_405d00;
        case 0x405d04u: goto label_405d04;
        case 0x405d08u: goto label_405d08;
        case 0x405d0cu: goto label_405d0c;
        case 0x405d10u: goto label_405d10;
        case 0x405d14u: goto label_405d14;
        case 0x405d18u: goto label_405d18;
        case 0x405d1cu: goto label_405d1c;
        case 0x405d20u: goto label_405d20;
        case 0x405d24u: goto label_405d24;
        case 0x405d28u: goto label_405d28;
        case 0x405d2cu: goto label_405d2c;
        case 0x405d30u: goto label_405d30;
        case 0x405d34u: goto label_405d34;
        case 0x405d38u: goto label_405d38;
        case 0x405d3cu: goto label_405d3c;
        case 0x405d40u: goto label_405d40;
        case 0x405d44u: goto label_405d44;
        case 0x405d48u: goto label_405d48;
        case 0x405d4cu: goto label_405d4c;
        case 0x405d50u: goto label_405d50;
        case 0x405d54u: goto label_405d54;
        case 0x405d58u: goto label_405d58;
        case 0x405d5cu: goto label_405d5c;
        case 0x405d60u: goto label_405d60;
        case 0x405d64u: goto label_405d64;
        case 0x405d68u: goto label_405d68;
        case 0x405d6cu: goto label_405d6c;
        case 0x405d70u: goto label_405d70;
        case 0x405d74u: goto label_405d74;
        case 0x405d78u: goto label_405d78;
        case 0x405d7cu: goto label_405d7c;
        case 0x405d80u: goto label_405d80;
        case 0x405d84u: goto label_405d84;
        case 0x405d88u: goto label_405d88;
        case 0x405d8cu: goto label_405d8c;
        case 0x405d90u: goto label_405d90;
        case 0x405d94u: goto label_405d94;
        case 0x405d98u: goto label_405d98;
        case 0x405d9cu: goto label_405d9c;
        case 0x405da0u: goto label_405da0;
        case 0x405da4u: goto label_405da4;
        case 0x405da8u: goto label_405da8;
        case 0x405dacu: goto label_405dac;
        case 0x405db0u: goto label_405db0;
        case 0x405db4u: goto label_405db4;
        case 0x405db8u: goto label_405db8;
        case 0x405dbcu: goto label_405dbc;
        case 0x405dc0u: goto label_405dc0;
        case 0x405dc4u: goto label_405dc4;
        case 0x405dc8u: goto label_405dc8;
        case 0x405dccu: goto label_405dcc;
        case 0x405dd0u: goto label_405dd0;
        case 0x405dd4u: goto label_405dd4;
        case 0x405dd8u: goto label_405dd8;
        case 0x405ddcu: goto label_405ddc;
        case 0x405de0u: goto label_405de0;
        case 0x405de4u: goto label_405de4;
        case 0x405de8u: goto label_405de8;
        case 0x405decu: goto label_405dec;
        case 0x405df0u: goto label_405df0;
        case 0x405df4u: goto label_405df4;
        case 0x405df8u: goto label_405df8;
        case 0x405dfcu: goto label_405dfc;
        case 0x405e00u: goto label_405e00;
        case 0x405e04u: goto label_405e04;
        case 0x405e08u: goto label_405e08;
        case 0x405e0cu: goto label_405e0c;
        case 0x405e10u: goto label_405e10;
        case 0x405e14u: goto label_405e14;
        case 0x405e18u: goto label_405e18;
        case 0x405e1cu: goto label_405e1c;
        case 0x405e20u: goto label_405e20;
        case 0x405e24u: goto label_405e24;
        case 0x405e28u: goto label_405e28;
        case 0x405e2cu: goto label_405e2c;
        case 0x405e30u: goto label_405e30;
        case 0x405e34u: goto label_405e34;
        case 0x405e38u: goto label_405e38;
        case 0x405e3cu: goto label_405e3c;
        case 0x405e40u: goto label_405e40;
        case 0x405e44u: goto label_405e44;
        case 0x405e48u: goto label_405e48;
        case 0x405e4cu: goto label_405e4c;
        case 0x405e50u: goto label_405e50;
        case 0x405e54u: goto label_405e54;
        case 0x405e58u: goto label_405e58;
        case 0x405e5cu: goto label_405e5c;
        case 0x405e60u: goto label_405e60;
        case 0x405e64u: goto label_405e64;
        case 0x405e68u: goto label_405e68;
        case 0x405e6cu: goto label_405e6c;
        case 0x405e70u: goto label_405e70;
        case 0x405e74u: goto label_405e74;
        case 0x405e78u: goto label_405e78;
        case 0x405e7cu: goto label_405e7c;
        case 0x405e80u: goto label_405e80;
        case 0x405e84u: goto label_405e84;
        case 0x405e88u: goto label_405e88;
        case 0x405e8cu: goto label_405e8c;
        case 0x405e90u: goto label_405e90;
        case 0x405e94u: goto label_405e94;
        case 0x405e98u: goto label_405e98;
        case 0x405e9cu: goto label_405e9c;
        case 0x405ea0u: goto label_405ea0;
        case 0x405ea4u: goto label_405ea4;
        case 0x405ea8u: goto label_405ea8;
        case 0x405eacu: goto label_405eac;
        case 0x405eb0u: goto label_405eb0;
        case 0x405eb4u: goto label_405eb4;
        case 0x405eb8u: goto label_405eb8;
        case 0x405ebcu: goto label_405ebc;
        case 0x405ec0u: goto label_405ec0;
        case 0x405ec4u: goto label_405ec4;
        case 0x405ec8u: goto label_405ec8;
        case 0x405eccu: goto label_405ecc;
        case 0x405ed0u: goto label_405ed0;
        case 0x405ed4u: goto label_405ed4;
        case 0x405ed8u: goto label_405ed8;
        case 0x405edcu: goto label_405edc;
        case 0x405ee0u: goto label_405ee0;
        case 0x405ee4u: goto label_405ee4;
        case 0x405ee8u: goto label_405ee8;
        case 0x405eecu: goto label_405eec;
        case 0x405ef0u: goto label_405ef0;
        case 0x405ef4u: goto label_405ef4;
        case 0x405ef8u: goto label_405ef8;
        case 0x405efcu: goto label_405efc;
        case 0x405f00u: goto label_405f00;
        case 0x405f04u: goto label_405f04;
        case 0x405f08u: goto label_405f08;
        case 0x405f0cu: goto label_405f0c;
        case 0x405f10u: goto label_405f10;
        case 0x405f14u: goto label_405f14;
        case 0x405f18u: goto label_405f18;
        case 0x405f1cu: goto label_405f1c;
        case 0x405f20u: goto label_405f20;
        case 0x405f24u: goto label_405f24;
        case 0x405f28u: goto label_405f28;
        case 0x405f2cu: goto label_405f2c;
        case 0x405f30u: goto label_405f30;
        case 0x405f34u: goto label_405f34;
        case 0x405f38u: goto label_405f38;
        case 0x405f3cu: goto label_405f3c;
        case 0x405f40u: goto label_405f40;
        case 0x405f44u: goto label_405f44;
        case 0x405f48u: goto label_405f48;
        case 0x405f4cu: goto label_405f4c;
        case 0x405f50u: goto label_405f50;
        case 0x405f54u: goto label_405f54;
        case 0x405f58u: goto label_405f58;
        case 0x405f5cu: goto label_405f5c;
        case 0x405f60u: goto label_405f60;
        case 0x405f64u: goto label_405f64;
        case 0x405f68u: goto label_405f68;
        case 0x405f6cu: goto label_405f6c;
        case 0x405f70u: goto label_405f70;
        case 0x405f74u: goto label_405f74;
        case 0x405f78u: goto label_405f78;
        case 0x405f7cu: goto label_405f7c;
        case 0x405f80u: goto label_405f80;
        case 0x405f84u: goto label_405f84;
        case 0x405f88u: goto label_405f88;
        case 0x405f8cu: goto label_405f8c;
        case 0x405f90u: goto label_405f90;
        case 0x405f94u: goto label_405f94;
        case 0x405f98u: goto label_405f98;
        case 0x405f9cu: goto label_405f9c;
        case 0x405fa0u: goto label_405fa0;
        case 0x405fa4u: goto label_405fa4;
        case 0x405fa8u: goto label_405fa8;
        case 0x405facu: goto label_405fac;
        case 0x405fb0u: goto label_405fb0;
        case 0x405fb4u: goto label_405fb4;
        case 0x405fb8u: goto label_405fb8;
        case 0x405fbcu: goto label_405fbc;
        case 0x405fc0u: goto label_405fc0;
        case 0x405fc4u: goto label_405fc4;
        case 0x405fc8u: goto label_405fc8;
        case 0x405fccu: goto label_405fcc;
        case 0x405fd0u: goto label_405fd0;
        case 0x405fd4u: goto label_405fd4;
        case 0x405fd8u: goto label_405fd8;
        case 0x405fdcu: goto label_405fdc;
        case 0x405fe0u: goto label_405fe0;
        case 0x405fe4u: goto label_405fe4;
        case 0x405fe8u: goto label_405fe8;
        case 0x405fecu: goto label_405fec;
        case 0x405ff0u: goto label_405ff0;
        case 0x405ff4u: goto label_405ff4;
        case 0x405ff8u: goto label_405ff8;
        case 0x405ffcu: goto label_405ffc;
        case 0x406000u: goto label_406000;
        case 0x406004u: goto label_406004;
        case 0x406008u: goto label_406008;
        case 0x40600cu: goto label_40600c;
        case 0x406010u: goto label_406010;
        case 0x406014u: goto label_406014;
        case 0x406018u: goto label_406018;
        case 0x40601cu: goto label_40601c;
        case 0x406020u: goto label_406020;
        case 0x406024u: goto label_406024;
        case 0x406028u: goto label_406028;
        case 0x40602cu: goto label_40602c;
        case 0x406030u: goto label_406030;
        case 0x406034u: goto label_406034;
        case 0x406038u: goto label_406038;
        case 0x40603cu: goto label_40603c;
        case 0x406040u: goto label_406040;
        case 0x406044u: goto label_406044;
        case 0x406048u: goto label_406048;
        case 0x40604cu: goto label_40604c;
        case 0x406050u: goto label_406050;
        case 0x406054u: goto label_406054;
        case 0x406058u: goto label_406058;
        case 0x40605cu: goto label_40605c;
        case 0x406060u: goto label_406060;
        case 0x406064u: goto label_406064;
        case 0x406068u: goto label_406068;
        case 0x40606cu: goto label_40606c;
        case 0x406070u: goto label_406070;
        case 0x406074u: goto label_406074;
        case 0x406078u: goto label_406078;
        case 0x40607cu: goto label_40607c;
        case 0x406080u: goto label_406080;
        case 0x406084u: goto label_406084;
        case 0x406088u: goto label_406088;
        case 0x40608cu: goto label_40608c;
        case 0x406090u: goto label_406090;
        case 0x406094u: goto label_406094;
        case 0x406098u: goto label_406098;
        case 0x40609cu: goto label_40609c;
        case 0x4060a0u: goto label_4060a0;
        case 0x4060a4u: goto label_4060a4;
        case 0x4060a8u: goto label_4060a8;
        case 0x4060acu: goto label_4060ac;
        case 0x4060b0u: goto label_4060b0;
        case 0x4060b4u: goto label_4060b4;
        case 0x4060b8u: goto label_4060b8;
        case 0x4060bcu: goto label_4060bc;
        case 0x4060c0u: goto label_4060c0;
        case 0x4060c4u: goto label_4060c4;
        case 0x4060c8u: goto label_4060c8;
        case 0x4060ccu: goto label_4060cc;
        case 0x4060d0u: goto label_4060d0;
        case 0x4060d4u: goto label_4060d4;
        case 0x4060d8u: goto label_4060d8;
        case 0x4060dcu: goto label_4060dc;
        case 0x4060e0u: goto label_4060e0;
        case 0x4060e4u: goto label_4060e4;
        case 0x4060e8u: goto label_4060e8;
        case 0x4060ecu: goto label_4060ec;
        case 0x4060f0u: goto label_4060f0;
        case 0x4060f4u: goto label_4060f4;
        case 0x4060f8u: goto label_4060f8;
        case 0x4060fcu: goto label_4060fc;
        case 0x406100u: goto label_406100;
        case 0x406104u: goto label_406104;
        case 0x406108u: goto label_406108;
        case 0x40610cu: goto label_40610c;
        case 0x406110u: goto label_406110;
        case 0x406114u: goto label_406114;
        case 0x406118u: goto label_406118;
        case 0x40611cu: goto label_40611c;
        case 0x406120u: goto label_406120;
        case 0x406124u: goto label_406124;
        case 0x406128u: goto label_406128;
        case 0x40612cu: goto label_40612c;
        case 0x406130u: goto label_406130;
        case 0x406134u: goto label_406134;
        case 0x406138u: goto label_406138;
        case 0x40613cu: goto label_40613c;
        case 0x406140u: goto label_406140;
        case 0x406144u: goto label_406144;
        case 0x406148u: goto label_406148;
        case 0x40614cu: goto label_40614c;
        case 0x406150u: goto label_406150;
        case 0x406154u: goto label_406154;
        case 0x406158u: goto label_406158;
        case 0x40615cu: goto label_40615c;
        case 0x406160u: goto label_406160;
        case 0x406164u: goto label_406164;
        case 0x406168u: goto label_406168;
        case 0x40616cu: goto label_40616c;
        case 0x406170u: goto label_406170;
        case 0x406174u: goto label_406174;
        case 0x406178u: goto label_406178;
        case 0x40617cu: goto label_40617c;
        case 0x406180u: goto label_406180;
        case 0x406184u: goto label_406184;
        case 0x406188u: goto label_406188;
        case 0x40618cu: goto label_40618c;
        case 0x406190u: goto label_406190;
        case 0x406194u: goto label_406194;
        case 0x406198u: goto label_406198;
        case 0x40619cu: goto label_40619c;
        case 0x4061a0u: goto label_4061a0;
        case 0x4061a4u: goto label_4061a4;
        case 0x4061a8u: goto label_4061a8;
        case 0x4061acu: goto label_4061ac;
        case 0x4061b0u: goto label_4061b0;
        case 0x4061b4u: goto label_4061b4;
        case 0x4061b8u: goto label_4061b8;
        case 0x4061bcu: goto label_4061bc;
        case 0x4061c0u: goto label_4061c0;
        case 0x4061c4u: goto label_4061c4;
        case 0x4061c8u: goto label_4061c8;
        case 0x4061ccu: goto label_4061cc;
        case 0x4061d0u: goto label_4061d0;
        case 0x4061d4u: goto label_4061d4;
        case 0x4061d8u: goto label_4061d8;
        case 0x4061dcu: goto label_4061dc;
        case 0x4061e0u: goto label_4061e0;
        case 0x4061e4u: goto label_4061e4;
        case 0x4061e8u: goto label_4061e8;
        case 0x4061ecu: goto label_4061ec;
        case 0x4061f0u: goto label_4061f0;
        case 0x4061f4u: goto label_4061f4;
        case 0x4061f8u: goto label_4061f8;
        case 0x4061fcu: goto label_4061fc;
        case 0x406200u: goto label_406200;
        case 0x406204u: goto label_406204;
        case 0x406208u: goto label_406208;
        case 0x40620cu: goto label_40620c;
        case 0x406210u: goto label_406210;
        case 0x406214u: goto label_406214;
        case 0x406218u: goto label_406218;
        case 0x40621cu: goto label_40621c;
        case 0x406220u: goto label_406220;
        case 0x406224u: goto label_406224;
        case 0x406228u: goto label_406228;
        case 0x40622cu: goto label_40622c;
        case 0x406230u: goto label_406230;
        case 0x406234u: goto label_406234;
        case 0x406238u: goto label_406238;
        case 0x40623cu: goto label_40623c;
        case 0x406240u: goto label_406240;
        case 0x406244u: goto label_406244;
        case 0x406248u: goto label_406248;
        case 0x40624cu: goto label_40624c;
        case 0x406250u: goto label_406250;
        case 0x406254u: goto label_406254;
        case 0x406258u: goto label_406258;
        case 0x40625cu: goto label_40625c;
        case 0x406260u: goto label_406260;
        case 0x406264u: goto label_406264;
        case 0x406268u: goto label_406268;
        case 0x40626cu: goto label_40626c;
        case 0x406270u: goto label_406270;
        case 0x406274u: goto label_406274;
        case 0x406278u: goto label_406278;
        case 0x40627cu: goto label_40627c;
        case 0x406280u: goto label_406280;
        case 0x406284u: goto label_406284;
        case 0x406288u: goto label_406288;
        case 0x40628cu: goto label_40628c;
        case 0x406290u: goto label_406290;
        case 0x406294u: goto label_406294;
        case 0x406298u: goto label_406298;
        case 0x40629cu: goto label_40629c;
        case 0x4062a0u: goto label_4062a0;
        case 0x4062a4u: goto label_4062a4;
        case 0x4062a8u: goto label_4062a8;
        case 0x4062acu: goto label_4062ac;
        case 0x4062b0u: goto label_4062b0;
        case 0x4062b4u: goto label_4062b4;
        case 0x4062b8u: goto label_4062b8;
        case 0x4062bcu: goto label_4062bc;
        case 0x4062c0u: goto label_4062c0;
        case 0x4062c4u: goto label_4062c4;
        case 0x4062c8u: goto label_4062c8;
        case 0x4062ccu: goto label_4062cc;
        case 0x4062d0u: goto label_4062d0;
        case 0x4062d4u: goto label_4062d4;
        case 0x4062d8u: goto label_4062d8;
        case 0x4062dcu: goto label_4062dc;
        case 0x4062e0u: goto label_4062e0;
        case 0x4062e4u: goto label_4062e4;
        case 0x4062e8u: goto label_4062e8;
        case 0x4062ecu: goto label_4062ec;
        case 0x4062f0u: goto label_4062f0;
        case 0x4062f4u: goto label_4062f4;
        case 0x4062f8u: goto label_4062f8;
        case 0x4062fcu: goto label_4062fc;
        case 0x406300u: goto label_406300;
        case 0x406304u: goto label_406304;
        case 0x406308u: goto label_406308;
        case 0x40630cu: goto label_40630c;
        case 0x406310u: goto label_406310;
        case 0x406314u: goto label_406314;
        case 0x406318u: goto label_406318;
        case 0x40631cu: goto label_40631c;
        case 0x406320u: goto label_406320;
        case 0x406324u: goto label_406324;
        case 0x406328u: goto label_406328;
        case 0x40632cu: goto label_40632c;
        case 0x406330u: goto label_406330;
        case 0x406334u: goto label_406334;
        case 0x406338u: goto label_406338;
        case 0x40633cu: goto label_40633c;
        case 0x406340u: goto label_406340;
        case 0x406344u: goto label_406344;
        case 0x406348u: goto label_406348;
        case 0x40634cu: goto label_40634c;
        case 0x406350u: goto label_406350;
        case 0x406354u: goto label_406354;
        case 0x406358u: goto label_406358;
        case 0x40635cu: goto label_40635c;
        case 0x406360u: goto label_406360;
        case 0x406364u: goto label_406364;
        case 0x406368u: goto label_406368;
        case 0x40636cu: goto label_40636c;
        case 0x406370u: goto label_406370;
        case 0x406374u: goto label_406374;
        case 0x406378u: goto label_406378;
        case 0x40637cu: goto label_40637c;
        case 0x406380u: goto label_406380;
        case 0x406384u: goto label_406384;
        case 0x406388u: goto label_406388;
        case 0x40638cu: goto label_40638c;
        case 0x406390u: goto label_406390;
        case 0x406394u: goto label_406394;
        case 0x406398u: goto label_406398;
        case 0x40639cu: goto label_40639c;
        case 0x4063a0u: goto label_4063a0;
        case 0x4063a4u: goto label_4063a4;
        case 0x4063a8u: goto label_4063a8;
        case 0x4063acu: goto label_4063ac;
        case 0x4063b0u: goto label_4063b0;
        case 0x4063b4u: goto label_4063b4;
        case 0x4063b8u: goto label_4063b8;
        case 0x4063bcu: goto label_4063bc;
        case 0x4063c0u: goto label_4063c0;
        case 0x4063c4u: goto label_4063c4;
        case 0x4063c8u: goto label_4063c8;
        case 0x4063ccu: goto label_4063cc;
        case 0x4063d0u: goto label_4063d0;
        case 0x4063d4u: goto label_4063d4;
        case 0x4063d8u: goto label_4063d8;
        case 0x4063dcu: goto label_4063dc;
        case 0x4063e0u: goto label_4063e0;
        case 0x4063e4u: goto label_4063e4;
        case 0x4063e8u: goto label_4063e8;
        case 0x4063ecu: goto label_4063ec;
        case 0x4063f0u: goto label_4063f0;
        case 0x4063f4u: goto label_4063f4;
        case 0x4063f8u: goto label_4063f8;
        case 0x4063fcu: goto label_4063fc;
        case 0x406400u: goto label_406400;
        case 0x406404u: goto label_406404;
        case 0x406408u: goto label_406408;
        case 0x40640cu: goto label_40640c;
        case 0x406410u: goto label_406410;
        case 0x406414u: goto label_406414;
        case 0x406418u: goto label_406418;
        case 0x40641cu: goto label_40641c;
        case 0x406420u: goto label_406420;
        case 0x406424u: goto label_406424;
        case 0x406428u: goto label_406428;
        case 0x40642cu: goto label_40642c;
        case 0x406430u: goto label_406430;
        case 0x406434u: goto label_406434;
        case 0x406438u: goto label_406438;
        case 0x40643cu: goto label_40643c;
        case 0x406440u: goto label_406440;
        case 0x406444u: goto label_406444;
        case 0x406448u: goto label_406448;
        case 0x40644cu: goto label_40644c;
        case 0x406450u: goto label_406450;
        case 0x406454u: goto label_406454;
        case 0x406458u: goto label_406458;
        case 0x40645cu: goto label_40645c;
        case 0x406460u: goto label_406460;
        case 0x406464u: goto label_406464;
        case 0x406468u: goto label_406468;
        case 0x40646cu: goto label_40646c;
        case 0x406470u: goto label_406470;
        case 0x406474u: goto label_406474;
        case 0x406478u: goto label_406478;
        case 0x40647cu: goto label_40647c;
        case 0x406480u: goto label_406480;
        case 0x406484u: goto label_406484;
        case 0x406488u: goto label_406488;
        case 0x40648cu: goto label_40648c;
        case 0x406490u: goto label_406490;
        case 0x406494u: goto label_406494;
        case 0x406498u: goto label_406498;
        case 0x40649cu: goto label_40649c;
        case 0x4064a0u: goto label_4064a0;
        case 0x4064a4u: goto label_4064a4;
        case 0x4064a8u: goto label_4064a8;
        case 0x4064acu: goto label_4064ac;
        case 0x4064b0u: goto label_4064b0;
        case 0x4064b4u: goto label_4064b4;
        case 0x4064b8u: goto label_4064b8;
        case 0x4064bcu: goto label_4064bc;
        case 0x4064c0u: goto label_4064c0;
        case 0x4064c4u: goto label_4064c4;
        case 0x4064c8u: goto label_4064c8;
        case 0x4064ccu: goto label_4064cc;
        case 0x4064d0u: goto label_4064d0;
        case 0x4064d4u: goto label_4064d4;
        case 0x4064d8u: goto label_4064d8;
        case 0x4064dcu: goto label_4064dc;
        case 0x4064e0u: goto label_4064e0;
        case 0x4064e4u: goto label_4064e4;
        case 0x4064e8u: goto label_4064e8;
        case 0x4064ecu: goto label_4064ec;
        case 0x4064f0u: goto label_4064f0;
        case 0x4064f4u: goto label_4064f4;
        case 0x4064f8u: goto label_4064f8;
        case 0x4064fcu: goto label_4064fc;
        case 0x406500u: goto label_406500;
        case 0x406504u: goto label_406504;
        case 0x406508u: goto label_406508;
        case 0x40650cu: goto label_40650c;
        case 0x406510u: goto label_406510;
        case 0x406514u: goto label_406514;
        case 0x406518u: goto label_406518;
        case 0x40651cu: goto label_40651c;
        case 0x406520u: goto label_406520;
        case 0x406524u: goto label_406524;
        case 0x406528u: goto label_406528;
        case 0x40652cu: goto label_40652c;
        case 0x406530u: goto label_406530;
        case 0x406534u: goto label_406534;
        case 0x406538u: goto label_406538;
        case 0x40653cu: goto label_40653c;
        case 0x406540u: goto label_406540;
        case 0x406544u: goto label_406544;
        case 0x406548u: goto label_406548;
        case 0x40654cu: goto label_40654c;
        case 0x406550u: goto label_406550;
        case 0x406554u: goto label_406554;
        case 0x406558u: goto label_406558;
        case 0x40655cu: goto label_40655c;
        case 0x406560u: goto label_406560;
        case 0x406564u: goto label_406564;
        case 0x406568u: goto label_406568;
        case 0x40656cu: goto label_40656c;
        case 0x406570u: goto label_406570;
        case 0x406574u: goto label_406574;
        case 0x406578u: goto label_406578;
        case 0x40657cu: goto label_40657c;
        case 0x406580u: goto label_406580;
        case 0x406584u: goto label_406584;
        case 0x406588u: goto label_406588;
        case 0x40658cu: goto label_40658c;
        case 0x406590u: goto label_406590;
        case 0x406594u: goto label_406594;
        case 0x406598u: goto label_406598;
        case 0x40659cu: goto label_40659c;
        case 0x4065a0u: goto label_4065a0;
        case 0x4065a4u: goto label_4065a4;
        case 0x4065a8u: goto label_4065a8;
        case 0x4065acu: goto label_4065ac;
        case 0x4065b0u: goto label_4065b0;
        case 0x4065b4u: goto label_4065b4;
        case 0x4065b8u: goto label_4065b8;
        case 0x4065bcu: goto label_4065bc;
        case 0x4065c0u: goto label_4065c0;
        case 0x4065c4u: goto label_4065c4;
        case 0x4065c8u: goto label_4065c8;
        case 0x4065ccu: goto label_4065cc;
        case 0x4065d0u: goto label_4065d0;
        case 0x4065d4u: goto label_4065d4;
        case 0x4065d8u: goto label_4065d8;
        case 0x4065dcu: goto label_4065dc;
        case 0x4065e0u: goto label_4065e0;
        case 0x4065e4u: goto label_4065e4;
        case 0x4065e8u: goto label_4065e8;
        case 0x4065ecu: goto label_4065ec;
        case 0x4065f0u: goto label_4065f0;
        case 0x4065f4u: goto label_4065f4;
        case 0x4065f8u: goto label_4065f8;
        case 0x4065fcu: goto label_4065fc;
        case 0x406600u: goto label_406600;
        case 0x406604u: goto label_406604;
        case 0x406608u: goto label_406608;
        case 0x40660cu: goto label_40660c;
        case 0x406610u: goto label_406610;
        case 0x406614u: goto label_406614;
        case 0x406618u: goto label_406618;
        case 0x40661cu: goto label_40661c;
        case 0x406620u: goto label_406620;
        case 0x406624u: goto label_406624;
        case 0x406628u: goto label_406628;
        case 0x40662cu: goto label_40662c;
        case 0x406630u: goto label_406630;
        case 0x406634u: goto label_406634;
        case 0x406638u: goto label_406638;
        case 0x40663cu: goto label_40663c;
        case 0x406640u: goto label_406640;
        case 0x406644u: goto label_406644;
        case 0x406648u: goto label_406648;
        case 0x40664cu: goto label_40664c;
        case 0x406650u: goto label_406650;
        case 0x406654u: goto label_406654;
        case 0x406658u: goto label_406658;
        case 0x40665cu: goto label_40665c;
        case 0x406660u: goto label_406660;
        case 0x406664u: goto label_406664;
        case 0x406668u: goto label_406668;
        case 0x40666cu: goto label_40666c;
        case 0x406670u: goto label_406670;
        case 0x406674u: goto label_406674;
        case 0x406678u: goto label_406678;
        case 0x40667cu: goto label_40667c;
        case 0x406680u: goto label_406680;
        case 0x406684u: goto label_406684;
        case 0x406688u: goto label_406688;
        case 0x40668cu: goto label_40668c;
        case 0x406690u: goto label_406690;
        case 0x406694u: goto label_406694;
        case 0x406698u: goto label_406698;
        case 0x40669cu: goto label_40669c;
        case 0x4066a0u: goto label_4066a0;
        case 0x4066a4u: goto label_4066a4;
        case 0x4066a8u: goto label_4066a8;
        case 0x4066acu: goto label_4066ac;
        case 0x4066b0u: goto label_4066b0;
        case 0x4066b4u: goto label_4066b4;
        case 0x4066b8u: goto label_4066b8;
        case 0x4066bcu: goto label_4066bc;
        case 0x4066c0u: goto label_4066c0;
        case 0x4066c4u: goto label_4066c4;
        case 0x4066c8u: goto label_4066c8;
        case 0x4066ccu: goto label_4066cc;
        case 0x4066d0u: goto label_4066d0;
        case 0x4066d4u: goto label_4066d4;
        case 0x4066d8u: goto label_4066d8;
        case 0x4066dcu: goto label_4066dc;
        case 0x4066e0u: goto label_4066e0;
        case 0x4066e4u: goto label_4066e4;
        case 0x4066e8u: goto label_4066e8;
        case 0x4066ecu: goto label_4066ec;
        case 0x4066f0u: goto label_4066f0;
        case 0x4066f4u: goto label_4066f4;
        case 0x4066f8u: goto label_4066f8;
        case 0x4066fcu: goto label_4066fc;
        case 0x406700u: goto label_406700;
        case 0x406704u: goto label_406704;
        case 0x406708u: goto label_406708;
        case 0x40670cu: goto label_40670c;
        case 0x406710u: goto label_406710;
        case 0x406714u: goto label_406714;
        case 0x406718u: goto label_406718;
        case 0x40671cu: goto label_40671c;
        case 0x406720u: goto label_406720;
        case 0x406724u: goto label_406724;
        case 0x406728u: goto label_406728;
        case 0x40672cu: goto label_40672c;
        case 0x406730u: goto label_406730;
        case 0x406734u: goto label_406734;
        case 0x406738u: goto label_406738;
        case 0x40673cu: goto label_40673c;
        case 0x406740u: goto label_406740;
        case 0x406744u: goto label_406744;
        case 0x406748u: goto label_406748;
        case 0x40674cu: goto label_40674c;
        case 0x406750u: goto label_406750;
        case 0x406754u: goto label_406754;
        case 0x406758u: goto label_406758;
        case 0x40675cu: goto label_40675c;
        case 0x406760u: goto label_406760;
        case 0x406764u: goto label_406764;
        case 0x406768u: goto label_406768;
        case 0x40676cu: goto label_40676c;
        case 0x406770u: goto label_406770;
        case 0x406774u: goto label_406774;
        case 0x406778u: goto label_406778;
        case 0x40677cu: goto label_40677c;
        case 0x406780u: goto label_406780;
        case 0x406784u: goto label_406784;
        case 0x406788u: goto label_406788;
        case 0x40678cu: goto label_40678c;
        case 0x406790u: goto label_406790;
        case 0x406794u: goto label_406794;
        case 0x406798u: goto label_406798;
        case 0x40679cu: goto label_40679c;
        case 0x4067a0u: goto label_4067a0;
        case 0x4067a4u: goto label_4067a4;
        case 0x4067a8u: goto label_4067a8;
        case 0x4067acu: goto label_4067ac;
        case 0x4067b0u: goto label_4067b0;
        case 0x4067b4u: goto label_4067b4;
        case 0x4067b8u: goto label_4067b8;
        case 0x4067bcu: goto label_4067bc;
        case 0x4067c0u: goto label_4067c0;
        case 0x4067c4u: goto label_4067c4;
        case 0x4067c8u: goto label_4067c8;
        case 0x4067ccu: goto label_4067cc;
        case 0x4067d0u: goto label_4067d0;
        case 0x4067d4u: goto label_4067d4;
        case 0x4067d8u: goto label_4067d8;
        case 0x4067dcu: goto label_4067dc;
        case 0x4067e0u: goto label_4067e0;
        case 0x4067e4u: goto label_4067e4;
        case 0x4067e8u: goto label_4067e8;
        case 0x4067ecu: goto label_4067ec;
        case 0x4067f0u: goto label_4067f0;
        case 0x4067f4u: goto label_4067f4;
        case 0x4067f8u: goto label_4067f8;
        case 0x4067fcu: goto label_4067fc;
        case 0x406800u: goto label_406800;
        case 0x406804u: goto label_406804;
        case 0x406808u: goto label_406808;
        case 0x40680cu: goto label_40680c;
        case 0x406810u: goto label_406810;
        case 0x406814u: goto label_406814;
        case 0x406818u: goto label_406818;
        case 0x40681cu: goto label_40681c;
        case 0x406820u: goto label_406820;
        case 0x406824u: goto label_406824;
        case 0x406828u: goto label_406828;
        case 0x40682cu: goto label_40682c;
        case 0x406830u: goto label_406830;
        case 0x406834u: goto label_406834;
        case 0x406838u: goto label_406838;
        case 0x40683cu: goto label_40683c;
        case 0x406840u: goto label_406840;
        case 0x406844u: goto label_406844;
        case 0x406848u: goto label_406848;
        case 0x40684cu: goto label_40684c;
        case 0x406850u: goto label_406850;
        case 0x406854u: goto label_406854;
        case 0x406858u: goto label_406858;
        case 0x40685cu: goto label_40685c;
        case 0x406860u: goto label_406860;
        case 0x406864u: goto label_406864;
        case 0x406868u: goto label_406868;
        case 0x40686cu: goto label_40686c;
        case 0x406870u: goto label_406870;
        case 0x406874u: goto label_406874;
        case 0x406878u: goto label_406878;
        case 0x40687cu: goto label_40687c;
        case 0x406880u: goto label_406880;
        case 0x406884u: goto label_406884;
        case 0x406888u: goto label_406888;
        case 0x40688cu: goto label_40688c;
        case 0x406890u: goto label_406890;
        case 0x406894u: goto label_406894;
        case 0x406898u: goto label_406898;
        case 0x40689cu: goto label_40689c;
        case 0x4068a0u: goto label_4068a0;
        case 0x4068a4u: goto label_4068a4;
        case 0x4068a8u: goto label_4068a8;
        case 0x4068acu: goto label_4068ac;
        case 0x4068b0u: goto label_4068b0;
        case 0x4068b4u: goto label_4068b4;
        case 0x4068b8u: goto label_4068b8;
        case 0x4068bcu: goto label_4068bc;
        case 0x4068c0u: goto label_4068c0;
        case 0x4068c4u: goto label_4068c4;
        case 0x4068c8u: goto label_4068c8;
        case 0x4068ccu: goto label_4068cc;
        case 0x4068d0u: goto label_4068d0;
        case 0x4068d4u: goto label_4068d4;
        case 0x4068d8u: goto label_4068d8;
        case 0x4068dcu: goto label_4068dc;
        case 0x4068e0u: goto label_4068e0;
        case 0x4068e4u: goto label_4068e4;
        case 0x4068e8u: goto label_4068e8;
        case 0x4068ecu: goto label_4068ec;
        case 0x4068f0u: goto label_4068f0;
        case 0x4068f4u: goto label_4068f4;
        case 0x4068f8u: goto label_4068f8;
        case 0x4068fcu: goto label_4068fc;
        case 0x406900u: goto label_406900;
        case 0x406904u: goto label_406904;
        case 0x406908u: goto label_406908;
        case 0x40690cu: goto label_40690c;
        case 0x406910u: goto label_406910;
        case 0x406914u: goto label_406914;
        case 0x406918u: goto label_406918;
        case 0x40691cu: goto label_40691c;
        case 0x406920u: goto label_406920;
        case 0x406924u: goto label_406924;
        case 0x406928u: goto label_406928;
        case 0x40692cu: goto label_40692c;
        case 0x406930u: goto label_406930;
        case 0x406934u: goto label_406934;
        case 0x406938u: goto label_406938;
        case 0x40693cu: goto label_40693c;
        case 0x406940u: goto label_406940;
        case 0x406944u: goto label_406944;
        case 0x406948u: goto label_406948;
        case 0x40694cu: goto label_40694c;
        case 0x406950u: goto label_406950;
        case 0x406954u: goto label_406954;
        case 0x406958u: goto label_406958;
        case 0x40695cu: goto label_40695c;
        case 0x406960u: goto label_406960;
        case 0x406964u: goto label_406964;
        case 0x406968u: goto label_406968;
        case 0x40696cu: goto label_40696c;
        default: break;
    }

    ctx->pc = 0x4055d0u;

label_4055d0:
    // 0x4055d0: 0x80bd4a4  j           func_2F5290
label_4055d4:
    if (ctx->pc == 0x4055D4u) {
        ctx->pc = 0x4055D8u;
        goto label_4055d8;
    }
    ctx->pc = 0x4055D0u;
    ctx->pc = 0x2F5290u;
    if (runtime->hasFunction(0x2F5290u)) {
        auto targetFn = runtime->lookupFunction(0x2F5290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F5290_0x2f5290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4055D8u;
label_4055d8:
    // 0x4055d8: 0x0  nop
    ctx->pc = 0x4055d8u;
    // NOP
label_4055dc:
    // 0x4055dc: 0x0  nop
    ctx->pc = 0x4055dcu;
    // NOP
label_4055e0:
    // 0x4055e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4055e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4055e4:
    // 0x4055e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4055e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4055e8:
    // 0x4055e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4055e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4055ec:
    // 0x4055ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4055ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4055f0:
    // 0x4055f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4055f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4055f4:
    // 0x4055f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4055f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4055f8:
    // 0x4055f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4055f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4055fc:
    // 0x4055fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4055fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_405600:
    // 0x405600: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x405600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_405604:
    // 0x405604: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x405604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_405608:
    // 0x405608: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x405608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40560c:
    // 0x40560c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40560cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405610:
    // 0x405610: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x405610u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_405614:
    // 0x405614: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x405614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_405618:
    // 0x405618: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x405618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_40561c:
    // 0x40561c: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x40561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_405620:
    // 0x405620: 0xc68d0024  lwc1        $f13, 0x24($s4)
    ctx->pc = 0x405620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_405624:
    // 0x405624: 0xc68e0028  lwc1        $f14, 0x28($s4)
    ctx->pc = 0x405624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_405628:
    // 0x405628: 0xc04ce64  jal         func_133990
label_40562c:
    if (ctx->pc == 0x40562Cu) {
        ctx->pc = 0x40562Cu;
            // 0x40562c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x405630u;
        goto label_405630;
    }
    ctx->pc = 0x405628u;
    SET_GPR_U32(ctx, 31, 0x405630u);
    ctx->pc = 0x40562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405628u;
            // 0x40562c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405630u; }
        if (ctx->pc != 0x405630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405630u; }
        if (ctx->pc != 0x405630u) { return; }
    }
    ctx->pc = 0x405630u;
label_405630:
    // 0x405630: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x405630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_405634:
    // 0x405634: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x405634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_405638:
    // 0x405638: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x405638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_40563c:
    // 0x40563c: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x40563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_405640:
    // 0x405640: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x405640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_405644:
    // 0x405644: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x405644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405648:
    // 0x405648: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x405648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40564c:
    // 0x40564c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x40564cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_405650:
    // 0x405650: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x405650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_405654:
    // 0x405654: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x405654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_405658:
    // 0x405658: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_40565c:
    // 0x40565c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40565cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_405660:
    // 0x405660: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405664:
    // 0x405664: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x405664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_405668:
    // 0x405668: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x405668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_40566c:
    // 0x40566c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x40566cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_405670:
    // 0x405670: 0xc04ce30  jal         func_1338C0
label_405674:
    if (ctx->pc == 0x405674u) {
        ctx->pc = 0x405674u;
            // 0x405674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405678u;
        goto label_405678;
    }
    ctx->pc = 0x405670u;
    SET_GPR_U32(ctx, 31, 0x405678u);
    ctx->pc = 0x405674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405670u;
            // 0x405674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405678u; }
        if (ctx->pc != 0x405678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405678u; }
        if (ctx->pc != 0x405678u) { return; }
    }
    ctx->pc = 0x405678u;
label_405678:
    // 0x405678: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x405678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40567c:
    // 0x40567c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x40567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_405680:
    // 0x405680: 0xc68d0040  lwc1        $f13, 0x40($s4)
    ctx->pc = 0x405680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_405684:
    // 0x405684: 0xc68e0044  lwc1        $f14, 0x44($s4)
    ctx->pc = 0x405684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_405688:
    // 0x405688: 0xc04ce50  jal         func_133940
label_40568c:
    if (ctx->pc == 0x40568Cu) {
        ctx->pc = 0x40568Cu;
            // 0x40568c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405690u;
        goto label_405690;
    }
    ctx->pc = 0x405688u;
    SET_GPR_U32(ctx, 31, 0x405690u);
    ctx->pc = 0x40568Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405688u;
            // 0x40568c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405690u; }
        if (ctx->pc != 0x405690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405690u; }
        if (ctx->pc != 0x405690u) { return; }
    }
    ctx->pc = 0x405690u;
label_405690:
    // 0x405690: 0xc68d0050  lwc1        $f13, 0x50($s4)
    ctx->pc = 0x405690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_405694:
    // 0x405694: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x405694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_405698:
    // 0x405698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x405698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40569c:
    // 0x40569c: 0xc04f3fc  jal         func_13CFF0
label_4056a0:
    if (ctx->pc == 0x4056A0u) {
        ctx->pc = 0x4056A0u;
            // 0x4056a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4056A4u;
        goto label_4056a4;
    }
    ctx->pc = 0x40569Cu;
    SET_GPR_U32(ctx, 31, 0x4056A4u);
    ctx->pc = 0x4056A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40569Cu;
            // 0x4056a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056A4u; }
        if (ctx->pc != 0x4056A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056A4u; }
        if (ctx->pc != 0x4056A4u) { return; }
    }
    ctx->pc = 0x4056A4u;
label_4056a4:
    // 0x4056a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4056a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4056a8:
    // 0x4056a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4056a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4056ac:
    // 0x4056ac: 0xc04cd60  jal         func_133580
label_4056b0:
    if (ctx->pc == 0x4056B0u) {
        ctx->pc = 0x4056B0u;
            // 0x4056b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4056B4u;
        goto label_4056b4;
    }
    ctx->pc = 0x4056ACu;
    SET_GPR_U32(ctx, 31, 0x4056B4u);
    ctx->pc = 0x4056B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4056ACu;
            // 0x4056b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056B4u; }
        if (ctx->pc != 0x4056B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056B4u; }
        if (ctx->pc != 0x4056B4u) { return; }
    }
    ctx->pc = 0x4056B4u;
label_4056b4:
    // 0x4056b4: 0xc04e738  jal         func_139CE0
label_4056b8:
    if (ctx->pc == 0x4056B8u) {
        ctx->pc = 0x4056B8u;
            // 0x4056b8: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x4056BCu;
        goto label_4056bc;
    }
    ctx->pc = 0x4056B4u;
    SET_GPR_U32(ctx, 31, 0x4056BCu);
    ctx->pc = 0x4056B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4056B4u;
            // 0x4056b8: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056BCu; }
        if (ctx->pc != 0x4056BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056BCu; }
        if (ctx->pc != 0x4056BCu) { return; }
    }
    ctx->pc = 0x4056BCu;
label_4056bc:
    // 0x4056bc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x4056bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4056c0:
    // 0x4056c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4056c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4056c4:
    // 0x4056c4: 0xc04e4a4  jal         func_139290
label_4056c8:
    if (ctx->pc == 0x4056C8u) {
        ctx->pc = 0x4056C8u;
            // 0x4056c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4056CCu;
        goto label_4056cc;
    }
    ctx->pc = 0x4056C4u;
    SET_GPR_U32(ctx, 31, 0x4056CCu);
    ctx->pc = 0x4056C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4056C4u;
            // 0x4056c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056CCu; }
        if (ctx->pc != 0x4056CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4056CCu; }
        if (ctx->pc != 0x4056CCu) { return; }
    }
    ctx->pc = 0x4056CCu;
label_4056cc:
    // 0x4056cc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4056ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4056d0:
    // 0x4056d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4056d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4056d4:
    // 0x4056d4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4056d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4056d8:
    // 0x4056d8: 0x320f809  jalr        $t9
label_4056dc:
    if (ctx->pc == 0x4056DCu) {
        ctx->pc = 0x4056DCu;
            // 0x4056dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4056E0u;
        goto label_4056e0;
    }
    ctx->pc = 0x4056D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4056E0u);
        ctx->pc = 0x4056DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4056D8u;
            // 0x4056dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4056E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4056E0u; }
            if (ctx->pc != 0x4056E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4056E0u;
label_4056e0:
    // 0x4056e0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4056e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4056e4:
    // 0x4056e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4056e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4056e8:
    // 0x4056e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4056e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4056ec:
    // 0x4056ec: 0x320f809  jalr        $t9
label_4056f0:
    if (ctx->pc == 0x4056F0u) {
        ctx->pc = 0x4056F0u;
            // 0x4056f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4056F4u;
        goto label_4056f4;
    }
    ctx->pc = 0x4056ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4056F4u);
        ctx->pc = 0x4056F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4056ECu;
            // 0x4056f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4056F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4056F4u; }
            if (ctx->pc != 0x4056F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4056F4u;
label_4056f4:
    // 0x4056f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4056f8:
    // 0x4056f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4056f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4056fc:
    // 0x4056fc: 0x0  nop
    ctx->pc = 0x4056fcu;
    // NOP
label_405700:
    // 0x405700: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x405700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405704:
    // 0x405704: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_405708:
    if (ctx->pc == 0x405708u) {
        ctx->pc = 0x405708u;
            // 0x405708: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x40570Cu;
        goto label_40570c;
    }
    ctx->pc = 0x405704u;
    {
        const bool branch_taken_0x405704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x405708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405704u;
            // 0x405708: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405704) {
            ctx->pc = 0x405718u;
            goto label_405718;
        }
    }
    ctx->pc = 0x40570Cu;
label_40570c:
    // 0x40570c: 0xc0747dc  jal         func_1D1F70
label_405710:
    if (ctx->pc == 0x405710u) {
        ctx->pc = 0x405710u;
            // 0x405710: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x405714u;
        goto label_405714;
    }
    ctx->pc = 0x40570Cu;
    SET_GPR_U32(ctx, 31, 0x405714u);
    ctx->pc = 0x405710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40570Cu;
            // 0x405710: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405714u; }
        if (ctx->pc != 0x405714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405714u; }
        if (ctx->pc != 0x405714u) { return; }
    }
    ctx->pc = 0x405714u;
label_405714:
    // 0x405714: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x405714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_405718:
    // 0x405718: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x405718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_40571c:
    // 0x40571c: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x40571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_405720:
    // 0x405720: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x405720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_405724:
    // 0x405724: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x405724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_405728:
    // 0x405728: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x405728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_40572c:
    // 0x40572c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_405730:
    // 0x405730: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x405730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_405734:
    // 0x405734: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_405738:
    if (ctx->pc == 0x405738u) {
        ctx->pc = 0x405738u;
            // 0x405738: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x40573Cu;
        goto label_40573c;
    }
    ctx->pc = 0x405734u;
    {
        const bool branch_taken_0x405734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405734) {
            ctx->pc = 0x405738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405734u;
            // 0x405738: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x405750u;
            goto label_405750;
        }
    }
    ctx->pc = 0x40573Cu;
label_40573c:
    // 0x40573c: 0xc0bd780  jal         func_2F5E00
label_405740:
    if (ctx->pc == 0x405740u) {
        ctx->pc = 0x405744u;
        goto label_405744;
    }
    ctx->pc = 0x40573Cu;
    SET_GPR_U32(ctx, 31, 0x405744u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405744u; }
        if (ctx->pc != 0x405744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405744u; }
        if (ctx->pc != 0x405744u) { return; }
    }
    ctx->pc = 0x405744u;
label_405744:
    // 0x405744: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x405744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_405748:
    // 0x405748: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x405748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_40574c:
    // 0x40574c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x40574cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_405750:
    // 0x405750: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x405750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_405754:
    // 0x405754: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x405754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_405758:
    // 0x405758: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x405758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_40575c:
    // 0x40575c: 0x2634025  or          $t0, $s3, $v1
    ctx->pc = 0x40575cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_405760:
    // 0x405760: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x405760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_405764:
    // 0x405764: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_405768:
    if (ctx->pc == 0x405768u) {
        ctx->pc = 0x405768u;
            // 0x405768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40576Cu;
        goto label_40576c;
    }
    ctx->pc = 0x405764u;
    {
        const bool branch_taken_0x405764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405764) {
            ctx->pc = 0x405768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405764u;
            // 0x405768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405788u;
            goto label_405788;
        }
    }
    ctx->pc = 0x40576Cu;
label_40576c:
    // 0x40576c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405770:
    // 0x405770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x405770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405774:
    // 0x405774: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x405774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_405778:
    // 0x405778: 0xc055234  jal         func_1548D0
label_40577c:
    if (ctx->pc == 0x40577Cu) {
        ctx->pc = 0x40577Cu;
            // 0x40577c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x405780u;
        goto label_405780;
    }
    ctx->pc = 0x405778u;
    SET_GPR_U32(ctx, 31, 0x405780u);
    ctx->pc = 0x40577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405778u;
            // 0x40577c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405780u; }
        if (ctx->pc != 0x405780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405780u; }
        if (ctx->pc != 0x405780u) { return; }
    }
    ctx->pc = 0x405780u;
label_405780:
    // 0x405780: 0x10000006  b           . + 4 + (0x6 << 2)
label_405784:
    if (ctx->pc == 0x405784u) {
        ctx->pc = 0x405784u;
            // 0x405784: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x405788u;
        goto label_405788;
    }
    ctx->pc = 0x405780u;
    {
        const bool branch_taken_0x405780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405780u;
            // 0x405784: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405780) {
            ctx->pc = 0x40579Cu;
            goto label_40579c;
        }
    }
    ctx->pc = 0x405788u;
label_405788:
    // 0x405788: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x405788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40578c:
    // 0x40578c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x40578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_405790:
    // 0x405790: 0xc0550f8  jal         func_1543E0
label_405794:
    if (ctx->pc == 0x405794u) {
        ctx->pc = 0x405794u;
            // 0x405794: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x405798u;
        goto label_405798;
    }
    ctx->pc = 0x405790u;
    SET_GPR_U32(ctx, 31, 0x405798u);
    ctx->pc = 0x405794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405790u;
            // 0x405794: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405798u; }
        if (ctx->pc != 0x405798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405798u; }
        if (ctx->pc != 0x405798u) { return; }
    }
    ctx->pc = 0x405798u;
label_405798:
    // 0x405798: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x405798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40579c:
    // 0x40579c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40579cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4057a0:
    // 0x4057a0: 0x0  nop
    ctx->pc = 0x4057a0u;
    // NOP
label_4057a4:
    // 0x4057a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4057a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4057a8:
    // 0x4057a8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4057ac:
    if (ctx->pc == 0x4057ACu) {
        ctx->pc = 0x4057ACu;
            // 0x4057ac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4057B0u;
        goto label_4057b0;
    }
    ctx->pc = 0x4057A8u;
    {
        const bool branch_taken_0x4057a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4057a8) {
            ctx->pc = 0x4057ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4057A8u;
            // 0x4057ac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4057BCu;
            goto label_4057bc;
        }
    }
    ctx->pc = 0x4057B0u;
label_4057b0:
    // 0x4057b0: 0xc0747d0  jal         func_1D1F40
label_4057b4:
    if (ctx->pc == 0x4057B4u) {
        ctx->pc = 0x4057B8u;
        goto label_4057b8;
    }
    ctx->pc = 0x4057B0u;
    SET_GPR_U32(ctx, 31, 0x4057B8u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4057B8u; }
        if (ctx->pc != 0x4057B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4057B8u; }
        if (ctx->pc != 0x4057B8u) { return; }
    }
    ctx->pc = 0x4057B8u;
label_4057b8:
    // 0x4057b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4057b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4057bc:
    // 0x4057bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4057bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4057c0:
    // 0x4057c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4057c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4057c4:
    // 0x4057c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4057c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4057c8:
    // 0x4057c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4057c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4057cc:
    // 0x4057cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4057ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4057d0:
    // 0x4057d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4057d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4057d4:
    // 0x4057d4: 0x3e00008  jr          $ra
label_4057d8:
    if (ctx->pc == 0x4057D8u) {
        ctx->pc = 0x4057D8u;
            // 0x4057d8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4057DCu;
        goto label_4057dc;
    }
    ctx->pc = 0x4057D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4057D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4057D4u;
            // 0x4057d8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4057DCu;
label_4057dc:
    // 0x4057dc: 0x0  nop
    ctx->pc = 0x4057dcu;
    // NOP
label_4057e0:
    // 0x4057e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4057e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4057e4:
    // 0x4057e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4057e8:
    // 0x4057e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4057e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4057ec:
    // 0x4057ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4057ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4057f0:
    // 0x4057f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4057f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4057f4:
    // 0x4057f4: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4057f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4057f8:
    // 0x4057f8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x4057f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_4057fc:
    // 0x4057fc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_405800:
    if (ctx->pc == 0x405800u) {
        ctx->pc = 0x405800u;
            // 0x405800: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x405804u;
        goto label_405804;
    }
    ctx->pc = 0x4057FCu;
    {
        const bool branch_taken_0x4057fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4057fc) {
            ctx->pc = 0x405800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4057FCu;
            // 0x405800: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405810u;
            goto label_405810;
        }
    }
    ctx->pc = 0x405804u;
label_405804:
    // 0x405804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405808:
    // 0x405808: 0x10000007  b           . + 4 + (0x7 << 2)
label_40580c:
    if (ctx->pc == 0x40580Cu) {
        ctx->pc = 0x40580Cu;
            // 0x40580c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x405810u;
        goto label_405810;
    }
    ctx->pc = 0x405808u;
    {
        const bool branch_taken_0x405808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405808u;
            // 0x40580c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x405808) {
            ctx->pc = 0x405828u;
            goto label_405828;
        }
    }
    ctx->pc = 0x405810u;
label_405810:
    // 0x405810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x405810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_405814:
    // 0x405814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x405814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_405818:
    // 0x405818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x405818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40581c:
    // 0x40581c: 0x0  nop
    ctx->pc = 0x40581cu;
    // NOP
label_405820:
    // 0x405820: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x405820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_405824:
    // 0x405824: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x405824u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_405828:
    // 0x405828: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x405828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_40582c:
    // 0x40582c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x40582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_405830:
    // 0x405830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x405830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405834:
    // 0x405834: 0x0  nop
    ctx->pc = 0x405834u;
    // NOP
label_405838:
    // 0x405838: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x405838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_40583c:
    // 0x40583c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x40583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_405840:
    // 0x405840: 0xc0477a8  jal         func_11DEA0
label_405844:
    if (ctx->pc == 0x405844u) {
        ctx->pc = 0x405844u;
            // 0x405844: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x405848u;
        goto label_405848;
    }
    ctx->pc = 0x405840u;
    SET_GPR_U32(ctx, 31, 0x405848u);
    ctx->pc = 0x405844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405840u;
            // 0x405844: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405848u; }
        if (ctx->pc != 0x405848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405848u; }
        if (ctx->pc != 0x405848u) { return; }
    }
    ctx->pc = 0x405848u;
label_405848:
    // 0x405848: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x405848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_40584c:
    // 0x40584c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_405850:
    // 0x405850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x405850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405854:
    // 0x405854: 0x0  nop
    ctx->pc = 0x405854u;
    // NOP
label_405858:
    // 0x405858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x405858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40585c:
    // 0x40585c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x40585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_405860:
    // 0x405860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x405860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_405864:
    // 0x405864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405868:
    // 0x405868: 0x3e00008  jr          $ra
label_40586c:
    if (ctx->pc == 0x40586Cu) {
        ctx->pc = 0x40586Cu;
            // 0x40586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x405870u;
        goto label_405870;
    }
    ctx->pc = 0x405868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405868u;
            // 0x40586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405870u;
label_405870:
    // 0x405870: 0x80bd4a4  j           func_2F5290
label_405874:
    if (ctx->pc == 0x405874u) {
        ctx->pc = 0x405878u;
        goto label_405878;
    }
    ctx->pc = 0x405870u;
    ctx->pc = 0x2F5290u;
    if (runtime->hasFunction(0x2F5290u)) {
        auto targetFn = runtime->lookupFunction(0x2F5290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F5290_0x2f5290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x405878u;
label_405878:
    // 0x405878: 0x0  nop
    ctx->pc = 0x405878u;
    // NOP
label_40587c:
    // 0x40587c: 0x0  nop
    ctx->pc = 0x40587cu;
    // NOP
label_405880:
    // 0x405880: 0x3e00008  jr          $ra
label_405884:
    if (ctx->pc == 0x405884u) {
        ctx->pc = 0x405888u;
        goto label_405888;
    }
    ctx->pc = 0x405880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405888u;
label_405888:
    // 0x405888: 0x0  nop
    ctx->pc = 0x405888u;
    // NOP
label_40588c:
    // 0x40588c: 0x0  nop
    ctx->pc = 0x40588cu;
    // NOP
label_405890:
    // 0x405890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x405890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_405894:
    // 0x405894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x405894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_405898:
    // 0x405898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x405898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40589c:
    // 0x40589c: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x40589cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4058a0:
    // 0x4058a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4058a4:
    if (ctx->pc == 0x4058A4u) {
        ctx->pc = 0x4058A4u;
            // 0x4058a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4058A8u;
        goto label_4058a8;
    }
    ctx->pc = 0x4058A0u;
    {
        const bool branch_taken_0x4058a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4058A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4058A0u;
            // 0x4058a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4058a0) {
            ctx->pc = 0x4058B8u;
            goto label_4058b8;
        }
    }
    ctx->pc = 0x4058A8u;
label_4058a8:
    // 0x4058a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4058ac:
    // 0x4058ac: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4058acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4058b0:
    // 0x4058b0: 0xc057b7c  jal         func_15EDF0
label_4058b4:
    if (ctx->pc == 0x4058B4u) {
        ctx->pc = 0x4058B4u;
            // 0x4058b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4058B8u;
        goto label_4058b8;
    }
    ctx->pc = 0x4058B0u;
    SET_GPR_U32(ctx, 31, 0x4058B8u);
    ctx->pc = 0x4058B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4058B0u;
            // 0x4058b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058B8u; }
        if (ctx->pc != 0x4058B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058B8u; }
        if (ctx->pc != 0x4058B8u) { return; }
    }
    ctx->pc = 0x4058B8u;
label_4058b8:
    // 0x4058b8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4058b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_4058bc:
    // 0x4058bc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x4058bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_4058c0:
    // 0x4058c0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4058c4:
    if (ctx->pc == 0x4058C4u) {
        ctx->pc = 0x4058C4u;
            // 0x4058c4: 0x8e050124  lw          $a1, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->pc = 0x4058C8u;
        goto label_4058c8;
    }
    ctx->pc = 0x4058C0u;
    {
        const bool branch_taken_0x4058c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4058c0) {
            ctx->pc = 0x4058C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4058C0u;
            // 0x4058c4: 0x8e050124  lw          $a1, 0x124($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4058DCu;
            goto label_4058dc;
        }
    }
    ctx->pc = 0x4058C8u;
label_4058c8:
    // 0x4058c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4058cc:
    // 0x4058cc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4058d0:
    // 0x4058d0: 0xc057b7c  jal         func_15EDF0
label_4058d4:
    if (ctx->pc == 0x4058D4u) {
        ctx->pc = 0x4058D4u;
            // 0x4058d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4058D8u;
        goto label_4058d8;
    }
    ctx->pc = 0x4058D0u;
    SET_GPR_U32(ctx, 31, 0x4058D8u);
    ctx->pc = 0x4058D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4058D0u;
            // 0x4058d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058D8u; }
        if (ctx->pc != 0x4058D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058D8u; }
        if (ctx->pc != 0x4058D8u) { return; }
    }
    ctx->pc = 0x4058D8u;
label_4058d8:
    // 0x4058d8: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x4058d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_4058dc:
    // 0x4058dc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4058e0:
    if (ctx->pc == 0x4058E0u) {
        ctx->pc = 0x4058E0u;
            // 0x4058e0: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x4058E4u;
        goto label_4058e4;
    }
    ctx->pc = 0x4058DCu;
    {
        const bool branch_taken_0x4058dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4058dc) {
            ctx->pc = 0x4058E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4058DCu;
            // 0x4058e0: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4058F8u;
            goto label_4058f8;
        }
    }
    ctx->pc = 0x4058E4u;
label_4058e4:
    // 0x4058e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4058e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4058e8:
    // 0x4058e8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4058e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4058ec:
    // 0x4058ec: 0xc057b7c  jal         func_15EDF0
label_4058f0:
    if (ctx->pc == 0x4058F0u) {
        ctx->pc = 0x4058F0u;
            // 0x4058f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4058F4u;
        goto label_4058f4;
    }
    ctx->pc = 0x4058ECu;
    SET_GPR_U32(ctx, 31, 0x4058F4u);
    ctx->pc = 0x4058F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4058ECu;
            // 0x4058f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058F4u; }
        if (ctx->pc != 0x4058F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4058F4u; }
        if (ctx->pc != 0x4058F4u) { return; }
    }
    ctx->pc = 0x4058F4u;
label_4058f4:
    // 0x4058f4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4058f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4058f8:
    // 0x4058f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4058f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4058fc:
    // 0x4058fc: 0xc04a576  jal         func_1295D8
label_405900:
    if (ctx->pc == 0x405900u) {
        ctx->pc = 0x405900u;
            // 0x405900: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x405904u;
        goto label_405904;
    }
    ctx->pc = 0x4058FCu;
    SET_GPR_U32(ctx, 31, 0x405904u);
    ctx->pc = 0x405900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4058FCu;
            // 0x405900: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405904u; }
        if (ctx->pc != 0x405904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405904u; }
        if (ctx->pc != 0x405904u) { return; }
    }
    ctx->pc = 0x405904u;
label_405904:
    // 0x405904: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x405904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_405908:
    // 0x405908: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_40590c:
    if (ctx->pc == 0x40590Cu) {
        ctx->pc = 0x40590Cu;
            // 0x40590c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x405910u;
        goto label_405910;
    }
    ctx->pc = 0x405908u;
    {
        const bool branch_taken_0x405908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x405908) {
            ctx->pc = 0x40590Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405908u;
            // 0x40590c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40591Cu;
            goto label_40591c;
        }
    }
    ctx->pc = 0x405910u;
label_405910:
    // 0x405910: 0xc10c9b4  jal         func_4326D0
label_405914:
    if (ctx->pc == 0x405914u) {
        ctx->pc = 0x405918u;
        goto label_405918;
    }
    ctx->pc = 0x405910u;
    SET_GPR_U32(ctx, 31, 0x405918u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405918u; }
        if (ctx->pc != 0x405918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405918u; }
        if (ctx->pc != 0x405918u) { return; }
    }
    ctx->pc = 0x405918u;
label_405918:
    // 0x405918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x405918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40591c:
    // 0x40591c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40591cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405920:
    // 0x405920: 0x3e00008  jr          $ra
label_405924:
    if (ctx->pc == 0x405924u) {
        ctx->pc = 0x405924u;
            // 0x405924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x405928u;
        goto label_405928;
    }
    ctx->pc = 0x405920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405920u;
            // 0x405924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405928u;
label_405928:
    // 0x405928: 0x0  nop
    ctx->pc = 0x405928u;
    // NOP
label_40592c:
    // 0x40592c: 0x0  nop
    ctx->pc = 0x40592cu;
    // NOP
label_405930:
    // 0x405930: 0x3e00008  jr          $ra
label_405934:
    if (ctx->pc == 0x405934u) {
        ctx->pc = 0x405938u;
        goto label_405938;
    }
    ctx->pc = 0x405930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405938u;
label_405938:
    // 0x405938: 0x0  nop
    ctx->pc = 0x405938u;
    // NOP
label_40593c:
    // 0x40593c: 0x0  nop
    ctx->pc = 0x40593cu;
    // NOP
label_405940:
    // 0x405940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x405940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_405944:
    // 0x405944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x405944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_405948:
    // 0x405948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x405948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40594c:
    // 0x40594c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_405950:
    // 0x405950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x405950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_405954:
    // 0x405954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x405954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_405958:
    // 0x405958: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x405958u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40595c:
    // 0x40595c: 0xc075830  jal         func_1D60C0
label_405960:
    if (ctx->pc == 0x405960u) {
        ctx->pc = 0x405960u;
            // 0x405960: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405964u;
        goto label_405964;
    }
    ctx->pc = 0x40595Cu;
    SET_GPR_U32(ctx, 31, 0x405964u);
    ctx->pc = 0x405960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40595Cu;
            // 0x405960: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405964u; }
        if (ctx->pc != 0x405964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405964u; }
        if (ctx->pc != 0x405964u) { return; }
    }
    ctx->pc = 0x405964u;
label_405964:
    // 0x405964: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x405964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_405968:
    // 0x405968: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x405968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_40596c:
    // 0x40596c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_405970:
    if (ctx->pc == 0x405970u) {
        ctx->pc = 0x405970u;
            // 0x405970: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405974u;
        goto label_405974;
    }
    ctx->pc = 0x40596Cu;
    {
        const bool branch_taken_0x40596c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x405970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40596Cu;
            // 0x405970: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40596c) {
            ctx->pc = 0x40598Cu;
            goto label_40598c;
        }
    }
    ctx->pc = 0x405974u;
label_405974:
    // 0x405974: 0xc621118c  lwc1        $f1, 0x118C($s1)
    ctx->pc = 0x405974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405978:
    // 0x405978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x405978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40597c:
    // 0x40597c: 0x0  nop
    ctx->pc = 0x40597cu;
    // NOP
label_405980:
    // 0x405980: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x405980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405984:
    // 0x405984: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
label_405988:
    if (ctx->pc == 0x405988u) {
        ctx->pc = 0x405988u;
            // 0x405988: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x40598Cu;
        goto label_40598c;
    }
    ctx->pc = 0x405984u;
    {
        const bool branch_taken_0x405984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x405984) {
            ctx->pc = 0x405988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405984u;
            // 0x405988: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405A04u;
            goto label_405a04;
        }
    }
    ctx->pc = 0x40598Cu;
label_40598c:
    // 0x40598c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x40598cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_405990:
    // 0x405990: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_405994:
    if (ctx->pc == 0x405994u) {
        ctx->pc = 0x405994u;
            // 0x405994: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x405998u;
        goto label_405998;
    }
    ctx->pc = 0x405990u;
    {
        const bool branch_taken_0x405990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x405990) {
            ctx->pc = 0x405994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405990u;
            // 0x405994: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4059ACu;
            goto label_4059ac;
        }
    }
    ctx->pc = 0x405998u;
label_405998:
    // 0x405998: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x405998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40599c:
    // 0x40599c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x40599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4059a0:
    // 0x4059a0: 0xc057b7c  jal         func_15EDF0
label_4059a4:
    if (ctx->pc == 0x4059A4u) {
        ctx->pc = 0x4059A4u;
            // 0x4059a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4059A8u;
        goto label_4059a8;
    }
    ctx->pc = 0x4059A0u;
    SET_GPR_U32(ctx, 31, 0x4059A8u);
    ctx->pc = 0x4059A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4059A0u;
            // 0x4059a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059A8u; }
        if (ctx->pc != 0x4059A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059A8u; }
        if (ctx->pc != 0x4059A8u) { return; }
    }
    ctx->pc = 0x4059A8u;
label_4059a8:
    // 0x4059a8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x4059a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_4059ac:
    // 0x4059ac: 0x8e450120  lw          $a1, 0x120($s2)
    ctx->pc = 0x4059acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_4059b0:
    // 0x4059b0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4059b4:
    if (ctx->pc == 0x4059B4u) {
        ctx->pc = 0x4059B4u;
            // 0x4059b4: 0x8e450124  lw          $a1, 0x124($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
        ctx->pc = 0x4059B8u;
        goto label_4059b8;
    }
    ctx->pc = 0x4059B0u;
    {
        const bool branch_taken_0x4059b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4059b0) {
            ctx->pc = 0x4059B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4059B0u;
            // 0x4059b4: 0x8e450124  lw          $a1, 0x124($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4059CCu;
            goto label_4059cc;
        }
    }
    ctx->pc = 0x4059B8u;
label_4059b8:
    // 0x4059b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4059bc:
    // 0x4059bc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4059c0:
    // 0x4059c0: 0xc057b7c  jal         func_15EDF0
label_4059c4:
    if (ctx->pc == 0x4059C4u) {
        ctx->pc = 0x4059C4u;
            // 0x4059c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4059C8u;
        goto label_4059c8;
    }
    ctx->pc = 0x4059C0u;
    SET_GPR_U32(ctx, 31, 0x4059C8u);
    ctx->pc = 0x4059C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4059C0u;
            // 0x4059c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059C8u; }
        if (ctx->pc != 0x4059C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059C8u; }
        if (ctx->pc != 0x4059C8u) { return; }
    }
    ctx->pc = 0x4059C8u;
label_4059c8:
    // 0x4059c8: 0x8e450124  lw          $a1, 0x124($s2)
    ctx->pc = 0x4059c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_4059cc:
    // 0x4059cc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4059d0:
    if (ctx->pc == 0x4059D0u) {
        ctx->pc = 0x4059D0u;
            // 0x4059d0: 0x26440120  addiu       $a0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->pc = 0x4059D4u;
        goto label_4059d4;
    }
    ctx->pc = 0x4059CCu;
    {
        const bool branch_taken_0x4059cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4059cc) {
            ctx->pc = 0x4059D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4059CCu;
            // 0x4059d0: 0x26440120  addiu       $a0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4059E8u;
            goto label_4059e8;
        }
    }
    ctx->pc = 0x4059D4u;
label_4059d4:
    // 0x4059d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4059d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4059d8:
    // 0x4059d8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4059dc:
    // 0x4059dc: 0xc057b7c  jal         func_15EDF0
label_4059e0:
    if (ctx->pc == 0x4059E0u) {
        ctx->pc = 0x4059E0u;
            // 0x4059e0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4059E4u;
        goto label_4059e4;
    }
    ctx->pc = 0x4059DCu;
    SET_GPR_U32(ctx, 31, 0x4059E4u);
    ctx->pc = 0x4059E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4059DCu;
            // 0x4059e0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059E4u; }
        if (ctx->pc != 0x4059E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059E4u; }
        if (ctx->pc != 0x4059E4u) { return; }
    }
    ctx->pc = 0x4059E4u;
label_4059e4:
    // 0x4059e4: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x4059e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_4059e8:
    // 0x4059e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4059e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4059ec:
    // 0x4059ec: 0xc04a576  jal         func_1295D8
label_4059f0:
    if (ctx->pc == 0x4059F0u) {
        ctx->pc = 0x4059F0u;
            // 0x4059f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4059F4u;
        goto label_4059f4;
    }
    ctx->pc = 0x4059ECu;
    SET_GPR_U32(ctx, 31, 0x4059F4u);
    ctx->pc = 0x4059F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4059ECu;
            // 0x4059f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059F4u; }
        if (ctx->pc != 0x4059F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059F4u; }
        if (ctx->pc != 0x4059F4u) { return; }
    }
    ctx->pc = 0x4059F4u;
label_4059f4:
    // 0x4059f4: 0xc10c9b4  jal         func_4326D0
label_4059f8:
    if (ctx->pc == 0x4059F8u) {
        ctx->pc = 0x4059F8u;
            // 0x4059f8: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->pc = 0x4059FCu;
        goto label_4059fc;
    }
    ctx->pc = 0x4059F4u;
    SET_GPR_U32(ctx, 31, 0x4059FCu);
    ctx->pc = 0x4059F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4059F4u;
            // 0x4059f8: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059FCu; }
        if (ctx->pc != 0x4059FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4059FCu; }
        if (ctx->pc != 0x4059FCu) { return; }
    }
    ctx->pc = 0x4059FCu;
label_4059fc:
    // 0x4059fc: 0x10000090  b           . + 4 + (0x90 << 2)
label_405a00:
    if (ctx->pc == 0x405A00u) {
        ctx->pc = 0x405A00u;
            // 0x405a00: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x405A04u;
        goto label_405a04;
    }
    ctx->pc = 0x4059FCu;
    {
        const bool branch_taken_0x4059fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4059FCu;
            // 0x405a00: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4059fc) {
            ctx->pc = 0x405C40u;
            goto label_405c40;
        }
    }
    ctx->pc = 0x405A04u;
label_405a04:
    // 0x405a04: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x405a04u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_405a08:
    // 0x405a08: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x405a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_405a0c:
    // 0x405a0c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_405a10:
    if (ctx->pc == 0x405A10u) {
        ctx->pc = 0x405A10u;
            // 0x405a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405A14u;
        goto label_405a14;
    }
    ctx->pc = 0x405A0Cu;
    {
        const bool branch_taken_0x405a0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x405A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405A0Cu;
            // 0x405a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a0c) {
            ctx->pc = 0x405A24u;
            goto label_405a24;
        }
    }
    ctx->pc = 0x405A14u;
label_405a14:
    // 0x405a14: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x405a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_405a18:
    // 0x405a18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_405a1c:
    if (ctx->pc == 0x405A1Cu) {
        ctx->pc = 0x405A20u;
        goto label_405a20;
    }
    ctx->pc = 0x405A18u;
    {
        const bool branch_taken_0x405a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405a18) {
            ctx->pc = 0x405A24u;
            goto label_405a24;
        }
    }
    ctx->pc = 0x405A20u;
label_405a20:
    // 0x405a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x405a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_405a24:
    // 0x405a24: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_405a28:
    if (ctx->pc == 0x405A28u) {
        ctx->pc = 0x405A2Cu;
        goto label_405a2c;
    }
    ctx->pc = 0x405A24u;
    {
        const bool branch_taken_0x405a24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x405a24) {
            ctx->pc = 0x405A40u;
            goto label_405a40;
        }
    }
    ctx->pc = 0x405A2Cu;
label_405a2c:
    // 0x405a2c: 0xc075eb4  jal         func_1D7AD0
label_405a30:
    if (ctx->pc == 0x405A30u) {
        ctx->pc = 0x405A34u;
        goto label_405a34;
    }
    ctx->pc = 0x405A2Cu;
    SET_GPR_U32(ctx, 31, 0x405A34u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405A34u; }
        if (ctx->pc != 0x405A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405A34u; }
        if (ctx->pc != 0x405A34u) { return; }
    }
    ctx->pc = 0x405A34u;
label_405a34:
    // 0x405a34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_405a38:
    if (ctx->pc == 0x405A38u) {
        ctx->pc = 0x405A3Cu;
        goto label_405a3c;
    }
    ctx->pc = 0x405A34u;
    {
        const bool branch_taken_0x405a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405a34) {
            ctx->pc = 0x405A40u;
            goto label_405a40;
        }
    }
    ctx->pc = 0x405A3Cu;
label_405a3c:
    // 0x405a3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x405a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405a40:
    // 0x405a40: 0x56600027  bnel        $s3, $zero, . + 4 + (0x27 << 2)
label_405a44:
    if (ctx->pc == 0x405A44u) {
        ctx->pc = 0x405A44u;
            // 0x405a44: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x405A48u;
        goto label_405a48;
    }
    ctx->pc = 0x405A40u;
    {
        const bool branch_taken_0x405a40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x405a40) {
            ctx->pc = 0x405A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405A40u;
            // 0x405a44: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405AE0u;
            goto label_405ae0;
        }
    }
    ctx->pc = 0x405A48u;
label_405a48:
    // 0x405a48: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x405a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_405a4c:
    // 0x405a4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x405a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_405a50:
    // 0x405a50: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x405a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_405a54:
    // 0x405a54: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_405a58:
    if (ctx->pc == 0x405A58u) {
        ctx->pc = 0x405A5Cu;
        goto label_405a5c;
    }
    ctx->pc = 0x405A54u;
    {
        const bool branch_taken_0x405a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x405a54) {
            ctx->pc = 0x405ADCu;
            goto label_405adc;
        }
    }
    ctx->pc = 0x405A5Cu;
label_405a5c:
    // 0x405a5c: 0xc0756f4  jal         func_1D5BD0
label_405a60:
    if (ctx->pc == 0x405A60u) {
        ctx->pc = 0x405A60u;
            // 0x405a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405A64u;
        goto label_405a64;
    }
    ctx->pc = 0x405A5Cu;
    SET_GPR_U32(ctx, 31, 0x405A64u);
    ctx->pc = 0x405A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405A5Cu;
            // 0x405a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BD0u;
    if (runtime->hasFunction(0x1D5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405A64u; }
        if (ctx->pc != 0x405A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5BD0_0x1d5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405A64u; }
        if (ctx->pc != 0x405A64u) { return; }
    }
    ctx->pc = 0x405A64u;
label_405a64:
    // 0x405a64: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x405a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_405a68:
    // 0x405a68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x405a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405a6c:
    // 0x405a6c: 0x0  nop
    ctx->pc = 0x405a6cu;
    // NOP
label_405a70:
    // 0x405a70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x405a70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405a74:
    // 0x405a74: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_405a78:
    if (ctx->pc == 0x405A78u) {
        ctx->pc = 0x405A78u;
            // 0x405a78: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->pc = 0x405A7Cu;
        goto label_405a7c;
    }
    ctx->pc = 0x405A74u;
    {
        const bool branch_taken_0x405a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x405a74) {
            ctx->pc = 0x405A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405A74u;
            // 0x405a78: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405AD4u;
            goto label_405ad4;
        }
    }
    ctx->pc = 0x405A7Cu;
label_405a7c:
    // 0x405a7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x405a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_405a80:
    // 0x405a80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x405a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405a84:
    // 0x405a84: 0x0  nop
    ctx->pc = 0x405a84u;
    // NOP
label_405a88:
    // 0x405a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x405a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405a8c:
    // 0x405a8c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_405a90:
    if (ctx->pc == 0x405A90u) {
        ctx->pc = 0x405A90u;
            // 0x405a90: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x405A94u;
        goto label_405a94;
    }
    ctx->pc = 0x405A8Cu;
    {
        const bool branch_taken_0x405a8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x405a8c) {
            ctx->pc = 0x405A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405A8Cu;
            // 0x405a90: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x405AA4u;
            goto label_405aa4;
        }
    }
    ctx->pc = 0x405A94u;
label_405a94:
    // 0x405a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405a98:
    // 0x405a98: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x405a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_405a9c:
    // 0x405a9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_405aa0:
    if (ctx->pc == 0x405AA0u) {
        ctx->pc = 0x405AA0u;
            // 0x405aa0: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->pc = 0x405AA4u;
        goto label_405aa4;
    }
    ctx->pc = 0x405A9Cu;
    {
        const bool branch_taken_0x405a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405A9Cu;
            // 0x405aa0: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a9c) {
            ctx->pc = 0x405ABCu;
            goto label_405abc;
        }
    }
    ctx->pc = 0x405AA4u;
label_405aa4:
    // 0x405aa4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x405aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_405aa8:
    // 0x405aa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405aac:
    // 0x405aac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x405aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_405ab0:
    // 0x405ab0: 0x0  nop
    ctx->pc = 0x405ab0u;
    // NOP
label_405ab4:
    // 0x405ab4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x405ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_405ab8:
    // 0x405ab8: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x405ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_405abc:
    // 0x405abc: 0xc10c990  jal         func_432640
label_405ac0:
    if (ctx->pc == 0x405AC0u) {
        ctx->pc = 0x405AC4u;
        goto label_405ac4;
    }
    ctx->pc = 0x405ABCu;
    SET_GPR_U32(ctx, 31, 0x405AC4u);
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405AC4u; }
        if (ctx->pc != 0x405AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405AC4u; }
        if (ctx->pc != 0x405AC4u) { return; }
    }
    ctx->pc = 0x405AC4u;
label_405ac4:
    // 0x405ac4: 0xc10c9d8  jal         func_432760
label_405ac8:
    if (ctx->pc == 0x405AC8u) {
        ctx->pc = 0x405AC8u;
            // 0x405ac8: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->pc = 0x405ACCu;
        goto label_405acc;
    }
    ctx->pc = 0x405AC4u;
    SET_GPR_U32(ctx, 31, 0x405ACCu);
    ctx->pc = 0x405AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405AC4u;
            // 0x405ac8: 0x8e440150  lw          $a0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405ACCu; }
        if (ctx->pc != 0x405ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405ACCu; }
        if (ctx->pc != 0x405ACCu) { return; }
    }
    ctx->pc = 0x405ACCu;
label_405acc:
    // 0x405acc: 0x10000003  b           . + 4 + (0x3 << 2)
label_405ad0:
    if (ctx->pc == 0x405AD0u) {
        ctx->pc = 0x405AD4u;
        goto label_405ad4;
    }
    ctx->pc = 0x405ACCu;
    {
        const bool branch_taken_0x405acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x405acc) {
            ctx->pc = 0x405ADCu;
            goto label_405adc;
        }
    }
    ctx->pc = 0x405AD4u;
label_405ad4:
    // 0x405ad4: 0xc10c9b4  jal         func_4326D0
label_405ad8:
    if (ctx->pc == 0x405AD8u) {
        ctx->pc = 0x405ADCu;
        goto label_405adc;
    }
    ctx->pc = 0x405AD4u;
    SET_GPR_U32(ctx, 31, 0x405ADCu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405ADCu; }
        if (ctx->pc != 0x405ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405ADCu; }
        if (ctx->pc != 0x405ADCu) { return; }
    }
    ctx->pc = 0x405ADCu;
label_405adc:
    // 0x405adc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x405adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_405ae0:
    // 0x405ae0: 0x5603003e  bnel        $s0, $v1, . + 4 + (0x3E << 2)
label_405ae4:
    if (ctx->pc == 0x405AE4u) {
        ctx->pc = 0x405AE4u;
            // 0x405ae4: 0x822411ad  lb          $a0, 0x11AD($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
        ctx->pc = 0x405AE8u;
        goto label_405ae8;
    }
    ctx->pc = 0x405AE0u;
    {
        const bool branch_taken_0x405ae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x405ae0) {
            ctx->pc = 0x405AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405AE0u;
            // 0x405ae4: 0x822411ad  lb          $a0, 0x11AD($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405BDCu;
            goto label_405bdc;
        }
    }
    ctx->pc = 0x405AE8u;
label_405ae8:
    // 0x405ae8: 0x822711ad  lb          $a3, 0x11AD($s1)
    ctx->pc = 0x405ae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
label_405aec:
    // 0x405aec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x405aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_405af0:
    // 0x405af0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x405af0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_405af4:
    // 0x405af4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x405af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_405af8:
    // 0x405af8: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x405af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_405afc:
    // 0x405afc: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x405afcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_405b00:
    // 0x405b00: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x405b00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_405b04:
    // 0x405b04: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x405b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_405b08:
    // 0x405b08: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x405b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_405b0c:
    // 0x405b0c: 0x264600e0  addiu       $a2, $s2, 0xE0
    ctx->pc = 0x405b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_405b10:
    // 0x405b10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x405b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_405b14:
    // 0x405b14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x405b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405b18:
    // 0x405b18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x405b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405b1c:
    // 0x405b1c: 0xc0bb404  jal         func_2ED010
label_405b20:
    if (ctx->pc == 0x405B20u) {
        ctx->pc = 0x405B20u;
            // 0x405b20: 0x260702c0  addiu       $a3, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x405B24u;
        goto label_405b24;
    }
    ctx->pc = 0x405B1Cu;
    SET_GPR_U32(ctx, 31, 0x405B24u);
    ctx->pc = 0x405B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405B1Cu;
            // 0x405b20: 0x260702c0  addiu       $a3, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405B24u; }
        if (ctx->pc != 0x405B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405B24u; }
        if (ctx->pc != 0x405B24u) { return; }
    }
    ctx->pc = 0x405B24u;
label_405b24:
    // 0x405b24: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x405b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_405b28:
    // 0x405b28: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x405b28u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_405b2c:
    // 0x405b2c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_405b30:
    if (ctx->pc == 0x405B30u) {
        ctx->pc = 0x405B30u;
            // 0x405b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405B34u;
        goto label_405b34;
    }
    ctx->pc = 0x405B2Cu;
    {
        const bool branch_taken_0x405b2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x405B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405B2Cu;
            // 0x405b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b2c) {
            ctx->pc = 0x405B44u;
            goto label_405b44;
        }
    }
    ctx->pc = 0x405B34u;
label_405b34:
    // 0x405b34: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x405b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_405b38:
    // 0x405b38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_405b3c:
    if (ctx->pc == 0x405B3Cu) {
        ctx->pc = 0x405B40u;
        goto label_405b40;
    }
    ctx->pc = 0x405B38u;
    {
        const bool branch_taken_0x405b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405b38) {
            ctx->pc = 0x405B44u;
            goto label_405b44;
        }
    }
    ctx->pc = 0x405B40u;
label_405b40:
    // 0x405b40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x405b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_405b44:
    // 0x405b44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_405b48:
    if (ctx->pc == 0x405B48u) {
        ctx->pc = 0x405B4Cu;
        goto label_405b4c;
    }
    ctx->pc = 0x405B44u;
    {
        const bool branch_taken_0x405b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x405b44) {
            ctx->pc = 0x405B60u;
            goto label_405b60;
        }
    }
    ctx->pc = 0x405B4Cu;
label_405b4c:
    // 0x405b4c: 0xc075eb4  jal         func_1D7AD0
label_405b50:
    if (ctx->pc == 0x405B50u) {
        ctx->pc = 0x405B50u;
            // 0x405b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405B54u;
        goto label_405b54;
    }
    ctx->pc = 0x405B4Cu;
    SET_GPR_U32(ctx, 31, 0x405B54u);
    ctx->pc = 0x405B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405B4Cu;
            // 0x405b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405B54u; }
        if (ctx->pc != 0x405B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405B54u; }
        if (ctx->pc != 0x405B54u) { return; }
    }
    ctx->pc = 0x405B54u;
label_405b54:
    // 0x405b54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_405b58:
    if (ctx->pc == 0x405B58u) {
        ctx->pc = 0x405B5Cu;
        goto label_405b5c;
    }
    ctx->pc = 0x405B54u;
    {
        const bool branch_taken_0x405b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405b54) {
            ctx->pc = 0x405B60u;
            goto label_405b60;
        }
    }
    ctx->pc = 0x405B5Cu;
label_405b5c:
    // 0x405b5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x405b5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405b60:
    // 0x405b60: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_405b64:
    if (ctx->pc == 0x405B64u) {
        ctx->pc = 0x405B64u;
            // 0x405b64: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->pc = 0x405B68u;
        goto label_405b68;
    }
    ctx->pc = 0x405B60u;
    {
        const bool branch_taken_0x405b60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x405b60) {
            ctx->pc = 0x405B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405B60u;
            // 0x405b64: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405BD0u;
            goto label_405bd0;
        }
    }
    ctx->pc = 0x405B68u;
label_405b68:
    // 0x405b68: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x405b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_405b6c:
    // 0x405b6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x405b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_405b70:
    // 0x405b70: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_405b74:
    if (ctx->pc == 0x405B74u) {
        ctx->pc = 0x405B78u;
        goto label_405b78;
    }
    ctx->pc = 0x405B70u;
    {
        const bool branch_taken_0x405b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x405b70) {
            ctx->pc = 0x405BCCu;
            goto label_405bcc;
        }
    }
    ctx->pc = 0x405B78u;
label_405b78:
    // 0x405b78: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x405b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_405b7c:
    // 0x405b7c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x405b7cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_405b80:
    // 0x405b80: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_405b84:
    if (ctx->pc == 0x405B84u) {
        ctx->pc = 0x405B84u;
            // 0x405b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405B88u;
        goto label_405b88;
    }
    ctx->pc = 0x405B80u;
    {
        const bool branch_taken_0x405b80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x405B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405B80u;
            // 0x405b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b80) {
            ctx->pc = 0x405B98u;
            goto label_405b98;
        }
    }
    ctx->pc = 0x405B88u;
label_405b88:
    // 0x405b88: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x405b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_405b8c:
    // 0x405b8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_405b90:
    if (ctx->pc == 0x405B90u) {
        ctx->pc = 0x405B94u;
        goto label_405b94;
    }
    ctx->pc = 0x405B8Cu;
    {
        const bool branch_taken_0x405b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405b8c) {
            ctx->pc = 0x405B98u;
            goto label_405b98;
        }
    }
    ctx->pc = 0x405B94u;
label_405b94:
    // 0x405b94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x405b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_405b98:
    // 0x405b98: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_405b9c:
    if (ctx->pc == 0x405B9Cu) {
        ctx->pc = 0x405BA0u;
        goto label_405ba0;
    }
    ctx->pc = 0x405B98u;
    {
        const bool branch_taken_0x405b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x405b98) {
            ctx->pc = 0x405BB4u;
            goto label_405bb4;
        }
    }
    ctx->pc = 0x405BA0u;
label_405ba0:
    // 0x405ba0: 0xc075eb4  jal         func_1D7AD0
label_405ba4:
    if (ctx->pc == 0x405BA4u) {
        ctx->pc = 0x405BA4u;
            // 0x405ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405BA8u;
        goto label_405ba8;
    }
    ctx->pc = 0x405BA0u;
    SET_GPR_U32(ctx, 31, 0x405BA8u);
    ctx->pc = 0x405BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405BA0u;
            // 0x405ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405BA8u; }
        if (ctx->pc != 0x405BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405BA8u; }
        if (ctx->pc != 0x405BA8u) { return; }
    }
    ctx->pc = 0x405BA8u;
label_405ba8:
    // 0x405ba8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_405bac:
    if (ctx->pc == 0x405BACu) {
        ctx->pc = 0x405BB0u;
        goto label_405bb0;
    }
    ctx->pc = 0x405BA8u;
    {
        const bool branch_taken_0x405ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405ba8) {
            ctx->pc = 0x405BB4u;
            goto label_405bb4;
        }
    }
    ctx->pc = 0x405BB0u;
label_405bb0:
    // 0x405bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x405bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405bb4:
    // 0x405bb4: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_405bb8:
    if (ctx->pc == 0x405BB8u) {
        ctx->pc = 0x405BBCu;
        goto label_405bbc;
    }
    ctx->pc = 0x405BB4u;
    {
        const bool branch_taken_0x405bb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x405bb4) {
            ctx->pc = 0x405BCCu;
            goto label_405bcc;
        }
    }
    ctx->pc = 0x405BBCu;
label_405bbc:
    // 0x405bbc: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x405bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_405bc0:
    // 0x405bc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x405bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_405bc4:
    // 0x405bc4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_405bc8:
    if (ctx->pc == 0x405BC8u) {
        ctx->pc = 0x405BCCu;
        goto label_405bcc;
    }
    ctx->pc = 0x405BC4u;
    {
        const bool branch_taken_0x405bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x405bc4) {
            ctx->pc = 0x405BD8u;
            goto label_405bd8;
        }
    }
    ctx->pc = 0x405BCCu;
label_405bcc:
    // 0x405bcc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x405bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_405bd0:
    // 0x405bd0: 0xc073234  jal         func_1CC8D0
label_405bd4:
    if (ctx->pc == 0x405BD4u) {
        ctx->pc = 0x405BD4u;
            // 0x405bd4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x405BD8u;
        goto label_405bd8;
    }
    ctx->pc = 0x405BD0u;
    SET_GPR_U32(ctx, 31, 0x405BD8u);
    ctx->pc = 0x405BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405BD0u;
            // 0x405bd4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405BD8u; }
        if (ctx->pc != 0x405BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405BD8u; }
        if (ctx->pc != 0x405BD8u) { return; }
    }
    ctx->pc = 0x405BD8u;
label_405bd8:
    // 0x405bd8: 0x822411ad  lb          $a0, 0x11AD($s1)
    ctx->pc = 0x405bd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
label_405bdc:
    // 0x405bdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x405bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_405be0:
    // 0x405be0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_405be4:
    if (ctx->pc == 0x405BE4u) {
        ctx->pc = 0x405BE8u;
        goto label_405be8;
    }
    ctx->pc = 0x405BE0u;
    {
        const bool branch_taken_0x405be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x405be0) {
            ctx->pc = 0x405C3Cu;
            goto label_405c3c;
        }
    }
    ctx->pc = 0x405BE8u;
label_405be8:
    // 0x405be8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x405be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_405bec:
    // 0x405bec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x405becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_405bf0:
    // 0x405bf0: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x405bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_405bf4:
    // 0x405bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x405bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_405bf8:
    // 0x405bf8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x405bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_405bfc:
    // 0x405bfc: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x405bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_405c00:
    // 0x405c00: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x405c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_405c04:
    // 0x405c04: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x405c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_405c08:
    // 0x405c08: 0x320f809  jalr        $t9
label_405c0c:
    if (ctx->pc == 0x405C0Cu) {
        ctx->pc = 0x405C0Cu;
            // 0x405c0c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x405C10u;
        goto label_405c10;
    }
    ctx->pc = 0x405C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405C10u);
        ctx->pc = 0x405C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405C08u;
            // 0x405c0c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405C10u; }
            if (ctx->pc != 0x405C10u) { return; }
        }
        }
    }
    ctx->pc = 0x405C10u;
label_405c10:
    // 0x405c10: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x405c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_405c14:
    // 0x405c14: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x405c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_405c18:
    // 0x405c18: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x405c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_405c1c:
    // 0x405c1c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x405c1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_405c20:
    // 0x405c20: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x405c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_405c24:
    // 0x405c24: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x405c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_405c28:
    // 0x405c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x405c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_405c2c:
    // 0x405c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x405c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_405c30:
    // 0x405c30: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x405c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_405c34:
    // 0x405c34: 0xc0517b0  jal         func_145EC0
label_405c38:
    if (ctx->pc == 0x405C38u) {
        ctx->pc = 0x405C38u;
            // 0x405c38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405C3Cu;
        goto label_405c3c;
    }
    ctx->pc = 0x405C34u;
    SET_GPR_U32(ctx, 31, 0x405C3Cu);
    ctx->pc = 0x405C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405C34u;
            // 0x405c38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405C3Cu; }
        if (ctx->pc != 0x405C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405C3Cu; }
        if (ctx->pc != 0x405C3Cu) { return; }
    }
    ctx->pc = 0x405C3Cu;
label_405c3c:
    // 0x405c3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x405c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_405c40:
    // 0x405c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x405c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_405c44:
    // 0x405c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x405c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405c48:
    // 0x405c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x405c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405c4c:
    // 0x405c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405c50:
    // 0x405c50: 0x3e00008  jr          $ra
label_405c54:
    if (ctx->pc == 0x405C54u) {
        ctx->pc = 0x405C54u;
            // 0x405c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x405C58u;
        goto label_405c58;
    }
    ctx->pc = 0x405C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405C50u;
            // 0x405c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405C58u;
label_405c58:
    // 0x405c58: 0x0  nop
    ctx->pc = 0x405c58u;
    // NOP
label_405c5c:
    // 0x405c5c: 0x0  nop
    ctx->pc = 0x405c5cu;
    // NOP
label_405c60:
    // 0x405c60: 0x3e00008  jr          $ra
label_405c64:
    if (ctx->pc == 0x405C64u) {
        ctx->pc = 0x405C68u;
        goto label_405c68;
    }
    ctx->pc = 0x405C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405C68u;
label_405c68:
    // 0x405c68: 0x0  nop
    ctx->pc = 0x405c68u;
    // NOP
label_405c6c:
    // 0x405c6c: 0x0  nop
    ctx->pc = 0x405c6cu;
    // NOP
label_405c70:
    // 0x405c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x405c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_405c74:
    // 0x405c74: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x405c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_405c78:
    // 0x405c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x405c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_405c7c:
    // 0x405c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x405c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_405c80:
    // 0x405c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x405c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_405c84:
    // 0x405c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x405c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_405c88:
    // 0x405c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x405c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405c8c:
    // 0x405c8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x405c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_405c90:
    // 0x405c90: 0xc12ca3c  jal         func_4B28F0
label_405c94:
    if (ctx->pc == 0x405C94u) {
        ctx->pc = 0x405C94u;
            // 0x405c94: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x405C98u;
        goto label_405c98;
    }
    ctx->pc = 0x405C90u;
    SET_GPR_U32(ctx, 31, 0x405C98u);
    ctx->pc = 0x405C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405C90u;
            // 0x405c94: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405C98u; }
        if (ctx->pc != 0x405C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405C98u; }
        if (ctx->pc != 0x405C98u) { return; }
    }
    ctx->pc = 0x405C98u;
label_405c98:
    // 0x405c98: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x405c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_405c9c:
    // 0x405c9c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x405c9cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_405ca0:
    // 0x405ca0: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x405ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_405ca4:
    // 0x405ca4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_405ca8:
    if (ctx->pc == 0x405CA8u) {
        ctx->pc = 0x405CA8u;
            // 0x405ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405CACu;
        goto label_405cac;
    }
    ctx->pc = 0x405CA4u;
    {
        const bool branch_taken_0x405ca4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x405CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405CA4u;
            // 0x405ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ca4) {
            ctx->pc = 0x405CBCu;
            goto label_405cbc;
        }
    }
    ctx->pc = 0x405CACu;
label_405cac:
    // 0x405cac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x405cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_405cb0:
    // 0x405cb0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_405cb4:
    if (ctx->pc == 0x405CB4u) {
        ctx->pc = 0x405CB8u;
        goto label_405cb8;
    }
    ctx->pc = 0x405CB0u;
    {
        const bool branch_taken_0x405cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x405cb0) {
            ctx->pc = 0x405CBCu;
            goto label_405cbc;
        }
    }
    ctx->pc = 0x405CB8u;
label_405cb8:
    // 0x405cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405cbc:
    // 0x405cbc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_405cc0:
    if (ctx->pc == 0x405CC0u) {
        ctx->pc = 0x405CC4u;
        goto label_405cc4;
    }
    ctx->pc = 0x405CBCu;
    {
        const bool branch_taken_0x405cbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x405cbc) {
            ctx->pc = 0x405CD8u;
            goto label_405cd8;
        }
    }
    ctx->pc = 0x405CC4u;
label_405cc4:
    // 0x405cc4: 0xc075eb4  jal         func_1D7AD0
label_405cc8:
    if (ctx->pc == 0x405CC8u) {
        ctx->pc = 0x405CC8u;
            // 0x405cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405CCCu;
        goto label_405ccc;
    }
    ctx->pc = 0x405CC4u;
    SET_GPR_U32(ctx, 31, 0x405CCCu);
    ctx->pc = 0x405CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405CC4u;
            // 0x405cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405CCCu; }
        if (ctx->pc != 0x405CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405CCCu; }
        if (ctx->pc != 0x405CCCu) { return; }
    }
    ctx->pc = 0x405CCCu;
label_405ccc:
    // 0x405ccc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_405cd0:
    if (ctx->pc == 0x405CD0u) {
        ctx->pc = 0x405CD4u;
        goto label_405cd4;
    }
    ctx->pc = 0x405CCCu;
    {
        const bool branch_taken_0x405ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405ccc) {
            ctx->pc = 0x405CD8u;
            goto label_405cd8;
        }
    }
    ctx->pc = 0x405CD4u;
label_405cd4:
    // 0x405cd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x405cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405cd8:
    // 0x405cd8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_405cdc:
    if (ctx->pc == 0x405CDCu) {
        ctx->pc = 0x405CDCu;
            // 0x405cdc: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->pc = 0x405CE0u;
        goto label_405ce0;
    }
    ctx->pc = 0x405CD8u;
    {
        const bool branch_taken_0x405cd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x405cd8) {
            ctx->pc = 0x405CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405CD8u;
            // 0x405cdc: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405CF4u;
            goto label_405cf4;
        }
    }
    ctx->pc = 0x405CE0u;
label_405ce0:
    // 0x405ce0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x405ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_405ce4:
    // 0x405ce4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x405ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_405ce8:
    // 0x405ce8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_405cec:
    if (ctx->pc == 0x405CECu) {
        ctx->pc = 0x405CECu;
            // 0x405cec: 0x8e230120  lw          $v1, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->pc = 0x405CF0u;
        goto label_405cf0;
    }
    ctx->pc = 0x405CE8u;
    {
        const bool branch_taken_0x405ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x405ce8) {
            ctx->pc = 0x405CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405CE8u;
            // 0x405cec: 0x8e230120  lw          $v1, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405D0Cu;
            goto label_405d0c;
        }
    }
    ctx->pc = 0x405CF0u;
label_405cf0:
    // 0x405cf0: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x405cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_405cf4:
    // 0x405cf4: 0xc10c9d8  jal         func_432760
label_405cf8:
    if (ctx->pc == 0x405CF8u) {
        ctx->pc = 0x405CFCu;
        goto label_405cfc;
    }
    ctx->pc = 0x405CF4u;
    SET_GPR_U32(ctx, 31, 0x405CFCu);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405CFCu; }
        if (ctx->pc != 0x405CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405CFCu; }
        if (ctx->pc != 0x405CFCu) { return; }
    }
    ctx->pc = 0x405CFCu;
label_405cfc:
    // 0x405cfc: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x405cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_405d00:
    // 0x405d00: 0xc10c990  jal         func_432640
label_405d04:
    if (ctx->pc == 0x405D04u) {
        ctx->pc = 0x405D04u;
            // 0x405d04: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x405D08u;
        goto label_405d08;
    }
    ctx->pc = 0x405D00u;
    SET_GPR_U32(ctx, 31, 0x405D08u);
    ctx->pc = 0x405D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405D00u;
            // 0x405d04: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D08u; }
        if (ctx->pc != 0x405D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D08u; }
        if (ctx->pc != 0x405D08u) { return; }
    }
    ctx->pc = 0x405D08u;
label_405d08:
    // 0x405d08: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x405d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_405d0c:
    // 0x405d0c: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_405d10:
    if (ctx->pc == 0x405D10u) {
        ctx->pc = 0x405D10u;
            // 0x405d10: 0x8e230028  lw          $v1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x405D14u;
        goto label_405d14;
    }
    ctx->pc = 0x405D0Cu;
    {
        const bool branch_taken_0x405d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x405d0c) {
            ctx->pc = 0x405D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405D0Cu;
            // 0x405d10: 0x8e230028  lw          $v1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405D68u;
            goto label_405d68;
        }
    }
    ctx->pc = 0x405D14u;
label_405d14:
    // 0x405d14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x405d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_405d18:
    // 0x405d18: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x405d18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_405d1c:
    // 0x405d1c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x405d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_405d20:
    // 0x405d20: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x405d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_405d24:
    // 0x405d24: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x405d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_405d28:
    // 0x405d28: 0x26070f00  addiu       $a3, $s0, 0xF00
    ctx->pc = 0x405d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
label_405d2c:
    // 0x405d2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x405d2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405d30:
    // 0x405d30: 0xc0bb0e8  jal         func_2EC3A0
label_405d34:
    if (ctx->pc == 0x405D34u) {
        ctx->pc = 0x405D34u;
            // 0x405d34: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x405D38u;
        goto label_405d38;
    }
    ctx->pc = 0x405D30u;
    SET_GPR_U32(ctx, 31, 0x405D38u);
    ctx->pc = 0x405D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405D30u;
            // 0x405d34: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D38u; }
        if (ctx->pc != 0x405D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D38u; }
        if (ctx->pc != 0x405D38u) { return; }
    }
    ctx->pc = 0x405D38u;
label_405d38:
    // 0x405d38: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x405d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_405d3c:
    // 0x405d3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x405d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_405d40:
    // 0x405d40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x405d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_405d44:
    // 0x405d44: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x405d44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_405d48:
    // 0x405d48: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x405d48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_405d4c:
    // 0x405d4c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x405d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_405d50:
    // 0x405d50: 0x26070ef0  addiu       $a3, $s0, 0xEF0
    ctx->pc = 0x405d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
label_405d54:
    // 0x405d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x405d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405d58:
    // 0x405d58: 0xc0bb0e8  jal         func_2EC3A0
label_405d5c:
    if (ctx->pc == 0x405D5Cu) {
        ctx->pc = 0x405D5Cu;
            // 0x405d5c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x405D60u;
        goto label_405d60;
    }
    ctx->pc = 0x405D58u;
    SET_GPR_U32(ctx, 31, 0x405D60u);
    ctx->pc = 0x405D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405D58u;
            // 0x405d5c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D60u; }
        if (ctx->pc != 0x405D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D60u; }
        if (ctx->pc != 0x405D60u) { return; }
    }
    ctx->pc = 0x405D60u;
label_405d60:
    // 0x405d60: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x405d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_405d64:
    // 0x405d64: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x405d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_405d68:
    // 0x405d68: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_405d6c:
    if (ctx->pc == 0x405D6Cu) {
        ctx->pc = 0x405D6Cu;
            // 0x405d6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x405D70u;
        goto label_405d70;
    }
    ctx->pc = 0x405D68u;
    {
        const bool branch_taken_0x405d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x405d68) {
            ctx->pc = 0x405D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405D68u;
            // 0x405d6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x405DBCu;
            goto label_405dbc;
        }
    }
    ctx->pc = 0x405D70u;
label_405d70:
    // 0x405d70: 0xc040180  jal         func_100600
label_405d74:
    if (ctx->pc == 0x405D74u) {
        ctx->pc = 0x405D74u;
            // 0x405d74: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x405D78u;
        goto label_405d78;
    }
    ctx->pc = 0x405D70u;
    SET_GPR_U32(ctx, 31, 0x405D78u);
    ctx->pc = 0x405D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405D70u;
            // 0x405d74: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D78u; }
        if (ctx->pc != 0x405D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D78u; }
        if (ctx->pc != 0x405D78u) { return; }
    }
    ctx->pc = 0x405D78u;
label_405d78:
    // 0x405d78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_405d7c:
    if (ctx->pc == 0x405D7Cu) {
        ctx->pc = 0x405D7Cu;
            // 0x405d7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405D80u;
        goto label_405d80;
    }
    ctx->pc = 0x405D78u;
    {
        const bool branch_taken_0x405d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405D78u;
            // 0x405d7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d78) {
            ctx->pc = 0x405DB4u;
            goto label_405db4;
        }
    }
    ctx->pc = 0x405D80u;
label_405d80:
    // 0x405d80: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x405d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_405d84:
    // 0x405d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405d88:
    // 0x405d88: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x405d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_405d8c:
    // 0x405d8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x405d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405d90:
    // 0x405d90: 0xc10ca68  jal         func_4329A0
label_405d94:
    if (ctx->pc == 0x405D94u) {
        ctx->pc = 0x405D94u;
            // 0x405d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405D98u;
        goto label_405d98;
    }
    ctx->pc = 0x405D90u;
    SET_GPR_U32(ctx, 31, 0x405D98u);
    ctx->pc = 0x405D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405D90u;
            // 0x405d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D98u; }
        if (ctx->pc != 0x405D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405D98u; }
        if (ctx->pc != 0x405D98u) { return; }
    }
    ctx->pc = 0x405D98u;
label_405d98:
    // 0x405d98: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x405d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_405d9c:
    // 0x405d9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x405d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_405da0:
    // 0x405da0: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x405da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_405da4:
    // 0x405da4: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x405da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_405da8:
    // 0x405da8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x405da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_405dac:
    // 0x405dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x405dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_405db0:
    // 0x405db0: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x405db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_405db4:
    // 0x405db4: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x405db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_405db8:
    // 0x405db8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x405db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_405dbc:
    // 0x405dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x405dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405dc0:
    // 0x405dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x405dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405dc4:
    // 0x405dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x405dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405dc8:
    // 0x405dc8: 0x3e00008  jr          $ra
label_405dcc:
    if (ctx->pc == 0x405DCCu) {
        ctx->pc = 0x405DCCu;
            // 0x405dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x405DD0u;
        goto label_405dd0;
    }
    ctx->pc = 0x405DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405DC8u;
            // 0x405dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x405DD0u;
label_405dd0:
    // 0x405dd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x405dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_405dd4:
    // 0x405dd4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x405dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_405dd8:
    // 0x405dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x405dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_405ddc:
    // 0x405ddc: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x405ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
label_405de0:
    // 0x405de0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x405de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_405de4:
    // 0x405de4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x405de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_405de8:
    // 0x405de8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x405de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405dec:
    // 0x405dec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x405decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_405df0:
    // 0x405df0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x405df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_405df4:
    // 0x405df4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x405df4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_405df8:
    // 0x405df8: 0xc075728  jal         func_1D5CA0
label_405dfc:
    if (ctx->pc == 0x405DFCu) {
        ctx->pc = 0x405DFCu;
            // 0x405dfc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x405E00u;
        goto label_405e00;
    }
    ctx->pc = 0x405DF8u;
    SET_GPR_U32(ctx, 31, 0x405E00u);
    ctx->pc = 0x405DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405DF8u;
            // 0x405dfc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405E00u; }
        if (ctx->pc != 0x405E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405E00u; }
        if (ctx->pc != 0x405E00u) { return; }
    }
    ctx->pc = 0x405E00u;
label_405e00:
    // 0x405e00: 0x544000a6  bnel        $v0, $zero, . + 4 + (0xA6 << 2)
label_405e04:
    if (ctx->pc == 0x405E04u) {
        ctx->pc = 0x405E04u;
            // 0x405e04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x405E08u;
        goto label_405e08;
    }
    ctx->pc = 0x405E00u;
    {
        const bool branch_taken_0x405e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405e00) {
            ctx->pc = 0x405E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x405E00u;
            // 0x405e04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40609Cu;
            goto label_40609c;
        }
    }
    ctx->pc = 0x405E08u;
label_405e08:
    // 0x405e08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x405e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_405e0c:
    // 0x405e0c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x405e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_405e10:
    // 0x405e10: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x405e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_405e14:
    // 0x405e14: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x405e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_405e18:
    // 0x405e18: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x405e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_405e1c:
    // 0x405e1c: 0xc6340dbc  lwc1        $f20, 0xDBC($s1)
    ctx->pc = 0x405e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_405e20:
    // 0x405e20: 0xc4550018  lwc1        $f21, 0x18($v0)
    ctx->pc = 0x405e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_405e24:
    // 0x405e24: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x405e24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_405e28:
    // 0x405e28: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x405e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_405e2c:
    // 0x405e2c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x405e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_405e30:
    // 0x405e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x405e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_405e34:
    // 0x405e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x405e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_405e38:
    // 0x405e38: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x405e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_405e3c:
    // 0x405e3c: 0x320f809  jalr        $t9
label_405e40:
    if (ctx->pc == 0x405E40u) {
        ctx->pc = 0x405E40u;
            // 0x405e40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405E44u;
        goto label_405e44;
    }
    ctx->pc = 0x405E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405E44u);
        ctx->pc = 0x405E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405E3Cu;
            // 0x405e40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405E44u; }
            if (ctx->pc != 0x405E44u) { return; }
        }
        }
    }
    ctx->pc = 0x405E44u;
label_405e44:
    // 0x405e44: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x405e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_405e48:
    // 0x405e48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x405e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_405e4c:
    // 0x405e4c: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x405e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405e50:
    // 0x405e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x405e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405e54:
    // 0x405e54: 0x0  nop
    ctx->pc = 0x405e54u;
    // NOP
label_405e58:
    // 0x405e58: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x405e58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_405e5c:
    // 0x405e5c: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x405e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_405e60:
    // 0x405e60: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x405e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_405e64:
    // 0x405e64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x405e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_405e68:
    // 0x405e68: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x405e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_405e6c:
    // 0x405e6c: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x405e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_405e70:
    // 0x405e70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x405e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_405e74:
    // 0x405e74: 0x320f809  jalr        $t9
label_405e78:
    if (ctx->pc == 0x405E78u) {
        ctx->pc = 0x405E78u;
            // 0x405e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405E7Cu;
        goto label_405e7c;
    }
    ctx->pc = 0x405E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405E7Cu);
        ctx->pc = 0x405E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405E74u;
            // 0x405e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405E7Cu; }
            if (ctx->pc != 0x405E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x405E7Cu;
label_405e7c:
    // 0x405e7c: 0x4600a142  mul.s       $f5, $f20, $f0
    ctx->pc = 0x405e7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_405e80:
    // 0x405e80: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x405e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_405e84:
    // 0x405e84: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x405e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_405e88:
    // 0x405e88: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x405e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_405e8c:
    // 0x405e8c: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x405e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_405e90:
    // 0x405e90: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x405e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_405e94:
    // 0x405e94: 0xc6630154  lwc1        $f3, 0x154($s3)
    ctx->pc = 0x405e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_405e98:
    // 0x405e98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x405e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_405e9c:
    // 0x405e9c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x405e9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_405ea0:
    // 0x405ea0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x405ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_405ea4:
    // 0x405ea4: 0x4605209c  madd.s      $f2, $f4, $f5
    ctx->pc = 0x405ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_405ea8:
    // 0x405ea8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x405ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405eac:
    // 0x405eac: 0x0  nop
    ctx->pc = 0x405eacu;
    // NOP
label_405eb0:
    // 0x405eb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x405eb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_405eb4:
    // 0x405eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405eb8:
    // 0x405eb8: 0x0  nop
    ctx->pc = 0x405eb8u;
    // NOP
label_405ebc:
    // 0x405ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x405ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405ec0:
    // 0x405ec0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_405ec4:
    if (ctx->pc == 0x405EC4u) {
        ctx->pc = 0x405EC4u;
            // 0x405ec4: 0xe6620154  swc1        $f2, 0x154($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->pc = 0x405EC8u;
        goto label_405ec8;
    }
    ctx->pc = 0x405EC0u;
    {
        const bool branch_taken_0x405ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x405EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405EC0u;
            // 0x405ec4: 0xe6620154  swc1        $f2, 0x154($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ec0) {
            ctx->pc = 0x405EE0u;
            goto label_405ee0;
        }
    }
    ctx->pc = 0x405EC8u;
label_405ec8:
    // 0x405ec8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x405ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_405ecc:
    // 0x405ecc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x405eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_405ed0:
    // 0x405ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405ed4:
    // 0x405ed4: 0x0  nop
    ctx->pc = 0x405ed4u;
    // NOP
label_405ed8:
    // 0x405ed8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x405ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_405edc:
    // 0x405edc: 0xe6600154  swc1        $f0, 0x154($s3)
    ctx->pc = 0x405edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
label_405ee0:
    // 0x405ee0: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x405ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_405ee4:
    // 0x405ee4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x405ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_405ee8:
    // 0x405ee8: 0x320f809  jalr        $t9
label_405eec:
    if (ctx->pc == 0x405EECu) {
        ctx->pc = 0x405EECu;
            // 0x405eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405EF0u;
        goto label_405ef0;
    }
    ctx->pc = 0x405EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405EF0u);
        ctx->pc = 0x405EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405EE8u;
            // 0x405eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405EF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405EF0u; }
            if (ctx->pc != 0x405EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x405EF0u;
label_405ef0:
    // 0x405ef0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x405ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_405ef4:
    // 0x405ef4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x405ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_405ef8:
    // 0x405ef8: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x405ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_405efc:
    // 0x405efc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x405efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_405f00:
    // 0x405f00: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x405f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_405f04:
    // 0x405f04: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x405f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_405f08:
    // 0x405f08: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x405f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_405f0c:
    // 0x405f0c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x405f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_405f10:
    // 0x405f10: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x405f10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_405f14:
    // 0x405f14: 0x4600251d  msub.s      $f20, $f4, $f0
    ctx->pc = 0x405f14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_405f18:
    // 0x405f18: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x405f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_405f1c:
    // 0x405f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x405f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405f20:
    // 0x405f20: 0xc0477a8  jal         func_11DEA0
label_405f24:
    if (ctx->pc == 0x405F24u) {
        ctx->pc = 0x405F24u;
            // 0x405f24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x405F28u;
        goto label_405f28;
    }
    ctx->pc = 0x405F20u;
    SET_GPR_U32(ctx, 31, 0x405F28u);
    ctx->pc = 0x405F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405F20u;
            // 0x405f24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405F28u; }
        if (ctx->pc != 0x405F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405F28u; }
        if (ctx->pc != 0x405F28u) { return; }
    }
    ctx->pc = 0x405F28u;
label_405f28:
    // 0x405f28: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x405f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
label_405f2c:
    // 0x405f2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x405f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_405f30:
    // 0x405f30: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x405f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_405f34:
    // 0x405f34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x405f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_405f38:
    // 0x405f38: 0x0  nop
    ctx->pc = 0x405f38u;
    // NOP
label_405f3c:
    // 0x405f3c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x405f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_405f40:
    // 0x405f40: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x405f40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_405f44:
    // 0x405f44: 0xc6210dc0  lwc1        $f1, 0xDC0($s1)
    ctx->pc = 0x405f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405f48:
    // 0x405f48: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x405f48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_405f4c:
    // 0x405f4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x405f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_405f50:
    // 0x405f50: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_405f54:
    // 0x405f54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405f58:
    // 0x405f58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x405f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_405f5c:
    // 0x405f5c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x405f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_405f60:
    // 0x405f60: 0xc04cab0  jal         func_132AC0
label_405f64:
    if (ctx->pc == 0x405F64u) {
        ctx->pc = 0x405F64u;
            // 0x405f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405F68u;
        goto label_405f68;
    }
    ctx->pc = 0x405F60u;
    SET_GPR_U32(ctx, 31, 0x405F68u);
    ctx->pc = 0x405F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405F60u;
            // 0x405f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405F68u; }
        if (ctx->pc != 0x405F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405F68u; }
        if (ctx->pc != 0x405F68u) { return; }
    }
    ctx->pc = 0x405F68u;
label_405f68:
    // 0x405f68: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x405f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_405f6c:
    // 0x405f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405f70:
    // 0x405f70: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x405f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_405f74:
    // 0x405f74: 0x320f809  jalr        $t9
label_405f78:
    if (ctx->pc == 0x405F78u) {
        ctx->pc = 0x405F78u;
            // 0x405f78: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x405F7Cu;
        goto label_405f7c;
    }
    ctx->pc = 0x405F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405F7Cu);
        ctx->pc = 0x405F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405F74u;
            // 0x405f78: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405F7Cu; }
            if (ctx->pc != 0x405F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x405F7Cu;
label_405f7c:
    // 0x405f7c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x405f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_405f80:
    // 0x405f80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x405f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_405f84:
    // 0x405f84: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x405f84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_405f88:
    // 0x405f88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x405f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_405f8c:
    // 0x405f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x405f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_405f90:
    // 0x405f90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x405f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_405f94:
    // 0x405f94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x405f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_405f98:
    // 0x405f98: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x405f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_405f9c:
    // 0x405f9c: 0xc04c72c  jal         func_131CB0
label_405fa0:
    if (ctx->pc == 0x405FA0u) {
        ctx->pc = 0x405FA0u;
            // 0x405fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405FA4u;
        goto label_405fa4;
    }
    ctx->pc = 0x405F9Cu;
    SET_GPR_U32(ctx, 31, 0x405FA4u);
    ctx->pc = 0x405FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405F9Cu;
            // 0x405fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FA4u; }
        if (ctx->pc != 0x405FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FA4u; }
        if (ctx->pc != 0x405FA4u) { return; }
    }
    ctx->pc = 0x405FA4u;
label_405fa4:
    // 0x405fa4: 0xc6750154  lwc1        $f21, 0x154($s3)
    ctx->pc = 0x405fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_405fa8:
    // 0x405fa8: 0xc0477a8  jal         func_11DEA0
label_405fac:
    if (ctx->pc == 0x405FACu) {
        ctx->pc = 0x405FACu;
            // 0x405fac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x405FB0u;
        goto label_405fb0;
    }
    ctx->pc = 0x405FA8u;
    SET_GPR_U32(ctx, 31, 0x405FB0u);
    ctx->pc = 0x405FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405FA8u;
            // 0x405fac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FB0u; }
        if (ctx->pc != 0x405FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FB0u; }
        if (ctx->pc != 0x405FB0u) { return; }
    }
    ctx->pc = 0x405FB0u;
label_405fb0:
    // 0x405fb0: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x405fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_405fb4:
    // 0x405fb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x405fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_405fb8:
    // 0x405fb8: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x405fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_405fbc:
    // 0x405fbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x405fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405fc0:
    // 0x405fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x405fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_405fc4:
    // 0x405fc4: 0x0  nop
    ctx->pc = 0x405fc4u;
    // NOP
label_405fc8:
    // 0x405fc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x405fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_405fcc:
    // 0x405fcc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x405fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_405fd0:
    // 0x405fd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x405fd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_405fd4:
    // 0x405fd4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x405fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_405fd8:
    // 0x405fd8: 0xc04cab0  jal         func_132AC0
label_405fdc:
    if (ctx->pc == 0x405FDCu) {
        ctx->pc = 0x405FDCu;
            // 0x405fdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x405FE0u;
        goto label_405fe0;
    }
    ctx->pc = 0x405FD8u;
    SET_GPR_U32(ctx, 31, 0x405FE0u);
    ctx->pc = 0x405FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x405FD8u;
            // 0x405fdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FE0u; }
        if (ctx->pc != 0x405FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x405FE0u; }
        if (ctx->pc != 0x405FE0u) { return; }
    }
    ctx->pc = 0x405FE0u;
label_405fe0:
    // 0x405fe0: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x405fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_405fe4:
    // 0x405fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405fe8:
    // 0x405fe8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x405fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_405fec:
    // 0x405fec: 0x320f809  jalr        $t9
label_405ff0:
    if (ctx->pc == 0x405FF0u) {
        ctx->pc = 0x405FF0u;
            // 0x405ff0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x405FF4u;
        goto label_405ff4;
    }
    ctx->pc = 0x405FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x405FF4u);
        ctx->pc = 0x405FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x405FECu;
            // 0x405ff0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x405FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x405FF4u; }
            if (ctx->pc != 0x405FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x405FF4u;
label_405ff4:
    // 0x405ff4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x405ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_405ff8:
    // 0x405ff8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x405ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_405ffc:
    // 0x405ffc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x405ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_406000:
    // 0x406000: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x406000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_406004:
    // 0x406004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x406004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_406008:
    // 0x406008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x406008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40600c:
    // 0x40600c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x40600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_406010:
    // 0x406010: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x406010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_406014:
    // 0x406014: 0xc04c72c  jal         func_131CB0
label_406018:
    if (ctx->pc == 0x406018u) {
        ctx->pc = 0x406018u;
            // 0x406018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40601Cu;
        goto label_40601c;
    }
    ctx->pc = 0x406014u;
    SET_GPR_U32(ctx, 31, 0x40601Cu);
    ctx->pc = 0x406018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406014u;
            // 0x406018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40601Cu; }
        if (ctx->pc != 0x40601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40601Cu; }
        if (ctx->pc != 0x40601Cu) { return; }
    }
    ctx->pc = 0x40601Cu;
label_40601c:
    // 0x40601c: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x40601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_406020:
    // 0x406020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x406020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406024:
    // 0x406024: 0xc0477a8  jal         func_11DEA0
label_406028:
    if (ctx->pc == 0x406028u) {
        ctx->pc = 0x406028u;
            // 0x406028: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x40602Cu;
        goto label_40602c;
    }
    ctx->pc = 0x406024u;
    SET_GPR_U32(ctx, 31, 0x40602Cu);
    ctx->pc = 0x406028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406024u;
            // 0x406028: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40602Cu; }
        if (ctx->pc != 0x40602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40602Cu; }
        if (ctx->pc != 0x40602Cu) { return; }
    }
    ctx->pc = 0x40602Cu;
label_40602c:
    // 0x40602c: 0x3c0245e3  lui         $v0, 0x45E3
    ctx->pc = 0x40602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17891 << 16));
label_406030:
    // 0x406030: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x406030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406034:
    // 0x406034: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x406034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
label_406038:
    // 0x406038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x406038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40603c:
    // 0x40603c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40603cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_406040:
    // 0x406040: 0x0  nop
    ctx->pc = 0x406040u;
    // NOP
label_406044:
    // 0x406044: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x406044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_406048:
    // 0x406048: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x406048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_40604c:
    // 0x40604c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x40604cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_406050:
    // 0x406050: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x406050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_406054:
    // 0x406054: 0xc04cab0  jal         func_132AC0
label_406058:
    if (ctx->pc == 0x406058u) {
        ctx->pc = 0x406058u;
            // 0x406058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40605Cu;
        goto label_40605c;
    }
    ctx->pc = 0x406054u;
    SET_GPR_U32(ctx, 31, 0x40605Cu);
    ctx->pc = 0x406058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406054u;
            // 0x406058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40605Cu; }
        if (ctx->pc != 0x40605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40605Cu; }
        if (ctx->pc != 0x40605Cu) { return; }
    }
    ctx->pc = 0x40605Cu;
label_40605c:
    // 0x40605c: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x40605cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_406060:
    // 0x406060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406064:
    // 0x406064: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x406064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_406068:
    // 0x406068: 0x320f809  jalr        $t9
label_40606c:
    if (ctx->pc == 0x40606Cu) {
        ctx->pc = 0x40606Cu;
            // 0x40606c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x406070u;
        goto label_406070;
    }
    ctx->pc = 0x406068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406070u);
        ctx->pc = 0x40606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406068u;
            // 0x40606c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406070u; }
            if (ctx->pc != 0x406070u) { return; }
        }
        }
    }
    ctx->pc = 0x406070u;
label_406070:
    // 0x406070: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x406070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_406074:
    // 0x406074: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x406074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406078:
    // 0x406078: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x406078u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_40607c:
    // 0x40607c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x40607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_406080:
    // 0x406080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x406080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_406084:
    // 0x406084: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x406084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_406088:
    // 0x406088: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x406088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_40608c:
    // 0x40608c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x40608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_406090:
    // 0x406090: 0xc04c72c  jal         func_131CB0
label_406094:
    if (ctx->pc == 0x406094u) {
        ctx->pc = 0x406094u;
            // 0x406094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406098u;
        goto label_406098;
    }
    ctx->pc = 0x406090u;
    SET_GPR_U32(ctx, 31, 0x406098u);
    ctx->pc = 0x406094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406090u;
            // 0x406094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406098u; }
        if (ctx->pc != 0x406098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406098u; }
        if (ctx->pc != 0x406098u) { return; }
    }
    ctx->pc = 0x406098u;
label_406098:
    // 0x406098: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x406098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40609c:
    // 0x40609c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4060a0:
    // 0x4060a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4060a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4060a4:
    // 0x4060a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4060a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4060a8:
    // 0x4060a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4060a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4060ac:
    // 0x4060ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4060acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4060b0:
    // 0x4060b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4060b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4060b4:
    // 0x4060b4: 0x3e00008  jr          $ra
label_4060b8:
    if (ctx->pc == 0x4060B8u) {
        ctx->pc = 0x4060B8u;
            // 0x4060b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4060BCu;
        goto label_4060bc;
    }
    ctx->pc = 0x4060B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4060B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4060B4u;
            // 0x4060b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4060BCu;
label_4060bc:
    // 0x4060bc: 0x0  nop
    ctx->pc = 0x4060bcu;
    // NOP
label_4060c0:
    // 0x4060c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4060c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4060c4:
    // 0x4060c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4060c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4060c8:
    // 0x4060c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4060c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4060cc:
    // 0x4060cc: 0x8c63f860  lw          $v1, -0x7A0($v1)
    ctx->pc = 0x4060ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965344)));
label_4060d0:
    // 0x4060d0: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_4060d4:
    if (ctx->pc == 0x4060D4u) {
        ctx->pc = 0x4060D4u;
            // 0x4060d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4060D8u;
        goto label_4060d8;
    }
    ctx->pc = 0x4060D0u;
    {
        const bool branch_taken_0x4060d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4060d0) {
            ctx->pc = 0x4060D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4060D0u;
            // 0x4060d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4061ACu;
            goto label_4061ac;
        }
    }
    ctx->pc = 0x4060D8u;
label_4060d8:
    // 0x4060d8: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x4060d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_4060dc:
    // 0x4060dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4060dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4060e0:
    // 0x4060e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4060e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4060e4:
    // 0x4060e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4060e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4060e8:
    // 0x4060e8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4060e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4060ec:
    // 0x4060ec: 0x2484f860  addiu       $a0, $a0, -0x7A0
    ctx->pc = 0x4060ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
label_4060f0:
    // 0x4060f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4060f4:
    // 0x4060f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4060f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4060f8:
    // 0x4060f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4060fc:
    // 0x4060fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_406100:
    // 0x406100: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x406100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_406104:
    // 0x406104: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x406104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_406108:
    // 0x406108: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x406108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40610c:
    // 0x40610c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40610cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_406110:
    // 0x406110: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x406110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_406114:
    // 0x406114: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x406114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_406118:
    // 0x406118: 0xc075128  jal         func_1D44A0
label_40611c:
    if (ctx->pc == 0x40611Cu) {
        ctx->pc = 0x40611Cu;
            // 0x40611c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x406120u;
        goto label_406120;
    }
    ctx->pc = 0x406118u;
    SET_GPR_U32(ctx, 31, 0x406120u);
    ctx->pc = 0x40611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406118u;
            // 0x40611c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406120u; }
        if (ctx->pc != 0x406120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406120u; }
        if (ctx->pc != 0x406120u) { return; }
    }
    ctx->pc = 0x406120u;
label_406120:
    // 0x406120: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x406120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_406124:
    // 0x406124: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_406128:
    // 0x406128: 0x8c86f860  lw          $a2, -0x7A0($a0)
    ctx->pc = 0x406128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965344)));
label_40612c:
    // 0x40612c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x40612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_406130:
    // 0x406130: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x406130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_406134:
    // 0x406134: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x406134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_406138:
    // 0x406138: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40613c:
    if (ctx->pc == 0x40613Cu) {
        ctx->pc = 0x406140u;
        goto label_406140;
    }
    ctx->pc = 0x406138u;
    {
        const bool branch_taken_0x406138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x406138) {
            ctx->pc = 0x406148u;
            goto label_406148;
        }
    }
    ctx->pc = 0x406140u;
label_406140:
    // 0x406140: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_406144:
    // 0x406144: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x406144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_406148:
    // 0x406148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40614c:
    // 0x40614c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x40614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_406150:
    // 0x406150: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x406150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_406154:
    // 0x406154: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x406154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_406158:
    // 0x406158: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40615c:
    if (ctx->pc == 0x40615Cu) {
        ctx->pc = 0x40615Cu;
            // 0x40615c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x406160u;
        goto label_406160;
    }
    ctx->pc = 0x406158u;
    {
        const bool branch_taken_0x406158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406158u;
            // 0x40615c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406158) {
            ctx->pc = 0x406168u;
            goto label_406168;
        }
    }
    ctx->pc = 0x406160u;
label_406160:
    // 0x406160: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_406164:
    // 0x406164: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x406164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_406168:
    // 0x406168: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40616c:
    // 0x40616c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x40616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_406170:
    // 0x406170: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x406170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_406174:
    // 0x406174: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x406174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_406178:
    // 0x406178: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40617c:
    if (ctx->pc == 0x40617Cu) {
        ctx->pc = 0x406180u;
        goto label_406180;
    }
    ctx->pc = 0x406178u;
    {
        const bool branch_taken_0x406178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x406178) {
            ctx->pc = 0x406188u;
            goto label_406188;
        }
    }
    ctx->pc = 0x406180u;
label_406180:
    // 0x406180: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_406184:
    // 0x406184: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x406184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_406188:
    // 0x406188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40618c:
    // 0x40618c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x40618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_406190:
    // 0x406190: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x406190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_406194:
    // 0x406194: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x406194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_406198:
    // 0x406198: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_40619c:
    if (ctx->pc == 0x40619Cu) {
        ctx->pc = 0x4061A0u;
        goto label_4061a0;
    }
    ctx->pc = 0x406198u;
    {
        const bool branch_taken_0x406198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x406198) {
            ctx->pc = 0x4061A8u;
            goto label_4061a8;
        }
    }
    ctx->pc = 0x4061A0u;
label_4061a0:
    // 0x4061a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4061a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4061a4:
    // 0x4061a4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x4061a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_4061a8:
    // 0x4061a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4061a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4061ac:
    // 0x4061ac: 0x3e00008  jr          $ra
label_4061b0:
    if (ctx->pc == 0x4061B0u) {
        ctx->pc = 0x4061B0u;
            // 0x4061b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4061B4u;
        goto label_4061b4;
    }
    ctx->pc = 0x4061ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4061B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4061ACu;
            // 0x4061b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4061B4u;
label_4061b4:
    // 0x4061b4: 0x0  nop
    ctx->pc = 0x4061b4u;
    // NOP
label_4061b8:
    // 0x4061b8: 0x0  nop
    ctx->pc = 0x4061b8u;
    // NOP
label_4061bc:
    // 0x4061bc: 0x0  nop
    ctx->pc = 0x4061bcu;
    // NOP
label_4061c0:
    // 0x4061c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4061c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4061c4:
    // 0x4061c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4061c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4061c8:
    // 0x4061c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4061c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4061cc:
    // 0x4061cc: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4061ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4061d0:
    // 0x4061d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4061d4:
    if (ctx->pc == 0x4061D4u) {
        ctx->pc = 0x4061D4u;
            // 0x4061d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4061D8u;
        goto label_4061d8;
    }
    ctx->pc = 0x4061D0u;
    {
        const bool branch_taken_0x4061d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4061D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4061D0u;
            // 0x4061d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4061d0) {
            ctx->pc = 0x4061E8u;
            goto label_4061e8;
        }
    }
    ctx->pc = 0x4061D8u;
label_4061d8:
    // 0x4061d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4061d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4061dc:
    // 0x4061dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4061e0:
    // 0x4061e0: 0xc057b7c  jal         func_15EDF0
label_4061e4:
    if (ctx->pc == 0x4061E4u) {
        ctx->pc = 0x4061E4u;
            // 0x4061e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4061E8u;
        goto label_4061e8;
    }
    ctx->pc = 0x4061E0u;
    SET_GPR_U32(ctx, 31, 0x4061E8u);
    ctx->pc = 0x4061E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4061E0u;
            // 0x4061e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4061E8u; }
        if (ctx->pc != 0x4061E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4061E8u; }
        if (ctx->pc != 0x4061E8u) { return; }
    }
    ctx->pc = 0x4061E8u;
label_4061e8:
    // 0x4061e8: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x4061e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4061ec:
    // 0x4061ec: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4061f0:
    if (ctx->pc == 0x4061F0u) {
        ctx->pc = 0x4061F0u;
            // 0x4061f0: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->pc = 0x4061F4u;
        goto label_4061f4;
    }
    ctx->pc = 0x4061ECu;
    {
        const bool branch_taken_0x4061ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4061ec) {
            ctx->pc = 0x4061F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4061ECu;
            // 0x4061f0: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406208u;
            goto label_406208;
        }
    }
    ctx->pc = 0x4061F4u;
label_4061f4:
    // 0x4061f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4061f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4061f8:
    // 0x4061f8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4061f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4061fc:
    // 0x4061fc: 0xc057b7c  jal         func_15EDF0
label_406200:
    if (ctx->pc == 0x406200u) {
        ctx->pc = 0x406200u;
            // 0x406200: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x406204u;
        goto label_406204;
    }
    ctx->pc = 0x4061FCu;
    SET_GPR_U32(ctx, 31, 0x406204u);
    ctx->pc = 0x406200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4061FCu;
            // 0x406200: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406204u; }
        if (ctx->pc != 0x406204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406204u; }
        if (ctx->pc != 0x406204u) { return; }
    }
    ctx->pc = 0x406204u;
label_406204:
    // 0x406204: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x406204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_406208:
    // 0x406208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x406208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40620c:
    // 0x40620c: 0xc04a576  jal         func_1295D8
label_406210:
    if (ctx->pc == 0x406210u) {
        ctx->pc = 0x406210u;
            // 0x406210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x406214u;
        goto label_406214;
    }
    ctx->pc = 0x40620Cu;
    SET_GPR_U32(ctx, 31, 0x406214u);
    ctx->pc = 0x406210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40620Cu;
            // 0x406210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406214u; }
        if (ctx->pc != 0x406214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406214u; }
        if (ctx->pc != 0x406214u) { return; }
    }
    ctx->pc = 0x406214u;
label_406214:
    // 0x406214: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x406214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_406218:
    // 0x406218: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_40621c:
    if (ctx->pc == 0x40621Cu) {
        ctx->pc = 0x40621Cu;
            // 0x40621c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x406220u;
        goto label_406220;
    }
    ctx->pc = 0x406218u;
    {
        const bool branch_taken_0x406218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x406218) {
            ctx->pc = 0x40621Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406218u;
            // 0x40621c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406234u;
            goto label_406234;
        }
    }
    ctx->pc = 0x406220u;
label_406220:
    // 0x406220: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x406220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_406224:
    // 0x406224: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x406224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_406228:
    // 0x406228: 0xc057b7c  jal         func_15EDF0
label_40622c:
    if (ctx->pc == 0x40622Cu) {
        ctx->pc = 0x40622Cu;
            // 0x40622c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x406230u;
        goto label_406230;
    }
    ctx->pc = 0x406228u;
    SET_GPR_U32(ctx, 31, 0x406230u);
    ctx->pc = 0x40622Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406228u;
            // 0x40622c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406230u; }
        if (ctx->pc != 0x406230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406230u; }
        if (ctx->pc != 0x406230u) { return; }
    }
    ctx->pc = 0x406230u;
label_406230:
    // 0x406230: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x406230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_406234:
    // 0x406234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x406234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_406238:
    // 0x406238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40623c:
    // 0x40623c: 0x3e00008  jr          $ra
label_406240:
    if (ctx->pc == 0x406240u) {
        ctx->pc = 0x406240u;
            // 0x406240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x406244u;
        goto label_406244;
    }
    ctx->pc = 0x40623Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40623Cu;
            // 0x406240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406244u;
label_406244:
    // 0x406244: 0x0  nop
    ctx->pc = 0x406244u;
    // NOP
label_406248:
    // 0x406248: 0x0  nop
    ctx->pc = 0x406248u;
    // NOP
label_40624c:
    // 0x40624c: 0x0  nop
    ctx->pc = 0x40624cu;
    // NOP
label_406250:
    // 0x406250: 0x3e00008  jr          $ra
label_406254:
    if (ctx->pc == 0x406254u) {
        ctx->pc = 0x406258u;
        goto label_406258;
    }
    ctx->pc = 0x406250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406258u;
label_406258:
    // 0x406258: 0x0  nop
    ctx->pc = 0x406258u;
    // NOP
label_40625c:
    // 0x40625c: 0x0  nop
    ctx->pc = 0x40625cu;
    // NOP
label_406260:
    // 0x406260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x406260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_406264:
    // 0x406264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x406264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_406268:
    // 0x406268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x406268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40626c:
    // 0x40626c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_406270:
    // 0x406270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x406270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406274:
    // 0x406274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406278:
    // 0x406278: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x406278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40627c:
    // 0x40627c: 0xc075830  jal         func_1D60C0
label_406280:
    if (ctx->pc == 0x406280u) {
        ctx->pc = 0x406280u;
            // 0x406280: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406284u;
        goto label_406284;
    }
    ctx->pc = 0x40627Cu;
    SET_GPR_U32(ctx, 31, 0x406284u);
    ctx->pc = 0x406280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40627Cu;
            // 0x406280: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406284u; }
        if (ctx->pc != 0x406284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406284u; }
        if (ctx->pc != 0x406284u) { return; }
    }
    ctx->pc = 0x406284u;
label_406284:
    // 0x406284: 0x824411ad  lb          $a0, 0x11AD($s2)
    ctx->pc = 0x406284u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_406288:
    // 0x406288: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x406288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40628c:
    // 0x40628c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_406290:
    if (ctx->pc == 0x406290u) {
        ctx->pc = 0x406290u;
            // 0x406290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406294u;
        goto label_406294;
    }
    ctx->pc = 0x40628Cu;
    {
        const bool branch_taken_0x40628c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x406290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40628Cu;
            // 0x406290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40628c) {
            ctx->pc = 0x4062E4u;
            goto label_4062e4;
        }
    }
    ctx->pc = 0x406294u;
label_406294:
    // 0x406294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x406294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_406298:
    // 0x406298: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x406298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40629c:
    // 0x40629c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x40629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4062a0:
    // 0x4062a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4062a4:
    // 0x4062a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4062a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4062a8:
    // 0x4062a8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4062a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4062ac:
    // 0x4062ac: 0xc04cc04  jal         func_133010
label_4062b0:
    if (ctx->pc == 0x4062B0u) {
        ctx->pc = 0x4062B0u;
            // 0x4062b0: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x4062B4u;
        goto label_4062b4;
    }
    ctx->pc = 0x4062ACu;
    SET_GPR_U32(ctx, 31, 0x4062B4u);
    ctx->pc = 0x4062B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4062ACu;
            // 0x4062b0: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062B4u; }
        if (ctx->pc != 0x4062B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062B4u; }
        if (ctx->pc != 0x4062B4u) { return; }
    }
    ctx->pc = 0x4062B4u;
label_4062b4:
    // 0x4062b4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x4062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_4062b8:
    // 0x4062b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4062b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4062bc:
    // 0x4062bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4062bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4062c0:
    // 0x4062c0: 0xc04cc70  jal         func_1331C0
label_4062c4:
    if (ctx->pc == 0x4062C4u) {
        ctx->pc = 0x4062C4u;
            // 0x4062c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4062C8u;
        goto label_4062c8;
    }
    ctx->pc = 0x4062C0u;
    SET_GPR_U32(ctx, 31, 0x4062C8u);
    ctx->pc = 0x4062C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4062C0u;
            // 0x4062c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062C8u; }
        if (ctx->pc != 0x4062C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062C8u; }
        if (ctx->pc != 0x4062C8u) { return; }
    }
    ctx->pc = 0x4062C8u;
label_4062c8:
    // 0x4062c8: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x4062c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_4062cc:
    // 0x4062cc: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x4062ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_4062d0:
    // 0x4062d0: 0xc04cbe0  jal         func_132F80
label_4062d4:
    if (ctx->pc == 0x4062D4u) {
        ctx->pc = 0x4062D4u;
            // 0x4062d4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4062D8u;
        goto label_4062d8;
    }
    ctx->pc = 0x4062D0u;
    SET_GPR_U32(ctx, 31, 0x4062D8u);
    ctx->pc = 0x4062D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4062D0u;
            // 0x4062d4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062D8u; }
        if (ctx->pc != 0x4062D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062D8u; }
        if (ctx->pc != 0x4062D8u) { return; }
    }
    ctx->pc = 0x4062D8u;
label_4062d8:
    // 0x4062d8: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x4062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_4062dc:
    // 0x4062dc: 0xc04cc04  jal         func_133010
label_4062e0:
    if (ctx->pc == 0x4062E0u) {
        ctx->pc = 0x4062E0u;
            // 0x4062e0: 0x26650120  addiu       $a1, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x4062E4u;
        goto label_4062e4;
    }
    ctx->pc = 0x4062DCu;
    SET_GPR_U32(ctx, 31, 0x4062E4u);
    ctx->pc = 0x4062E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4062DCu;
            // 0x4062e0: 0x26650120  addiu       $a1, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062E4u; }
        if (ctx->pc != 0x4062E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4062E4u; }
        if (ctx->pc != 0x4062E4u) { return; }
    }
    ctx->pc = 0x4062E4u;
label_4062e4:
    // 0x4062e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4062e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4062e8:
    // 0x4062e8: 0x5203005a  beql        $s0, $v1, . + 4 + (0x5A << 2)
label_4062ec:
    if (ctx->pc == 0x4062ECu) {
        ctx->pc = 0x4062ECu;
            // 0x4062ec: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->pc = 0x4062F0u;
        goto label_4062f0;
    }
    ctx->pc = 0x4062E8u;
    {
        const bool branch_taken_0x4062e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x4062e8) {
            ctx->pc = 0x4062ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4062E8u;
            // 0x4062ec: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406454u;
            goto label_406454;
        }
    }
    ctx->pc = 0x4062F0u;
label_4062f0:
    // 0x4062f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4062f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4062f4:
    // 0x4062f4: 0x5203000d  beql        $s0, $v1, . + 4 + (0xD << 2)
label_4062f8:
    if (ctx->pc == 0x4062F8u) {
        ctx->pc = 0x4062F8u;
            // 0x4062f8: 0x8e430e34  lw          $v1, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->pc = 0x4062FCu;
        goto label_4062fc;
    }
    ctx->pc = 0x4062F4u;
    {
        const bool branch_taken_0x4062f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x4062f4) {
            ctx->pc = 0x4062F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4062F4u;
            // 0x4062f8: 0x8e430e34  lw          $v1, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40632Cu;
            goto label_40632c;
        }
    }
    ctx->pc = 0x4062FCu;
label_4062fc:
    // 0x4062fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4062fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_406300:
    // 0x406300: 0x52030003  beql        $s0, $v1, . + 4 + (0x3 << 2)
label_406304:
    if (ctx->pc == 0x406304u) {
        ctx->pc = 0x406304u;
            // 0x406304: 0x8e4311bc  lw          $v1, 0x11BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
        ctx->pc = 0x406308u;
        goto label_406308;
    }
    ctx->pc = 0x406300u;
    {
        const bool branch_taken_0x406300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x406300) {
            ctx->pc = 0x406304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406300u;
            // 0x406304: 0x8e4311bc  lw          $v1, 0x11BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406310u;
            goto label_406310;
        }
    }
    ctx->pc = 0x406308u;
label_406308:
    // 0x406308: 0x10000056  b           . + 4 + (0x56 << 2)
label_40630c:
    if (ctx->pc == 0x40630Cu) {
        ctx->pc = 0x40630Cu;
            // 0x40630c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x406310u;
        goto label_406310;
    }
    ctx->pc = 0x406308u;
    {
        const bool branch_taken_0x406308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406308u;
            // 0x40630c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406308) {
            ctx->pc = 0x406464u;
            goto label_406464;
        }
    }
    ctx->pc = 0x406310u;
label_406310:
    // 0x406310: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_406314:
    if (ctx->pc == 0x406314u) {
        ctx->pc = 0x406314u;
            // 0x406314: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x406318u;
        goto label_406318;
    }
    ctx->pc = 0x406310u;
    {
        const bool branch_taken_0x406310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x406310) {
            ctx->pc = 0x406314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406310u;
            // 0x406314: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406324u;
            goto label_406324;
        }
    }
    ctx->pc = 0x406318u;
label_406318:
    // 0x406318: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x406318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40631c:
    // 0x40631c: 0x10000050  b           . + 4 + (0x50 << 2)
label_406320:
    if (ctx->pc == 0x406320u) {
        ctx->pc = 0x406320u;
            // 0x406320: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x406324u;
        goto label_406324;
    }
    ctx->pc = 0x40631Cu;
    {
        const bool branch_taken_0x40631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40631Cu;
            // 0x406320: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40631c) {
            ctx->pc = 0x406460u;
            goto label_406460;
        }
    }
    ctx->pc = 0x406324u;
label_406324:
    // 0x406324: 0x1000004e  b           . + 4 + (0x4E << 2)
label_406328:
    if (ctx->pc == 0x406328u) {
        ctx->pc = 0x406328u;
            // 0x406328: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x40632Cu;
        goto label_40632c;
    }
    ctx->pc = 0x406324u;
    {
        const bool branch_taken_0x406324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406324u;
            // 0x406328: 0xae630050  sw          $v1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406324) {
            ctx->pc = 0x406460u;
            goto label_406460;
        }
    }
    ctx->pc = 0x40632Cu;
label_40632c:
    // 0x40632c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x40632cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_406330:
    // 0x406330: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_406334:
    if (ctx->pc == 0x406334u) {
        ctx->pc = 0x406334u;
            // 0x406334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406338u;
        goto label_406338;
    }
    ctx->pc = 0x406330u;
    {
        const bool branch_taken_0x406330 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x406334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406330u;
            // 0x406334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406330) {
            ctx->pc = 0x406348u;
            goto label_406348;
        }
    }
    ctx->pc = 0x406338u;
label_406338:
    // 0x406338: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x406338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_40633c:
    // 0x40633c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_406340:
    if (ctx->pc == 0x406340u) {
        ctx->pc = 0x406344u;
        goto label_406344;
    }
    ctx->pc = 0x40633Cu;
    {
        const bool branch_taken_0x40633c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40633c) {
            ctx->pc = 0x406348u;
            goto label_406348;
        }
    }
    ctx->pc = 0x406344u;
label_406344:
    // 0x406344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406348:
    // 0x406348: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_40634c:
    if (ctx->pc == 0x40634Cu) {
        ctx->pc = 0x406350u;
        goto label_406350;
    }
    ctx->pc = 0x406348u;
    {
        const bool branch_taken_0x406348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x406348) {
            ctx->pc = 0x406364u;
            goto label_406364;
        }
    }
    ctx->pc = 0x406350u;
label_406350:
    // 0x406350: 0xc075eb4  jal         func_1D7AD0
label_406354:
    if (ctx->pc == 0x406354u) {
        ctx->pc = 0x406354u;
            // 0x406354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406358u;
        goto label_406358;
    }
    ctx->pc = 0x406350u;
    SET_GPR_U32(ctx, 31, 0x406358u);
    ctx->pc = 0x406354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406350u;
            // 0x406354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406358u; }
        if (ctx->pc != 0x406358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406358u; }
        if (ctx->pc != 0x406358u) { return; }
    }
    ctx->pc = 0x406358u;
label_406358:
    // 0x406358: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_40635c:
    if (ctx->pc == 0x40635Cu) {
        ctx->pc = 0x406360u;
        goto label_406360;
    }
    ctx->pc = 0x406358u;
    {
        const bool branch_taken_0x406358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406358) {
            ctx->pc = 0x406364u;
            goto label_406364;
        }
    }
    ctx->pc = 0x406360u;
label_406360:
    // 0x406360: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x406360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406364:
    // 0x406364: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_406368:
    if (ctx->pc == 0x406368u) {
        ctx->pc = 0x406368u;
            // 0x406368: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->pc = 0x40636Cu;
        goto label_40636c;
    }
    ctx->pc = 0x406364u;
    {
        const bool branch_taken_0x406364 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x406364) {
            ctx->pc = 0x406368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406364u;
            // 0x406368: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406380u;
            goto label_406380;
        }
    }
    ctx->pc = 0x40636Cu;
label_40636c:
    // 0x40636c: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x40636cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_406370:
    // 0x406370: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x406370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_406374:
    // 0x406374: 0x54830033  bnel        $a0, $v1, . + 4 + (0x33 << 2)
label_406378:
    if (ctx->pc == 0x406378u) {
        ctx->pc = 0x406378u;
            // 0x406378: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->pc = 0x40637Cu;
        goto label_40637c;
    }
    ctx->pc = 0x406374u;
    {
        const bool branch_taken_0x406374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x406374) {
            ctx->pc = 0x406378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406374u;
            // 0x406378: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406444u;
            goto label_406444;
        }
    }
    ctx->pc = 0x40637Cu;
label_40637c:
    // 0x40637c: 0x8e64013c  lw          $a0, 0x13C($s3)
    ctx->pc = 0x40637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_406380:
    // 0x406380: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x406380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_406384:
    // 0x406384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x406384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_406388:
    // 0x406388: 0x824511aa  lb          $a1, 0x11AA($s2)
    ctx->pc = 0x406388u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_40638c:
    // 0x40638c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40638cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406390:
    // 0x406390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x406390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406394:
    // 0x406394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x406394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_406398:
    // 0x406398: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x406398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40639c:
    // 0x40639c: 0x320f809  jalr        $t9
label_4063a0:
    if (ctx->pc == 0x4063A0u) {
        ctx->pc = 0x4063A0u;
            // 0x4063a0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4063A4u;
        goto label_4063a4;
    }
    ctx->pc = 0x40639Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4063A4u);
        ctx->pc = 0x4063A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40639Cu;
            // 0x4063a0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4063A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4063A4u; }
            if (ctx->pc != 0x4063A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4063A4u;
label_4063a4:
    // 0x4063a4: 0x824411ad  lb          $a0, 0x11AD($s2)
    ctx->pc = 0x4063a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_4063a8:
    // 0x4063a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4063ac:
    // 0x4063ac: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4063acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4063b0:
    // 0x4063b0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4063b0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4063b4:
    // 0x4063b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4063b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4063b8:
    // 0x4063b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4063b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4063bc:
    // 0x4063bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4063bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4063c0:
    // 0x4063c0: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4063c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4063c4:
    // 0x4063c4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4063c8:
    if (ctx->pc == 0x4063C8u) {
        ctx->pc = 0x4063C8u;
            // 0x4063c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4063CCu;
        goto label_4063cc;
    }
    ctx->pc = 0x4063C4u;
    {
        const bool branch_taken_0x4063c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4063C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4063C4u;
            // 0x4063c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4063c4) {
            ctx->pc = 0x4063DCu;
            goto label_4063dc;
        }
    }
    ctx->pc = 0x4063CCu;
label_4063cc:
    // 0x4063cc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4063ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4063d0:
    // 0x4063d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4063d4:
    if (ctx->pc == 0x4063D4u) {
        ctx->pc = 0x4063D8u;
        goto label_4063d8;
    }
    ctx->pc = 0x4063D0u;
    {
        const bool branch_taken_0x4063d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4063d0) {
            ctx->pc = 0x4063DCu;
            goto label_4063dc;
        }
    }
    ctx->pc = 0x4063D8u;
label_4063d8:
    // 0x4063d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4063d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4063dc:
    // 0x4063dc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4063e0:
    if (ctx->pc == 0x4063E0u) {
        ctx->pc = 0x4063E4u;
        goto label_4063e4;
    }
    ctx->pc = 0x4063DCu;
    {
        const bool branch_taken_0x4063dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4063dc) {
            ctx->pc = 0x4063F8u;
            goto label_4063f8;
        }
    }
    ctx->pc = 0x4063E4u;
label_4063e4:
    // 0x4063e4: 0xc075eb4  jal         func_1D7AD0
label_4063e8:
    if (ctx->pc == 0x4063E8u) {
        ctx->pc = 0x4063ECu;
        goto label_4063ec;
    }
    ctx->pc = 0x4063E4u;
    SET_GPR_U32(ctx, 31, 0x4063ECu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4063ECu; }
        if (ctx->pc != 0x4063ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4063ECu; }
        if (ctx->pc != 0x4063ECu) { return; }
    }
    ctx->pc = 0x4063ECu;
label_4063ec:
    // 0x4063ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4063f0:
    if (ctx->pc == 0x4063F0u) {
        ctx->pc = 0x4063F4u;
        goto label_4063f4;
    }
    ctx->pc = 0x4063ECu;
    {
        const bool branch_taken_0x4063ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4063ec) {
            ctx->pc = 0x4063F8u;
            goto label_4063f8;
        }
    }
    ctx->pc = 0x4063F4u;
label_4063f4:
    // 0x4063f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4063f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4063f8:
    // 0x4063f8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_4063fc:
    if (ctx->pc == 0x4063FCu) {
        ctx->pc = 0x406400u;
        goto label_406400;
    }
    ctx->pc = 0x4063F8u;
    {
        const bool branch_taken_0x4063f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4063f8) {
            ctx->pc = 0x406440u;
            goto label_406440;
        }
    }
    ctx->pc = 0x406400u;
label_406400:
    // 0x406400: 0x824511ad  lb          $a1, 0x11AD($s2)
    ctx->pc = 0x406400u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_406404:
    // 0x406404: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x406404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_406408:
    // 0x406408: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x406408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_40640c:
    // 0x40640c: 0x8e64013c  lw          $a0, 0x13C($s3)
    ctx->pc = 0x40640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_406410:
    // 0x406410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x406410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406414:
    // 0x406414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x406414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_406418:
    // 0x406418: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x406418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_40641c:
    // 0x40641c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x40641cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_406420:
    // 0x406420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x406420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_406424:
    // 0x406424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x406424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_406428:
    // 0x406428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x406428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40642c:
    // 0x40642c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40642cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406430:
    // 0x406430: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x406430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_406434:
    // 0x406434: 0x804511aa  lb          $a1, 0x11AA($v0)
    ctx->pc = 0x406434u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_406438:
    // 0x406438: 0x320f809  jalr        $t9
label_40643c:
    if (ctx->pc == 0x40643Cu) {
        ctx->pc = 0x40643Cu;
            // 0x40643c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406440u;
        goto label_406440;
    }
    ctx->pc = 0x406438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406440u);
        ctx->pc = 0x40643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406438u;
            // 0x40643c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406440u; }
            if (ctx->pc != 0x406440u) { return; }
        }
        }
    }
    ctx->pc = 0x406440u;
label_406440:
    // 0x406440: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x406440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_406444:
    // 0x406444: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x406444u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_406448:
    // 0x406448: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x406448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_40644c:
    // 0x40644c: 0x10000004  b           . + 4 + (0x4 << 2)
label_406450:
    if (ctx->pc == 0x406450u) {
        ctx->pc = 0x406450u;
            // 0x406450: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x406454u;
        goto label_406454;
    }
    ctx->pc = 0x40644Cu;
    {
        const bool branch_taken_0x40644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40644Cu;
            // 0x406450: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40644c) {
            ctx->pc = 0x406460u;
            goto label_406460;
        }
    }
    ctx->pc = 0x406454u;
label_406454:
    // 0x406454: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x406454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_406458:
    // 0x406458: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x406458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_40645c:
    // 0x40645c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x40645cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_406460:
    // 0x406460: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x406460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406464:
    // 0x406464: 0x56030035  bnel        $s0, $v1, . + 4 + (0x35 << 2)
label_406468:
    if (ctx->pc == 0x406468u) {
        ctx->pc = 0x406468u;
            // 0x406468: 0x8e440db0  lw          $a0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x40646Cu;
        goto label_40646c;
    }
    ctx->pc = 0x406464u;
    {
        const bool branch_taken_0x406464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x406464) {
            ctx->pc = 0x406468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406464u;
            // 0x406468: 0x8e440db0  lw          $a0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40653Cu;
            goto label_40653c;
        }
    }
    ctx->pc = 0x40646Cu;
label_40646c:
    // 0x40646c: 0x824511ad  lb          $a1, 0x11AD($s2)
    ctx->pc = 0x40646cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_406470:
    // 0x406470: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x406470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_406474:
    // 0x406474: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x406474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_406478:
    // 0x406478: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x406478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_40647c:
    // 0x40647c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x40647cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_406480:
    // 0x406480: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x406480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_406484:
    // 0x406484: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x406484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_406488:
    // 0x406488: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x406488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40648c:
    // 0x40648c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_406490:
    if (ctx->pc == 0x406490u) {
        ctx->pc = 0x406490u;
            // 0x406490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406494u;
        goto label_406494;
    }
    ctx->pc = 0x40648Cu;
    {
        const bool branch_taken_0x40648c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x406490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40648Cu;
            // 0x406490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40648c) {
            ctx->pc = 0x4064A4u;
            goto label_4064a4;
        }
    }
    ctx->pc = 0x406494u;
label_406494:
    // 0x406494: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x406494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_406498:
    // 0x406498: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_40649c:
    if (ctx->pc == 0x40649Cu) {
        ctx->pc = 0x4064A0u;
        goto label_4064a0;
    }
    ctx->pc = 0x406498u;
    {
        const bool branch_taken_0x406498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x406498) {
            ctx->pc = 0x4064A4u;
            goto label_4064a4;
        }
    }
    ctx->pc = 0x4064A0u;
label_4064a0:
    // 0x4064a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4064a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4064a4:
    // 0x4064a4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_4064a8:
    if (ctx->pc == 0x4064A8u) {
        ctx->pc = 0x4064ACu;
        goto label_4064ac;
    }
    ctx->pc = 0x4064A4u;
    {
        const bool branch_taken_0x4064a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4064a4) {
            ctx->pc = 0x4064C0u;
            goto label_4064c0;
        }
    }
    ctx->pc = 0x4064ACu;
label_4064ac:
    // 0x4064ac: 0xc075eb4  jal         func_1D7AD0
label_4064b0:
    if (ctx->pc == 0x4064B0u) {
        ctx->pc = 0x4064B0u;
            // 0x4064b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4064B4u;
        goto label_4064b4;
    }
    ctx->pc = 0x4064ACu;
    SET_GPR_U32(ctx, 31, 0x4064B4u);
    ctx->pc = 0x4064B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4064ACu;
            // 0x4064b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4064B4u; }
        if (ctx->pc != 0x4064B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4064B4u; }
        if (ctx->pc != 0x4064B4u) { return; }
    }
    ctx->pc = 0x4064B4u;
label_4064b4:
    // 0x4064b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4064b8:
    if (ctx->pc == 0x4064B8u) {
        ctx->pc = 0x4064BCu;
        goto label_4064bc;
    }
    ctx->pc = 0x4064B4u;
    {
        const bool branch_taken_0x4064b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4064b4) {
            ctx->pc = 0x4064C0u;
            goto label_4064c0;
        }
    }
    ctx->pc = 0x4064BCu;
label_4064bc:
    // 0x4064bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4064bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4064c0:
    // 0x4064c0: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
label_4064c4:
    if (ctx->pc == 0x4064C4u) {
        ctx->pc = 0x4064C4u;
            // 0x4064c4: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->pc = 0x4064C8u;
        goto label_4064c8;
    }
    ctx->pc = 0x4064C0u;
    {
        const bool branch_taken_0x4064c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4064c0) {
            ctx->pc = 0x4064C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4064C0u;
            // 0x4064c4: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406530u;
            goto label_406530;
        }
    }
    ctx->pc = 0x4064C8u;
label_4064c8:
    // 0x4064c8: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x4064c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4064cc:
    // 0x4064cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4064ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4064d0:
    // 0x4064d0: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_4064d4:
    if (ctx->pc == 0x4064D4u) {
        ctx->pc = 0x4064D8u;
        goto label_4064d8;
    }
    ctx->pc = 0x4064D0u;
    {
        const bool branch_taken_0x4064d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4064d0) {
            ctx->pc = 0x40652Cu;
            goto label_40652c;
        }
    }
    ctx->pc = 0x4064D8u;
label_4064d8:
    // 0x4064d8: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x4064d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4064dc:
    // 0x4064dc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4064dcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4064e0:
    // 0x4064e0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4064e4:
    if (ctx->pc == 0x4064E4u) {
        ctx->pc = 0x4064E4u;
            // 0x4064e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4064E8u;
        goto label_4064e8;
    }
    ctx->pc = 0x4064E0u;
    {
        const bool branch_taken_0x4064e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4064E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4064E0u;
            // 0x4064e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4064e0) {
            ctx->pc = 0x4064F8u;
            goto label_4064f8;
        }
    }
    ctx->pc = 0x4064E8u;
label_4064e8:
    // 0x4064e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4064e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4064ec:
    // 0x4064ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4064f0:
    if (ctx->pc == 0x4064F0u) {
        ctx->pc = 0x4064F4u;
        goto label_4064f4;
    }
    ctx->pc = 0x4064ECu;
    {
        const bool branch_taken_0x4064ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4064ec) {
            ctx->pc = 0x4064F8u;
            goto label_4064f8;
        }
    }
    ctx->pc = 0x4064F4u;
label_4064f4:
    // 0x4064f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4064f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4064f8:
    // 0x4064f8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4064fc:
    if (ctx->pc == 0x4064FCu) {
        ctx->pc = 0x406500u;
        goto label_406500;
    }
    ctx->pc = 0x4064F8u;
    {
        const bool branch_taken_0x4064f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4064f8) {
            ctx->pc = 0x406514u;
            goto label_406514;
        }
    }
    ctx->pc = 0x406500u;
label_406500:
    // 0x406500: 0xc075eb4  jal         func_1D7AD0
label_406504:
    if (ctx->pc == 0x406504u) {
        ctx->pc = 0x406504u;
            // 0x406504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406508u;
        goto label_406508;
    }
    ctx->pc = 0x406500u;
    SET_GPR_U32(ctx, 31, 0x406508u);
    ctx->pc = 0x406504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406500u;
            // 0x406504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406508u; }
        if (ctx->pc != 0x406508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406508u; }
        if (ctx->pc != 0x406508u) { return; }
    }
    ctx->pc = 0x406508u;
label_406508:
    // 0x406508: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_40650c:
    if (ctx->pc == 0x40650Cu) {
        ctx->pc = 0x406510u;
        goto label_406510;
    }
    ctx->pc = 0x406508u;
    {
        const bool branch_taken_0x406508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406508) {
            ctx->pc = 0x406514u;
            goto label_406514;
        }
    }
    ctx->pc = 0x406510u;
label_406510:
    // 0x406510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x406510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406514:
    // 0x406514: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_406518:
    if (ctx->pc == 0x406518u) {
        ctx->pc = 0x40651Cu;
        goto label_40651c;
    }
    ctx->pc = 0x406514u;
    {
        const bool branch_taken_0x406514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x406514) {
            ctx->pc = 0x40652Cu;
            goto label_40652c;
        }
    }
    ctx->pc = 0x40651Cu;
label_40651c:
    // 0x40651c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x40651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_406520:
    // 0x406520: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x406520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_406524:
    // 0x406524: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_406528:
    if (ctx->pc == 0x406528u) {
        ctx->pc = 0x40652Cu;
        goto label_40652c;
    }
    ctx->pc = 0x406524u;
    {
        const bool branch_taken_0x406524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x406524) {
            ctx->pc = 0x406538u;
            goto label_406538;
        }
    }
    ctx->pc = 0x40652Cu;
label_40652c:
    // 0x40652c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x40652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_406530:
    // 0x406530: 0xc073234  jal         func_1CC8D0
label_406534:
    if (ctx->pc == 0x406534u) {
        ctx->pc = 0x406534u;
            // 0x406534: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x406538u;
        goto label_406538;
    }
    ctx->pc = 0x406530u;
    SET_GPR_U32(ctx, 31, 0x406538u);
    ctx->pc = 0x406534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406530u;
            // 0x406534: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406538u; }
        if (ctx->pc != 0x406538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406538u; }
        if (ctx->pc != 0x406538u) { return; }
    }
    ctx->pc = 0x406538u;
label_406538:
    // 0x406538: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x406538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_40653c:
    // 0x40653c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x40653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_406540:
    // 0x406540: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_406544:
    if (ctx->pc == 0x406544u) {
        ctx->pc = 0x406544u;
            // 0x406544: 0x8e650130  lw          $a1, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->pc = 0x406548u;
        goto label_406548;
    }
    ctx->pc = 0x406540u;
    {
        const bool branch_taken_0x406540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x406540) {
            ctx->pc = 0x406544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406540u;
            // 0x406544: 0x8e650130  lw          $a1, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406580u;
            goto label_406580;
        }
    }
    ctx->pc = 0x406548u;
label_406548:
    // 0x406548: 0xc641118c  lwc1        $f1, 0x118C($s2)
    ctx->pc = 0x406548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40654c:
    // 0x40654c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40654cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406550:
    // 0x406550: 0x0  nop
    ctx->pc = 0x406550u;
    // NOP
label_406554:
    // 0x406554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x406554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_406558:
    // 0x406558: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_40655c:
    if (ctx->pc == 0x40655Cu) {
        ctx->pc = 0x406560u;
        goto label_406560;
    }
    ctx->pc = 0x406558u;
    {
        const bool branch_taken_0x406558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x406558) {
            ctx->pc = 0x40657Cu;
            goto label_40657c;
        }
    }
    ctx->pc = 0x406560u;
label_406560:
    // 0x406560: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x406560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_406564:
    // 0x406564: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
label_406568:
    if (ctx->pc == 0x406568u) {
        ctx->pc = 0x406568u;
            // 0x406568: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x40656Cu;
        goto label_40656c;
    }
    ctx->pc = 0x406564u;
    {
        const bool branch_taken_0x406564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x406564) {
            ctx->pc = 0x406568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406564u;
            // 0x406568: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4065F8u;
            goto label_4065f8;
        }
    }
    ctx->pc = 0x40656Cu;
label_40656c:
    // 0x40656c: 0x8e430d74  lw          $v1, 0xD74($s2)
    ctx->pc = 0x40656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_406570:
    // 0x406570: 0x906302c4  lbu         $v1, 0x2C4($v1)
    ctx->pc = 0x406570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 708)));
label_406574:
    // 0x406574: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_406578:
    if (ctx->pc == 0x406578u) {
        ctx->pc = 0x40657Cu;
        goto label_40657c;
    }
    ctx->pc = 0x406574u;
    {
        const bool branch_taken_0x406574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x406574) {
            ctx->pc = 0x4065F4u;
            goto label_4065f4;
        }
    }
    ctx->pc = 0x40657Cu;
label_40657c:
    // 0x40657c: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x40657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_406580:
    // 0x406580: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_406584:
    if (ctx->pc == 0x406584u) {
        ctx->pc = 0x406584u;
            // 0x406584: 0x8e650134  lw          $a1, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->pc = 0x406588u;
        goto label_406588;
    }
    ctx->pc = 0x406580u;
    {
        const bool branch_taken_0x406580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x406580) {
            ctx->pc = 0x406584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406580u;
            // 0x406584: 0x8e650134  lw          $a1, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40659Cu;
            goto label_40659c;
        }
    }
    ctx->pc = 0x406588u;
label_406588:
    // 0x406588: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x406588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40658c:
    // 0x40658c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x40658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_406590:
    // 0x406590: 0xc057b7c  jal         func_15EDF0
label_406594:
    if (ctx->pc == 0x406594u) {
        ctx->pc = 0x406594u;
            // 0x406594: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x406598u;
        goto label_406598;
    }
    ctx->pc = 0x406590u;
    SET_GPR_U32(ctx, 31, 0x406598u);
    ctx->pc = 0x406594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406590u;
            // 0x406594: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406598u; }
        if (ctx->pc != 0x406598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406598u; }
        if (ctx->pc != 0x406598u) { return; }
    }
    ctx->pc = 0x406598u;
label_406598:
    // 0x406598: 0x8e650134  lw          $a1, 0x134($s3)
    ctx->pc = 0x406598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_40659c:
    // 0x40659c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4065a0:
    if (ctx->pc == 0x4065A0u) {
        ctx->pc = 0x4065A0u;
            // 0x4065a0: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->pc = 0x4065A4u;
        goto label_4065a4;
    }
    ctx->pc = 0x40659Cu;
    {
        const bool branch_taken_0x40659c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x40659c) {
            ctx->pc = 0x4065A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40659Cu;
            // 0x4065a0: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4065B8u;
            goto label_4065b8;
        }
    }
    ctx->pc = 0x4065A4u;
label_4065a4:
    // 0x4065a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4065a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4065a8:
    // 0x4065a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4065a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4065ac:
    // 0x4065ac: 0xc057b7c  jal         func_15EDF0
label_4065b0:
    if (ctx->pc == 0x4065B0u) {
        ctx->pc = 0x4065B0u;
            // 0x4065b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4065B4u;
        goto label_4065b4;
    }
    ctx->pc = 0x4065ACu;
    SET_GPR_U32(ctx, 31, 0x4065B4u);
    ctx->pc = 0x4065B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4065ACu;
            // 0x4065b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065B4u; }
        if (ctx->pc != 0x4065B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065B4u; }
        if (ctx->pc != 0x4065B4u) { return; }
    }
    ctx->pc = 0x4065B4u;
label_4065b4:
    // 0x4065b4: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x4065b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_4065b8:
    // 0x4065b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4065b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4065bc:
    // 0x4065bc: 0xc04a576  jal         func_1295D8
label_4065c0:
    if (ctx->pc == 0x4065C0u) {
        ctx->pc = 0x4065C0u;
            // 0x4065c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4065C4u;
        goto label_4065c4;
    }
    ctx->pc = 0x4065BCu;
    SET_GPR_U32(ctx, 31, 0x4065C4u);
    ctx->pc = 0x4065C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4065BCu;
            // 0x4065c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065C4u; }
        if (ctx->pc != 0x4065C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065C4u; }
        if (ctx->pc != 0x4065C4u) { return; }
    }
    ctx->pc = 0x4065C4u;
label_4065c4:
    // 0x4065c4: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4065c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_4065c8:
    // 0x4065c8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4065cc:
    if (ctx->pc == 0x4065CCu) {
        ctx->pc = 0x4065CCu;
            // 0x4065cc: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x4065D0u;
        goto label_4065d0;
    }
    ctx->pc = 0x4065C8u;
    {
        const bool branch_taken_0x4065c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4065c8) {
            ctx->pc = 0x4065CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4065C8u;
            // 0x4065cc: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4065E4u;
            goto label_4065e4;
        }
    }
    ctx->pc = 0x4065D0u;
label_4065d0:
    // 0x4065d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4065d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4065d4:
    // 0x4065d4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4065d8:
    // 0x4065d8: 0xc057b7c  jal         func_15EDF0
label_4065dc:
    if (ctx->pc == 0x4065DCu) {
        ctx->pc = 0x4065DCu;
            // 0x4065dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4065E0u;
        goto label_4065e0;
    }
    ctx->pc = 0x4065D8u;
    SET_GPR_U32(ctx, 31, 0x4065E0u);
    ctx->pc = 0x4065DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4065D8u;
            // 0x4065dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065E0u; }
        if (ctx->pc != 0x4065E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4065E0u; }
        if (ctx->pc != 0x4065E0u) { return; }
    }
    ctx->pc = 0x4065E0u;
label_4065e0:
    // 0x4065e0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x4065e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_4065e4:
    // 0x4065e4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x4065e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_4065e8:
    // 0x4065e8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4065e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4065ec:
    // 0x4065ec: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4065ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4065f0:
    // 0x4065f0: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4065f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4065f4:
    // 0x4065f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4065f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4065f8:
    // 0x4065f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4065f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4065fc:
    // 0x4065fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4065fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_406600:
    // 0x406600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x406600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406604:
    // 0x406604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406608:
    // 0x406608: 0x3e00008  jr          $ra
label_40660c:
    if (ctx->pc == 0x40660Cu) {
        ctx->pc = 0x40660Cu;
            // 0x40660c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x406610u;
        goto label_406610;
    }
    ctx->pc = 0x406608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406608u;
            // 0x40660c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406610u;
label_406610:
    // 0x406610: 0x3e00008  jr          $ra
label_406614:
    if (ctx->pc == 0x406614u) {
        ctx->pc = 0x406618u;
        goto label_406618;
    }
    ctx->pc = 0x406610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406618u;
label_406618:
    // 0x406618: 0x0  nop
    ctx->pc = 0x406618u;
    // NOP
label_40661c:
    // 0x40661c: 0x0  nop
    ctx->pc = 0x40661cu;
    // NOP
label_406620:
    // 0x406620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x406620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_406624:
    // 0x406624: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x406624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_406628:
    // 0x406628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x406628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40662c:
    // 0x40662c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406630:
    // 0x406630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406634:
    // 0x406634: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x406634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_406638:
    // 0x406638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x406638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40663c:
    // 0x40663c: 0xc12ca3c  jal         func_4B28F0
label_406640:
    if (ctx->pc == 0x406640u) {
        ctx->pc = 0x406640u;
            // 0x406640: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x406644u;
        goto label_406644;
    }
    ctx->pc = 0x40663Cu;
    SET_GPR_U32(ctx, 31, 0x406644u);
    ctx->pc = 0x406640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40663Cu;
            // 0x406640: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406644u; }
        if (ctx->pc != 0x406644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406644u; }
        if (ctx->pc != 0x406644u) { return; }
    }
    ctx->pc = 0x406644u;
label_406644:
    // 0x406644: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x406644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_406648:
    // 0x406648: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_40664c:
    if (ctx->pc == 0x40664Cu) {
        ctx->pc = 0x40664Cu;
            // 0x40664c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x406650u;
        goto label_406650;
    }
    ctx->pc = 0x406648u;
    {
        const bool branch_taken_0x406648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406648u;
            // 0x40664c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406648) {
            ctx->pc = 0x4066A0u;
            goto label_4066a0;
        }
    }
    ctx->pc = 0x406650u;
label_406650:
    // 0x406650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x406650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_406654:
    // 0x406654: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x406654u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_406658:
    // 0x406658: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x406658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_40665c:
    // 0x40665c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x40665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_406660:
    // 0x406660: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x406660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_406664:
    // 0x406664: 0x26270f00  addiu       $a3, $s1, 0xF00
    ctx->pc = 0x406664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
label_406668:
    // 0x406668: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x406668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40666c:
    // 0x40666c: 0xc0bb0e8  jal         func_2EC3A0
label_406670:
    if (ctx->pc == 0x406670u) {
        ctx->pc = 0x406670u;
            // 0x406670: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x406674u;
        goto label_406674;
    }
    ctx->pc = 0x40666Cu;
    SET_GPR_U32(ctx, 31, 0x406674u);
    ctx->pc = 0x406670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40666Cu;
            // 0x406670: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406674u; }
        if (ctx->pc != 0x406674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406674u; }
        if (ctx->pc != 0x406674u) { return; }
    }
    ctx->pc = 0x406674u;
label_406674:
    // 0x406674: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x406674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
label_406678:
    // 0x406678: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x406678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_40667c:
    // 0x40667c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40667cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_406680:
    // 0x406680: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x406680u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_406684:
    // 0x406684: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x406684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_406688:
    // 0x406688: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x406688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_40668c:
    // 0x40668c: 0x26270ef0  addiu       $a3, $s1, 0xEF0
    ctx->pc = 0x40668cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3824));
label_406690:
    // 0x406690: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x406690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406694:
    // 0x406694: 0xc0bb0e8  jal         func_2EC3A0
label_406698:
    if (ctx->pc == 0x406698u) {
        ctx->pc = 0x406698u;
            // 0x406698: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40669Cu;
        goto label_40669c;
    }
    ctx->pc = 0x406694u;
    SET_GPR_U32(ctx, 31, 0x40669Cu);
    ctx->pc = 0x406698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406694u;
            // 0x406698: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40669Cu; }
        if (ctx->pc != 0x40669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40669Cu; }
        if (ctx->pc != 0x40669Cu) { return; }
    }
    ctx->pc = 0x40669Cu;
label_40669c:
    // 0x40669c: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x40669cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_4066a0:
    // 0x4066a0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4066a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4066a4:
    // 0x4066a4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_4066a8:
    if (ctx->pc == 0x4066A8u) {
        ctx->pc = 0x4066A8u;
            // 0x4066a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4066ACu;
        goto label_4066ac;
    }
    ctx->pc = 0x4066A4u;
    {
        const bool branch_taken_0x4066a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4066a4) {
            ctx->pc = 0x4066A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4066A4u;
            // 0x4066a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4066F8u;
            goto label_4066f8;
        }
    }
    ctx->pc = 0x4066ACu;
label_4066ac:
    // 0x4066ac: 0xc040180  jal         func_100600
label_4066b0:
    if (ctx->pc == 0x4066B0u) {
        ctx->pc = 0x4066B0u;
            // 0x4066b0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x4066B4u;
        goto label_4066b4;
    }
    ctx->pc = 0x4066ACu;
    SET_GPR_U32(ctx, 31, 0x4066B4u);
    ctx->pc = 0x4066B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4066ACu;
            // 0x4066b0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4066B4u; }
        if (ctx->pc != 0x4066B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4066B4u; }
        if (ctx->pc != 0x4066B4u) { return; }
    }
    ctx->pc = 0x4066B4u;
label_4066b4:
    // 0x4066b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4066b8:
    if (ctx->pc == 0x4066B8u) {
        ctx->pc = 0x4066B8u;
            // 0x4066b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4066BCu;
        goto label_4066bc;
    }
    ctx->pc = 0x4066B4u;
    {
        const bool branch_taken_0x4066b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4066B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4066B4u;
            // 0x4066b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4066b4) {
            ctx->pc = 0x4066F0u;
            goto label_4066f0;
        }
    }
    ctx->pc = 0x4066BCu;
label_4066bc:
    // 0x4066bc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4066bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4066c0:
    // 0x4066c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4066c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4066c4:
    // 0x4066c4: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x4066c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_4066c8:
    // 0x4066c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4066c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4066cc:
    // 0x4066cc: 0xc10ca68  jal         func_4329A0
label_4066d0:
    if (ctx->pc == 0x4066D0u) {
        ctx->pc = 0x4066D0u;
            // 0x4066d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4066D4u;
        goto label_4066d4;
    }
    ctx->pc = 0x4066CCu;
    SET_GPR_U32(ctx, 31, 0x4066D4u);
    ctx->pc = 0x4066D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4066CCu;
            // 0x4066d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4066D4u; }
        if (ctx->pc != 0x4066D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4066D4u; }
        if (ctx->pc != 0x4066D4u) { return; }
    }
    ctx->pc = 0x4066D4u;
label_4066d4:
    // 0x4066d4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4066d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4066d8:
    // 0x4066d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4066d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4066dc:
    // 0x4066dc: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x4066dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_4066e0:
    // 0x4066e0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x4066e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_4066e4:
    // 0x4066e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4066e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4066e8:
    // 0x4066e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4066e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4066ec:
    // 0x4066ec: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x4066ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_4066f0:
    // 0x4066f0: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x4066f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_4066f4:
    // 0x4066f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4066f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4066f8:
    // 0x4066f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4066f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4066fc:
    // 0x4066fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4066fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406700:
    // 0x406700: 0x3e00008  jr          $ra
label_406704:
    if (ctx->pc == 0x406704u) {
        ctx->pc = 0x406704u;
            // 0x406704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x406708u;
        goto label_406708;
    }
    ctx->pc = 0x406700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406700u;
            // 0x406704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406708u;
label_406708:
    // 0x406708: 0x0  nop
    ctx->pc = 0x406708u;
    // NOP
label_40670c:
    // 0x40670c: 0x0  nop
    ctx->pc = 0x40670cu;
    // NOP
label_406710:
    // 0x406710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x406710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_406714:
    // 0x406714: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x406714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_406718:
    // 0x406718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x406718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_40671c:
    // 0x40671c: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x40671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_406720:
    // 0x406720: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x406720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_406724:
    // 0x406724: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x406724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_406728:
    // 0x406728: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x406728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40672c:
    // 0x40672c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_406730:
    // 0x406730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x406730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_406734:
    // 0x406734: 0xc075728  jal         func_1D5CA0
label_406738:
    if (ctx->pc == 0x406738u) {
        ctx->pc = 0x406738u;
            // 0x406738: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x40673Cu;
        goto label_40673c;
    }
    ctx->pc = 0x406734u;
    SET_GPR_U32(ctx, 31, 0x40673Cu);
    ctx->pc = 0x406738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406734u;
            // 0x406738: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40673Cu; }
        if (ctx->pc != 0x40673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40673Cu; }
        if (ctx->pc != 0x40673Cu) { return; }
    }
    ctx->pc = 0x40673Cu;
label_40673c:
    // 0x40673c: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_406740:
    if (ctx->pc == 0x406740u) {
        ctx->pc = 0x406740u;
            // 0x406740: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x406744u;
        goto label_406744;
    }
    ctx->pc = 0x40673Cu;
    {
        const bool branch_taken_0x40673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40673c) {
            ctx->pc = 0x406740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40673Cu;
            // 0x406740: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406950u;
            goto label_406950;
        }
    }
    ctx->pc = 0x406744u;
label_406744:
    // 0x406744: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x406744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_406748:
    // 0x406748: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x406748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40674c:
    // 0x40674c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x40674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_406750:
    // 0x406750: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x406750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_406754:
    // 0x406754: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x406754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_406758:
    // 0x406758: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x406758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_40675c:
    // 0x40675c: 0xc6210dec  lwc1        $f1, 0xDEC($s1)
    ctx->pc = 0x40675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_406760:
    // 0x406760: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x406760u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_406764:
    // 0x406764: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x406764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_406768:
    // 0x406768: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x406768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40676c:
    // 0x40676c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_406770:
    // 0x406770: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x406770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_406774:
    // 0x406774: 0xc6220dbc  lwc1        $f2, 0xDBC($s1)
    ctx->pc = 0x406774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_406778:
    // 0x406778: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x406778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40677c:
    // 0x40677c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x40677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_406780:
    // 0x406780: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x406780u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_406784:
    // 0x406784: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x406784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_406788:
    // 0x406788: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x406788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_40678c:
    // 0x40678c: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x40678cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_406790:
    // 0x406790: 0x4604109c  madd.s      $f2, $f2, $f4
    ctx->pc = 0x406790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_406794:
    // 0x406794: 0xe6620024  swc1        $f2, 0x24($s3)
    ctx->pc = 0x406794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_406798:
    // 0x406798: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x406798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_40679c:
    // 0x40679c: 0xc6620138  lwc1        $f2, 0x138($s3)
    ctx->pc = 0x40679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4067a0:
    // 0x4067a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4067a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4067a4:
    // 0x4067a4: 0x3c034265  lui         $v1, 0x4265
    ctx->pc = 0x4067a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16997 << 16));
label_4067a8:
    // 0x4067a8: 0xc6240dbc  lwc1        $f4, 0xDBC($s1)
    ctx->pc = 0x4067a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4067ac:
    // 0x4067ac: 0x34642ee1  ori         $a0, $v1, 0x2EE1
    ctx->pc = 0x4067acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12001);
label_4067b0:
    // 0x4067b0: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x4067b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4067b4:
    // 0x4067b4: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x4067b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_4067b8:
    // 0x4067b8: 0x46023018  adda.s      $f6, $f2
    ctx->pc = 0x4067b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_4067bc:
    // 0x4067bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4067bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4067c0:
    // 0x4067c0: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x4067c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4067c4:
    // 0x4067c4: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x4067c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4067c8:
    // 0x4067c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4067c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4067cc:
    // 0x4067cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4067ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4067d0:
    // 0x4067d0: 0x0  nop
    ctx->pc = 0x4067d0u;
    // NOP
label_4067d4:
    // 0x4067d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4067d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4067d8:
    // 0x4067d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_4067dc:
    if (ctx->pc == 0x4067DCu) {
        ctx->pc = 0x4067DCu;
            // 0x4067dc: 0xe6620138  swc1        $f2, 0x138($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 312), bits); }
        ctx->pc = 0x4067E0u;
        goto label_4067e0;
    }
    ctx->pc = 0x4067D8u;
    {
        const bool branch_taken_0x4067d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4067DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4067D8u;
            // 0x4067dc: 0xe6620138  swc1        $f2, 0x138($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4067d8) {
            ctx->pc = 0x4067F8u;
            goto label_4067f8;
        }
    }
    ctx->pc = 0x4067E0u;
label_4067e0:
    // 0x4067e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4067e4:
    // 0x4067e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4067e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4067e8:
    // 0x4067e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4067e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4067ec:
    // 0x4067ec: 0x0  nop
    ctx->pc = 0x4067ecu;
    // NOP
label_4067f0:
    // 0x4067f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4067f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4067f4:
    // 0x4067f4: 0xe6600138  swc1        $f0, 0x138($s3)
    ctx->pc = 0x4067f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 312), bits); }
label_4067f8:
    // 0x4067f8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x4067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_4067fc:
    // 0x4067fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4067fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_406800:
    // 0x406800: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x406800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_406804:
    // 0x406804: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x406804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_406808:
    // 0x406808: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x406808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_40680c:
    // 0x40680c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x40680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_406810:
    // 0x406810: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x406810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_406814:
    // 0x406814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x406814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406818:
    // 0x406818: 0x0  nop
    ctx->pc = 0x406818u;
    // NOP
label_40681c:
    // 0x40681c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x40681cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_406820:
    // 0x406820: 0xc6240dec  lwc1        $f4, 0xDEC($s1)
    ctx->pc = 0x406820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_406824:
    // 0x406824: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x406824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_406828:
    // 0x406828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x406828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40682c:
    // 0x40682c: 0x46041d1d  msub.s      $f20, $f3, $f4
    ctx->pc = 0x40682cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_406830:
    // 0x406830: 0xc0477a8  jal         func_11DEA0
label_406834:
    if (ctx->pc == 0x406834u) {
        ctx->pc = 0x406834u;
            // 0x406834: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x406838u;
        goto label_406838;
    }
    ctx->pc = 0x406830u;
    SET_GPR_U32(ctx, 31, 0x406838u);
    ctx->pc = 0x406834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406830u;
            // 0x406834: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406838u; }
        if (ctx->pc != 0x406838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406838u; }
        if (ctx->pc != 0x406838u) { return; }
    }
    ctx->pc = 0x406838u;
label_406838:
    // 0x406838: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x406838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_40683c:
    // 0x40683c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x40683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406840:
    // 0x406840: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x406840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_406844:
    // 0x406844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x406844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_406848:
    // 0x406848: 0x0  nop
    ctx->pc = 0x406848u;
    // NOP
label_40684c:
    // 0x40684c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x40684cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_406850:
    // 0x406850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x406850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_406854:
    // 0x406854: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x406854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_406858:
    // 0x406858: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x406858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_40685c:
    // 0x40685c: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x40685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_406860:
    // 0x406860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x406860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_406864:
    // 0x406864: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x406864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_406868:
    // 0x406868: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x406868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_40686c:
    // 0x40686c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x40686cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_406870:
    // 0x406870: 0xc04cab0  jal         func_132AC0
label_406874:
    if (ctx->pc == 0x406874u) {
        ctx->pc = 0x406874u;
            // 0x406874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406878u;
        goto label_406878;
    }
    ctx->pc = 0x406870u;
    SET_GPR_U32(ctx, 31, 0x406878u);
    ctx->pc = 0x406874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406870u;
            // 0x406874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406878u; }
        if (ctx->pc != 0x406878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406878u; }
        if (ctx->pc != 0x406878u) { return; }
    }
    ctx->pc = 0x406878u;
label_406878:
    // 0x406878: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x406878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_40687c:
    // 0x40687c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406880:
    // 0x406880: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x406880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_406884:
    // 0x406884: 0x320f809  jalr        $t9
label_406888:
    if (ctx->pc == 0x406888u) {
        ctx->pc = 0x406888u;
            // 0x406888: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x40688Cu;
        goto label_40688c;
    }
    ctx->pc = 0x406884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40688Cu);
        ctx->pc = 0x406888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406884u;
            // 0x406888: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40688Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40688Cu; }
            if (ctx->pc != 0x40688Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40688Cu;
label_40688c:
    // 0x40688c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x40688cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_406890:
    // 0x406890: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x406890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_406894:
    // 0x406894: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x406894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_406898:
    // 0x406898: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x406898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_40689c:
    // 0x40689c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4068a0:
    // 0x4068a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4068a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4068a4:
    // 0x4068a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4068a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4068a8:
    // 0x4068a8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x4068a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4068ac:
    // 0x4068ac: 0xc04c72c  jal         func_131CB0
label_4068b0:
    if (ctx->pc == 0x4068B0u) {
        ctx->pc = 0x4068B0u;
            // 0x4068b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4068B4u;
        goto label_4068b4;
    }
    ctx->pc = 0x4068ACu;
    SET_GPR_U32(ctx, 31, 0x4068B4u);
    ctx->pc = 0x4068B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4068ACu;
            // 0x4068b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4068B4u; }
        if (ctx->pc != 0x4068B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4068B4u; }
        if (ctx->pc != 0x4068B4u) { return; }
    }
    ctx->pc = 0x4068B4u;
label_4068b4:
    // 0x4068b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4068b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4068b8:
    // 0x4068b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4068b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4068bc:
    // 0x4068bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4068bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4068c0:
    // 0x4068c0: 0xc6230dec  lwc1        $f3, 0xDEC($s1)
    ctx->pc = 0x4068c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4068c4:
    // 0x4068c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4068c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4068c8:
    // 0x4068c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4068c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4068cc:
    // 0x4068cc: 0x0  nop
    ctx->pc = 0x4068ccu;
    // NOP
label_4068d0:
    // 0x4068d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4068d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4068d4:
    // 0x4068d4: 0xc66c0138  lwc1        $f12, 0x138($s3)
    ctx->pc = 0x4068d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4068d8:
    // 0x4068d8: 0xc0477a8  jal         func_11DEA0
label_4068dc:
    if (ctx->pc == 0x4068DCu) {
        ctx->pc = 0x4068DCu;
            // 0x4068dc: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x4068E0u;
        goto label_4068e0;
    }
    ctx->pc = 0x4068D8u;
    SET_GPR_U32(ctx, 31, 0x4068E0u);
    ctx->pc = 0x4068DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4068D8u;
            // 0x4068dc: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4068E0u; }
        if (ctx->pc != 0x4068E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4068E0u; }
        if (ctx->pc != 0x4068E0u) { return; }
    }
    ctx->pc = 0x4068E0u;
label_4068e0:
    // 0x4068e0: 0x3c02452a  lui         $v0, 0x452A
    ctx->pc = 0x4068e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17706 << 16));
label_4068e4:
    // 0x4068e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4068e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4068e8:
    // 0x4068e8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x4068e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_4068ec:
    // 0x4068ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4068ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4068f0:
    // 0x4068f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4068f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4068f4:
    // 0x4068f4: 0x0  nop
    ctx->pc = 0x4068f4u;
    // NOP
label_4068f8:
    // 0x4068f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4068f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4068fc:
    // 0x4068fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4068fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_406900:
    // 0x406900: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x406900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_406904:
    // 0x406904: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x406904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_406908:
    // 0x406908: 0xc04cab0  jal         func_132AC0
label_40690c:
    if (ctx->pc == 0x40690Cu) {
        ctx->pc = 0x40690Cu;
            // 0x40690c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406910u;
        goto label_406910;
    }
    ctx->pc = 0x406908u;
    SET_GPR_U32(ctx, 31, 0x406910u);
    ctx->pc = 0x40690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406908u;
            // 0x40690c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406910u; }
        if (ctx->pc != 0x406910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406910u; }
        if (ctx->pc != 0x406910u) { return; }
    }
    ctx->pc = 0x406910u;
label_406910:
    // 0x406910: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x406910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_406914:
    // 0x406914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406918:
    // 0x406918: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x406918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40691c:
    // 0x40691c: 0x320f809  jalr        $t9
label_406920:
    if (ctx->pc == 0x406920u) {
        ctx->pc = 0x406920u;
            // 0x406920: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x406924u;
        goto label_406924;
    }
    ctx->pc = 0x40691Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406924u);
        ctx->pc = 0x406920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40691Cu;
            // 0x406920: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406924u; }
            if (ctx->pc != 0x406924u) { return; }
        }
        }
    }
    ctx->pc = 0x406924u;
label_406924:
    // 0x406924: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x406924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_406928:
    // 0x406928: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x406928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40692c:
    // 0x40692c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x40692cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_406930:
    // 0x406930: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x406930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_406934:
    // 0x406934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x406934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_406938:
    // 0x406938: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x406938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40693c:
    // 0x40693c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x40693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_406940:
    // 0x406940: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x406940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_406944:
    // 0x406944: 0xc04c72c  jal         func_131CB0
label_406948:
    if (ctx->pc == 0x406948u) {
        ctx->pc = 0x406948u;
            // 0x406948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40694Cu;
        goto label_40694c;
    }
    ctx->pc = 0x406944u;
    SET_GPR_U32(ctx, 31, 0x40694Cu);
    ctx->pc = 0x406948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406944u;
            // 0x406948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40694Cu; }
        if (ctx->pc != 0x40694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40694Cu; }
        if (ctx->pc != 0x40694Cu) { return; }
    }
    ctx->pc = 0x40694Cu;
label_40694c:
    // 0x40694c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_406950:
    // 0x406950: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x406950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_406954:
    // 0x406954: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x406954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_406958:
    // 0x406958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x406958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40695c:
    // 0x40695c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40695cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_406960:
    // 0x406960: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x406960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406964:
    // 0x406964: 0x3e00008  jr          $ra
label_406968:
    if (ctx->pc == 0x406968u) {
        ctx->pc = 0x406968u;
            // 0x406968: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40696Cu;
        goto label_40696c;
    }
    ctx->pc = 0x406964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406964u;
            // 0x406968: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40696Cu;
label_40696c:
    // 0x40696c: 0x0  nop
    ctx->pc = 0x40696cu;
    // NOP
}

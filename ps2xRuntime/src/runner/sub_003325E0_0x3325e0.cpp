#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003325E0
// Address: 0x3325e0 - 0x332cd0
void sub_003325E0_0x3325e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003325E0_0x3325e0");
#endif

    switch (ctx->pc) {
        case 0x3325e0u: goto label_3325e0;
        case 0x3325e4u: goto label_3325e4;
        case 0x3325e8u: goto label_3325e8;
        case 0x3325ecu: goto label_3325ec;
        case 0x3325f0u: goto label_3325f0;
        case 0x3325f4u: goto label_3325f4;
        case 0x3325f8u: goto label_3325f8;
        case 0x3325fcu: goto label_3325fc;
        case 0x332600u: goto label_332600;
        case 0x332604u: goto label_332604;
        case 0x332608u: goto label_332608;
        case 0x33260cu: goto label_33260c;
        case 0x332610u: goto label_332610;
        case 0x332614u: goto label_332614;
        case 0x332618u: goto label_332618;
        case 0x33261cu: goto label_33261c;
        case 0x332620u: goto label_332620;
        case 0x332624u: goto label_332624;
        case 0x332628u: goto label_332628;
        case 0x33262cu: goto label_33262c;
        case 0x332630u: goto label_332630;
        case 0x332634u: goto label_332634;
        case 0x332638u: goto label_332638;
        case 0x33263cu: goto label_33263c;
        case 0x332640u: goto label_332640;
        case 0x332644u: goto label_332644;
        case 0x332648u: goto label_332648;
        case 0x33264cu: goto label_33264c;
        case 0x332650u: goto label_332650;
        case 0x332654u: goto label_332654;
        case 0x332658u: goto label_332658;
        case 0x33265cu: goto label_33265c;
        case 0x332660u: goto label_332660;
        case 0x332664u: goto label_332664;
        case 0x332668u: goto label_332668;
        case 0x33266cu: goto label_33266c;
        case 0x332670u: goto label_332670;
        case 0x332674u: goto label_332674;
        case 0x332678u: goto label_332678;
        case 0x33267cu: goto label_33267c;
        case 0x332680u: goto label_332680;
        case 0x332684u: goto label_332684;
        case 0x332688u: goto label_332688;
        case 0x33268cu: goto label_33268c;
        case 0x332690u: goto label_332690;
        case 0x332694u: goto label_332694;
        case 0x332698u: goto label_332698;
        case 0x33269cu: goto label_33269c;
        case 0x3326a0u: goto label_3326a0;
        case 0x3326a4u: goto label_3326a4;
        case 0x3326a8u: goto label_3326a8;
        case 0x3326acu: goto label_3326ac;
        case 0x3326b0u: goto label_3326b0;
        case 0x3326b4u: goto label_3326b4;
        case 0x3326b8u: goto label_3326b8;
        case 0x3326bcu: goto label_3326bc;
        case 0x3326c0u: goto label_3326c0;
        case 0x3326c4u: goto label_3326c4;
        case 0x3326c8u: goto label_3326c8;
        case 0x3326ccu: goto label_3326cc;
        case 0x3326d0u: goto label_3326d0;
        case 0x3326d4u: goto label_3326d4;
        case 0x3326d8u: goto label_3326d8;
        case 0x3326dcu: goto label_3326dc;
        case 0x3326e0u: goto label_3326e0;
        case 0x3326e4u: goto label_3326e4;
        case 0x3326e8u: goto label_3326e8;
        case 0x3326ecu: goto label_3326ec;
        case 0x3326f0u: goto label_3326f0;
        case 0x3326f4u: goto label_3326f4;
        case 0x3326f8u: goto label_3326f8;
        case 0x3326fcu: goto label_3326fc;
        case 0x332700u: goto label_332700;
        case 0x332704u: goto label_332704;
        case 0x332708u: goto label_332708;
        case 0x33270cu: goto label_33270c;
        case 0x332710u: goto label_332710;
        case 0x332714u: goto label_332714;
        case 0x332718u: goto label_332718;
        case 0x33271cu: goto label_33271c;
        case 0x332720u: goto label_332720;
        case 0x332724u: goto label_332724;
        case 0x332728u: goto label_332728;
        case 0x33272cu: goto label_33272c;
        case 0x332730u: goto label_332730;
        case 0x332734u: goto label_332734;
        case 0x332738u: goto label_332738;
        case 0x33273cu: goto label_33273c;
        case 0x332740u: goto label_332740;
        case 0x332744u: goto label_332744;
        case 0x332748u: goto label_332748;
        case 0x33274cu: goto label_33274c;
        case 0x332750u: goto label_332750;
        case 0x332754u: goto label_332754;
        case 0x332758u: goto label_332758;
        case 0x33275cu: goto label_33275c;
        case 0x332760u: goto label_332760;
        case 0x332764u: goto label_332764;
        case 0x332768u: goto label_332768;
        case 0x33276cu: goto label_33276c;
        case 0x332770u: goto label_332770;
        case 0x332774u: goto label_332774;
        case 0x332778u: goto label_332778;
        case 0x33277cu: goto label_33277c;
        case 0x332780u: goto label_332780;
        case 0x332784u: goto label_332784;
        case 0x332788u: goto label_332788;
        case 0x33278cu: goto label_33278c;
        case 0x332790u: goto label_332790;
        case 0x332794u: goto label_332794;
        case 0x332798u: goto label_332798;
        case 0x33279cu: goto label_33279c;
        case 0x3327a0u: goto label_3327a0;
        case 0x3327a4u: goto label_3327a4;
        case 0x3327a8u: goto label_3327a8;
        case 0x3327acu: goto label_3327ac;
        case 0x3327b0u: goto label_3327b0;
        case 0x3327b4u: goto label_3327b4;
        case 0x3327b8u: goto label_3327b8;
        case 0x3327bcu: goto label_3327bc;
        case 0x3327c0u: goto label_3327c0;
        case 0x3327c4u: goto label_3327c4;
        case 0x3327c8u: goto label_3327c8;
        case 0x3327ccu: goto label_3327cc;
        case 0x3327d0u: goto label_3327d0;
        case 0x3327d4u: goto label_3327d4;
        case 0x3327d8u: goto label_3327d8;
        case 0x3327dcu: goto label_3327dc;
        case 0x3327e0u: goto label_3327e0;
        case 0x3327e4u: goto label_3327e4;
        case 0x3327e8u: goto label_3327e8;
        case 0x3327ecu: goto label_3327ec;
        case 0x3327f0u: goto label_3327f0;
        case 0x3327f4u: goto label_3327f4;
        case 0x3327f8u: goto label_3327f8;
        case 0x3327fcu: goto label_3327fc;
        case 0x332800u: goto label_332800;
        case 0x332804u: goto label_332804;
        case 0x332808u: goto label_332808;
        case 0x33280cu: goto label_33280c;
        case 0x332810u: goto label_332810;
        case 0x332814u: goto label_332814;
        case 0x332818u: goto label_332818;
        case 0x33281cu: goto label_33281c;
        case 0x332820u: goto label_332820;
        case 0x332824u: goto label_332824;
        case 0x332828u: goto label_332828;
        case 0x33282cu: goto label_33282c;
        case 0x332830u: goto label_332830;
        case 0x332834u: goto label_332834;
        case 0x332838u: goto label_332838;
        case 0x33283cu: goto label_33283c;
        case 0x332840u: goto label_332840;
        case 0x332844u: goto label_332844;
        case 0x332848u: goto label_332848;
        case 0x33284cu: goto label_33284c;
        case 0x332850u: goto label_332850;
        case 0x332854u: goto label_332854;
        case 0x332858u: goto label_332858;
        case 0x33285cu: goto label_33285c;
        case 0x332860u: goto label_332860;
        case 0x332864u: goto label_332864;
        case 0x332868u: goto label_332868;
        case 0x33286cu: goto label_33286c;
        case 0x332870u: goto label_332870;
        case 0x332874u: goto label_332874;
        case 0x332878u: goto label_332878;
        case 0x33287cu: goto label_33287c;
        case 0x332880u: goto label_332880;
        case 0x332884u: goto label_332884;
        case 0x332888u: goto label_332888;
        case 0x33288cu: goto label_33288c;
        case 0x332890u: goto label_332890;
        case 0x332894u: goto label_332894;
        case 0x332898u: goto label_332898;
        case 0x33289cu: goto label_33289c;
        case 0x3328a0u: goto label_3328a0;
        case 0x3328a4u: goto label_3328a4;
        case 0x3328a8u: goto label_3328a8;
        case 0x3328acu: goto label_3328ac;
        case 0x3328b0u: goto label_3328b0;
        case 0x3328b4u: goto label_3328b4;
        case 0x3328b8u: goto label_3328b8;
        case 0x3328bcu: goto label_3328bc;
        case 0x3328c0u: goto label_3328c0;
        case 0x3328c4u: goto label_3328c4;
        case 0x3328c8u: goto label_3328c8;
        case 0x3328ccu: goto label_3328cc;
        case 0x3328d0u: goto label_3328d0;
        case 0x3328d4u: goto label_3328d4;
        case 0x3328d8u: goto label_3328d8;
        case 0x3328dcu: goto label_3328dc;
        case 0x3328e0u: goto label_3328e0;
        case 0x3328e4u: goto label_3328e4;
        case 0x3328e8u: goto label_3328e8;
        case 0x3328ecu: goto label_3328ec;
        case 0x3328f0u: goto label_3328f0;
        case 0x3328f4u: goto label_3328f4;
        case 0x3328f8u: goto label_3328f8;
        case 0x3328fcu: goto label_3328fc;
        case 0x332900u: goto label_332900;
        case 0x332904u: goto label_332904;
        case 0x332908u: goto label_332908;
        case 0x33290cu: goto label_33290c;
        case 0x332910u: goto label_332910;
        case 0x332914u: goto label_332914;
        case 0x332918u: goto label_332918;
        case 0x33291cu: goto label_33291c;
        case 0x332920u: goto label_332920;
        case 0x332924u: goto label_332924;
        case 0x332928u: goto label_332928;
        case 0x33292cu: goto label_33292c;
        case 0x332930u: goto label_332930;
        case 0x332934u: goto label_332934;
        case 0x332938u: goto label_332938;
        case 0x33293cu: goto label_33293c;
        case 0x332940u: goto label_332940;
        case 0x332944u: goto label_332944;
        case 0x332948u: goto label_332948;
        case 0x33294cu: goto label_33294c;
        case 0x332950u: goto label_332950;
        case 0x332954u: goto label_332954;
        case 0x332958u: goto label_332958;
        case 0x33295cu: goto label_33295c;
        case 0x332960u: goto label_332960;
        case 0x332964u: goto label_332964;
        case 0x332968u: goto label_332968;
        case 0x33296cu: goto label_33296c;
        case 0x332970u: goto label_332970;
        case 0x332974u: goto label_332974;
        case 0x332978u: goto label_332978;
        case 0x33297cu: goto label_33297c;
        case 0x332980u: goto label_332980;
        case 0x332984u: goto label_332984;
        case 0x332988u: goto label_332988;
        case 0x33298cu: goto label_33298c;
        case 0x332990u: goto label_332990;
        case 0x332994u: goto label_332994;
        case 0x332998u: goto label_332998;
        case 0x33299cu: goto label_33299c;
        case 0x3329a0u: goto label_3329a0;
        case 0x3329a4u: goto label_3329a4;
        case 0x3329a8u: goto label_3329a8;
        case 0x3329acu: goto label_3329ac;
        case 0x3329b0u: goto label_3329b0;
        case 0x3329b4u: goto label_3329b4;
        case 0x3329b8u: goto label_3329b8;
        case 0x3329bcu: goto label_3329bc;
        case 0x3329c0u: goto label_3329c0;
        case 0x3329c4u: goto label_3329c4;
        case 0x3329c8u: goto label_3329c8;
        case 0x3329ccu: goto label_3329cc;
        case 0x3329d0u: goto label_3329d0;
        case 0x3329d4u: goto label_3329d4;
        case 0x3329d8u: goto label_3329d8;
        case 0x3329dcu: goto label_3329dc;
        case 0x3329e0u: goto label_3329e0;
        case 0x3329e4u: goto label_3329e4;
        case 0x3329e8u: goto label_3329e8;
        case 0x3329ecu: goto label_3329ec;
        case 0x3329f0u: goto label_3329f0;
        case 0x3329f4u: goto label_3329f4;
        case 0x3329f8u: goto label_3329f8;
        case 0x3329fcu: goto label_3329fc;
        case 0x332a00u: goto label_332a00;
        case 0x332a04u: goto label_332a04;
        case 0x332a08u: goto label_332a08;
        case 0x332a0cu: goto label_332a0c;
        case 0x332a10u: goto label_332a10;
        case 0x332a14u: goto label_332a14;
        case 0x332a18u: goto label_332a18;
        case 0x332a1cu: goto label_332a1c;
        case 0x332a20u: goto label_332a20;
        case 0x332a24u: goto label_332a24;
        case 0x332a28u: goto label_332a28;
        case 0x332a2cu: goto label_332a2c;
        case 0x332a30u: goto label_332a30;
        case 0x332a34u: goto label_332a34;
        case 0x332a38u: goto label_332a38;
        case 0x332a3cu: goto label_332a3c;
        case 0x332a40u: goto label_332a40;
        case 0x332a44u: goto label_332a44;
        case 0x332a48u: goto label_332a48;
        case 0x332a4cu: goto label_332a4c;
        case 0x332a50u: goto label_332a50;
        case 0x332a54u: goto label_332a54;
        case 0x332a58u: goto label_332a58;
        case 0x332a5cu: goto label_332a5c;
        case 0x332a60u: goto label_332a60;
        case 0x332a64u: goto label_332a64;
        case 0x332a68u: goto label_332a68;
        case 0x332a6cu: goto label_332a6c;
        case 0x332a70u: goto label_332a70;
        case 0x332a74u: goto label_332a74;
        case 0x332a78u: goto label_332a78;
        case 0x332a7cu: goto label_332a7c;
        case 0x332a80u: goto label_332a80;
        case 0x332a84u: goto label_332a84;
        case 0x332a88u: goto label_332a88;
        case 0x332a8cu: goto label_332a8c;
        case 0x332a90u: goto label_332a90;
        case 0x332a94u: goto label_332a94;
        case 0x332a98u: goto label_332a98;
        case 0x332a9cu: goto label_332a9c;
        case 0x332aa0u: goto label_332aa0;
        case 0x332aa4u: goto label_332aa4;
        case 0x332aa8u: goto label_332aa8;
        case 0x332aacu: goto label_332aac;
        case 0x332ab0u: goto label_332ab0;
        case 0x332ab4u: goto label_332ab4;
        case 0x332ab8u: goto label_332ab8;
        case 0x332abcu: goto label_332abc;
        case 0x332ac0u: goto label_332ac0;
        case 0x332ac4u: goto label_332ac4;
        case 0x332ac8u: goto label_332ac8;
        case 0x332accu: goto label_332acc;
        case 0x332ad0u: goto label_332ad0;
        case 0x332ad4u: goto label_332ad4;
        case 0x332ad8u: goto label_332ad8;
        case 0x332adcu: goto label_332adc;
        case 0x332ae0u: goto label_332ae0;
        case 0x332ae4u: goto label_332ae4;
        case 0x332ae8u: goto label_332ae8;
        case 0x332aecu: goto label_332aec;
        case 0x332af0u: goto label_332af0;
        case 0x332af4u: goto label_332af4;
        case 0x332af8u: goto label_332af8;
        case 0x332afcu: goto label_332afc;
        case 0x332b00u: goto label_332b00;
        case 0x332b04u: goto label_332b04;
        case 0x332b08u: goto label_332b08;
        case 0x332b0cu: goto label_332b0c;
        case 0x332b10u: goto label_332b10;
        case 0x332b14u: goto label_332b14;
        case 0x332b18u: goto label_332b18;
        case 0x332b1cu: goto label_332b1c;
        case 0x332b20u: goto label_332b20;
        case 0x332b24u: goto label_332b24;
        case 0x332b28u: goto label_332b28;
        case 0x332b2cu: goto label_332b2c;
        case 0x332b30u: goto label_332b30;
        case 0x332b34u: goto label_332b34;
        case 0x332b38u: goto label_332b38;
        case 0x332b3cu: goto label_332b3c;
        case 0x332b40u: goto label_332b40;
        case 0x332b44u: goto label_332b44;
        case 0x332b48u: goto label_332b48;
        case 0x332b4cu: goto label_332b4c;
        case 0x332b50u: goto label_332b50;
        case 0x332b54u: goto label_332b54;
        case 0x332b58u: goto label_332b58;
        case 0x332b5cu: goto label_332b5c;
        case 0x332b60u: goto label_332b60;
        case 0x332b64u: goto label_332b64;
        case 0x332b68u: goto label_332b68;
        case 0x332b6cu: goto label_332b6c;
        case 0x332b70u: goto label_332b70;
        case 0x332b74u: goto label_332b74;
        case 0x332b78u: goto label_332b78;
        case 0x332b7cu: goto label_332b7c;
        case 0x332b80u: goto label_332b80;
        case 0x332b84u: goto label_332b84;
        case 0x332b88u: goto label_332b88;
        case 0x332b8cu: goto label_332b8c;
        case 0x332b90u: goto label_332b90;
        case 0x332b94u: goto label_332b94;
        case 0x332b98u: goto label_332b98;
        case 0x332b9cu: goto label_332b9c;
        case 0x332ba0u: goto label_332ba0;
        case 0x332ba4u: goto label_332ba4;
        case 0x332ba8u: goto label_332ba8;
        case 0x332bacu: goto label_332bac;
        case 0x332bb0u: goto label_332bb0;
        case 0x332bb4u: goto label_332bb4;
        case 0x332bb8u: goto label_332bb8;
        case 0x332bbcu: goto label_332bbc;
        case 0x332bc0u: goto label_332bc0;
        case 0x332bc4u: goto label_332bc4;
        case 0x332bc8u: goto label_332bc8;
        case 0x332bccu: goto label_332bcc;
        case 0x332bd0u: goto label_332bd0;
        case 0x332bd4u: goto label_332bd4;
        case 0x332bd8u: goto label_332bd8;
        case 0x332bdcu: goto label_332bdc;
        case 0x332be0u: goto label_332be0;
        case 0x332be4u: goto label_332be4;
        case 0x332be8u: goto label_332be8;
        case 0x332becu: goto label_332bec;
        case 0x332bf0u: goto label_332bf0;
        case 0x332bf4u: goto label_332bf4;
        case 0x332bf8u: goto label_332bf8;
        case 0x332bfcu: goto label_332bfc;
        case 0x332c00u: goto label_332c00;
        case 0x332c04u: goto label_332c04;
        case 0x332c08u: goto label_332c08;
        case 0x332c0cu: goto label_332c0c;
        case 0x332c10u: goto label_332c10;
        case 0x332c14u: goto label_332c14;
        case 0x332c18u: goto label_332c18;
        case 0x332c1cu: goto label_332c1c;
        case 0x332c20u: goto label_332c20;
        case 0x332c24u: goto label_332c24;
        case 0x332c28u: goto label_332c28;
        case 0x332c2cu: goto label_332c2c;
        case 0x332c30u: goto label_332c30;
        case 0x332c34u: goto label_332c34;
        case 0x332c38u: goto label_332c38;
        case 0x332c3cu: goto label_332c3c;
        case 0x332c40u: goto label_332c40;
        case 0x332c44u: goto label_332c44;
        case 0x332c48u: goto label_332c48;
        case 0x332c4cu: goto label_332c4c;
        case 0x332c50u: goto label_332c50;
        case 0x332c54u: goto label_332c54;
        case 0x332c58u: goto label_332c58;
        case 0x332c5cu: goto label_332c5c;
        case 0x332c60u: goto label_332c60;
        case 0x332c64u: goto label_332c64;
        case 0x332c68u: goto label_332c68;
        case 0x332c6cu: goto label_332c6c;
        case 0x332c70u: goto label_332c70;
        case 0x332c74u: goto label_332c74;
        case 0x332c78u: goto label_332c78;
        case 0x332c7cu: goto label_332c7c;
        case 0x332c80u: goto label_332c80;
        case 0x332c84u: goto label_332c84;
        case 0x332c88u: goto label_332c88;
        case 0x332c8cu: goto label_332c8c;
        case 0x332c90u: goto label_332c90;
        case 0x332c94u: goto label_332c94;
        case 0x332c98u: goto label_332c98;
        case 0x332c9cu: goto label_332c9c;
        case 0x332ca0u: goto label_332ca0;
        case 0x332ca4u: goto label_332ca4;
        case 0x332ca8u: goto label_332ca8;
        case 0x332cacu: goto label_332cac;
        case 0x332cb0u: goto label_332cb0;
        case 0x332cb4u: goto label_332cb4;
        case 0x332cb8u: goto label_332cb8;
        case 0x332cbcu: goto label_332cbc;
        case 0x332cc0u: goto label_332cc0;
        case 0x332cc4u: goto label_332cc4;
        case 0x332cc8u: goto label_332cc8;
        case 0x332cccu: goto label_332ccc;
        default: break;
    }

    ctx->pc = 0x3325e0u;

label_3325e0:
    // 0x3325e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3325e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3325e4:
    // 0x3325e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3325e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3325e8:
    // 0x3325e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3325e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3325ec:
    // 0x3325ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3325ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3325f0:
    // 0x3325f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3325f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3325f4:
    // 0x3325f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3325f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3325f8:
    // 0x3325f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3325f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3325fc:
    // 0x3325fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3325fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_332600:
    // 0x332600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x332600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_332604:
    // 0x332604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332608:
    // 0x332608: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x332608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33260c:
    // 0x33260c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x33260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_332610:
    // 0x332610: 0x8044007a  lb          $a0, 0x7A($v0)
    ctx->pc = 0x332610u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_332614:
    // 0x332614: 0x50830039  beql        $a0, $v1, . + 4 + (0x39 << 2)
label_332618:
    if (ctx->pc == 0x332618u) {
        ctx->pc = 0x332618u;
            // 0x332618: 0x90430078  lbu         $v1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->pc = 0x33261Cu;
        goto label_33261c;
    }
    ctx->pc = 0x332614u;
    {
        const bool branch_taken_0x332614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332614) {
            ctx->pc = 0x332618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332614u;
            // 0x332618: 0x90430078  lbu         $v1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3326FCu;
            goto label_3326fc;
        }
    }
    ctx->pc = 0x33261Cu;
label_33261c:
    // 0x33261c: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x33261cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
label_332620:
    // 0x332620: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x332620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_332624:
    // 0x332624: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_332628:
    if (ctx->pc == 0x332628u) {
        ctx->pc = 0x332628u;
            // 0x332628: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x33262Cu;
        goto label_33262c;
    }
    ctx->pc = 0x332624u;
    {
        const bool branch_taken_0x332624 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x332624) {
            ctx->pc = 0x332628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332624u;
            // 0x332628: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332638u;
            goto label_332638;
        }
    }
    ctx->pc = 0x33262Cu;
label_33262c:
    // 0x33262c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33262cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332630:
    // 0x332630: 0x10000007  b           . + 4 + (0x7 << 2)
label_332634:
    if (ctx->pc == 0x332634u) {
        ctx->pc = 0x332634u;
            // 0x332634: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x332638u;
        goto label_332638;
    }
    ctx->pc = 0x332630u;
    {
        const bool branch_taken_0x332630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332630u;
            // 0x332634: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x332630) {
            ctx->pc = 0x332650u;
            goto label_332650;
        }
    }
    ctx->pc = 0x332638u;
label_332638:
    // 0x332638: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x332638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33263c:
    // 0x33263c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33263cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_332640:
    // 0x332640: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332644:
    // 0x332644: 0x0  nop
    ctx->pc = 0x332644u;
    // NOP
label_332648:
    // 0x332648: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x332648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_33264c:
    // 0x33264c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x33264cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_332650:
    // 0x332650: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x332650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_332654:
    // 0x332654: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_332658:
    // 0x332658: 0x0  nop
    ctx->pc = 0x332658u;
    // NOP
label_33265c:
    // 0x33265c: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x33265cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_332660:
    // 0x332660: 0x3c034682  lui         $v1, 0x4682
    ctx->pc = 0x332660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18050 << 16));
label_332664:
    // 0x332664: 0x34643555  ori         $a0, $v1, 0x3555
    ctx->pc = 0x332664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13653);
label_332668:
    // 0x332668: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_33266c:
    // 0x33266c: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x33266cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_332670:
    // 0x332670: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x332670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_332674:
    // 0x332674: 0xe4430018  swc1        $f3, 0x18($v0)
    ctx->pc = 0x332674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_332678:
    // 0x332678: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x332678u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_33267c:
    // 0x33267c: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x33267cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_332680:
    // 0x332680: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x332680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_332684:
    // 0x332684: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x332684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_332688:
    // 0x332688: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x332688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_33268c:
    // 0x33268c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x33268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_332690:
    // 0x332690: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x332690u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_332694:
    // 0x332694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332698:
    // 0x332698: 0x0  nop
    ctx->pc = 0x332698u;
    // NOP
label_33269c:
    // 0x33269c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x33269cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3326a0:
    // 0x3326a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3326a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3326a4:
    // 0x3326a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3326a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3326a8:
    // 0x3326a8: 0x0  nop
    ctx->pc = 0x3326a8u;
    // NOP
label_3326ac:
    // 0x3326ac: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x3326acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_3326b0:
    // 0x3326b0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x3326b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3326b4:
    // 0x3326b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3326b8:
    if (ctx->pc == 0x3326B8u) {
        ctx->pc = 0x3326B8u;
            // 0x3326b8: 0x90450078  lbu         $a1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->pc = 0x3326BCu;
        goto label_3326bc;
    }
    ctx->pc = 0x3326B4u;
    {
        const bool branch_taken_0x3326b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3326B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3326B4u;
            // 0x3326b8: 0x90450078  lbu         $a1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326b4) {
            ctx->pc = 0x3326CCu;
            goto label_3326cc;
        }
    }
    ctx->pc = 0x3326BCu;
label_3326bc:
    // 0x3326bc: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3326bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3326c0:
    // 0x3326c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3326c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3326c4:
    // 0x3326c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3326c8:
    if (ctx->pc == 0x3326C8u) {
        ctx->pc = 0x3326C8u;
            // 0x3326c8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3326CCu;
        goto label_3326cc;
    }
    ctx->pc = 0x3326C4u;
    {
        const bool branch_taken_0x3326c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3326C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3326C4u;
            // 0x3326c8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326c4) {
            ctx->pc = 0x3326E8u;
            goto label_3326e8;
        }
    }
    ctx->pc = 0x3326CCu;
label_3326cc:
    // 0x3326cc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3326ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3326d0:
    // 0x3326d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3326d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3326d4:
    // 0x3326d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3326d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3326d8:
    // 0x3326d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3326d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3326dc:
    // 0x3326dc: 0x0  nop
    ctx->pc = 0x3326dcu;
    // NOP
label_3326e0:
    // 0x3326e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3326e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3326e4:
    // 0x3326e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3326e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3326e8:
    // 0x3326e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3326e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3326ec:
    // 0x3326ec: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x3326ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3326f0:
    // 0x3326f0: 0x1812  mflo        $v1
    ctx->pc = 0x3326f0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3326f4:
    // 0x3326f4: 0x10000036  b           . + 4 + (0x36 << 2)
label_3326f8:
    if (ctx->pc == 0x3326F8u) {
        ctx->pc = 0x3326F8u;
            // 0x3326f8: 0xa0430079  sb          $v1, 0x79($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3326FCu;
        goto label_3326fc;
    }
    ctx->pc = 0x3326F4u;
    {
        const bool branch_taken_0x3326f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3326F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3326F4u;
            // 0x3326f8: 0xa0430079  sb          $v1, 0x79($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326f4) {
            ctx->pc = 0x3327D0u;
            goto label_3327d0;
        }
    }
    ctx->pc = 0x3326FCu;
label_3326fc:
    // 0x3326fc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_332700:
    if (ctx->pc == 0x332700u) {
        ctx->pc = 0x332700u;
            // 0x332700: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x332704u;
        goto label_332704;
    }
    ctx->pc = 0x3326FCu;
    {
        const bool branch_taken_0x3326fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3326fc) {
            ctx->pc = 0x332700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3326FCu;
            // 0x332700: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332710u;
            goto label_332710;
        }
    }
    ctx->pc = 0x332704u;
label_332704:
    // 0x332704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332708:
    // 0x332708: 0x10000007  b           . + 4 + (0x7 << 2)
label_33270c:
    if (ctx->pc == 0x33270Cu) {
        ctx->pc = 0x33270Cu;
            // 0x33270c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x332710u;
        goto label_332710;
    }
    ctx->pc = 0x332708u;
    {
        const bool branch_taken_0x332708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332708u;
            // 0x33270c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x332708) {
            ctx->pc = 0x332728u;
            goto label_332728;
        }
    }
    ctx->pc = 0x332710u;
label_332710:
    // 0x332710: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x332710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_332714:
    // 0x332714: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_332718:
    // 0x332718: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33271c:
    // 0x33271c: 0x0  nop
    ctx->pc = 0x33271cu;
    // NOP
label_332720:
    // 0x332720: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x332720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_332724:
    // 0x332724: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x332724u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_332728:
    // 0x332728: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x332728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_33272c:
    // 0x33272c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33272cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_332730:
    // 0x332730: 0x0  nop
    ctx->pc = 0x332730u;
    // NOP
label_332734:
    // 0x332734: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x332734u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
label_332738:
    // 0x332738: 0x3c034682  lui         $v1, 0x4682
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18050 << 16));
label_33273c:
    // 0x33273c: 0x34643555  ori         $a0, $v1, 0x3555
    ctx->pc = 0x33273cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13653);
label_332740:
    // 0x332740: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x332740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_332744:
    // 0x332744: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x332744u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_332748:
    // 0x332748: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x332748u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_33274c:
    // 0x33274c: 0xe4430018  swc1        $f3, 0x18($v0)
    ctx->pc = 0x33274cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_332750:
    // 0x332750: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x332750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_332754:
    // 0x332754: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x332754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_332758:
    // 0x332758: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x332758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_33275c:
    // 0x33275c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x33275cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_332760:
    // 0x332760: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x332760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_332764:
    // 0x332764: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x332764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_332768:
    // 0x332768: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x332768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_33276c:
    // 0x33276c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33276cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332770:
    // 0x332770: 0x0  nop
    ctx->pc = 0x332770u;
    // NOP
label_332774:
    // 0x332774: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x332774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_332778:
    // 0x332778: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33277c:
    // 0x33277c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33277cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_332780:
    // 0x332780: 0x0  nop
    ctx->pc = 0x332780u;
    // NOP
label_332784:
    // 0x332784: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x332784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_332788:
    // 0x332788: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x332788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33278c:
    // 0x33278c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_332790:
    if (ctx->pc == 0x332790u) {
        ctx->pc = 0x332790u;
            // 0x332790: 0x90450078  lbu         $a1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->pc = 0x332794u;
        goto label_332794;
    }
    ctx->pc = 0x33278Cu;
    {
        const bool branch_taken_0x33278c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x332790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33278Cu;
            // 0x332790: 0x90450078  lbu         $a1, 0x78($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33278c) {
            ctx->pc = 0x3327A4u;
            goto label_3327a4;
        }
    }
    ctx->pc = 0x332794u;
label_332794:
    // 0x332794: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_332798:
    // 0x332798: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x332798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33279c:
    // 0x33279c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3327a0:
    if (ctx->pc == 0x3327A0u) {
        ctx->pc = 0x3327A0u;
            // 0x3327a0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3327A4u;
        goto label_3327a4;
    }
    ctx->pc = 0x33279Cu;
    {
        const bool branch_taken_0x33279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3327A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33279Cu;
            // 0x3327a0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33279c) {
            ctx->pc = 0x3327C0u;
            goto label_3327c0;
        }
    }
    ctx->pc = 0x3327A4u;
label_3327a4:
    // 0x3327a4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3327a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3327a8:
    // 0x3327a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3327a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3327ac:
    // 0x3327ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3327acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3327b0:
    // 0x3327b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3327b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3327b4:
    // 0x3327b4: 0x0  nop
    ctx->pc = 0x3327b4u;
    // NOP
label_3327b8:
    // 0x3327b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3327b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3327bc:
    // 0x3327bc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3327bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3327c0:
    // 0x3327c0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3327c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3327c4:
    // 0x3327c4: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x3327c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3327c8:
    // 0x3327c8: 0x1812  mflo        $v1
    ctx->pc = 0x3327c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3327cc:
    // 0x3327cc: 0xa0430079  sb          $v1, 0x79($v0)
    ctx->pc = 0x3327ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 3));
label_3327d0:
    // 0x3327d0: 0xc075214  jal         func_1D4850
label_3327d4:
    if (ctx->pc == 0x3327D4u) {
        ctx->pc = 0x3327D8u;
        goto label_3327d8;
    }
    ctx->pc = 0x3327D0u;
    SET_GPR_U32(ctx, 31, 0x3327D8u);
    ctx->pc = 0x1D4850u;
    if (runtime->hasFunction(0x1D4850u)) {
        auto targetFn = runtime->lookupFunction(0x1D4850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3327D8u; }
        if (ctx->pc != 0x3327D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4850_0x1d4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3327D8u; }
        if (ctx->pc != 0x3327D8u) { return; }
    }
    ctx->pc = 0x3327D8u;
label_3327d8:
    // 0x3327d8: 0xc0cc0cc  jal         func_330330
label_3327dc:
    if (ctx->pc == 0x3327DCu) {
        ctx->pc = 0x3327DCu;
            // 0x3327dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3327E0u;
        goto label_3327e0;
    }
    ctx->pc = 0x3327D8u;
    SET_GPR_U32(ctx, 31, 0x3327E0u);
    ctx->pc = 0x3327DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3327D8u;
            // 0x3327dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330330u;
    if (runtime->hasFunction(0x330330u)) {
        auto targetFn = runtime->lookupFunction(0x330330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3327E0u; }
        if (ctx->pc != 0x3327E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330330_0x330330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3327E0u; }
        if (ctx->pc != 0x3327E0u) { return; }
    }
    ctx->pc = 0x3327E0u;
label_3327e0:
    // 0x3327e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3327e4:
    // 0x3327e4: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x3327e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_3327e8:
    // 0x3327e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3327e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3327ec:
    // 0x3327ec: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3327ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3327f0:
    // 0x3327f0: 0x320f809  jalr        $t9
label_3327f4:
    if (ctx->pc == 0x3327F4u) {
        ctx->pc = 0x3327F4u;
            // 0x3327f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3327F8u;
        goto label_3327f8;
    }
    ctx->pc = 0x3327F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3327F8u);
        ctx->pc = 0x3327F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3327F0u;
            // 0x3327f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3327F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3327F8u; }
            if (ctx->pc != 0x3327F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3327F8u;
label_3327f8:
    // 0x3327f8: 0xc040180  jal         func_100600
label_3327fc:
    if (ctx->pc == 0x3327FCu) {
        ctx->pc = 0x3327FCu;
            // 0x3327fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x332800u;
        goto label_332800;
    }
    ctx->pc = 0x3327F8u;
    SET_GPR_U32(ctx, 31, 0x332800u);
    ctx->pc = 0x3327FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3327F8u;
            // 0x3327fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332800u; }
        if (ctx->pc != 0x332800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332800u; }
        if (ctx->pc != 0x332800u) { return; }
    }
    ctx->pc = 0x332800u;
label_332800:
    // 0x332800: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_332804:
    if (ctx->pc == 0x332804u) {
        ctx->pc = 0x332804u;
            // 0x332804: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332808u;
        goto label_332808;
    }
    ctx->pc = 0x332800u;
    {
        const bool branch_taken_0x332800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332800u;
            // 0x332804: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332800) {
            ctx->pc = 0x332868u;
            goto label_332868;
        }
    }
    ctx->pc = 0x332808u;
label_332808:
    // 0x332808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33280c:
    // 0x33280c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332810:
    // 0x332810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332814:
    // 0x332814: 0xc10ca68  jal         func_4329A0
label_332818:
    if (ctx->pc == 0x332818u) {
        ctx->pc = 0x332818u;
            // 0x332818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33281Cu;
        goto label_33281c;
    }
    ctx->pc = 0x332814u;
    SET_GPR_U32(ctx, 31, 0x33281Cu);
    ctx->pc = 0x332818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332814u;
            // 0x332818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33281Cu; }
        if (ctx->pc != 0x33281Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33281Cu; }
        if (ctx->pc != 0x33281Cu) { return; }
    }
    ctx->pc = 0x33281Cu;
label_33281c:
    // 0x33281c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332820:
    // 0x332820: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332824:
    // 0x332824: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_332828:
    // 0x332828: 0x244231f0  addiu       $v0, $v0, 0x31F0
    ctx->pc = 0x332828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12784));
label_33282c:
    // 0x33282c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33282cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_332830:
    // 0x332830: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x332830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_332834:
    // 0x332834: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_332838:
    // 0x332838: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x332838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_33283c:
    // 0x33283c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332840:
    // 0x332840: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x332840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_332844:
    // 0x332844: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x332844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_332848:
    // 0x332848: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x332848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_33284c:
    // 0x33284c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x33284cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_332850:
    // 0x332850: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x332850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_332854:
    // 0x332854: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x332854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_332858:
    // 0x332858: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x332858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_33285c:
    // 0x33285c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x33285cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_332860:
    // 0x332860: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x332860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_332864:
    // 0x332864: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x332864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_332868:
    // 0x332868: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x332868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_33286c:
    // 0x33286c: 0xc040180  jal         func_100600
label_332870:
    if (ctx->pc == 0x332870u) {
        ctx->pc = 0x332870u;
            // 0x332870: 0xae3007b8  sw          $s0, 0x7B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
        ctx->pc = 0x332874u;
        goto label_332874;
    }
    ctx->pc = 0x33286Cu;
    SET_GPR_U32(ctx, 31, 0x332874u);
    ctx->pc = 0x332870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33286Cu;
            // 0x332870: 0xae3007b8  sw          $s0, 0x7B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332874u; }
        if (ctx->pc != 0x332874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332874u; }
        if (ctx->pc != 0x332874u) { return; }
    }
    ctx->pc = 0x332874u;
label_332874:
    // 0x332874: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_332878:
    if (ctx->pc == 0x332878u) {
        ctx->pc = 0x332878u;
            // 0x332878: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33287Cu;
        goto label_33287c;
    }
    ctx->pc = 0x332874u;
    {
        const bool branch_taken_0x332874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332874u;
            // 0x332878: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332874) {
            ctx->pc = 0x3328ACu;
            goto label_3328ac;
        }
    }
    ctx->pc = 0x33287Cu;
label_33287c:
    // 0x33287c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x33287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_332880:
    // 0x332880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332884:
    // 0x332884: 0x3445a120  ori         $a1, $v0, 0xA120
    ctx->pc = 0x332884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
label_332888:
    // 0x332888: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33288c:
    // 0x33288c: 0xc10ca68  jal         func_4329A0
label_332890:
    if (ctx->pc == 0x332890u) {
        ctx->pc = 0x332890u;
            // 0x332890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332894u;
        goto label_332894;
    }
    ctx->pc = 0x33288Cu;
    SET_GPR_U32(ctx, 31, 0x332894u);
    ctx->pc = 0x332890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33288Cu;
            // 0x332890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332894u; }
        if (ctx->pc != 0x332894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332894u; }
        if (ctx->pc != 0x332894u) { return; }
    }
    ctx->pc = 0x332894u;
label_332894:
    // 0x332894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332898:
    // 0x332898: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33289c:
    // 0x33289c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x33289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3328a0:
    // 0x3328a0: 0x24423220  addiu       $v0, $v0, 0x3220
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12832));
label_3328a4:
    // 0x3328a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3328a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3328a8:
    // 0x3328a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3328a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3328ac:
    // 0x3328ac: 0xc040180  jal         func_100600
label_3328b0:
    if (ctx->pc == 0x3328B0u) {
        ctx->pc = 0x3328B0u;
            // 0x3328b0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x3328B4u;
        goto label_3328b4;
    }
    ctx->pc = 0x3328ACu;
    SET_GPR_U32(ctx, 31, 0x3328B4u);
    ctx->pc = 0x3328B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328ACu;
            // 0x3328b0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328B4u; }
        if (ctx->pc != 0x3328B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328B4u; }
        if (ctx->pc != 0x3328B4u) { return; }
    }
    ctx->pc = 0x3328B4u;
label_3328b4:
    // 0x3328b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3328b8:
    if (ctx->pc == 0x3328B8u) {
        ctx->pc = 0x3328BCu;
        goto label_3328bc;
    }
    ctx->pc = 0x3328B4u;
    {
        const bool branch_taken_0x3328b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328b4) {
            ctx->pc = 0x3328C8u;
            goto label_3328c8;
        }
    }
    ctx->pc = 0x3328BCu;
label_3328bc:
    // 0x3328bc: 0x8e250788  lw          $a1, 0x788($s1)
    ctx->pc = 0x3328bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1928)));
label_3328c0:
    // 0x3328c0: 0xc0e9400  jal         func_3A5000
label_3328c4:
    if (ctx->pc == 0x3328C4u) {
        ctx->pc = 0x3328C4u;
            // 0x3328c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3328C8u;
        goto label_3328c8;
    }
    ctx->pc = 0x3328C0u;
    SET_GPR_U32(ctx, 31, 0x3328C8u);
    ctx->pc = 0x3328C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328C0u;
            // 0x3328c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A5000u;
    if (runtime->hasFunction(0x3A5000u)) {
        auto targetFn = runtime->lookupFunction(0x3A5000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328C8u; }
        if (ctx->pc != 0x3328C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A5000_0x3a5000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328C8u; }
        if (ctx->pc != 0x3328C8u) { return; }
    }
    ctx->pc = 0x3328C8u;
label_3328c8:
    // 0x3328c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3328cc:
    // 0x3328cc: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x3328ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_3328d0:
    // 0x3328d0: 0xc040180  jal         func_100600
label_3328d4:
    if (ctx->pc == 0x3328D4u) {
        ctx->pc = 0x3328D4u;
            // 0x3328d4: 0xac620eac  sw          $v0, 0xEAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3756), GPR_U32(ctx, 2));
        ctx->pc = 0x3328D8u;
        goto label_3328d8;
    }
    ctx->pc = 0x3328D0u;
    SET_GPR_U32(ctx, 31, 0x3328D8u);
    ctx->pc = 0x3328D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328D0u;
            // 0x3328d4: 0xac620eac  sw          $v0, 0xEAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328D8u; }
        if (ctx->pc != 0x3328D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328D8u; }
        if (ctx->pc != 0x3328D8u) { return; }
    }
    ctx->pc = 0x3328D8u;
label_3328d8:
    // 0x3328d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3328dc:
    if (ctx->pc == 0x3328DCu) {
        ctx->pc = 0x3328DCu;
            // 0x3328dc: 0xae220ca0  sw          $v0, 0xCA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 2));
        ctx->pc = 0x3328E0u;
        goto label_3328e0;
    }
    ctx->pc = 0x3328D8u;
    {
        const bool branch_taken_0x3328d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328d8) {
            ctx->pc = 0x3328DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3328D8u;
            // 0x3328dc: 0xae220ca0  sw          $v0, 0xCA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3328F8u;
            goto label_3328f8;
        }
    }
    ctx->pc = 0x3328E0u;
label_3328e0:
    // 0x3328e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3328e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3328e4:
    // 0x3328e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3328e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3328e8:
    // 0x3328e8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3328ec:
    // 0x3328ec: 0xc0d0eac  jal         func_343AB0
label_3328f0:
    if (ctx->pc == 0x3328F0u) {
        ctx->pc = 0x3328F0u;
            // 0x3328f0: 0x34452824  ori         $a1, $v0, 0x2824 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10276);
        ctx->pc = 0x3328F4u;
        goto label_3328f4;
    }
    ctx->pc = 0x3328ECu;
    SET_GPR_U32(ctx, 31, 0x3328F4u);
    ctx->pc = 0x3328F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328ECu;
            // 0x3328f0: 0x34452824  ori         $a1, $v0, 0x2824 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10276);
        ctx->in_delay_slot = false;
    ctx->pc = 0x343AB0u;
    if (runtime->hasFunction(0x343AB0u)) {
        auto targetFn = runtime->lookupFunction(0x343AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328F4u; }
        if (ctx->pc != 0x3328F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343AB0_0x343ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328F4u; }
        if (ctx->pc != 0x3328F4u) { return; }
    }
    ctx->pc = 0x3328F4u;
label_3328f4:
    // 0x3328f4: 0xae220ca0  sw          $v0, 0xCA0($s1)
    ctx->pc = 0x3328f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 2));
label_3328f8:
    // 0x3328f8: 0xc040180  jal         func_100600
label_3328fc:
    if (ctx->pc == 0x3328FCu) {
        ctx->pc = 0x3328FCu;
            // 0x3328fc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x332900u;
        goto label_332900;
    }
    ctx->pc = 0x3328F8u;
    SET_GPR_U32(ctx, 31, 0x332900u);
    ctx->pc = 0x3328FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328F8u;
            // 0x3328fc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332900u; }
        if (ctx->pc != 0x332900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332900u; }
        if (ctx->pc != 0x332900u) { return; }
    }
    ctx->pc = 0x332900u;
label_332900:
    // 0x332900: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_332904:
    if (ctx->pc == 0x332904u) {
        ctx->pc = 0x332904u;
            // 0x332904: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332908u;
        goto label_332908;
    }
    ctx->pc = 0x332900u;
    {
        const bool branch_taken_0x332900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332900u;
            // 0x332904: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332900) {
            ctx->pc = 0x332948u;
            goto label_332948;
        }
    }
    ctx->pc = 0x332908u;
label_332908:
    // 0x332908: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33290c:
    // 0x33290c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332910:
    // 0x332910: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x332910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
label_332914:
    // 0x332914: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x332914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_332918:
    // 0x332918: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x332918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_33291c:
    // 0x33291c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33291cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_332920:
    // 0x332920: 0xac523e58  sw          $s2, 0x3E58($v0)
    ctx->pc = 0x332920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15960), GPR_U32(ctx, 18));
label_332924:
    // 0x332924: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_332928:
    // 0x332928: 0xc0d1570  jal         func_3455C0
label_33292c:
    if (ctx->pc == 0x33292Cu) {
        ctx->pc = 0x33292Cu;
            // 0x33292c: 0x3445282e  ori         $a1, $v0, 0x282E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10286);
        ctx->pc = 0x332930u;
        goto label_332930;
    }
    ctx->pc = 0x332928u;
    SET_GPR_U32(ctx, 31, 0x332930u);
    ctx->pc = 0x33292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332928u;
            // 0x33292c: 0x3445282e  ori         $a1, $v0, 0x282E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10286);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (runtime->hasFunction(0x3455C0u)) {
        auto targetFn = runtime->lookupFunction(0x3455C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332930u; }
        if (ctx->pc != 0x332930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003455C0_0x3455c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332930u; }
        if (ctx->pc != 0x332930u) { return; }
    }
    ctx->pc = 0x332930u;
label_332930:
    // 0x332930: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332934:
    // 0x332934: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332938:
    // 0x332938: 0x24634b80  addiu       $v1, $v1, 0x4B80
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19328));
label_33293c:
    // 0x33293c: 0x24424b8c  addiu       $v0, $v0, 0x4B8C
    ctx->pc = 0x33293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19340));
label_332940:
    // 0x332940: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x332940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_332944:
    // 0x332944: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x332944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_332948:
    // 0x332948: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33294c:
    // 0x33294c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_332950:
    // 0x332950: 0x8c5089d0  lw          $s0, -0x7630($v0)
    ctx->pc = 0x332950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_332954:
    // 0x332954: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x332954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_332958:
    // 0x332958: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_33295c:
    if (ctx->pc == 0x33295Cu) {
        ctx->pc = 0x332960u;
        goto label_332960;
    }
    ctx->pc = 0x332958u;
    {
        const bool branch_taken_0x332958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x332958) {
            ctx->pc = 0x332998u;
            goto label_332998;
        }
    }
    ctx->pc = 0x332960u;
label_332960:
    // 0x332960: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332964:
    // 0x332964: 0x26310054  addiu       $s1, $s1, 0x54
    ctx->pc = 0x332964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_332968:
    // 0x332968: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x332968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33296c:
    // 0x33296c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33296cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332970:
    // 0x332970: 0x8054007a  lb          $s4, 0x7A($v0)
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_332974:
    // 0x332974: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x332974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_332978:
    // 0x332978: 0x26250064  addiu       $a1, $s1, 0x64
    ctx->pc = 0x332978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_33297c:
    // 0x33297c: 0xc0d1548  jal         func_345520
label_332980:
    if (ctx->pc == 0x332980u) {
        ctx->pc = 0x332980u;
            // 0x332980: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332984u;
        goto label_332984;
    }
    ctx->pc = 0x33297Cu;
    SET_GPR_U32(ctx, 31, 0x332984u);
    ctx->pc = 0x332980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33297Cu;
            // 0x332980: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345520u;
    if (runtime->hasFunction(0x345520u)) {
        auto targetFn = runtime->lookupFunction(0x345520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332984u; }
        if (ctx->pc != 0x332984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345520_0x345520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332984u; }
        if (ctx->pc != 0x332984u) { return; }
    }
    ctx->pc = 0x332984u;
label_332984:
    // 0x332984: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_332988:
    // 0x332988: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x332988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_33298c:
    // 0x33298c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_332990:
    if (ctx->pc == 0x332990u) {
        ctx->pc = 0x332990u;
            // 0x332990: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->pc = 0x332994u;
        goto label_332994;
    }
    ctx->pc = 0x33298Cu;
    {
        const bool branch_taken_0x33298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33298Cu;
            // 0x332990: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33298c) {
            ctx->pc = 0x332974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332974;
        }
    }
    ctx->pc = 0x332994u;
label_332994:
    // 0x332994: 0x0  nop
    ctx->pc = 0x332994u;
    // NOP
label_332998:
    // 0x332998: 0xc040180  jal         func_100600
label_33299c:
    if (ctx->pc == 0x33299Cu) {
        ctx->pc = 0x33299Cu;
            // 0x33299c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x3329A0u;
        goto label_3329a0;
    }
    ctx->pc = 0x332998u;
    SET_GPR_U32(ctx, 31, 0x3329A0u);
    ctx->pc = 0x33299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332998u;
            // 0x33299c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329A0u; }
        if (ctx->pc != 0x3329A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329A0u; }
        if (ctx->pc != 0x3329A0u) { return; }
    }
    ctx->pc = 0x3329A0u;
label_3329a0:
    // 0x3329a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3329a4:
    if (ctx->pc == 0x3329A4u) {
        ctx->pc = 0x3329A4u;
            // 0x3329a4: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x3329A8u;
        goto label_3329a8;
    }
    ctx->pc = 0x3329A0u;
    {
        const bool branch_taken_0x3329a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3329a0) {
            ctx->pc = 0x3329A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3329A0u;
            // 0x3329a4: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3329B4u;
            goto label_3329b4;
        }
    }
    ctx->pc = 0x3329A8u;
label_3329a8:
    // 0x3329a8: 0xc0d10e8  jal         func_3443A0
label_3329ac:
    if (ctx->pc == 0x3329ACu) {
        ctx->pc = 0x3329ACu;
            // 0x3329ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3329B0u;
        goto label_3329b0;
    }
    ctx->pc = 0x3329A8u;
    SET_GPR_U32(ctx, 31, 0x3329B0u);
    ctx->pc = 0x3329ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3329A8u;
            // 0x3329ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3443A0u;
    if (runtime->hasFunction(0x3443A0u)) {
        auto targetFn = runtime->lookupFunction(0x3443A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329B0u; }
        if (ctx->pc != 0x3329B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003443A0_0x3443a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329B0u; }
        if (ctx->pc != 0x3329B0u) { return; }
    }
    ctx->pc = 0x3329B0u;
label_3329b0:
    // 0x3329b0: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_3329b4:
    // 0x3329b4: 0xc040180  jal         func_100600
label_3329b8:
    if (ctx->pc == 0x3329B8u) {
        ctx->pc = 0x3329BCu;
        goto label_3329bc;
    }
    ctx->pc = 0x3329B4u;
    SET_GPR_U32(ctx, 31, 0x3329BCu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329BCu; }
        if (ctx->pc != 0x3329BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329BCu; }
        if (ctx->pc != 0x3329BCu) { return; }
    }
    ctx->pc = 0x3329BCu;
label_3329bc:
    // 0x3329bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3329c0:
    if (ctx->pc == 0x3329C0u) {
        ctx->pc = 0x3329C0u;
            // 0x3329c0: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x3329C4u;
        goto label_3329c4;
    }
    ctx->pc = 0x3329BCu;
    {
        const bool branch_taken_0x3329bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3329bc) {
            ctx->pc = 0x3329C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3329BCu;
            // 0x3329c0: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3329D0u;
            goto label_3329d0;
        }
    }
    ctx->pc = 0x3329C4u;
label_3329c4:
    // 0x3329c4: 0xc0d1064  jal         func_344190
label_3329c8:
    if (ctx->pc == 0x3329C8u) {
        ctx->pc = 0x3329C8u;
            // 0x3329c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3329CCu;
        goto label_3329cc;
    }
    ctx->pc = 0x3329C4u;
    SET_GPR_U32(ctx, 31, 0x3329CCu);
    ctx->pc = 0x3329C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3329C4u;
            // 0x3329c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344190u;
    if (runtime->hasFunction(0x344190u)) {
        auto targetFn = runtime->lookupFunction(0x344190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329CCu; }
        if (ctx->pc != 0x3329CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344190_0x344190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329CCu; }
        if (ctx->pc != 0x3329CCu) { return; }
    }
    ctx->pc = 0x3329CCu;
label_3329cc:
    // 0x3329cc: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x3329ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3329d0:
    // 0x3329d0: 0xc040180  jal         func_100600
label_3329d4:
    if (ctx->pc == 0x3329D4u) {
        ctx->pc = 0x3329D8u;
        goto label_3329d8;
    }
    ctx->pc = 0x3329D0u;
    SET_GPR_U32(ctx, 31, 0x3329D8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329D8u; }
        if (ctx->pc != 0x3329D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329D8u; }
        if (ctx->pc != 0x3329D8u) { return; }
    }
    ctx->pc = 0x3329D8u;
label_3329d8:
    // 0x3329d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3329dc:
    if (ctx->pc == 0x3329DCu) {
        ctx->pc = 0x3329DCu;
            // 0x3329dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3329E0u;
        goto label_3329e0;
    }
    ctx->pc = 0x3329D8u;
    {
        const bool branch_taken_0x3329d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3329D8u;
            // 0x3329dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329d8) {
            ctx->pc = 0x332A10u;
            goto label_332a10;
        }
    }
    ctx->pc = 0x3329E0u;
label_3329e0:
    // 0x3329e0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3329e4:
    // 0x3329e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3329e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3329e8:
    // 0x3329e8: 0x344591e3  ori         $a1, $v0, 0x91E3
    ctx->pc = 0x3329e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37347);
label_3329ec:
    // 0x3329ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3329ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3329f0:
    // 0x3329f0: 0xc10ca68  jal         func_4329A0
label_3329f4:
    if (ctx->pc == 0x3329F4u) {
        ctx->pc = 0x3329F4u;
            // 0x3329f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3329F8u;
        goto label_3329f8;
    }
    ctx->pc = 0x3329F0u;
    SET_GPR_U32(ctx, 31, 0x3329F8u);
    ctx->pc = 0x3329F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3329F0u;
            // 0x3329f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329F8u; }
        if (ctx->pc != 0x3329F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329F8u; }
        if (ctx->pc != 0x3329F8u) { return; }
    }
    ctx->pc = 0x3329F8u;
label_3329f8:
    // 0x3329f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3329f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3329fc:
    // 0x3329fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3329fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332a00:
    // 0x332a00: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x332a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_332a04:
    // 0x332a04: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x332a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
label_332a08:
    // 0x332a08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x332a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_332a0c:
    // 0x332a0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x332a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_332a10:
    // 0x332a10: 0xc040180  jal         func_100600
label_332a14:
    if (ctx->pc == 0x332A14u) {
        ctx->pc = 0x332A14u;
            // 0x332a14: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x332A18u;
        goto label_332a18;
    }
    ctx->pc = 0x332A10u;
    SET_GPR_U32(ctx, 31, 0x332A18u);
    ctx->pc = 0x332A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332A10u;
            // 0x332a14: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A18u; }
        if (ctx->pc != 0x332A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A18u; }
        if (ctx->pc != 0x332A18u) { return; }
    }
    ctx->pc = 0x332A18u;
label_332a18:
    // 0x332a18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_332a1c:
    if (ctx->pc == 0x332A1Cu) {
        ctx->pc = 0x332A1Cu;
            // 0x332a1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332A20u;
        goto label_332a20;
    }
    ctx->pc = 0x332A18u;
    {
        const bool branch_taken_0x332a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332A18u;
            // 0x332a1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a18) {
            ctx->pc = 0x332A50u;
            goto label_332a50;
        }
    }
    ctx->pc = 0x332A20u;
label_332a20:
    // 0x332a20: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x332a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_332a24:
    // 0x332a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332a28:
    // 0x332a28: 0x344591e5  ori         $a1, $v0, 0x91E5
    ctx->pc = 0x332a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37349);
label_332a2c:
    // 0x332a2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332a30:
    // 0x332a30: 0xc10ca68  jal         func_4329A0
label_332a34:
    if (ctx->pc == 0x332A34u) {
        ctx->pc = 0x332A34u;
            // 0x332a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332A38u;
        goto label_332a38;
    }
    ctx->pc = 0x332A30u;
    SET_GPR_U32(ctx, 31, 0x332A38u);
    ctx->pc = 0x332A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332A30u;
            // 0x332a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A38u; }
        if (ctx->pc != 0x332A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A38u; }
        if (ctx->pc != 0x332A38u) { return; }
    }
    ctx->pc = 0x332A38u;
label_332a38:
    // 0x332a38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332a3c:
    // 0x332a3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332a40:
    // 0x332a40: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x332a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_332a44:
    // 0x332a44: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x332a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
label_332a48:
    // 0x332a48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x332a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_332a4c:
    // 0x332a4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x332a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_332a50:
    // 0x332a50: 0xc040180  jal         func_100600
label_332a54:
    if (ctx->pc == 0x332A54u) {
        ctx->pc = 0x332A54u;
            // 0x332a54: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x332A58u;
        goto label_332a58;
    }
    ctx->pc = 0x332A50u;
    SET_GPR_U32(ctx, 31, 0x332A58u);
    ctx->pc = 0x332A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332A50u;
            // 0x332a54: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A58u; }
        if (ctx->pc != 0x332A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A58u; }
        if (ctx->pc != 0x332A58u) { return; }
    }
    ctx->pc = 0x332A58u;
label_332a58:
    // 0x332a58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_332a5c:
    if (ctx->pc == 0x332A5Cu) {
        ctx->pc = 0x332A5Cu;
            // 0x332a5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332A60u;
        goto label_332a60;
    }
    ctx->pc = 0x332A58u;
    {
        const bool branch_taken_0x332a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332A58u;
            // 0x332a5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a58) {
            ctx->pc = 0x332AA0u;
            goto label_332aa0;
        }
    }
    ctx->pc = 0x332A60u;
label_332a60:
    // 0x332a60: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_332a64:
    // 0x332a64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x332a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_332a68:
    // 0x332a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332a6c:
    // 0x332a6c: 0x34453500  ori         $a1, $v0, 0x3500
    ctx->pc = 0x332a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13568);
label_332a70:
    // 0x332a70: 0xc10ca68  jal         func_4329A0
label_332a74:
    if (ctx->pc == 0x332A74u) {
        ctx->pc = 0x332A74u;
            // 0x332a74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332A78u;
        goto label_332a78;
    }
    ctx->pc = 0x332A70u;
    SET_GPR_U32(ctx, 31, 0x332A78u);
    ctx->pc = 0x332A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332A70u;
            // 0x332a74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A78u; }
        if (ctx->pc != 0x332A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A78u; }
        if (ctx->pc != 0x332A78u) { return; }
    }
    ctx->pc = 0x332A78u;
label_332a78:
    // 0x332a78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332a7c:
    // 0x332a7c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x332a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_332a80:
    // 0x332a80: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x332a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_332a84:
    // 0x332a84: 0x24843dc0  addiu       $a0, $a0, 0x3DC0
    ctx->pc = 0x332a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15808));
label_332a88:
    // 0x332a88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x332a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_332a8c:
    // 0x332a8c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x332a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_332a90:
    // 0x332a90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x332a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_332a94:
    // 0x332a94: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x332a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
label_332a98:
    // 0x332a98: 0xa2200073  sb          $zero, 0x73($s1)
    ctx->pc = 0x332a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 0));
label_332a9c:
    // 0x332a9c: 0xa2230075  sb          $v1, 0x75($s1)
    ctx->pc = 0x332a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 3));
label_332aa0:
    // 0x332aa0: 0x8203008d  lb          $v1, 0x8D($s0)
    ctx->pc = 0x332aa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
label_332aa4:
    // 0x332aa4: 0x601827  not         $v1, $v1
    ctx->pc = 0x332aa4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_332aa8:
    // 0x332aa8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x332aa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_332aac:
    // 0x332aac: 0x50600044  beql        $v1, $zero, . + 4 + (0x44 << 2)
label_332ab0:
    if (ctx->pc == 0x332AB0u) {
        ctx->pc = 0x332AB0u;
            // 0x332ab0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x332AB4u;
        goto label_332ab4;
    }
    ctx->pc = 0x332AACu;
    {
        const bool branch_taken_0x332aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332aac) {
            ctx->pc = 0x332AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332AACu;
            // 0x332ab0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332BC0u;
            goto label_332bc0;
        }
    }
    ctx->pc = 0x332AB4u;
label_332ab4:
    // 0x332ab4: 0xc040180  jal         func_100600
label_332ab8:
    if (ctx->pc == 0x332AB8u) {
        ctx->pc = 0x332AB8u;
            // 0x332ab8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x332ABCu;
        goto label_332abc;
    }
    ctx->pc = 0x332AB4u;
    SET_GPR_U32(ctx, 31, 0x332ABCu);
    ctx->pc = 0x332AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332AB4u;
            // 0x332ab8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ABCu; }
        if (ctx->pc != 0x332ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ABCu; }
        if (ctx->pc != 0x332ABCu) { return; }
    }
    ctx->pc = 0x332ABCu;
label_332abc:
    // 0x332abc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_332ac0:
    if (ctx->pc == 0x332AC0u) {
        ctx->pc = 0x332AC0u;
            // 0x332ac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332AC4u;
        goto label_332ac4;
    }
    ctx->pc = 0x332ABCu;
    {
        const bool branch_taken_0x332abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332ABCu;
            // 0x332ac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332abc) {
            ctx->pc = 0x332BB0u;
            goto label_332bb0;
        }
    }
    ctx->pc = 0x332AC4u;
label_332ac4:
    // 0x332ac4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332ac8:
    // 0x332ac8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x332ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_332acc:
    // 0x332acc: 0x8c4789d8  lw          $a3, -0x7628($v0)
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
label_332ad0:
    // 0x332ad0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_332ad4:
    // 0x332ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332ad8:
    // 0x332ad8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x332ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_332adc:
    // 0x332adc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x332adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_332ae0:
    // 0x332ae0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x332ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_332ae4:
    // 0x332ae4: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x332ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_332ae8:
    // 0x332ae8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x332ae8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_332aec:
    // 0x332aec: 0xc10ca68  jal         func_4329A0
label_332af0:
    if (ctx->pc == 0x332AF0u) {
        ctx->pc = 0x332AF0u;
            // 0x332af0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332AF4u;
        goto label_332af4;
    }
    ctx->pc = 0x332AECu;
    SET_GPR_U32(ctx, 31, 0x332AF4u);
    ctx->pc = 0x332AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332AECu;
            // 0x332af0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332AF4u; }
        if (ctx->pc != 0x332AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332AF4u; }
        if (ctx->pc != 0x332AF4u) { return; }
    }
    ctx->pc = 0x332AF4u;
label_332af4:
    // 0x332af4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x332af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_332af8:
    // 0x332af8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_332afc:
    // 0x332afc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x332afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_332b00:
    // 0x332b00: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x332b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_332b04:
    // 0x332b04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_332b08:
    // 0x332b08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x332b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_332b0c:
    // 0x332b0c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x332b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_332b10:
    // 0x332b10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332b14:
    // 0x332b14: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x332b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_332b18:
    // 0x332b18: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x332b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_332b1c:
    // 0x332b1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332b20:
    // 0x332b20: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_332b24:
    // 0x332b24: 0x320f809  jalr        $t9
label_332b28:
    if (ctx->pc == 0x332B28u) {
        ctx->pc = 0x332B2Cu;
        goto label_332b2c;
    }
    ctx->pc = 0x332B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332B2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332B2Cu; }
            if (ctx->pc != 0x332B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x332B2Cu;
label_332b2c:
    // 0x332b2c: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_332b30:
    // 0x332b30: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x332b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_332b34:
    // 0x332b34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332b38:
    // 0x332b38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x332b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_332b3c:
    // 0x332b3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x332b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_332b40:
    // 0x332b40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_332b44:
    // 0x332b44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x332b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_332b48:
    // 0x332b48: 0x0  nop
    ctx->pc = 0x332b48u;
    // NOP
label_332b4c:
    // 0x332b4c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x332b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_332b50:
    // 0x332b50: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x332b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_332b54:
    // 0x332b54: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x332b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_332b58:
    // 0x332b58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332b5c:
    // 0x332b5c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x332b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_332b60:
    // 0x332b60: 0x320f809  jalr        $t9
label_332b64:
    if (ctx->pc == 0x332B64u) {
        ctx->pc = 0x332B68u;
        goto label_332b68;
    }
    ctx->pc = 0x332B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332B68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332B68u; }
            if (ctx->pc != 0x332B68u) { return; }
        }
        }
    }
    ctx->pc = 0x332B68u;
label_332b68:
    // 0x332b68: 0x3c03422c  lui         $v1, 0x422C
    ctx->pc = 0x332b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16940 << 16));
label_332b6c:
    // 0x332b6c: 0x3c064561  lui         $a2, 0x4561
    ctx->pc = 0x332b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17761 << 16));
label_332b70:
    // 0x332b70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_332b74:
    // 0x332b74: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x332b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_332b78:
    // 0x332b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x332b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_332b7c:
    // 0x332b7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332b80:
    // 0x332b80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_332b84:
    // 0x332b84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x332b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_332b88:
    // 0x332b88: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x332b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_332b8c:
    // 0x332b8c: 0x0  nop
    ctx->pc = 0x332b8cu;
    // NOP
label_332b90:
    // 0x332b90: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x332b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_332b94:
    // 0x332b94: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x332b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_332b98:
    // 0x332b98: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x332b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_332b9c:
    // 0x332b9c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x332b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_332ba0:
    // 0x332ba0: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x332ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_332ba4:
    // 0x332ba4: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x332ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_332ba8:
    // 0x332ba8: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x332ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
label_332bac:
    // 0x332bac: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x332bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_332bb0:
    // 0x332bb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x332bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_332bb4:
    // 0x332bb4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x332bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_332bb8:
    // 0x332bb8: 0xa060007f  sb          $zero, 0x7F($v1)
    ctx->pc = 0x332bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 0));
label_332bbc:
    // 0x332bbc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x332bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_332bc0:
    // 0x332bc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x332bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_332bc4:
    // 0x332bc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x332bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_332bc8:
    // 0x332bc8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x332bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_332bcc:
    // 0x332bcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x332bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_332bd0:
    // 0x332bd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_332bd4:
    // 0x332bd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x332bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_332bd8:
    // 0x332bd8: 0x3e00008  jr          $ra
label_332bdc:
    if (ctx->pc == 0x332BDCu) {
        ctx->pc = 0x332BDCu;
            // 0x332bdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x332BE0u;
        goto label_332be0;
    }
    ctx->pc = 0x332BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332BD8u;
            // 0x332bdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332BE0u;
label_332be0:
    // 0x332be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_332be4:
    // 0x332be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x332be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_332be8:
    // 0x332be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_332bec:
    // 0x332bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_332bf0:
    // 0x332bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332bf4:
    // 0x332bf4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_332bf8:
    if (ctx->pc == 0x332BF8u) {
        ctx->pc = 0x332BF8u;
            // 0x332bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332BFCu;
        goto label_332bfc;
    }
    ctx->pc = 0x332BF4u;
    {
        const bool branch_taken_0x332bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x332BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332BF4u;
            // 0x332bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bf4) {
            ctx->pc = 0x332C48u;
            goto label_332c48;
        }
    }
    ctx->pc = 0x332BFCu;
label_332bfc:
    // 0x332bfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332c00:
    // 0x332c00: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x332c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_332c04:
    // 0x332c04: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_332c08:
    if (ctx->pc == 0x332C08u) {
        ctx->pc = 0x332C08u;
            // 0x332c08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x332C0Cu;
        goto label_332c0c;
    }
    ctx->pc = 0x332C04u;
    {
        const bool branch_taken_0x332c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332C04u;
            // 0x332c08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c04) {
            ctx->pc = 0x332C30u;
            goto label_332c30;
        }
    }
    ctx->pc = 0x332C0Cu;
label_332c0c:
    // 0x332c0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x332c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_332c10:
    // 0x332c10: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x332c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_332c14:
    // 0x332c14: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x332c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
label_332c18:
    // 0x332c18: 0x2484d390  addiu       $a0, $a0, -0x2C70
    ctx->pc = 0x332c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
label_332c1c:
    // 0x332c1c: 0xc0ad6c4  jal         func_2B5B10
label_332c20:
    if (ctx->pc == 0x332C20u) {
        ctx->pc = 0x332C20u;
            // 0x332c20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x332C24u;
        goto label_332c24;
    }
    ctx->pc = 0x332C1Cu;
    SET_GPR_U32(ctx, 31, 0x332C24u);
    ctx->pc = 0x332C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332C1Cu;
            // 0x332c20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C24u; }
        if (ctx->pc != 0x332C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C24u; }
        if (ctx->pc != 0x332C24u) { return; }
    }
    ctx->pc = 0x332C24u;
label_332c24:
    // 0x332c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332c28:
    // 0x332c28: 0xc075bf8  jal         func_1D6FE0
label_332c2c:
    if (ctx->pc == 0x332C2Cu) {
        ctx->pc = 0x332C2Cu;
            // 0x332c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332C30u;
        goto label_332c30;
    }
    ctx->pc = 0x332C28u;
    SET_GPR_U32(ctx, 31, 0x332C30u);
    ctx->pc = 0x332C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332C28u;
            // 0x332c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C30u; }
        if (ctx->pc != 0x332C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C30u; }
        if (ctx->pc != 0x332C30u) { return; }
    }
    ctx->pc = 0x332C30u;
label_332c30:
    // 0x332c30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x332c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_332c34:
    // 0x332c34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x332c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_332c38:
    // 0x332c38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_332c3c:
    if (ctx->pc == 0x332C3Cu) {
        ctx->pc = 0x332C3Cu;
            // 0x332c3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332C40u;
        goto label_332c40;
    }
    ctx->pc = 0x332C38u;
    {
        const bool branch_taken_0x332c38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x332c38) {
            ctx->pc = 0x332C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332C38u;
            // 0x332c3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332C4Cu;
            goto label_332c4c;
        }
    }
    ctx->pc = 0x332C40u;
label_332c40:
    // 0x332c40: 0xc0400a8  jal         func_1002A0
label_332c44:
    if (ctx->pc == 0x332C44u) {
        ctx->pc = 0x332C44u;
            // 0x332c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332C48u;
        goto label_332c48;
    }
    ctx->pc = 0x332C40u;
    SET_GPR_U32(ctx, 31, 0x332C48u);
    ctx->pc = 0x332C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332C40u;
            // 0x332c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C48u; }
        if (ctx->pc != 0x332C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C48u; }
        if (ctx->pc != 0x332C48u) { return; }
    }
    ctx->pc = 0x332C48u;
label_332c48:
    // 0x332c48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x332c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332c4c:
    // 0x332c4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x332c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_332c50:
    // 0x332c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_332c54:
    // 0x332c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_332c58:
    // 0x332c58: 0x3e00008  jr          $ra
label_332c5c:
    if (ctx->pc == 0x332C5Cu) {
        ctx->pc = 0x332C5Cu;
            // 0x332c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x332C60u;
        goto label_332c60;
    }
    ctx->pc = 0x332C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332C58u;
            // 0x332c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332C60u;
label_332c60:
    // 0x332c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_332c64:
    // 0x332c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_332c68:
    // 0x332c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_332c6c:
    // 0x332c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332c70:
    // 0x332c70: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_332c74:
    if (ctx->pc == 0x332C74u) {
        ctx->pc = 0x332C74u;
            // 0x332c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332C78u;
        goto label_332c78;
    }
    ctx->pc = 0x332C70u;
    {
        const bool branch_taken_0x332c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x332c70) {
            ctx->pc = 0x332C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332C70u;
            // 0x332c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332CA4u;
            goto label_332ca4;
        }
    }
    ctx->pc = 0x332C78u;
label_332c78:
    // 0x332c78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x332c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_332c7c:
    // 0x332c7c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x332c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_332c80:
    // 0x332c80: 0x24424bd0  addiu       $v0, $v0, 0x4BD0
    ctx->pc = 0x332c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19408));
label_332c84:
    // 0x332c84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x332c84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_332c88:
    // 0x332c88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x332c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_332c8c:
    // 0x332c8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x332c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332c90:
    // 0x332c90: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_332c94:
    if (ctx->pc == 0x332C94u) {
        ctx->pc = 0x332C94u;
            // 0x332c94: 0xac403e58  sw          $zero, 0x3E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15960), GPR_U32(ctx, 0));
        ctx->pc = 0x332C98u;
        goto label_332c98;
    }
    ctx->pc = 0x332C90u;
    {
        const bool branch_taken_0x332c90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x332C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332C90u;
            // 0x332c94: 0xac403e58  sw          $zero, 0x3E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c90) {
            ctx->pc = 0x332CA0u;
            goto label_332ca0;
        }
    }
    ctx->pc = 0x332C98u;
label_332c98:
    // 0x332c98: 0xc0400a8  jal         func_1002A0
label_332c9c:
    if (ctx->pc == 0x332C9Cu) {
        ctx->pc = 0x332CA0u;
        goto label_332ca0;
    }
    ctx->pc = 0x332C98u;
    SET_GPR_U32(ctx, 31, 0x332CA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CA0u; }
        if (ctx->pc != 0x332CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CA0u; }
        if (ctx->pc != 0x332CA0u) { return; }
    }
    ctx->pc = 0x332CA0u;
label_332ca0:
    // 0x332ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x332ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_332ca4:
    // 0x332ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_332ca8:
    // 0x332ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_332cac:
    // 0x332cac: 0x3e00008  jr          $ra
label_332cb0:
    if (ctx->pc == 0x332CB0u) {
        ctx->pc = 0x332CB0u;
            // 0x332cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x332CB4u;
        goto label_332cb4;
    }
    ctx->pc = 0x332CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332CACu;
            // 0x332cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332CB4u;
label_332cb4:
    // 0x332cb4: 0x0  nop
    ctx->pc = 0x332cb4u;
    // NOP
label_332cb8:
    // 0x332cb8: 0x0  nop
    ctx->pc = 0x332cb8u;
    // NOP
label_332cbc:
    // 0x332cbc: 0x0  nop
    ctx->pc = 0x332cbcu;
    // NOP
label_332cc0:
    // 0x332cc0: 0x3e00008  jr          $ra
label_332cc4:
    if (ctx->pc == 0x332CC4u) {
        ctx->pc = 0x332CC4u;
            // 0x332cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x332CC8u;
        goto label_332cc8;
    }
    ctx->pc = 0x332CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332CC0u;
            // 0x332cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332CC8u;
label_332cc8:
    // 0x332cc8: 0x0  nop
    ctx->pc = 0x332cc8u;
    // NOP
label_332ccc:
    // 0x332ccc: 0x0  nop
    ctx->pc = 0x332cccu;
    // NOP
}

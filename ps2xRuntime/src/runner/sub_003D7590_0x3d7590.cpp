#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D7590
// Address: 0x3d7590 - 0x3d7b40
void sub_003D7590_0x3d7590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7590_0x3d7590");
#endif

    switch (ctx->pc) {
        case 0x3d7590u: goto label_3d7590;
        case 0x3d7594u: goto label_3d7594;
        case 0x3d7598u: goto label_3d7598;
        case 0x3d759cu: goto label_3d759c;
        case 0x3d75a0u: goto label_3d75a0;
        case 0x3d75a4u: goto label_3d75a4;
        case 0x3d75a8u: goto label_3d75a8;
        case 0x3d75acu: goto label_3d75ac;
        case 0x3d75b0u: goto label_3d75b0;
        case 0x3d75b4u: goto label_3d75b4;
        case 0x3d75b8u: goto label_3d75b8;
        case 0x3d75bcu: goto label_3d75bc;
        case 0x3d75c0u: goto label_3d75c0;
        case 0x3d75c4u: goto label_3d75c4;
        case 0x3d75c8u: goto label_3d75c8;
        case 0x3d75ccu: goto label_3d75cc;
        case 0x3d75d0u: goto label_3d75d0;
        case 0x3d75d4u: goto label_3d75d4;
        case 0x3d75d8u: goto label_3d75d8;
        case 0x3d75dcu: goto label_3d75dc;
        case 0x3d75e0u: goto label_3d75e0;
        case 0x3d75e4u: goto label_3d75e4;
        case 0x3d75e8u: goto label_3d75e8;
        case 0x3d75ecu: goto label_3d75ec;
        case 0x3d75f0u: goto label_3d75f0;
        case 0x3d75f4u: goto label_3d75f4;
        case 0x3d75f8u: goto label_3d75f8;
        case 0x3d75fcu: goto label_3d75fc;
        case 0x3d7600u: goto label_3d7600;
        case 0x3d7604u: goto label_3d7604;
        case 0x3d7608u: goto label_3d7608;
        case 0x3d760cu: goto label_3d760c;
        case 0x3d7610u: goto label_3d7610;
        case 0x3d7614u: goto label_3d7614;
        case 0x3d7618u: goto label_3d7618;
        case 0x3d761cu: goto label_3d761c;
        case 0x3d7620u: goto label_3d7620;
        case 0x3d7624u: goto label_3d7624;
        case 0x3d7628u: goto label_3d7628;
        case 0x3d762cu: goto label_3d762c;
        case 0x3d7630u: goto label_3d7630;
        case 0x3d7634u: goto label_3d7634;
        case 0x3d7638u: goto label_3d7638;
        case 0x3d763cu: goto label_3d763c;
        case 0x3d7640u: goto label_3d7640;
        case 0x3d7644u: goto label_3d7644;
        case 0x3d7648u: goto label_3d7648;
        case 0x3d764cu: goto label_3d764c;
        case 0x3d7650u: goto label_3d7650;
        case 0x3d7654u: goto label_3d7654;
        case 0x3d7658u: goto label_3d7658;
        case 0x3d765cu: goto label_3d765c;
        case 0x3d7660u: goto label_3d7660;
        case 0x3d7664u: goto label_3d7664;
        case 0x3d7668u: goto label_3d7668;
        case 0x3d766cu: goto label_3d766c;
        case 0x3d7670u: goto label_3d7670;
        case 0x3d7674u: goto label_3d7674;
        case 0x3d7678u: goto label_3d7678;
        case 0x3d767cu: goto label_3d767c;
        case 0x3d7680u: goto label_3d7680;
        case 0x3d7684u: goto label_3d7684;
        case 0x3d7688u: goto label_3d7688;
        case 0x3d768cu: goto label_3d768c;
        case 0x3d7690u: goto label_3d7690;
        case 0x3d7694u: goto label_3d7694;
        case 0x3d7698u: goto label_3d7698;
        case 0x3d769cu: goto label_3d769c;
        case 0x3d76a0u: goto label_3d76a0;
        case 0x3d76a4u: goto label_3d76a4;
        case 0x3d76a8u: goto label_3d76a8;
        case 0x3d76acu: goto label_3d76ac;
        case 0x3d76b0u: goto label_3d76b0;
        case 0x3d76b4u: goto label_3d76b4;
        case 0x3d76b8u: goto label_3d76b8;
        case 0x3d76bcu: goto label_3d76bc;
        case 0x3d76c0u: goto label_3d76c0;
        case 0x3d76c4u: goto label_3d76c4;
        case 0x3d76c8u: goto label_3d76c8;
        case 0x3d76ccu: goto label_3d76cc;
        case 0x3d76d0u: goto label_3d76d0;
        case 0x3d76d4u: goto label_3d76d4;
        case 0x3d76d8u: goto label_3d76d8;
        case 0x3d76dcu: goto label_3d76dc;
        case 0x3d76e0u: goto label_3d76e0;
        case 0x3d76e4u: goto label_3d76e4;
        case 0x3d76e8u: goto label_3d76e8;
        case 0x3d76ecu: goto label_3d76ec;
        case 0x3d76f0u: goto label_3d76f0;
        case 0x3d76f4u: goto label_3d76f4;
        case 0x3d76f8u: goto label_3d76f8;
        case 0x3d76fcu: goto label_3d76fc;
        case 0x3d7700u: goto label_3d7700;
        case 0x3d7704u: goto label_3d7704;
        case 0x3d7708u: goto label_3d7708;
        case 0x3d770cu: goto label_3d770c;
        case 0x3d7710u: goto label_3d7710;
        case 0x3d7714u: goto label_3d7714;
        case 0x3d7718u: goto label_3d7718;
        case 0x3d771cu: goto label_3d771c;
        case 0x3d7720u: goto label_3d7720;
        case 0x3d7724u: goto label_3d7724;
        case 0x3d7728u: goto label_3d7728;
        case 0x3d772cu: goto label_3d772c;
        case 0x3d7730u: goto label_3d7730;
        case 0x3d7734u: goto label_3d7734;
        case 0x3d7738u: goto label_3d7738;
        case 0x3d773cu: goto label_3d773c;
        case 0x3d7740u: goto label_3d7740;
        case 0x3d7744u: goto label_3d7744;
        case 0x3d7748u: goto label_3d7748;
        case 0x3d774cu: goto label_3d774c;
        case 0x3d7750u: goto label_3d7750;
        case 0x3d7754u: goto label_3d7754;
        case 0x3d7758u: goto label_3d7758;
        case 0x3d775cu: goto label_3d775c;
        case 0x3d7760u: goto label_3d7760;
        case 0x3d7764u: goto label_3d7764;
        case 0x3d7768u: goto label_3d7768;
        case 0x3d776cu: goto label_3d776c;
        case 0x3d7770u: goto label_3d7770;
        case 0x3d7774u: goto label_3d7774;
        case 0x3d7778u: goto label_3d7778;
        case 0x3d777cu: goto label_3d777c;
        case 0x3d7780u: goto label_3d7780;
        case 0x3d7784u: goto label_3d7784;
        case 0x3d7788u: goto label_3d7788;
        case 0x3d778cu: goto label_3d778c;
        case 0x3d7790u: goto label_3d7790;
        case 0x3d7794u: goto label_3d7794;
        case 0x3d7798u: goto label_3d7798;
        case 0x3d779cu: goto label_3d779c;
        case 0x3d77a0u: goto label_3d77a0;
        case 0x3d77a4u: goto label_3d77a4;
        case 0x3d77a8u: goto label_3d77a8;
        case 0x3d77acu: goto label_3d77ac;
        case 0x3d77b0u: goto label_3d77b0;
        case 0x3d77b4u: goto label_3d77b4;
        case 0x3d77b8u: goto label_3d77b8;
        case 0x3d77bcu: goto label_3d77bc;
        case 0x3d77c0u: goto label_3d77c0;
        case 0x3d77c4u: goto label_3d77c4;
        case 0x3d77c8u: goto label_3d77c8;
        case 0x3d77ccu: goto label_3d77cc;
        case 0x3d77d0u: goto label_3d77d0;
        case 0x3d77d4u: goto label_3d77d4;
        case 0x3d77d8u: goto label_3d77d8;
        case 0x3d77dcu: goto label_3d77dc;
        case 0x3d77e0u: goto label_3d77e0;
        case 0x3d77e4u: goto label_3d77e4;
        case 0x3d77e8u: goto label_3d77e8;
        case 0x3d77ecu: goto label_3d77ec;
        case 0x3d77f0u: goto label_3d77f0;
        case 0x3d77f4u: goto label_3d77f4;
        case 0x3d77f8u: goto label_3d77f8;
        case 0x3d77fcu: goto label_3d77fc;
        case 0x3d7800u: goto label_3d7800;
        case 0x3d7804u: goto label_3d7804;
        case 0x3d7808u: goto label_3d7808;
        case 0x3d780cu: goto label_3d780c;
        case 0x3d7810u: goto label_3d7810;
        case 0x3d7814u: goto label_3d7814;
        case 0x3d7818u: goto label_3d7818;
        case 0x3d781cu: goto label_3d781c;
        case 0x3d7820u: goto label_3d7820;
        case 0x3d7824u: goto label_3d7824;
        case 0x3d7828u: goto label_3d7828;
        case 0x3d782cu: goto label_3d782c;
        case 0x3d7830u: goto label_3d7830;
        case 0x3d7834u: goto label_3d7834;
        case 0x3d7838u: goto label_3d7838;
        case 0x3d783cu: goto label_3d783c;
        case 0x3d7840u: goto label_3d7840;
        case 0x3d7844u: goto label_3d7844;
        case 0x3d7848u: goto label_3d7848;
        case 0x3d784cu: goto label_3d784c;
        case 0x3d7850u: goto label_3d7850;
        case 0x3d7854u: goto label_3d7854;
        case 0x3d7858u: goto label_3d7858;
        case 0x3d785cu: goto label_3d785c;
        case 0x3d7860u: goto label_3d7860;
        case 0x3d7864u: goto label_3d7864;
        case 0x3d7868u: goto label_3d7868;
        case 0x3d786cu: goto label_3d786c;
        case 0x3d7870u: goto label_3d7870;
        case 0x3d7874u: goto label_3d7874;
        case 0x3d7878u: goto label_3d7878;
        case 0x3d787cu: goto label_3d787c;
        case 0x3d7880u: goto label_3d7880;
        case 0x3d7884u: goto label_3d7884;
        case 0x3d7888u: goto label_3d7888;
        case 0x3d788cu: goto label_3d788c;
        case 0x3d7890u: goto label_3d7890;
        case 0x3d7894u: goto label_3d7894;
        case 0x3d7898u: goto label_3d7898;
        case 0x3d789cu: goto label_3d789c;
        case 0x3d78a0u: goto label_3d78a0;
        case 0x3d78a4u: goto label_3d78a4;
        case 0x3d78a8u: goto label_3d78a8;
        case 0x3d78acu: goto label_3d78ac;
        case 0x3d78b0u: goto label_3d78b0;
        case 0x3d78b4u: goto label_3d78b4;
        case 0x3d78b8u: goto label_3d78b8;
        case 0x3d78bcu: goto label_3d78bc;
        case 0x3d78c0u: goto label_3d78c0;
        case 0x3d78c4u: goto label_3d78c4;
        case 0x3d78c8u: goto label_3d78c8;
        case 0x3d78ccu: goto label_3d78cc;
        case 0x3d78d0u: goto label_3d78d0;
        case 0x3d78d4u: goto label_3d78d4;
        case 0x3d78d8u: goto label_3d78d8;
        case 0x3d78dcu: goto label_3d78dc;
        case 0x3d78e0u: goto label_3d78e0;
        case 0x3d78e4u: goto label_3d78e4;
        case 0x3d78e8u: goto label_3d78e8;
        case 0x3d78ecu: goto label_3d78ec;
        case 0x3d78f0u: goto label_3d78f0;
        case 0x3d78f4u: goto label_3d78f4;
        case 0x3d78f8u: goto label_3d78f8;
        case 0x3d78fcu: goto label_3d78fc;
        case 0x3d7900u: goto label_3d7900;
        case 0x3d7904u: goto label_3d7904;
        case 0x3d7908u: goto label_3d7908;
        case 0x3d790cu: goto label_3d790c;
        case 0x3d7910u: goto label_3d7910;
        case 0x3d7914u: goto label_3d7914;
        case 0x3d7918u: goto label_3d7918;
        case 0x3d791cu: goto label_3d791c;
        case 0x3d7920u: goto label_3d7920;
        case 0x3d7924u: goto label_3d7924;
        case 0x3d7928u: goto label_3d7928;
        case 0x3d792cu: goto label_3d792c;
        case 0x3d7930u: goto label_3d7930;
        case 0x3d7934u: goto label_3d7934;
        case 0x3d7938u: goto label_3d7938;
        case 0x3d793cu: goto label_3d793c;
        case 0x3d7940u: goto label_3d7940;
        case 0x3d7944u: goto label_3d7944;
        case 0x3d7948u: goto label_3d7948;
        case 0x3d794cu: goto label_3d794c;
        case 0x3d7950u: goto label_3d7950;
        case 0x3d7954u: goto label_3d7954;
        case 0x3d7958u: goto label_3d7958;
        case 0x3d795cu: goto label_3d795c;
        case 0x3d7960u: goto label_3d7960;
        case 0x3d7964u: goto label_3d7964;
        case 0x3d7968u: goto label_3d7968;
        case 0x3d796cu: goto label_3d796c;
        case 0x3d7970u: goto label_3d7970;
        case 0x3d7974u: goto label_3d7974;
        case 0x3d7978u: goto label_3d7978;
        case 0x3d797cu: goto label_3d797c;
        case 0x3d7980u: goto label_3d7980;
        case 0x3d7984u: goto label_3d7984;
        case 0x3d7988u: goto label_3d7988;
        case 0x3d798cu: goto label_3d798c;
        case 0x3d7990u: goto label_3d7990;
        case 0x3d7994u: goto label_3d7994;
        case 0x3d7998u: goto label_3d7998;
        case 0x3d799cu: goto label_3d799c;
        case 0x3d79a0u: goto label_3d79a0;
        case 0x3d79a4u: goto label_3d79a4;
        case 0x3d79a8u: goto label_3d79a8;
        case 0x3d79acu: goto label_3d79ac;
        case 0x3d79b0u: goto label_3d79b0;
        case 0x3d79b4u: goto label_3d79b4;
        case 0x3d79b8u: goto label_3d79b8;
        case 0x3d79bcu: goto label_3d79bc;
        case 0x3d79c0u: goto label_3d79c0;
        case 0x3d79c4u: goto label_3d79c4;
        case 0x3d79c8u: goto label_3d79c8;
        case 0x3d79ccu: goto label_3d79cc;
        case 0x3d79d0u: goto label_3d79d0;
        case 0x3d79d4u: goto label_3d79d4;
        case 0x3d79d8u: goto label_3d79d8;
        case 0x3d79dcu: goto label_3d79dc;
        case 0x3d79e0u: goto label_3d79e0;
        case 0x3d79e4u: goto label_3d79e4;
        case 0x3d79e8u: goto label_3d79e8;
        case 0x3d79ecu: goto label_3d79ec;
        case 0x3d79f0u: goto label_3d79f0;
        case 0x3d79f4u: goto label_3d79f4;
        case 0x3d79f8u: goto label_3d79f8;
        case 0x3d79fcu: goto label_3d79fc;
        case 0x3d7a00u: goto label_3d7a00;
        case 0x3d7a04u: goto label_3d7a04;
        case 0x3d7a08u: goto label_3d7a08;
        case 0x3d7a0cu: goto label_3d7a0c;
        case 0x3d7a10u: goto label_3d7a10;
        case 0x3d7a14u: goto label_3d7a14;
        case 0x3d7a18u: goto label_3d7a18;
        case 0x3d7a1cu: goto label_3d7a1c;
        case 0x3d7a20u: goto label_3d7a20;
        case 0x3d7a24u: goto label_3d7a24;
        case 0x3d7a28u: goto label_3d7a28;
        case 0x3d7a2cu: goto label_3d7a2c;
        case 0x3d7a30u: goto label_3d7a30;
        case 0x3d7a34u: goto label_3d7a34;
        case 0x3d7a38u: goto label_3d7a38;
        case 0x3d7a3cu: goto label_3d7a3c;
        case 0x3d7a40u: goto label_3d7a40;
        case 0x3d7a44u: goto label_3d7a44;
        case 0x3d7a48u: goto label_3d7a48;
        case 0x3d7a4cu: goto label_3d7a4c;
        case 0x3d7a50u: goto label_3d7a50;
        case 0x3d7a54u: goto label_3d7a54;
        case 0x3d7a58u: goto label_3d7a58;
        case 0x3d7a5cu: goto label_3d7a5c;
        case 0x3d7a60u: goto label_3d7a60;
        case 0x3d7a64u: goto label_3d7a64;
        case 0x3d7a68u: goto label_3d7a68;
        case 0x3d7a6cu: goto label_3d7a6c;
        case 0x3d7a70u: goto label_3d7a70;
        case 0x3d7a74u: goto label_3d7a74;
        case 0x3d7a78u: goto label_3d7a78;
        case 0x3d7a7cu: goto label_3d7a7c;
        case 0x3d7a80u: goto label_3d7a80;
        case 0x3d7a84u: goto label_3d7a84;
        case 0x3d7a88u: goto label_3d7a88;
        case 0x3d7a8cu: goto label_3d7a8c;
        case 0x3d7a90u: goto label_3d7a90;
        case 0x3d7a94u: goto label_3d7a94;
        case 0x3d7a98u: goto label_3d7a98;
        case 0x3d7a9cu: goto label_3d7a9c;
        case 0x3d7aa0u: goto label_3d7aa0;
        case 0x3d7aa4u: goto label_3d7aa4;
        case 0x3d7aa8u: goto label_3d7aa8;
        case 0x3d7aacu: goto label_3d7aac;
        case 0x3d7ab0u: goto label_3d7ab0;
        case 0x3d7ab4u: goto label_3d7ab4;
        case 0x3d7ab8u: goto label_3d7ab8;
        case 0x3d7abcu: goto label_3d7abc;
        case 0x3d7ac0u: goto label_3d7ac0;
        case 0x3d7ac4u: goto label_3d7ac4;
        case 0x3d7ac8u: goto label_3d7ac8;
        case 0x3d7accu: goto label_3d7acc;
        case 0x3d7ad0u: goto label_3d7ad0;
        case 0x3d7ad4u: goto label_3d7ad4;
        case 0x3d7ad8u: goto label_3d7ad8;
        case 0x3d7adcu: goto label_3d7adc;
        case 0x3d7ae0u: goto label_3d7ae0;
        case 0x3d7ae4u: goto label_3d7ae4;
        case 0x3d7ae8u: goto label_3d7ae8;
        case 0x3d7aecu: goto label_3d7aec;
        case 0x3d7af0u: goto label_3d7af0;
        case 0x3d7af4u: goto label_3d7af4;
        case 0x3d7af8u: goto label_3d7af8;
        case 0x3d7afcu: goto label_3d7afc;
        case 0x3d7b00u: goto label_3d7b00;
        case 0x3d7b04u: goto label_3d7b04;
        case 0x3d7b08u: goto label_3d7b08;
        case 0x3d7b0cu: goto label_3d7b0c;
        case 0x3d7b10u: goto label_3d7b10;
        case 0x3d7b14u: goto label_3d7b14;
        case 0x3d7b18u: goto label_3d7b18;
        case 0x3d7b1cu: goto label_3d7b1c;
        case 0x3d7b20u: goto label_3d7b20;
        case 0x3d7b24u: goto label_3d7b24;
        case 0x3d7b28u: goto label_3d7b28;
        case 0x3d7b2cu: goto label_3d7b2c;
        case 0x3d7b30u: goto label_3d7b30;
        case 0x3d7b34u: goto label_3d7b34;
        case 0x3d7b38u: goto label_3d7b38;
        case 0x3d7b3cu: goto label_3d7b3c;
        default: break;
    }

    ctx->pc = 0x3d7590u;

label_3d7590:
    // 0x3d7590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d7590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3d7594:
    // 0x3d7594: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3d7598:
    // 0x3d7598: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d759c:
    // 0x3d759c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d75a0:
    // 0x3d75a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d75a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d75a4:
    // 0x3d75a4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3d75a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d75a8:
    // 0x3d75a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d75a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d75ac:
    // 0x3d75ac: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3d75acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d75b0:
    // 0x3d75b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d75b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d75b4:
    // 0x3d75b4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3d75b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3d75b8:
    // 0x3d75b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d75b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d75bc:
    // 0x3d75bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d75bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d75c0:
    // 0x3d75c0: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x3d75c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3d75c4:
    // 0x3d75c4: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_3d75c8:
    if (ctx->pc == 0x3D75C8u) {
        ctx->pc = 0x3D75C8u;
            // 0x3d75c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D75CCu;
        goto label_3d75cc;
    }
    ctx->pc = 0x3D75C4u;
    {
        const bool branch_taken_0x3d75c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D75C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D75C4u;
            // 0x3d75c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75c4) {
            ctx->pc = 0x3D77C0u;
            goto label_3d77c0;
        }
    }
    ctx->pc = 0x3D75CCu;
label_3d75cc:
    // 0x3d75cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d75ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d75d0:
    // 0x3d75d0: 0xc04f278  jal         func_13C9E0
label_3d75d4:
    if (ctx->pc == 0x3D75D4u) {
        ctx->pc = 0x3D75D4u;
            // 0x3d75d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3D75D8u;
        goto label_3d75d8;
    }
    ctx->pc = 0x3D75D0u;
    SET_GPR_U32(ctx, 31, 0x3D75D8u);
    ctx->pc = 0x3D75D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D75D0u;
            // 0x3d75d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75D8u; }
        if (ctx->pc != 0x3D75D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75D8u; }
        if (ctx->pc != 0x3D75D8u) { return; }
    }
    ctx->pc = 0x3D75D8u;
label_3d75d8:
    // 0x3d75d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d75d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d75dc:
    // 0x3d75dc: 0xc04ce80  jal         func_133A00
label_3d75e0:
    if (ctx->pc == 0x3D75E0u) {
        ctx->pc = 0x3D75E0u;
            // 0x3d75e0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3D75E4u;
        goto label_3d75e4;
    }
    ctx->pc = 0x3D75DCu;
    SET_GPR_U32(ctx, 31, 0x3D75E4u);
    ctx->pc = 0x3D75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D75DCu;
            // 0x3d75e0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75E4u; }
        if (ctx->pc != 0x3D75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75E4u; }
        if (ctx->pc != 0x3D75E4u) { return; }
    }
    ctx->pc = 0x3D75E4u;
label_3d75e4:
    // 0x3d75e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d75e8:
    // 0x3d75e8: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x3d75e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_3d75ec:
    // 0x3d75ec: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3d75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3d75f0:
    // 0x3d75f0: 0xc07698c  jal         func_1DA630
label_3d75f4:
    if (ctx->pc == 0x3D75F4u) {
        ctx->pc = 0x3D75F4u;
            // 0x3d75f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D75F8u;
        goto label_3d75f8;
    }
    ctx->pc = 0x3D75F0u;
    SET_GPR_U32(ctx, 31, 0x3D75F8u);
    ctx->pc = 0x3D75F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D75F0u;
            // 0x3d75f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75F8u; }
        if (ctx->pc != 0x3D75F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D75F8u; }
        if (ctx->pc != 0x3D75F8u) { return; }
    }
    ctx->pc = 0x3D75F8u;
label_3d75f8:
    // 0x3d75f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d75fc:
    // 0x3d75fc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3d7600:
    if (ctx->pc == 0x3D7600u) {
        ctx->pc = 0x3D7604u;
        goto label_3d7604;
    }
    ctx->pc = 0x3D75FCu;
    {
        const bool branch_taken_0x3d75fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d75fc) {
            ctx->pc = 0x3D760Cu;
            goto label_3d760c;
        }
    }
    ctx->pc = 0x3D7604u;
label_3d7604:
    // 0x3d7604: 0x10000033  b           . + 4 + (0x33 << 2)
label_3d7608:
    if (ctx->pc == 0x3D7608u) {
        ctx->pc = 0x3D7608u;
            // 0x3d7608: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3D760Cu;
        goto label_3d760c;
    }
    ctx->pc = 0x3D7604u;
    {
        const bool branch_taken_0x3d7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7604u;
            // 0x3d7608: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7604) {
            ctx->pc = 0x3D76D4u;
            goto label_3d76d4;
        }
    }
    ctx->pc = 0x3D760Cu;
label_3d760c:
    // 0x3d760c: 0xc0576f4  jal         func_15DBD0
label_3d7610:
    if (ctx->pc == 0x3D7610u) {
        ctx->pc = 0x3D7614u;
        goto label_3d7614;
    }
    ctx->pc = 0x3D760Cu;
    SET_GPR_U32(ctx, 31, 0x3D7614u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7614u; }
        if (ctx->pc != 0x3D7614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7614u; }
        if (ctx->pc != 0x3D7614u) { return; }
    }
    ctx->pc = 0x3D7614u;
label_3d7614:
    // 0x3d7614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d7614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7618:
    // 0x3d7618: 0xc076984  jal         func_1DA610
label_3d761c:
    if (ctx->pc == 0x3D761Cu) {
        ctx->pc = 0x3D761Cu;
            // 0x3d761c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7620u;
        goto label_3d7620;
    }
    ctx->pc = 0x3D7618u;
    SET_GPR_U32(ctx, 31, 0x3D7620u);
    ctx->pc = 0x3D761Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7618u;
            // 0x3d761c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7620u; }
        if (ctx->pc != 0x3D7620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7620u; }
        if (ctx->pc != 0x3D7620u) { return; }
    }
    ctx->pc = 0x3D7620u;
label_3d7620:
    // 0x3d7620: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7624:
    // 0x3d7624: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d7624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d7628:
    // 0x3d7628: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d7628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d762c:
    // 0x3d762c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7630:
    // 0x3d7630: 0xc442f7f0  lwc1        $f2, -0x810($v0)
    ctx->pc = 0x3d7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d7634:
    // 0x3d7634: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d7634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7638:
    // 0x3d7638: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d7638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d763c:
    // 0x3d763c: 0xc441f7f8  lwc1        $f1, -0x808($v0)
    ctx->pc = 0x3d763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7640:
    // 0x3d7640: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x3d7640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3d7644:
    // 0x3d7644: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d7644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d7648:
    // 0x3d7648: 0xc440f7fc  lwc1        $f0, -0x804($v0)
    ctx->pc = 0x3d7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d764c:
    // 0x3d764c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3d764cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3d7650:
    // 0x3d7650: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d7650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d7654:
    // 0x3d7654: 0x8c42f7f4  lw          $v0, -0x80C($v0)
    ctx->pc = 0x3d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965236)));
label_3d7658:
    // 0x3d7658: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3d7658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3d765c:
    // 0x3d765c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3d765cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3d7660:
    // 0x3d7660: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3d7660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d7664:
    // 0x3d7664: 0xc04cca0  jal         func_133280
label_3d7668:
    if (ctx->pc == 0x3D7668u) {
        ctx->pc = 0x3D7668u;
            // 0x3d7668: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x3D766Cu;
        goto label_3d766c;
    }
    ctx->pc = 0x3D7664u;
    SET_GPR_U32(ctx, 31, 0x3D766Cu);
    ctx->pc = 0x3D7668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7664u;
            // 0x3d7668: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D766Cu; }
        if (ctx->pc != 0x3D766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D766Cu; }
        if (ctx->pc != 0x3D766Cu) { return; }
    }
    ctx->pc = 0x3D766Cu;
label_3d766c:
    // 0x3d766c: 0xc076980  jal         func_1DA600
label_3d7670:
    if (ctx->pc == 0x3D7670u) {
        ctx->pc = 0x3D7670u;
            // 0x3d7670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7674u;
        goto label_3d7674;
    }
    ctx->pc = 0x3D766Cu;
    SET_GPR_U32(ctx, 31, 0x3D7674u);
    ctx->pc = 0x3D7670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D766Cu;
            // 0x3d7670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7674u; }
        if (ctx->pc != 0x3D7674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7674u; }
        if (ctx->pc != 0x3D7674u) { return; }
    }
    ctx->pc = 0x3D7674u;
label_3d7674:
    // 0x3d7674: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d7678:
    // 0x3d7678: 0xc04cc34  jal         func_1330D0
label_3d767c:
    if (ctx->pc == 0x3D767Cu) {
        ctx->pc = 0x3D767Cu;
            // 0x3d767c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7680u;
        goto label_3d7680;
    }
    ctx->pc = 0x3D7678u;
    SET_GPR_U32(ctx, 31, 0x3D7680u);
    ctx->pc = 0x3D767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7678u;
            // 0x3d767c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7680u; }
        if (ctx->pc != 0x3D7680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7680u; }
        if (ctx->pc != 0x3D7680u) { return; }
    }
    ctx->pc = 0x3D7680u;
label_3d7680:
    // 0x3d7680: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d7680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3d7684:
    // 0x3d7684: 0xc4619958  lwc1        $f1, -0x66A8($v1)
    ctx->pc = 0x3d7684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7688:
    // 0x3d7688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d7688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d768c:
    // 0x3d768c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3d7690:
    if (ctx->pc == 0x3D7690u) {
        ctx->pc = 0x3D7690u;
            // 0x3d7690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7694u;
        goto label_3d7694;
    }
    ctx->pc = 0x3D768Cu;
    {
        const bool branch_taken_0x3d768c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d768c) {
            ctx->pc = 0x3D7690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D768Cu;
            // 0x3d7690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D769Cu;
            goto label_3d769c;
        }
    }
    ctx->pc = 0x3D7694u;
label_3d7694:
    // 0x3d7694: 0x1000000f  b           . + 4 + (0xF << 2)
label_3d7698:
    if (ctx->pc == 0x3D7698u) {
        ctx->pc = 0x3D7698u;
            // 0x3d7698: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D769Cu;
        goto label_3d769c;
    }
    ctx->pc = 0x3D7694u;
    {
        const bool branch_taken_0x3d7694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7694u;
            // 0x3d7698: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7694) {
            ctx->pc = 0x3D76D4u;
            goto label_3d76d4;
        }
    }
    ctx->pc = 0x3D769Cu;
label_3d769c:
    // 0x3d769c: 0xc07697c  jal         func_1DA5F0
label_3d76a0:
    if (ctx->pc == 0x3D76A0u) {
        ctx->pc = 0x3D76A4u;
        goto label_3d76a4;
    }
    ctx->pc = 0x3D769Cu;
    SET_GPR_U32(ctx, 31, 0x3D76A4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76A4u; }
        if (ctx->pc != 0x3D76A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76A4u; }
        if (ctx->pc != 0x3D76A4u) { return; }
    }
    ctx->pc = 0x3D76A4u;
label_3d76a4:
    // 0x3d76a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d76a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d76a8:
    // 0x3d76a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d76a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d76ac:
    // 0x3d76ac: 0xc04cd60  jal         func_133580
label_3d76b0:
    if (ctx->pc == 0x3D76B0u) {
        ctx->pc = 0x3D76B0u;
            // 0x3d76b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D76B4u;
        goto label_3d76b4;
    }
    ctx->pc = 0x3D76ACu;
    SET_GPR_U32(ctx, 31, 0x3D76B4u);
    ctx->pc = 0x3D76B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D76ACu;
            // 0x3d76b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76B4u; }
        if (ctx->pc != 0x3D76B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76B4u; }
        if (ctx->pc != 0x3D76B4u) { return; }
    }
    ctx->pc = 0x3D76B4u;
label_3d76b4:
    // 0x3d76b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d76b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d76b8:
    // 0x3d76b8: 0xc04c650  jal         func_131940
label_3d76bc:
    if (ctx->pc == 0x3D76BCu) {
        ctx->pc = 0x3D76BCu;
            // 0x3d76bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D76C0u;
        goto label_3d76c0;
    }
    ctx->pc = 0x3D76B8u;
    SET_GPR_U32(ctx, 31, 0x3D76C0u);
    ctx->pc = 0x3D76BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D76B8u;
            // 0x3d76bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76C0u; }
        if (ctx->pc != 0x3D76C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D76C0u; }
        if (ctx->pc != 0x3D76C0u) { return; }
    }
    ctx->pc = 0x3D76C0u;
label_3d76c0:
    // 0x3d76c0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3d76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_3d76c4:
    // 0x3d76c4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3d76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d76c8:
    // 0x3d76c8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3d76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_3d76cc:
    // 0x3d76cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d76d0:
    // 0x3d76d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d76d4:
    // 0x3d76d4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3d76d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d76d8:
    // 0x3d76d8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_3d76dc:
    if (ctx->pc == 0x3D76DCu) {
        ctx->pc = 0x3D76DCu;
            // 0x3d76dc: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x3D76E0u;
        goto label_3d76e0;
    }
    ctx->pc = 0x3D76D8u;
    {
        const bool branch_taken_0x3d76d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D76DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D76D8u;
            // 0x3d76dc: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76d8) {
            ctx->pc = 0x3D77D8u;
            goto label_3d77d8;
        }
    }
    ctx->pc = 0x3D76E0u;
label_3d76e0:
    // 0x3d76e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d76e4:
    // 0x3d76e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d76e8:
    // 0x3d76e8: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x3d76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d76ec:
    // 0x3d76ec: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3d76ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3d76f0:
    // 0x3d76f0: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x3d76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_3d76f4:
    // 0x3d76f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d76f8:
    // 0x3d76f8: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x3d76f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d76fc:
    // 0x3d76fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7700:
    // 0x3d7700: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x3d7700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3d7704:
    // 0x3d7704: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3d7704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_3d7708:
    // 0x3d7708: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3d7708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_3d770c:
    // 0x3d770c: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x3d770cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3d7710:
    // 0x3d7710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7714:
    // 0x3d7714: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3d7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_3d7718:
    // 0x3d7718: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d771c:
    // 0x3d771c: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x3d771cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_3d7720:
    // 0x3d7720: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d7720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d7724:
    // 0x3d7724: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3d7724u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_3d7728:
    // 0x3d7728: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3d7728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3d772c:
    // 0x3d772c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x3d772cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3d7730:
    // 0x3d7730: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7734:
    // 0x3d7734: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x3d7734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_3d7738:
    // 0x3d7738: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3d7738u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3d773c:
    // 0x3d773c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d773cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7740:
    // 0x3d7740: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x3d7740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3d7744:
    // 0x3d7744: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7748:
    // 0x3d7748: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x3d7748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3d774c:
    // 0x3d774c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x3d774cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_3d7750:
    // 0x3d7750: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3d7750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d7754:
    // 0x3d7754: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x3d7754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d7758:
    // 0x3d7758: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x3d7758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_3d775c:
    // 0x3d775c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d7760:
    // 0x3d7760: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x3d7760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_3d7764:
    // 0x3d7764: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3d7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3d7768:
    // 0x3d7768: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x3d7768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_3d776c:
    // 0x3d776c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x3d776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d7770:
    // 0x3d7770: 0xc04e4a4  jal         func_139290
label_3d7774:
    if (ctx->pc == 0x3D7774u) {
        ctx->pc = 0x3D7774u;
            // 0x3d7774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7778u;
        goto label_3d7778;
    }
    ctx->pc = 0x3D7770u;
    SET_GPR_U32(ctx, 31, 0x3D7778u);
    ctx->pc = 0x3D7774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7770u;
            // 0x3d7774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7778u; }
        if (ctx->pc != 0x3D7778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7778u; }
        if (ctx->pc != 0x3D7778u) { return; }
    }
    ctx->pc = 0x3D7778u;
label_3d7778:
    // 0x3d7778: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x3d7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3d777c:
    // 0x3d777c: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x3d777cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_3d7780:
    // 0x3d7780: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3d7784:
    if (ctx->pc == 0x3D7784u) {
        ctx->pc = 0x3D7784u;
            // 0x3d7784: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7788u;
        goto label_3d7788;
    }
    ctx->pc = 0x3D7780u;
    {
        const bool branch_taken_0x3d7780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7780) {
            ctx->pc = 0x3D7784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7780u;
            // 0x3d7784: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7790u;
            goto label_3d7790;
        }
    }
    ctx->pc = 0x3D7788u;
label_3d7788:
    // 0x3d7788: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3d7788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3d778c:
    // 0x3d778c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7790:
    // 0x3d7790: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d7790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d7794:
    // 0x3d7794: 0xc04cd60  jal         func_133580
label_3d7798:
    if (ctx->pc == 0x3D7798u) {
        ctx->pc = 0x3D7798u;
            // 0x3d7798: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D779Cu;
        goto label_3d779c;
    }
    ctx->pc = 0x3D7794u;
    SET_GPR_U32(ctx, 31, 0x3D779Cu);
    ctx->pc = 0x3D7798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7794u;
            // 0x3d7798: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D779Cu; }
        if (ctx->pc != 0x3D779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D779Cu; }
        if (ctx->pc != 0x3D779Cu) { return; }
    }
    ctx->pc = 0x3D779Cu;
label_3d779c:
    // 0x3d779c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3d779cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d77a0:
    // 0x3d77a0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3d77a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3d77a4:
    // 0x3d77a4: 0x320f809  jalr        $t9
label_3d77a8:
    if (ctx->pc == 0x3D77A8u) {
        ctx->pc = 0x3D77A8u;
            // 0x3d77a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D77ACu;
        goto label_3d77ac;
    }
    ctx->pc = 0x3D77A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D77ACu);
        ctx->pc = 0x3D77A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D77A4u;
            // 0x3d77a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D77ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D77ACu; }
            if (ctx->pc != 0x3D77ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3D77ACu;
label_3d77ac:
    // 0x3d77ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d77acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d77b0:
    // 0x3d77b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d77b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d77b4:
    // 0x3d77b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3d77b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d77b8:
    // 0x3d77b8: 0xc054fd4  jal         func_153F50
label_3d77bc:
    if (ctx->pc == 0x3D77BCu) {
        ctx->pc = 0x3D77BCu;
            // 0x3d77bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D77C0u;
        goto label_3d77c0;
    }
    ctx->pc = 0x3D77B8u;
    SET_GPR_U32(ctx, 31, 0x3D77C0u);
    ctx->pc = 0x3D77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D77B8u;
            // 0x3d77bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D77C0u; }
        if (ctx->pc != 0x3D77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D77C0u; }
        if (ctx->pc != 0x3D77C0u) { return; }
    }
    ctx->pc = 0x3D77C0u;
label_3d77c0:
    // 0x3d77c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d77c4:
    // 0x3d77c4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x3d77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3d77c8:
    // 0x3d77c8: 0xc44c9958  lwc1        $f12, -0x66A8($v0)
    ctx->pc = 0x3d77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d77cc:
    // 0x3d77cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d77ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d77d0:
    // 0x3d77d0: 0xc0e31f8  jal         func_38C7E0
label_3d77d4:
    if (ctx->pc == 0x3D77D4u) {
        ctx->pc = 0x3D77D4u;
            // 0x3d77d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D77D8u;
        goto label_3d77d8;
    }
    ctx->pc = 0x3D77D0u;
    SET_GPR_U32(ctx, 31, 0x3D77D8u);
    ctx->pc = 0x3D77D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D77D0u;
            // 0x3d77d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D77D8u; }
        if (ctx->pc != 0x3D77D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D77D8u; }
        if (ctx->pc != 0x3D77D8u) { return; }
    }
    ctx->pc = 0x3D77D8u;
label_3d77d8:
    // 0x3d77d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d77d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d77dc:
    // 0x3d77dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d77dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d77e0:
    // 0x3d77e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d77e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d77e4:
    // 0x3d77e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d77e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d77e8:
    // 0x3d77e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d77e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d77ec:
    // 0x3d77ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d77ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d77f0:
    // 0x3d77f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d77f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d77f4:
    // 0x3d77f4: 0x3e00008  jr          $ra
label_3d77f8:
    if (ctx->pc == 0x3D77F8u) {
        ctx->pc = 0x3D77F8u;
            // 0x3d77f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D77FCu;
        goto label_3d77fc;
    }
    ctx->pc = 0x3D77F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D77F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D77F4u;
            // 0x3d77f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D77FCu;
label_3d77fc:
    // 0x3d77fc: 0x0  nop
    ctx->pc = 0x3d77fcu;
    // NOP
label_3d7800:
    // 0x3d7800: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d7800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d7804:
    // 0x3d7804: 0x3e00008  jr          $ra
label_3d7808:
    if (ctx->pc == 0x3D7808u) {
        ctx->pc = 0x3D7808u;
            // 0x3d7808: 0x24429948  addiu       $v0, $v0, -0x66B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941000));
        ctx->pc = 0x3D780Cu;
        goto label_3d780c;
    }
    ctx->pc = 0x3D7804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7804u;
            // 0x3d7808: 0x24429948  addiu       $v0, $v0, -0x66B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D780Cu;
label_3d780c:
    // 0x3d780c: 0x0  nop
    ctx->pc = 0x3d780cu;
    // NOP
label_3d7810:
    // 0x3d7810: 0x3e00008  jr          $ra
label_3d7814:
    if (ctx->pc == 0x3D7814u) {
        ctx->pc = 0x3D7814u;
            // 0x3d7814: 0x24022ef4  addiu       $v0, $zero, 0x2EF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12020));
        ctx->pc = 0x3D7818u;
        goto label_3d7818;
    }
    ctx->pc = 0x3D7810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7810u;
            // 0x3d7814: 0x24022ef4  addiu       $v0, $zero, 0x2EF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7818u;
label_3d7818:
    // 0x3d7818: 0x0  nop
    ctx->pc = 0x3d7818u;
    // NOP
label_3d781c:
    // 0x3d781c: 0x0  nop
    ctx->pc = 0x3d781cu;
    // NOP
label_3d7820:
    // 0x3d7820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d7824:
    // 0x3d7824: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d7828:
    // 0x3d7828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d7828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d782c:
    // 0x3d782c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d7830:
    // 0x3d7830: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d7830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7834:
    // 0x3d7834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7838:
    // 0x3d7838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d783c:
    // 0x3d783c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7840:
    // 0x3d7840: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3d7840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d7844:
    // 0x3d7844: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3d7848:
    if (ctx->pc == 0x3D7848u) {
        ctx->pc = 0x3D7848u;
            // 0x3d7848: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D784Cu;
        goto label_3d784c;
    }
    ctx->pc = 0x3D7844u;
    {
        const bool branch_taken_0x3d7844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7844u;
            // 0x3d7848: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7844) {
            ctx->pc = 0x3D7888u;
            goto label_3d7888;
        }
    }
    ctx->pc = 0x3D784Cu;
label_3d784c:
    // 0x3d784c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d784cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7850:
    // 0x3d7850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d7850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7854:
    // 0x3d7854: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d7854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7858:
    // 0x3d7858: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3d7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3d785c:
    // 0x3d785c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3d785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3d7860:
    // 0x3d7860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d7860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7864:
    // 0x3d7864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d7864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7868:
    // 0x3d7868: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d7868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d786c:
    // 0x3d786c: 0x320f809  jalr        $t9
label_3d7870:
    if (ctx->pc == 0x3D7870u) {
        ctx->pc = 0x3D7874u;
        goto label_3d7874;
    }
    ctx->pc = 0x3D786Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7874u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7874u; }
            if (ctx->pc != 0x3D7874u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7874u;
label_3d7874:
    // 0x3d7874: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3d7874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d7878:
    // 0x3d7878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d7878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d787c:
    // 0x3d787c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3d787cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d7880:
    // 0x3d7880: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3d7884:
    if (ctx->pc == 0x3D7884u) {
        ctx->pc = 0x3D7884u;
            // 0x3d7884: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D7888u;
        goto label_3d7888;
    }
    ctx->pc = 0x3D7880u;
    {
        const bool branch_taken_0x3d7880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7880u;
            // 0x3d7884: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7880) {
            ctx->pc = 0x3D7858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d7858;
        }
    }
    ctx->pc = 0x3D7888u;
label_3d7888:
    // 0x3d7888: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d7888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d788c:
    // 0x3d788c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d788cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7890:
    // 0x3d7890: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d7890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7894:
    // 0x3d7894: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d7894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7898:
    // 0x3d7898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d789c:
    // 0x3d789c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d789cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d78a0:
    // 0x3d78a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d78a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d78a4:
    // 0x3d78a4: 0x3e00008  jr          $ra
label_3d78a8:
    if (ctx->pc == 0x3D78A8u) {
        ctx->pc = 0x3D78A8u;
            // 0x3d78a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D78ACu;
        goto label_3d78ac;
    }
    ctx->pc = 0x3D78A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D78A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D78A4u;
            // 0x3d78a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D78ACu;
label_3d78ac:
    // 0x3d78ac: 0x0  nop
    ctx->pc = 0x3d78acu;
    // NOP
label_3d78b0:
    // 0x3d78b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d78b4:
    // 0x3d78b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d78b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d78b8:
    // 0x3d78b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d78bc:
    // 0x3d78bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3d78bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3d78c0:
    // 0x3d78c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d78c4:
    // 0x3d78c4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3d78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d78c8:
    // 0x3d78c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d78c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d78cc:
    // 0x3d78cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3d78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3d78d0:
    // 0x3d78d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d78d4:
    // 0x3d78d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d78d8:
    // 0x3d78d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3d78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3d78dc:
    // 0x3d78dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3d78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d78e0:
    // 0x3d78e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d78e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d78e4:
    // 0x3d78e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d78e8:
    // 0x3d78e8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3d78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3d78ec:
    // 0x3d78ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3d78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3d78f0:
    // 0x3d78f0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3d78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3d78f4:
    // 0x3d78f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d78f8:
    // 0x3d78f8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3d78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3d78fc:
    // 0x3d78fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3d78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d7900:
    // 0x3d7900: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3d7900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3d7904:
    // 0x3d7904: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d7904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d7908:
    // 0x3d7908: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d7908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d790c:
    // 0x3d790c: 0xc0a997c  jal         func_2A65F0
label_3d7910:
    if (ctx->pc == 0x3D7910u) {
        ctx->pc = 0x3D7910u;
            // 0x3d7910: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3D7914u;
        goto label_3d7914;
    }
    ctx->pc = 0x3D790Cu;
    SET_GPR_U32(ctx, 31, 0x3D7914u);
    ctx->pc = 0x3D7910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D790Cu;
            // 0x3d7910: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7914u; }
        if (ctx->pc != 0x3D7914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7914u; }
        if (ctx->pc != 0x3D7914u) { return; }
    }
    ctx->pc = 0x3D7914u;
label_3d7914:
    // 0x3d7914: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3d7914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3d7918:
    // 0x3d7918: 0xc0d879c  jal         func_361E70
label_3d791c:
    if (ctx->pc == 0x3D791Cu) {
        ctx->pc = 0x3D791Cu;
            // 0x3d791c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7920u;
        goto label_3d7920;
    }
    ctx->pc = 0x3D7918u;
    SET_GPR_U32(ctx, 31, 0x3D7920u);
    ctx->pc = 0x3D791Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7918u;
            // 0x3d791c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7920u; }
        if (ctx->pc != 0x3D7920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7920u; }
        if (ctx->pc != 0x3D7920u) { return; }
    }
    ctx->pc = 0x3D7920u;
label_3d7920:
    // 0x3d7920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7924:
    // 0x3d7924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7928:
    // 0x3d7928: 0x3e00008  jr          $ra
label_3d792c:
    if (ctx->pc == 0x3D792Cu) {
        ctx->pc = 0x3D792Cu;
            // 0x3d792c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D7930u;
        goto label_3d7930;
    }
    ctx->pc = 0x3D7928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7928u;
            // 0x3d792c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7930u;
label_3d7930:
    // 0x3d7930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d7934:
    // 0x3d7934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d7938:
    // 0x3d7938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d793c:
    // 0x3d793c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3d793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3d7940:
    // 0x3d7940: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3d7944:
    if (ctx->pc == 0x3D7944u) {
        ctx->pc = 0x3D7944u;
            // 0x3d7944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7948u;
        goto label_3d7948;
    }
    ctx->pc = 0x3D7940u;
    {
        const bool branch_taken_0x3d7940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7940u;
            // 0x3d7944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7940) {
            ctx->pc = 0x3D7A60u;
            goto label_3d7a60;
        }
    }
    ctx->pc = 0x3D7948u;
label_3d7948:
    // 0x3d7948: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d794c:
    // 0x3d794c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3d7950:
    // 0x3d7950: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d7950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d7954:
    // 0x3d7954: 0xc075128  jal         func_1D44A0
label_3d7958:
    if (ctx->pc == 0x3D7958u) {
        ctx->pc = 0x3D7958u;
            // 0x3d7958: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3D795Cu;
        goto label_3d795c;
    }
    ctx->pc = 0x3D7954u;
    SET_GPR_U32(ctx, 31, 0x3D795Cu);
    ctx->pc = 0x3D7958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7954u;
            // 0x3d7958: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D795Cu; }
        if (ctx->pc != 0x3D795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D795Cu; }
        if (ctx->pc != 0x3D795Cu) { return; }
    }
    ctx->pc = 0x3D795Cu;
label_3d795c:
    // 0x3d795c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d7960:
    // 0x3d7960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7964:
    // 0x3d7964: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3d7968:
    // 0x3d7968: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3d7968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3d796c:
    // 0x3d796c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d796cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d7970:
    // 0x3d7970: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d7974:
    if (ctx->pc == 0x3D7974u) {
        ctx->pc = 0x3D7974u;
            // 0x3d7974: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3D7978u;
        goto label_3d7978;
    }
    ctx->pc = 0x3D7970u;
    {
        const bool branch_taken_0x3d7970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7970u;
            // 0x3d7974: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7970) {
            ctx->pc = 0x3D7980u;
            goto label_3d7980;
        }
    }
    ctx->pc = 0x3D7978u;
label_3d7978:
    // 0x3d7978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d797c:
    // 0x3d797c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3d797cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3d7980:
    // 0x3d7980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d7980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d7984:
    // 0x3d7984: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d7984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d7988:
    // 0x3d7988: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3d7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3d798c:
    // 0x3d798c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d7990:
    // 0x3d7990: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d7990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d7994:
    // 0x3d7994: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d7998:
    if (ctx->pc == 0x3D7998u) {
        ctx->pc = 0x3D7998u;
            // 0x3d7998: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D799Cu;
        goto label_3d799c;
    }
    ctx->pc = 0x3D7994u;
    {
        const bool branch_taken_0x3d7994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7994) {
            ctx->pc = 0x3D7998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7994u;
            // 0x3d7998: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D79A8u;
            goto label_3d79a8;
        }
    }
    ctx->pc = 0x3D799Cu;
label_3d799c:
    // 0x3d799c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d79a0:
    // 0x3d79a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3d79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3d79a4:
    // 0x3d79a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d79a8:
    // 0x3d79a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d79ac:
    // 0x3d79ac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3d79b0:
    // 0x3d79b0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3d79b4:
    // 0x3d79b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3d79b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d79b8:
    // 0x3d79b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d79bc:
    if (ctx->pc == 0x3D79BCu) {
        ctx->pc = 0x3D79BCu;
            // 0x3d79bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D79C0u;
        goto label_3d79c0;
    }
    ctx->pc = 0x3D79B8u;
    {
        const bool branch_taken_0x3d79b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d79b8) {
            ctx->pc = 0x3D79BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D79B8u;
            // 0x3d79bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D79CCu;
            goto label_3d79cc;
        }
    }
    ctx->pc = 0x3D79C0u;
label_3d79c0:
    // 0x3d79c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d79c4:
    // 0x3d79c4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3d79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3d79c8:
    // 0x3d79c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d79c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d79cc:
    // 0x3d79cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d79ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d79d0:
    // 0x3d79d0: 0x320f809  jalr        $t9
label_3d79d4:
    if (ctx->pc == 0x3D79D4u) {
        ctx->pc = 0x3D79D4u;
            // 0x3d79d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D79D8u;
        goto label_3d79d8;
    }
    ctx->pc = 0x3D79D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D79D8u);
        ctx->pc = 0x3D79D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D79D0u;
            // 0x3d79d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D79D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D79D8u; }
            if (ctx->pc != 0x3D79D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D79D8u;
label_3d79d8:
    // 0x3d79d8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d79dc:
    // 0x3d79dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d79e0:
    // 0x3d79e0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3d79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3d79e4:
    // 0x3d79e4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d79e8:
    // 0x3d79e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d79e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d79ec:
    // 0x3d79ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d79ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d79f0:
    // 0x3d79f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d79f4:
    if (ctx->pc == 0x3D79F4u) {
        ctx->pc = 0x3D79F4u;
            // 0x3d79f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3D79F8u;
        goto label_3d79f8;
    }
    ctx->pc = 0x3D79F0u;
    {
        const bool branch_taken_0x3d79f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d79f0) {
            ctx->pc = 0x3D79F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D79F0u;
            // 0x3d79f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7A04u;
            goto label_3d7a04;
        }
    }
    ctx->pc = 0x3D79F8u;
label_3d79f8:
    // 0x3d79f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d79fc:
    // 0x3d79fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3d79fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3d7a00:
    // 0x3d7a00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d7a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d7a04:
    // 0x3d7a04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a08:
    // 0x3d7a08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3d7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3d7a0c:
    // 0x3d7a0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3d7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3d7a10:
    // 0x3d7a10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3d7a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d7a14:
    // 0x3d7a14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3d7a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d7a18:
    // 0x3d7a18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d7a1c:
    if (ctx->pc == 0x3D7A1Cu) {
        ctx->pc = 0x3D7A20u;
        goto label_3d7a20;
    }
    ctx->pc = 0x3D7A18u;
    {
        const bool branch_taken_0x3d7a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7a18) {
            ctx->pc = 0x3D7A28u;
            goto label_3d7a28;
        }
    }
    ctx->pc = 0x3D7A20u;
label_3d7a20:
    // 0x3d7a20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a24:
    // 0x3d7a24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3d7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3d7a28:
    // 0x3d7a28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a2c:
    // 0x3d7a2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3d7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3d7a30:
    // 0x3d7a30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d7a30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d7a34:
    // 0x3d7a34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3d7a38:
    if (ctx->pc == 0x3D7A38u) {
        ctx->pc = 0x3D7A3Cu;
        goto label_3d7a3c;
    }
    ctx->pc = 0x3D7A34u;
    {
        const bool branch_taken_0x3d7a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7a34) {
            ctx->pc = 0x3D7A44u;
            goto label_3d7a44;
        }
    }
    ctx->pc = 0x3D7A3Cu;
label_3d7a3c:
    // 0x3d7a3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a40:
    // 0x3d7a40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3d7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3d7a44:
    // 0x3d7a44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a48:
    // 0x3d7a48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3d7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3d7a4c:
    // 0x3d7a4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d7a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d7a50:
    // 0x3d7a50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3d7a54:
    if (ctx->pc == 0x3D7A54u) {
        ctx->pc = 0x3D7A54u;
            // 0x3d7a54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D7A58u;
        goto label_3d7a58;
    }
    ctx->pc = 0x3D7A50u;
    {
        const bool branch_taken_0x3d7a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7a50) {
            ctx->pc = 0x3D7A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7A50u;
            // 0x3d7a54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7A64u;
            goto label_3d7a64;
        }
    }
    ctx->pc = 0x3D7A58u;
label_3d7a58:
    // 0x3d7a58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d7a5c:
    // 0x3d7a5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3d7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3d7a60:
    // 0x3d7a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7a64:
    // 0x3d7a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7a68:
    // 0x3d7a68: 0x3e00008  jr          $ra
label_3d7a6c:
    if (ctx->pc == 0x3D7A6Cu) {
        ctx->pc = 0x3D7A6Cu;
            // 0x3d7a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D7A70u;
        goto label_3d7a70;
    }
    ctx->pc = 0x3D7A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7A68u;
            // 0x3d7a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7A70u;
label_3d7a70:
    // 0x3d7a70: 0x80f5958  j           func_3D6560
label_3d7a74:
    if (ctx->pc == 0x3D7A74u) {
        ctx->pc = 0x3D7A74u;
            // 0x3d7a74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D7A78u;
        goto label_3d7a78;
    }
    ctx->pc = 0x3D7A70u;
    ctx->pc = 0x3D7A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7A70u;
            // 0x3d7a74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6560u;
    {
        auto targetFn = runtime->lookupFunction(0x3D6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D7A78u;
label_3d7a78:
    // 0x3d7a78: 0x0  nop
    ctx->pc = 0x3d7a78u;
    // NOP
label_3d7a7c:
    // 0x3d7a7c: 0x0  nop
    ctx->pc = 0x3d7a7cu;
    // NOP
label_3d7a80:
    // 0x3d7a80: 0x80f57d0  j           func_3D5F40
label_3d7a84:
    if (ctx->pc == 0x3D7A84u) {
        ctx->pc = 0x3D7A84u;
            // 0x3d7a84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D7A88u;
        goto label_3d7a88;
    }
    ctx->pc = 0x3D7A80u;
    ctx->pc = 0x3D7A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7A80u;
            // 0x3d7a84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F40u;
    if (runtime->hasFunction(0x3D5F40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5F40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D5F40_0x3d5f40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D7A88u;
label_3d7a88:
    // 0x3d7a88: 0x0  nop
    ctx->pc = 0x3d7a88u;
    // NOP
label_3d7a8c:
    // 0x3d7a8c: 0x0  nop
    ctx->pc = 0x3d7a8cu;
    // NOP
label_3d7a90:
    // 0x3d7a90: 0x80f5828  j           func_3D60A0
label_3d7a94:
    if (ctx->pc == 0x3D7A94u) {
        ctx->pc = 0x3D7A94u;
            // 0x3d7a94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3D7A98u;
        goto label_3d7a98;
    }
    ctx->pc = 0x3D7A90u;
    ctx->pc = 0x3D7A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7A90u;
            // 0x3d7a94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D60A0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D60A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D7A98u;
label_3d7a98:
    // 0x3d7a98: 0x0  nop
    ctx->pc = 0x3d7a98u;
    // NOP
label_3d7a9c:
    // 0x3d7a9c: 0x0  nop
    ctx->pc = 0x3d7a9cu;
    // NOP
label_3d7aa0:
    // 0x3d7aa0: 0x80f57ac  j           func_3D5EB0
label_3d7aa4:
    if (ctx->pc == 0x3D7AA4u) {
        ctx->pc = 0x3D7AA4u;
            // 0x3d7aa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3D7AA8u;
        goto label_3d7aa8;
    }
    ctx->pc = 0x3D7AA0u;
    ctx->pc = 0x3D7AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7AA0u;
            // 0x3d7aa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x3D5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3D7AA8u;
label_3d7aa8:
    // 0x3d7aa8: 0x0  nop
    ctx->pc = 0x3d7aa8u;
    // NOP
label_3d7aac:
    // 0x3d7aac: 0x0  nop
    ctx->pc = 0x3d7aacu;
    // NOP
label_3d7ab0:
    // 0x3d7ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d7ab4:
    // 0x3d7ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d7ab8:
    // 0x3d7ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d7abc:
    // 0x3d7abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7ac0:
    // 0x3d7ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ac4:
    // 0x3d7ac4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3d7ac8:
    if (ctx->pc == 0x3D7AC8u) {
        ctx->pc = 0x3D7AC8u;
            // 0x3d7ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7ACCu;
        goto label_3d7acc;
    }
    ctx->pc = 0x3D7AC4u;
    {
        const bool branch_taken_0x3d7ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7AC4u;
            // 0x3d7ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ac4) {
            ctx->pc = 0x3D7B20u;
            goto label_3d7b20;
        }
    }
    ctx->pc = 0x3D7ACCu;
label_3d7acc:
    // 0x3d7acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7ad0:
    // 0x3d7ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d7ad4:
    // 0x3d7ad4: 0x246395b0  addiu       $v1, $v1, -0x6A50
    ctx->pc = 0x3d7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940080));
label_3d7ad8:
    // 0x3d7ad8: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x3d7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
label_3d7adc:
    // 0x3d7adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d7ae0:
    // 0x3d7ae0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3d7ae4:
    if (ctx->pc == 0x3D7AE4u) {
        ctx->pc = 0x3D7AE4u;
            // 0x3d7ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D7AE8u;
        goto label_3d7ae8;
    }
    ctx->pc = 0x3D7AE0u;
    {
        const bool branch_taken_0x3d7ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7AE0u;
            // 0x3d7ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ae0) {
            ctx->pc = 0x3D7B08u;
            goto label_3d7b08;
        }
    }
    ctx->pc = 0x3D7AE8u;
label_3d7ae8:
    // 0x3d7ae8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d7aec:
    // 0x3d7aec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d7af0:
    // 0x3d7af0: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x3d7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
label_3d7af4:
    // 0x3d7af4: 0x24429748  addiu       $v0, $v0, -0x68B8
    ctx->pc = 0x3d7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940488));
label_3d7af8:
    // 0x3d7af8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d7afc:
    // 0x3d7afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b00:
    // 0x3d7b00: 0xc0f5ed0  jal         func_3D7B40
label_3d7b04:
    if (ctx->pc == 0x3D7B04u) {
        ctx->pc = 0x3D7B04u;
            // 0x3d7b04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D7B08u;
        goto label_3d7b08;
    }
    ctx->pc = 0x3D7B00u;
    SET_GPR_U32(ctx, 31, 0x3D7B08u);
    ctx->pc = 0x3D7B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B00u;
            // 0x3d7b04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D7B40u;
    if (runtime->hasFunction(0x3D7B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D7B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B08u; }
        if (ctx->pc != 0x3D7B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D7B40_0x3d7b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B08u; }
        if (ctx->pc != 0x3D7B08u) { return; }
    }
    ctx->pc = 0x3D7B08u;
label_3d7b08:
    // 0x3d7b08: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d7b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3d7b0c:
    // 0x3d7b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d7b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d7b10:
    // 0x3d7b10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d7b14:
    if (ctx->pc == 0x3D7B14u) {
        ctx->pc = 0x3D7B14u;
            // 0x3d7b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B18u;
        goto label_3d7b18;
    }
    ctx->pc = 0x3D7B10u;
    {
        const bool branch_taken_0x3d7b10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d7b10) {
            ctx->pc = 0x3D7B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B10u;
            // 0x3d7b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7B24u;
            goto label_3d7b24;
        }
    }
    ctx->pc = 0x3D7B18u;
label_3d7b18:
    // 0x3d7b18: 0xc0400a8  jal         func_1002A0
label_3d7b1c:
    if (ctx->pc == 0x3D7B1Cu) {
        ctx->pc = 0x3D7B1Cu;
            // 0x3d7b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B20u;
        goto label_3d7b20;
    }
    ctx->pc = 0x3D7B18u;
    SET_GPR_U32(ctx, 31, 0x3D7B20u);
    ctx->pc = 0x3D7B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B18u;
            // 0x3d7b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B20u; }
        if (ctx->pc != 0x3D7B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7B20u; }
        if (ctx->pc != 0x3D7B20u) { return; }
    }
    ctx->pc = 0x3D7B20u;
label_3d7b20:
    // 0x3d7b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d7b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b24:
    // 0x3d7b24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7b28:
    // 0x3d7b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7b2c:
    // 0x3d7b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7b30:
    // 0x3d7b30: 0x3e00008  jr          $ra
label_3d7b34:
    if (ctx->pc == 0x3D7B34u) {
        ctx->pc = 0x3D7B34u;
            // 0x3d7b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D7B38u;
        goto label_3d7b38;
    }
    ctx->pc = 0x3D7B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7B30u;
            // 0x3d7b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7B38u;
label_3d7b38:
    // 0x3d7b38: 0x0  nop
    ctx->pc = 0x3d7b38u;
    // NOP
label_3d7b3c:
    // 0x3d7b3c: 0x0  nop
    ctx->pc = 0x3d7b3cu;
    // NOP
}

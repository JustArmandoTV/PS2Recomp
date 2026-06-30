#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358660
// Address: 0x358660 - 0x358c30
void sub_00358660_0x358660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358660_0x358660");
#endif

    switch (ctx->pc) {
        case 0x358660u: goto label_358660;
        case 0x358664u: goto label_358664;
        case 0x358668u: goto label_358668;
        case 0x35866cu: goto label_35866c;
        case 0x358670u: goto label_358670;
        case 0x358674u: goto label_358674;
        case 0x358678u: goto label_358678;
        case 0x35867cu: goto label_35867c;
        case 0x358680u: goto label_358680;
        case 0x358684u: goto label_358684;
        case 0x358688u: goto label_358688;
        case 0x35868cu: goto label_35868c;
        case 0x358690u: goto label_358690;
        case 0x358694u: goto label_358694;
        case 0x358698u: goto label_358698;
        case 0x35869cu: goto label_35869c;
        case 0x3586a0u: goto label_3586a0;
        case 0x3586a4u: goto label_3586a4;
        case 0x3586a8u: goto label_3586a8;
        case 0x3586acu: goto label_3586ac;
        case 0x3586b0u: goto label_3586b0;
        case 0x3586b4u: goto label_3586b4;
        case 0x3586b8u: goto label_3586b8;
        case 0x3586bcu: goto label_3586bc;
        case 0x3586c0u: goto label_3586c0;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586c8u: goto label_3586c8;
        case 0x3586ccu: goto label_3586cc;
        case 0x3586d0u: goto label_3586d0;
        case 0x3586d4u: goto label_3586d4;
        case 0x3586d8u: goto label_3586d8;
        case 0x3586dcu: goto label_3586dc;
        case 0x3586e0u: goto label_3586e0;
        case 0x3586e4u: goto label_3586e4;
        case 0x3586e8u: goto label_3586e8;
        case 0x3586ecu: goto label_3586ec;
        case 0x3586f0u: goto label_3586f0;
        case 0x3586f4u: goto label_3586f4;
        case 0x3586f8u: goto label_3586f8;
        case 0x3586fcu: goto label_3586fc;
        case 0x358700u: goto label_358700;
        case 0x358704u: goto label_358704;
        case 0x358708u: goto label_358708;
        case 0x35870cu: goto label_35870c;
        case 0x358710u: goto label_358710;
        case 0x358714u: goto label_358714;
        case 0x358718u: goto label_358718;
        case 0x35871cu: goto label_35871c;
        case 0x358720u: goto label_358720;
        case 0x358724u: goto label_358724;
        case 0x358728u: goto label_358728;
        case 0x35872cu: goto label_35872c;
        case 0x358730u: goto label_358730;
        case 0x358734u: goto label_358734;
        case 0x358738u: goto label_358738;
        case 0x35873cu: goto label_35873c;
        case 0x358740u: goto label_358740;
        case 0x358744u: goto label_358744;
        case 0x358748u: goto label_358748;
        case 0x35874cu: goto label_35874c;
        case 0x358750u: goto label_358750;
        case 0x358754u: goto label_358754;
        case 0x358758u: goto label_358758;
        case 0x35875cu: goto label_35875c;
        case 0x358760u: goto label_358760;
        case 0x358764u: goto label_358764;
        case 0x358768u: goto label_358768;
        case 0x35876cu: goto label_35876c;
        case 0x358770u: goto label_358770;
        case 0x358774u: goto label_358774;
        case 0x358778u: goto label_358778;
        case 0x35877cu: goto label_35877c;
        case 0x358780u: goto label_358780;
        case 0x358784u: goto label_358784;
        case 0x358788u: goto label_358788;
        case 0x35878cu: goto label_35878c;
        case 0x358790u: goto label_358790;
        case 0x358794u: goto label_358794;
        case 0x358798u: goto label_358798;
        case 0x35879cu: goto label_35879c;
        case 0x3587a0u: goto label_3587a0;
        case 0x3587a4u: goto label_3587a4;
        case 0x3587a8u: goto label_3587a8;
        case 0x3587acu: goto label_3587ac;
        case 0x3587b0u: goto label_3587b0;
        case 0x3587b4u: goto label_3587b4;
        case 0x3587b8u: goto label_3587b8;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587c0u: goto label_3587c0;
        case 0x3587c4u: goto label_3587c4;
        case 0x3587c8u: goto label_3587c8;
        case 0x3587ccu: goto label_3587cc;
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d4u: goto label_3587d4;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587dcu: goto label_3587dc;
        case 0x3587e0u: goto label_3587e0;
        case 0x3587e4u: goto label_3587e4;
        case 0x3587e8u: goto label_3587e8;
        case 0x3587ecu: goto label_3587ec;
        case 0x3587f0u: goto label_3587f0;
        case 0x3587f4u: goto label_3587f4;
        case 0x3587f8u: goto label_3587f8;
        case 0x3587fcu: goto label_3587fc;
        case 0x358800u: goto label_358800;
        case 0x358804u: goto label_358804;
        case 0x358808u: goto label_358808;
        case 0x35880cu: goto label_35880c;
        case 0x358810u: goto label_358810;
        case 0x358814u: goto label_358814;
        case 0x358818u: goto label_358818;
        case 0x35881cu: goto label_35881c;
        case 0x358820u: goto label_358820;
        case 0x358824u: goto label_358824;
        case 0x358828u: goto label_358828;
        case 0x35882cu: goto label_35882c;
        case 0x358830u: goto label_358830;
        case 0x358834u: goto label_358834;
        case 0x358838u: goto label_358838;
        case 0x35883cu: goto label_35883c;
        case 0x358840u: goto label_358840;
        case 0x358844u: goto label_358844;
        case 0x358848u: goto label_358848;
        case 0x35884cu: goto label_35884c;
        case 0x358850u: goto label_358850;
        case 0x358854u: goto label_358854;
        case 0x358858u: goto label_358858;
        case 0x35885cu: goto label_35885c;
        case 0x358860u: goto label_358860;
        case 0x358864u: goto label_358864;
        case 0x358868u: goto label_358868;
        case 0x35886cu: goto label_35886c;
        case 0x358870u: goto label_358870;
        case 0x358874u: goto label_358874;
        case 0x358878u: goto label_358878;
        case 0x35887cu: goto label_35887c;
        case 0x358880u: goto label_358880;
        case 0x358884u: goto label_358884;
        case 0x358888u: goto label_358888;
        case 0x35888cu: goto label_35888c;
        case 0x358890u: goto label_358890;
        case 0x358894u: goto label_358894;
        case 0x358898u: goto label_358898;
        case 0x35889cu: goto label_35889c;
        case 0x3588a0u: goto label_3588a0;
        case 0x3588a4u: goto label_3588a4;
        case 0x3588a8u: goto label_3588a8;
        case 0x3588acu: goto label_3588ac;
        case 0x3588b0u: goto label_3588b0;
        case 0x3588b4u: goto label_3588b4;
        case 0x3588b8u: goto label_3588b8;
        case 0x3588bcu: goto label_3588bc;
        case 0x3588c0u: goto label_3588c0;
        case 0x3588c4u: goto label_3588c4;
        case 0x3588c8u: goto label_3588c8;
        case 0x3588ccu: goto label_3588cc;
        case 0x3588d0u: goto label_3588d0;
        case 0x3588d4u: goto label_3588d4;
        case 0x3588d8u: goto label_3588d8;
        case 0x3588dcu: goto label_3588dc;
        case 0x3588e0u: goto label_3588e0;
        case 0x3588e4u: goto label_3588e4;
        case 0x3588e8u: goto label_3588e8;
        case 0x3588ecu: goto label_3588ec;
        case 0x3588f0u: goto label_3588f0;
        case 0x3588f4u: goto label_3588f4;
        case 0x3588f8u: goto label_3588f8;
        case 0x3588fcu: goto label_3588fc;
        case 0x358900u: goto label_358900;
        case 0x358904u: goto label_358904;
        case 0x358908u: goto label_358908;
        case 0x35890cu: goto label_35890c;
        case 0x358910u: goto label_358910;
        case 0x358914u: goto label_358914;
        case 0x358918u: goto label_358918;
        case 0x35891cu: goto label_35891c;
        case 0x358920u: goto label_358920;
        case 0x358924u: goto label_358924;
        case 0x358928u: goto label_358928;
        case 0x35892cu: goto label_35892c;
        case 0x358930u: goto label_358930;
        case 0x358934u: goto label_358934;
        case 0x358938u: goto label_358938;
        case 0x35893cu: goto label_35893c;
        case 0x358940u: goto label_358940;
        case 0x358944u: goto label_358944;
        case 0x358948u: goto label_358948;
        case 0x35894cu: goto label_35894c;
        case 0x358950u: goto label_358950;
        case 0x358954u: goto label_358954;
        case 0x358958u: goto label_358958;
        case 0x35895cu: goto label_35895c;
        case 0x358960u: goto label_358960;
        case 0x358964u: goto label_358964;
        case 0x358968u: goto label_358968;
        case 0x35896cu: goto label_35896c;
        case 0x358970u: goto label_358970;
        case 0x358974u: goto label_358974;
        case 0x358978u: goto label_358978;
        case 0x35897cu: goto label_35897c;
        case 0x358980u: goto label_358980;
        case 0x358984u: goto label_358984;
        case 0x358988u: goto label_358988;
        case 0x35898cu: goto label_35898c;
        case 0x358990u: goto label_358990;
        case 0x358994u: goto label_358994;
        case 0x358998u: goto label_358998;
        case 0x35899cu: goto label_35899c;
        case 0x3589a0u: goto label_3589a0;
        case 0x3589a4u: goto label_3589a4;
        case 0x3589a8u: goto label_3589a8;
        case 0x3589acu: goto label_3589ac;
        case 0x3589b0u: goto label_3589b0;
        case 0x3589b4u: goto label_3589b4;
        case 0x3589b8u: goto label_3589b8;
        case 0x3589bcu: goto label_3589bc;
        case 0x3589c0u: goto label_3589c0;
        case 0x3589c4u: goto label_3589c4;
        case 0x3589c8u: goto label_3589c8;
        case 0x3589ccu: goto label_3589cc;
        case 0x3589d0u: goto label_3589d0;
        case 0x3589d4u: goto label_3589d4;
        case 0x3589d8u: goto label_3589d8;
        case 0x3589dcu: goto label_3589dc;
        case 0x3589e0u: goto label_3589e0;
        case 0x3589e4u: goto label_3589e4;
        case 0x3589e8u: goto label_3589e8;
        case 0x3589ecu: goto label_3589ec;
        case 0x3589f0u: goto label_3589f0;
        case 0x3589f4u: goto label_3589f4;
        case 0x3589f8u: goto label_3589f8;
        case 0x3589fcu: goto label_3589fc;
        case 0x358a00u: goto label_358a00;
        case 0x358a04u: goto label_358a04;
        case 0x358a08u: goto label_358a08;
        case 0x358a0cu: goto label_358a0c;
        case 0x358a10u: goto label_358a10;
        case 0x358a14u: goto label_358a14;
        case 0x358a18u: goto label_358a18;
        case 0x358a1cu: goto label_358a1c;
        case 0x358a20u: goto label_358a20;
        case 0x358a24u: goto label_358a24;
        case 0x358a28u: goto label_358a28;
        case 0x358a2cu: goto label_358a2c;
        case 0x358a30u: goto label_358a30;
        case 0x358a34u: goto label_358a34;
        case 0x358a38u: goto label_358a38;
        case 0x358a3cu: goto label_358a3c;
        case 0x358a40u: goto label_358a40;
        case 0x358a44u: goto label_358a44;
        case 0x358a48u: goto label_358a48;
        case 0x358a4cu: goto label_358a4c;
        case 0x358a50u: goto label_358a50;
        case 0x358a54u: goto label_358a54;
        case 0x358a58u: goto label_358a58;
        case 0x358a5cu: goto label_358a5c;
        case 0x358a60u: goto label_358a60;
        case 0x358a64u: goto label_358a64;
        case 0x358a68u: goto label_358a68;
        case 0x358a6cu: goto label_358a6c;
        case 0x358a70u: goto label_358a70;
        case 0x358a74u: goto label_358a74;
        case 0x358a78u: goto label_358a78;
        case 0x358a7cu: goto label_358a7c;
        case 0x358a80u: goto label_358a80;
        case 0x358a84u: goto label_358a84;
        case 0x358a88u: goto label_358a88;
        case 0x358a8cu: goto label_358a8c;
        case 0x358a90u: goto label_358a90;
        case 0x358a94u: goto label_358a94;
        case 0x358a98u: goto label_358a98;
        case 0x358a9cu: goto label_358a9c;
        case 0x358aa0u: goto label_358aa0;
        case 0x358aa4u: goto label_358aa4;
        case 0x358aa8u: goto label_358aa8;
        case 0x358aacu: goto label_358aac;
        case 0x358ab0u: goto label_358ab0;
        case 0x358ab4u: goto label_358ab4;
        case 0x358ab8u: goto label_358ab8;
        case 0x358abcu: goto label_358abc;
        case 0x358ac0u: goto label_358ac0;
        case 0x358ac4u: goto label_358ac4;
        case 0x358ac8u: goto label_358ac8;
        case 0x358accu: goto label_358acc;
        case 0x358ad0u: goto label_358ad0;
        case 0x358ad4u: goto label_358ad4;
        case 0x358ad8u: goto label_358ad8;
        case 0x358adcu: goto label_358adc;
        case 0x358ae0u: goto label_358ae0;
        case 0x358ae4u: goto label_358ae4;
        case 0x358ae8u: goto label_358ae8;
        case 0x358aecu: goto label_358aec;
        case 0x358af0u: goto label_358af0;
        case 0x358af4u: goto label_358af4;
        case 0x358af8u: goto label_358af8;
        case 0x358afcu: goto label_358afc;
        case 0x358b00u: goto label_358b00;
        case 0x358b04u: goto label_358b04;
        case 0x358b08u: goto label_358b08;
        case 0x358b0cu: goto label_358b0c;
        case 0x358b10u: goto label_358b10;
        case 0x358b14u: goto label_358b14;
        case 0x358b18u: goto label_358b18;
        case 0x358b1cu: goto label_358b1c;
        case 0x358b20u: goto label_358b20;
        case 0x358b24u: goto label_358b24;
        case 0x358b28u: goto label_358b28;
        case 0x358b2cu: goto label_358b2c;
        case 0x358b30u: goto label_358b30;
        case 0x358b34u: goto label_358b34;
        case 0x358b38u: goto label_358b38;
        case 0x358b3cu: goto label_358b3c;
        case 0x358b40u: goto label_358b40;
        case 0x358b44u: goto label_358b44;
        case 0x358b48u: goto label_358b48;
        case 0x358b4cu: goto label_358b4c;
        case 0x358b50u: goto label_358b50;
        case 0x358b54u: goto label_358b54;
        case 0x358b58u: goto label_358b58;
        case 0x358b5cu: goto label_358b5c;
        case 0x358b60u: goto label_358b60;
        case 0x358b64u: goto label_358b64;
        case 0x358b68u: goto label_358b68;
        case 0x358b6cu: goto label_358b6c;
        case 0x358b70u: goto label_358b70;
        case 0x358b74u: goto label_358b74;
        case 0x358b78u: goto label_358b78;
        case 0x358b7cu: goto label_358b7c;
        case 0x358b80u: goto label_358b80;
        case 0x358b84u: goto label_358b84;
        case 0x358b88u: goto label_358b88;
        case 0x358b8cu: goto label_358b8c;
        case 0x358b90u: goto label_358b90;
        case 0x358b94u: goto label_358b94;
        case 0x358b98u: goto label_358b98;
        case 0x358b9cu: goto label_358b9c;
        case 0x358ba0u: goto label_358ba0;
        case 0x358ba4u: goto label_358ba4;
        case 0x358ba8u: goto label_358ba8;
        case 0x358bacu: goto label_358bac;
        case 0x358bb0u: goto label_358bb0;
        case 0x358bb4u: goto label_358bb4;
        case 0x358bb8u: goto label_358bb8;
        case 0x358bbcu: goto label_358bbc;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bc4u: goto label_358bc4;
        case 0x358bc8u: goto label_358bc8;
        case 0x358bccu: goto label_358bcc;
        case 0x358bd0u: goto label_358bd0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358bd8u: goto label_358bd8;
        case 0x358bdcu: goto label_358bdc;
        case 0x358be0u: goto label_358be0;
        case 0x358be4u: goto label_358be4;
        case 0x358be8u: goto label_358be8;
        case 0x358becu: goto label_358bec;
        case 0x358bf0u: goto label_358bf0;
        case 0x358bf4u: goto label_358bf4;
        case 0x358bf8u: goto label_358bf8;
        case 0x358bfcu: goto label_358bfc;
        case 0x358c00u: goto label_358c00;
        case 0x358c04u: goto label_358c04;
        case 0x358c08u: goto label_358c08;
        case 0x358c0cu: goto label_358c0c;
        case 0x358c10u: goto label_358c10;
        case 0x358c14u: goto label_358c14;
        case 0x358c18u: goto label_358c18;
        case 0x358c1cu: goto label_358c1c;
        case 0x358c20u: goto label_358c20;
        case 0x358c24u: goto label_358c24;
        case 0x358c28u: goto label_358c28;
        case 0x358c2cu: goto label_358c2c;
        default: break;
    }

    ctx->pc = 0x358660u;

label_358660:
    // 0x358660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_358664:
    // 0x358664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x358664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_358668:
    // 0x358668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35866c:
    // 0x35866c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_358670:
    // 0x358670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358674:
    // 0x358674: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_358678:
    if (ctx->pc == 0x358678u) {
        ctx->pc = 0x358678u;
            // 0x358678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35867Cu;
        goto label_35867c;
    }
    ctx->pc = 0x358674u;
    {
        const bool branch_taken_0x358674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x358678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358674u;
            // 0x358678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358674) {
            ctx->pc = 0x3587BCu;
            goto label_3587bc;
        }
    }
    ctx->pc = 0x35867Cu;
label_35867c:
    // 0x35867c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35867cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_358680:
    // 0x358680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x358680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_358684:
    // 0x358684: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x358684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
label_358688:
    // 0x358688: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x358688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_35868c:
    // 0x35868c: 0x244261f8  addiu       $v0, $v0, 0x61F8
    ctx->pc = 0x35868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25080));
label_358690:
    // 0x358690: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x358690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_358694:
    // 0x358694: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x358694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_358698:
    // 0x358698: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_35869c:
    // 0x35869c: 0xc0407c0  jal         func_101F00
label_3586a0:
    if (ctx->pc == 0x3586A0u) {
        ctx->pc = 0x3586A0u;
            // 0x3586a0: 0x24a587e0  addiu       $a1, $a1, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936544));
        ctx->pc = 0x3586A4u;
        goto label_3586a4;
    }
    ctx->pc = 0x35869Cu;
    SET_GPR_U32(ctx, 31, 0x3586A4u);
    ctx->pc = 0x3586A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35869Cu;
            // 0x3586a0: 0x24a587e0  addiu       $a1, $a1, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586A4u; }
        if (ctx->pc != 0x3586A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586A4u; }
        if (ctx->pc != 0x3586A4u) { return; }
    }
    ctx->pc = 0x3586A4u;
label_3586a4:
    // 0x3586a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3586a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3586a8:
    // 0x3586a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3586ac:
    if (ctx->pc == 0x3586ACu) {
        ctx->pc = 0x3586ACu;
            // 0x3586ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3586B0u;
        goto label_3586b0;
    }
    ctx->pc = 0x3586A8u;
    {
        const bool branch_taken_0x3586a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586a8) {
            ctx->pc = 0x3586ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3586A8u;
            // 0x3586ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3586D0u;
            goto label_3586d0;
        }
    }
    ctx->pc = 0x3586B0u;
label_3586b0:
    // 0x3586b0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x3586b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_3586b4:
    // 0x3586b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3586b8:
    if (ctx->pc == 0x3586B8u) {
        ctx->pc = 0x3586B8u;
            // 0x3586b8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x3586BCu;
        goto label_3586bc;
    }
    ctx->pc = 0x3586B4u;
    {
        const bool branch_taken_0x3586b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586b4) {
            ctx->pc = 0x3586B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3586B4u;
            // 0x3586b8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3586CCu;
            goto label_3586cc;
        }
    }
    ctx->pc = 0x3586BCu;
label_3586bc:
    // 0x3586bc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x3586bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_3586c0:
    // 0x3586c0: 0xc0407c0  jal         func_101F00
label_3586c4:
    if (ctx->pc == 0x3586C4u) {
        ctx->pc = 0x3586C4u;
            // 0x3586c4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x3586C8u;
        goto label_3586c8;
    }
    ctx->pc = 0x3586C0u;
    SET_GPR_U32(ctx, 31, 0x3586C8u);
    ctx->pc = 0x3586C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3586C0u;
            // 0x3586c4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586C8u; }
        if (ctx->pc != 0x3586C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586C8u; }
        if (ctx->pc != 0x3586C8u) { return; }
    }
    ctx->pc = 0x3586C8u;
label_3586c8:
    // 0x3586c8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x3586c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_3586cc:
    // 0x3586cc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3586ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3586d0:
    // 0x3586d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3586d4:
    if (ctx->pc == 0x3586D4u) {
        ctx->pc = 0x3586D4u;
            // 0x3586d4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3586D8u;
        goto label_3586d8;
    }
    ctx->pc = 0x3586D0u;
    {
        const bool branch_taken_0x3586d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586d0) {
            ctx->pc = 0x3586D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3586D0u;
            // 0x3586d4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358700u;
            goto label_358700;
        }
    }
    ctx->pc = 0x3586D8u;
label_3586d8:
    // 0x3586d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3586dc:
    if (ctx->pc == 0x3586DCu) {
        ctx->pc = 0x3586E0u;
        goto label_3586e0;
    }
    ctx->pc = 0x3586D8u;
    {
        const bool branch_taken_0x3586d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586d8) {
            ctx->pc = 0x3586FCu;
            goto label_3586fc;
        }
    }
    ctx->pc = 0x3586E0u;
label_3586e0:
    // 0x3586e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3586e4:
    if (ctx->pc == 0x3586E4u) {
        ctx->pc = 0x3586E8u;
        goto label_3586e8;
    }
    ctx->pc = 0x3586E0u;
    {
        const bool branch_taken_0x3586e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586e0) {
            ctx->pc = 0x3586FCu;
            goto label_3586fc;
        }
    }
    ctx->pc = 0x3586E8u;
label_3586e8:
    // 0x3586e8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3586e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3586ec:
    // 0x3586ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3586f0:
    if (ctx->pc == 0x3586F0u) {
        ctx->pc = 0x3586F4u;
        goto label_3586f4;
    }
    ctx->pc = 0x3586ECu;
    {
        const bool branch_taken_0x3586ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3586ec) {
            ctx->pc = 0x3586FCu;
            goto label_3586fc;
        }
    }
    ctx->pc = 0x3586F4u;
label_3586f4:
    // 0x3586f4: 0xc0400a8  jal         func_1002A0
label_3586f8:
    if (ctx->pc == 0x3586F8u) {
        ctx->pc = 0x3586FCu;
        goto label_3586fc;
    }
    ctx->pc = 0x3586F4u;
    SET_GPR_U32(ctx, 31, 0x3586FCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586FCu; }
        if (ctx->pc != 0x3586FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3586FCu; }
        if (ctx->pc != 0x3586FCu) { return; }
    }
    ctx->pc = 0x3586FCu;
label_3586fc:
    // 0x3586fc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3586fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_358700:
    // 0x358700: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_358704:
    if (ctx->pc == 0x358704u) {
        ctx->pc = 0x358704u;
            // 0x358704: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x358708u;
        goto label_358708;
    }
    ctx->pc = 0x358700u;
    {
        const bool branch_taken_0x358700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358700) {
            ctx->pc = 0x358704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358700u;
            // 0x358704: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358730u;
            goto label_358730;
        }
    }
    ctx->pc = 0x358708u;
label_358708:
    // 0x358708: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35870c:
    if (ctx->pc == 0x35870Cu) {
        ctx->pc = 0x358710u;
        goto label_358710;
    }
    ctx->pc = 0x358708u;
    {
        const bool branch_taken_0x358708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358708) {
            ctx->pc = 0x35872Cu;
            goto label_35872c;
        }
    }
    ctx->pc = 0x358710u;
label_358710:
    // 0x358710: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_358714:
    if (ctx->pc == 0x358714u) {
        ctx->pc = 0x358718u;
        goto label_358718;
    }
    ctx->pc = 0x358710u;
    {
        const bool branch_taken_0x358710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358710) {
            ctx->pc = 0x35872Cu;
            goto label_35872c;
        }
    }
    ctx->pc = 0x358718u;
label_358718:
    // 0x358718: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x358718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_35871c:
    // 0x35871c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_358720:
    if (ctx->pc == 0x358720u) {
        ctx->pc = 0x358724u;
        goto label_358724;
    }
    ctx->pc = 0x35871Cu;
    {
        const bool branch_taken_0x35871c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35871c) {
            ctx->pc = 0x35872Cu;
            goto label_35872c;
        }
    }
    ctx->pc = 0x358724u;
label_358724:
    // 0x358724: 0xc0400a8  jal         func_1002A0
label_358728:
    if (ctx->pc == 0x358728u) {
        ctx->pc = 0x35872Cu;
        goto label_35872c;
    }
    ctx->pc = 0x358724u;
    SET_GPR_U32(ctx, 31, 0x35872Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35872Cu; }
        if (ctx->pc != 0x35872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35872Cu; }
        if (ctx->pc != 0x35872Cu) { return; }
    }
    ctx->pc = 0x35872Cu;
label_35872c:
    // 0x35872c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x35872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_358730:
    // 0x358730: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_358734:
    if (ctx->pc == 0x358734u) {
        ctx->pc = 0x358738u;
        goto label_358738;
    }
    ctx->pc = 0x358730u;
    {
        const bool branch_taken_0x358730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358730) {
            ctx->pc = 0x35874Cu;
            goto label_35874c;
        }
    }
    ctx->pc = 0x358738u;
label_358738:
    // 0x358738: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x358738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35873c:
    // 0x35873c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_358740:
    // 0x358740: 0x246361a8  addiu       $v1, $v1, 0x61A8
    ctx->pc = 0x358740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
label_358744:
    // 0x358744: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x358744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_358748:
    // 0x358748: 0xac404000  sw          $zero, 0x4000($v0)
    ctx->pc = 0x358748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16384), GPR_U32(ctx, 0));
label_35874c:
    // 0x35874c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_358750:
    if (ctx->pc == 0x358750u) {
        ctx->pc = 0x358750u;
            // 0x358750: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x358754u;
        goto label_358754;
    }
    ctx->pc = 0x35874Cu;
    {
        const bool branch_taken_0x35874c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35874c) {
            ctx->pc = 0x358750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35874Cu;
            // 0x358750: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3587A8u;
            goto label_3587a8;
        }
    }
    ctx->pc = 0x358754u;
label_358754:
    // 0x358754: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x358754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_358758:
    // 0x358758: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x358758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_35875c:
    // 0x35875c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35875cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_358760:
    // 0x358760: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x358760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_358764:
    // 0x358764: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_358768:
    if (ctx->pc == 0x358768u) {
        ctx->pc = 0x358768u;
            // 0x358768: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x35876Cu;
        goto label_35876c;
    }
    ctx->pc = 0x358764u;
    {
        const bool branch_taken_0x358764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358764) {
            ctx->pc = 0x358768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358764u;
            // 0x358768: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358780u;
            goto label_358780;
        }
    }
    ctx->pc = 0x35876Cu;
label_35876c:
    // 0x35876c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35876cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358770:
    // 0x358770: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x358770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_358774:
    // 0x358774: 0x320f809  jalr        $t9
label_358778:
    if (ctx->pc == 0x358778u) {
        ctx->pc = 0x358778u;
            // 0x358778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35877Cu;
        goto label_35877c;
    }
    ctx->pc = 0x358774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35877Cu);
        ctx->pc = 0x358778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358774u;
            // 0x358778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35877Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35877Cu; }
            if (ctx->pc != 0x35877Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35877Cu;
label_35877c:
    // 0x35877c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x35877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_358780:
    // 0x358780: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_358784:
    if (ctx->pc == 0x358784u) {
        ctx->pc = 0x358784u;
            // 0x358784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358788u;
        goto label_358788;
    }
    ctx->pc = 0x358780u;
    {
        const bool branch_taken_0x358780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358780) {
            ctx->pc = 0x358784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358780u;
            // 0x358784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35879Cu;
            goto label_35879c;
        }
    }
    ctx->pc = 0x358788u;
label_358788:
    // 0x358788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x358788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35878c:
    // 0x35878c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35878cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_358790:
    // 0x358790: 0x320f809  jalr        $t9
label_358794:
    if (ctx->pc == 0x358794u) {
        ctx->pc = 0x358794u;
            // 0x358794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x358798u;
        goto label_358798;
    }
    ctx->pc = 0x358790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358798u);
        ctx->pc = 0x358794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358790u;
            // 0x358794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x358798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358798u; }
            if (ctx->pc != 0x358798u) { return; }
        }
        }
    }
    ctx->pc = 0x358798u;
label_358798:
    // 0x358798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35879c:
    // 0x35879c: 0xc075bf8  jal         func_1D6FE0
label_3587a0:
    if (ctx->pc == 0x3587A0u) {
        ctx->pc = 0x3587A0u;
            // 0x3587a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3587A4u;
        goto label_3587a4;
    }
    ctx->pc = 0x35879Cu;
    SET_GPR_U32(ctx, 31, 0x3587A4u);
    ctx->pc = 0x3587A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35879Cu;
            // 0x3587a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3587A4u; }
        if (ctx->pc != 0x3587A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3587A4u; }
        if (ctx->pc != 0x3587A4u) { return; }
    }
    ctx->pc = 0x3587A4u;
label_3587a4:
    // 0x3587a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3587a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3587a8:
    // 0x3587a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3587a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3587ac:
    // 0x3587ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3587b0:
    if (ctx->pc == 0x3587B0u) {
        ctx->pc = 0x3587B0u;
            // 0x3587b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3587B4u;
        goto label_3587b4;
    }
    ctx->pc = 0x3587ACu;
    {
        const bool branch_taken_0x3587ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3587ac) {
            ctx->pc = 0x3587B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3587ACu;
            // 0x3587b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3587C0u;
            goto label_3587c0;
        }
    }
    ctx->pc = 0x3587B4u;
label_3587b4:
    // 0x3587b4: 0xc0400a8  jal         func_1002A0
label_3587b8:
    if (ctx->pc == 0x3587B8u) {
        ctx->pc = 0x3587B8u;
            // 0x3587b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3587BCu;
        goto label_3587bc;
    }
    ctx->pc = 0x3587B4u;
    SET_GPR_U32(ctx, 31, 0x3587BCu);
    ctx->pc = 0x3587B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3587B4u;
            // 0x3587b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3587BCu; }
        if (ctx->pc != 0x3587BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3587BCu; }
        if (ctx->pc != 0x3587BCu) { return; }
    }
    ctx->pc = 0x3587BCu;
label_3587bc:
    // 0x3587bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3587bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3587c0:
    // 0x3587c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3587c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3587c4:
    // 0x3587c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3587c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3587c8:
    // 0x3587c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3587c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3587cc:
    // 0x3587cc: 0x3e00008  jr          $ra
label_3587d0:
    if (ctx->pc == 0x3587D0u) {
        ctx->pc = 0x3587D0u;
            // 0x3587d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3587D4u;
        goto label_3587d4;
    }
    ctx->pc = 0x3587CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3587D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587CCu;
            // 0x3587d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3587D4u;
label_3587d4:
    // 0x3587d4: 0x0  nop
    ctx->pc = 0x3587d4u;
    // NOP
label_3587d8:
    // 0x3587d8: 0x0  nop
    ctx->pc = 0x3587d8u;
    // NOP
label_3587dc:
    // 0x3587dc: 0x0  nop
    ctx->pc = 0x3587dcu;
    // NOP
label_3587e0:
    // 0x3587e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3587e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3587e4:
    // 0x3587e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3587e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3587e8:
    // 0x3587e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3587e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3587ec:
    // 0x3587ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3587ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3587f0:
    // 0x3587f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3587f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3587f4:
    // 0x3587f4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_3587f8:
    if (ctx->pc == 0x3587F8u) {
        ctx->pc = 0x3587F8u;
            // 0x3587f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3587FCu;
        goto label_3587fc;
    }
    ctx->pc = 0x3587F4u;
    {
        const bool branch_taken_0x3587f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587F4u;
            // 0x3587f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587f4) {
            ctx->pc = 0x3588BCu;
            goto label_3588bc;
        }
    }
    ctx->pc = 0x3587FCu;
label_3587fc:
    // 0x3587fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3587fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_358800:
    // 0x358800: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x358800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_358804:
    // 0x358804: 0x24636260  addiu       $v1, $v1, 0x6260
    ctx->pc = 0x358804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25184));
label_358808:
    // 0x358808: 0x244262a0  addiu       $v0, $v0, 0x62A0
    ctx->pc = 0x358808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
label_35880c:
    // 0x35880c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_358810:
    // 0x358810: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x358810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_358814:
    // 0x358814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x358814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358818:
    // 0x358818: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x358818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_35881c:
    // 0x35881c: 0x320f809  jalr        $t9
label_358820:
    if (ctx->pc == 0x358820u) {
        ctx->pc = 0x358824u;
        goto label_358824;
    }
    ctx->pc = 0x35881Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358824u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x358824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358824u; }
            if (ctx->pc != 0x358824u) { return; }
        }
        }
    }
    ctx->pc = 0x358824u;
label_358824:
    // 0x358824: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_358828:
    if (ctx->pc == 0x358828u) {
        ctx->pc = 0x358828u;
            // 0x358828: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x35882Cu;
        goto label_35882c;
    }
    ctx->pc = 0x358824u;
    {
        const bool branch_taken_0x358824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358824) {
            ctx->pc = 0x358828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358824u;
            // 0x358828: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3588A8u;
            goto label_3588a8;
        }
    }
    ctx->pc = 0x35882Cu;
label_35882c:
    // 0x35882c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35882cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_358830:
    // 0x358830: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x358830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_358834:
    // 0x358834: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x358834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_358838:
    // 0x358838: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x358838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_35883c:
    // 0x35883c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35883cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_358840:
    // 0x358840: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x358840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_358844:
    // 0x358844: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x358844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_358848:
    // 0x358848: 0xc0aecc4  jal         func_2BB310
label_35884c:
    if (ctx->pc == 0x35884Cu) {
        ctx->pc = 0x35884Cu;
            // 0x35884c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x358850u;
        goto label_358850;
    }
    ctx->pc = 0x358848u;
    SET_GPR_U32(ctx, 31, 0x358850u);
    ctx->pc = 0x35884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358848u;
            // 0x35884c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358850u; }
        if (ctx->pc != 0x358850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358850u; }
        if (ctx->pc != 0x358850u) { return; }
    }
    ctx->pc = 0x358850u;
label_358850:
    // 0x358850: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x358850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_358854:
    // 0x358854: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x358854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_358858:
    // 0x358858: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35885c:
    if (ctx->pc == 0x35885Cu) {
        ctx->pc = 0x35885Cu;
            // 0x35885c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x358860u;
        goto label_358860;
    }
    ctx->pc = 0x358858u;
    {
        const bool branch_taken_0x358858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358858) {
            ctx->pc = 0x35885Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358858u;
            // 0x35885c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358874u;
            goto label_358874;
        }
    }
    ctx->pc = 0x358860u;
label_358860:
    // 0x358860: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x358860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_358864:
    // 0x358864: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x358864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_358868:
    // 0x358868: 0x320f809  jalr        $t9
label_35886c:
    if (ctx->pc == 0x35886Cu) {
        ctx->pc = 0x35886Cu;
            // 0x35886c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x358870u;
        goto label_358870;
    }
    ctx->pc = 0x358868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358870u);
        ctx->pc = 0x35886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358868u;
            // 0x35886c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x358870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358870u; }
            if (ctx->pc != 0x358870u) { return; }
        }
        }
    }
    ctx->pc = 0x358870u;
label_358870:
    // 0x358870: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x358870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_358874:
    // 0x358874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x358874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_358878:
    // 0x358878: 0xc0aec9c  jal         func_2BB270
label_35887c:
    if (ctx->pc == 0x35887Cu) {
        ctx->pc = 0x35887Cu;
            // 0x35887c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x358880u;
        goto label_358880;
    }
    ctx->pc = 0x358878u;
    SET_GPR_U32(ctx, 31, 0x358880u);
    ctx->pc = 0x35887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358878u;
            // 0x35887c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358880u; }
        if (ctx->pc != 0x358880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358880u; }
        if (ctx->pc != 0x358880u) { return; }
    }
    ctx->pc = 0x358880u;
label_358880:
    // 0x358880: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x358880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_358884:
    // 0x358884: 0xc0aec88  jal         func_2BB220
label_358888:
    if (ctx->pc == 0x358888u) {
        ctx->pc = 0x358888u;
            // 0x358888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35888Cu;
        goto label_35888c;
    }
    ctx->pc = 0x358884u;
    SET_GPR_U32(ctx, 31, 0x35888Cu);
    ctx->pc = 0x358888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358884u;
            // 0x358888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35888Cu; }
        if (ctx->pc != 0x35888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35888Cu; }
        if (ctx->pc != 0x35888Cu) { return; }
    }
    ctx->pc = 0x35888Cu;
label_35888c:
    // 0x35888c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x35888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_358890:
    // 0x358890: 0xc0aec0c  jal         func_2BB030
label_358894:
    if (ctx->pc == 0x358894u) {
        ctx->pc = 0x358894u;
            // 0x358894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358898u;
        goto label_358898;
    }
    ctx->pc = 0x358890u;
    SET_GPR_U32(ctx, 31, 0x358898u);
    ctx->pc = 0x358894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358890u;
            // 0x358894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358898u; }
        if (ctx->pc != 0x358898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358898u; }
        if (ctx->pc != 0x358898u) { return; }
    }
    ctx->pc = 0x358898u;
label_358898:
    // 0x358898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35889c:
    // 0x35889c: 0xc0aeaa8  jal         func_2BAAA0
label_3588a0:
    if (ctx->pc == 0x3588A0u) {
        ctx->pc = 0x3588A0u;
            // 0x3588a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3588A4u;
        goto label_3588a4;
    }
    ctx->pc = 0x35889Cu;
    SET_GPR_U32(ctx, 31, 0x3588A4u);
    ctx->pc = 0x3588A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35889Cu;
            // 0x3588a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3588A4u; }
        if (ctx->pc != 0x3588A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3588A4u; }
        if (ctx->pc != 0x3588A4u) { return; }
    }
    ctx->pc = 0x3588A4u;
label_3588a4:
    // 0x3588a4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3588a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3588a8:
    // 0x3588a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3588a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3588ac:
    // 0x3588ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3588b0:
    if (ctx->pc == 0x3588B0u) {
        ctx->pc = 0x3588B0u;
            // 0x3588b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3588B4u;
        goto label_3588b4;
    }
    ctx->pc = 0x3588ACu;
    {
        const bool branch_taken_0x3588ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3588ac) {
            ctx->pc = 0x3588B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3588ACu;
            // 0x3588b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3588C0u;
            goto label_3588c0;
        }
    }
    ctx->pc = 0x3588B4u;
label_3588b4:
    // 0x3588b4: 0xc0400a8  jal         func_1002A0
label_3588b8:
    if (ctx->pc == 0x3588B8u) {
        ctx->pc = 0x3588B8u;
            // 0x3588b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3588BCu;
        goto label_3588bc;
    }
    ctx->pc = 0x3588B4u;
    SET_GPR_U32(ctx, 31, 0x3588BCu);
    ctx->pc = 0x3588B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3588B4u;
            // 0x3588b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3588BCu; }
        if (ctx->pc != 0x3588BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3588BCu; }
        if (ctx->pc != 0x3588BCu) { return; }
    }
    ctx->pc = 0x3588BCu;
label_3588bc:
    // 0x3588bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3588bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3588c0:
    // 0x3588c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3588c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3588c4:
    // 0x3588c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3588c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3588c8:
    // 0x3588c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3588c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3588cc:
    // 0x3588cc: 0x3e00008  jr          $ra
label_3588d0:
    if (ctx->pc == 0x3588D0u) {
        ctx->pc = 0x3588D0u;
            // 0x3588d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3588D4u;
        goto label_3588d4;
    }
    ctx->pc = 0x3588CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3588D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3588CCu;
            // 0x3588d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3588D4u;
label_3588d4:
    // 0x3588d4: 0x0  nop
    ctx->pc = 0x3588d4u;
    // NOP
label_3588d8:
    // 0x3588d8: 0x0  nop
    ctx->pc = 0x3588d8u;
    // NOP
label_3588dc:
    // 0x3588dc: 0x0  nop
    ctx->pc = 0x3588dcu;
    // NOP
label_3588e0:
    // 0x3588e0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x3588e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_3588e4:
    // 0x3588e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3588e8:
    // 0x3588e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3588e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3588ec:
    // 0x3588ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3588ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3588f0:
    // 0x3588f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3588f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3588f4:
    // 0x3588f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3588f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3588f8:
    // 0x3588f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3588f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3588fc:
    // 0x3588fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3588fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_358900:
    // 0x358900: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x358900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_358904:
    // 0x358904: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x358904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_358908:
    // 0x358908: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x358908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35890c:
    // 0x35890c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_358910:
    // 0x358910: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x358910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_358914:
    // 0x358914: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x358914u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_358918:
    // 0x358918: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35891c:
    if (ctx->pc == 0x35891Cu) {
        ctx->pc = 0x35891Cu;
            // 0x35891c: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->pc = 0x358920u;
        goto label_358920;
    }
    ctx->pc = 0x358918u;
    {
        const bool branch_taken_0x358918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358918u;
            // 0x35891c: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358918) {
            ctx->pc = 0x358968u;
            goto label_358968;
        }
    }
    ctx->pc = 0x358920u;
label_358920:
    // 0x358920: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_358924:
    // 0x358924: 0x50a300b6  beql        $a1, $v1, . + 4 + (0xB6 << 2)
label_358928:
    if (ctx->pc == 0x358928u) {
        ctx->pc = 0x358928u;
            // 0x358928: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x35892Cu;
        goto label_35892c;
    }
    ctx->pc = 0x358924u;
    {
        const bool branch_taken_0x358924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x358924) {
            ctx->pc = 0x358928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358924u;
            // 0x358928: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358C00u;
            goto label_358c00;
        }
    }
    ctx->pc = 0x35892Cu;
label_35892c:
    // 0x35892c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358930:
    // 0x358930: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_358934:
    if (ctx->pc == 0x358934u) {
        ctx->pc = 0x358938u;
        goto label_358938;
    }
    ctx->pc = 0x358930u;
    {
        const bool branch_taken_0x358930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x358930) {
            ctx->pc = 0x358940u;
            goto label_358940;
        }
    }
    ctx->pc = 0x358938u;
label_358938:
    // 0x358938: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_35893c:
    if (ctx->pc == 0x35893Cu) {
        ctx->pc = 0x358940u;
        goto label_358940;
    }
    ctx->pc = 0x358938u;
    {
        const bool branch_taken_0x358938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358938) {
            ctx->pc = 0x358BFCu;
            goto label_358bfc;
        }
    }
    ctx->pc = 0x358940u;
label_358940:
    // 0x358940: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x358940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_358944:
    // 0x358944: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x358944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358948:
    // 0x358948: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x358948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35894c:
    // 0x35894c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x35894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_358950:
    // 0x358950: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x358950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_358954:
    // 0x358954: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x358954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_358958:
    // 0x358958: 0x320f809  jalr        $t9
label_35895c:
    if (ctx->pc == 0x35895Cu) {
        ctx->pc = 0x35895Cu;
            // 0x35895c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x358960u;
        goto label_358960;
    }
    ctx->pc = 0x358958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358960u);
        ctx->pc = 0x35895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358958u;
            // 0x35895c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x358960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358960u; }
            if (ctx->pc != 0x358960u) { return; }
        }
        }
    }
    ctx->pc = 0x358960u;
label_358960:
    // 0x358960: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_358964:
    if (ctx->pc == 0x358964u) {
        ctx->pc = 0x358968u;
        goto label_358968;
    }
    ctx->pc = 0x358960u;
    {
        const bool branch_taken_0x358960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358960) {
            ctx->pc = 0x358BFCu;
            goto label_358bfc;
        }
    }
    ctx->pc = 0x358968u;
label_358968:
    // 0x358968: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x358968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35896c:
    // 0x35896c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x35896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_358970:
    // 0x358970: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_358974:
    if (ctx->pc == 0x358974u) {
        ctx->pc = 0x358974u;
            // 0x358974: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x358978u;
        goto label_358978;
    }
    ctx->pc = 0x358970u;
    {
        const bool branch_taken_0x358970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358970u;
            // 0x358974: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358970) {
            ctx->pc = 0x358BFCu;
            goto label_358bfc;
        }
    }
    ctx->pc = 0x358978u;
label_358978:
    // 0x358978: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x358978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_35897c:
    // 0x35897c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x35897cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_358980:
    // 0x358980: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x358980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_358984:
    // 0x358984: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x358984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358988:
    // 0x358988: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x358988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_35898c:
    // 0x35898c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x35898cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358990:
    // 0x358990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x358990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358994:
    // 0x358994: 0x8cd70130  lw          $s7, 0x130($a2)
    ctx->pc = 0x358994u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_358998:
    // 0x358998: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x358998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_35899c:
    // 0x35899c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35899cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3589a0:
    // 0x3589a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3589a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3589a4:
    // 0x3589a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3589a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3589a8:
    // 0x3589a8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3589a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3589ac:
    // 0x3589ac: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x3589acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3589b0:
    // 0x3589b0: 0x8c5e0088  lw          $fp, 0x88($v0)
    ctx->pc = 0x3589b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3589b4:
    // 0x3589b4: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x3589b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3589b8:
    // 0x3589b8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3589b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3589bc:
    // 0x3589bc: 0xc4544458  lwc1        $f20, 0x4458($v0)
    ctx->pc = 0x3589bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3589c0:
    // 0x3589c0: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x3589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_3589c4:
    // 0x3589c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3589c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3589c8:
    // 0x3589c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3589c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3589cc:
    // 0x3589cc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3589ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3589d0:
    // 0x3589d0: 0xac450090  sw          $a1, 0x90($v0)
    ctx->pc = 0x3589d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 5));
label_3589d4:
    // 0x3589d4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3589d8:
    // 0x3589d8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x3589d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_3589dc:
    // 0x3589dc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3589dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3589e0:
    // 0x3589e0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x3589e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_3589e4:
    // 0x3589e4: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x3589e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3589e8:
    // 0x3589e8: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x3589e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_3589ec:
    // 0x3589ec: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x3589ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_3589f0:
    // 0x3589f0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3589f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3589f4:
    // 0x3589f4: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x3589f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_3589f8:
    // 0x3589f8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x3589f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3589fc:
    // 0x3589fc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_358a00:
    // 0x358a00: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x358a00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358a04:
    // 0x358a04: 0xc0d63d8  jal         func_358F60
label_358a08:
    if (ctx->pc == 0x358A08u) {
        ctx->pc = 0x358A08u;
            // 0x358a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358A0Cu;
        goto label_358a0c;
    }
    ctx->pc = 0x358A04u;
    SET_GPR_U32(ctx, 31, 0x358A0Cu);
    ctx->pc = 0x358A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A04u;
            // 0x358a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A0Cu; }
        if (ctx->pc != 0x358A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A0Cu; }
        if (ctx->pc != 0x358A0Cu) { return; }
    }
    ctx->pc = 0x358A0Cu;
label_358a0c:
    // 0x358a0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x358a0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358a10:
    // 0x358a10: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x358a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_358a14:
    // 0x358a14: 0xc0d63d4  jal         func_358F50
label_358a18:
    if (ctx->pc == 0x358A18u) {
        ctx->pc = 0x358A18u;
            // 0x358a18: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->pc = 0x358A1Cu;
        goto label_358a1c;
    }
    ctx->pc = 0x358A14u;
    SET_GPR_U32(ctx, 31, 0x358A1Cu);
    ctx->pc = 0x358A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A14u;
            // 0x358a18: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F50u;
    if (runtime->hasFunction(0x358F50u)) {
        auto targetFn = runtime->lookupFunction(0x358F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A1Cu; }
        if (ctx->pc != 0x358A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F50_0x358f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A1Cu; }
        if (ctx->pc != 0x358A1Cu) { return; }
    }
    ctx->pc = 0x358A1Cu;
label_358a1c:
    // 0x358a1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x358a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358a20:
    // 0x358a20: 0xc0d63d0  jal         func_358F40
label_358a24:
    if (ctx->pc == 0x358A24u) {
        ctx->pc = 0x358A24u;
            // 0x358a24: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x358A28u;
        goto label_358a28;
    }
    ctx->pc = 0x358A20u;
    SET_GPR_U32(ctx, 31, 0x358A28u);
    ctx->pc = 0x358A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A20u;
            // 0x358a24: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F40u;
    if (runtime->hasFunction(0x358F40u)) {
        auto targetFn = runtime->lookupFunction(0x358F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A28u; }
        if (ctx->pc != 0x358A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F40_0x358f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A28u; }
        if (ctx->pc != 0x358A28u) { return; }
    }
    ctx->pc = 0x358A28u;
label_358a28:
    // 0x358a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358a2c:
    // 0x358a2c: 0x12140014  beq         $s0, $s4, . + 4 + (0x14 << 2)
label_358a30:
    if (ctx->pc == 0x358A30u) {
        ctx->pc = 0x358A34u;
        goto label_358a34;
    }
    ctx->pc = 0x358A2Cu;
    {
        const bool branch_taken_0x358a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x358a2c) {
            ctx->pc = 0x358A80u;
            goto label_358a80;
        }
    }
    ctx->pc = 0x358A34u;
label_358a34:
    // 0x358a34: 0xc0d63cc  jal         func_358F30
label_358a38:
    if (ctx->pc == 0x358A38u) {
        ctx->pc = 0x358A38u;
            // 0x358a38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358A3Cu;
        goto label_358a3c;
    }
    ctx->pc = 0x358A34u;
    SET_GPR_U32(ctx, 31, 0x358A3Cu);
    ctx->pc = 0x358A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A34u;
            // 0x358a38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F30u;
    if (runtime->hasFunction(0x358F30u)) {
        auto targetFn = runtime->lookupFunction(0x358F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A3Cu; }
        if (ctx->pc != 0x358A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F30_0x358f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A3Cu; }
        if (ctx->pc != 0x358A3Cu) { return; }
    }
    ctx->pc = 0x358A3Cu;
label_358a3c:
    // 0x358a3c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x358a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_358a40:
    // 0x358a40: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_358a44:
    if (ctx->pc == 0x358A44u) {
        ctx->pc = 0x358A48u;
        goto label_358a48;
    }
    ctx->pc = 0x358A40u;
    {
        const bool branch_taken_0x358a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a40) {
            ctx->pc = 0x358A60u;
            goto label_358a60;
        }
    }
    ctx->pc = 0x358A48u;
label_358a48:
    // 0x358a48: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x358a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_358a4c:
    // 0x358a4c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x358a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_358a50:
    // 0x358a50: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x358a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_358a54:
    // 0x358a54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x358a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358a58:
    // 0x358a58: 0xc0d63b4  jal         func_358ED0
label_358a5c:
    if (ctx->pc == 0x358A5Cu) {
        ctx->pc = 0x358A5Cu;
            // 0x358a5c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x358A60u;
        goto label_358a60;
    }
    ctx->pc = 0x358A58u;
    SET_GPR_U32(ctx, 31, 0x358A60u);
    ctx->pc = 0x358A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A58u;
            // 0x358a5c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358ED0u;
    if (runtime->hasFunction(0x358ED0u)) {
        auto targetFn = runtime->lookupFunction(0x358ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A60u; }
        if (ctx->pc != 0x358A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358ED0_0x358ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A60u; }
        if (ctx->pc != 0x358A60u) { return; }
    }
    ctx->pc = 0x358A60u;
label_358a60:
    // 0x358a60: 0xc0d63ac  jal         func_358EB0
label_358a64:
    if (ctx->pc == 0x358A64u) {
        ctx->pc = 0x358A68u;
        goto label_358a68;
    }
    ctx->pc = 0x358A60u;
    SET_GPR_U32(ctx, 31, 0x358A68u);
    ctx->pc = 0x358EB0u;
    if (runtime->hasFunction(0x358EB0u)) {
        auto targetFn = runtime->lookupFunction(0x358EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A68u; }
        if (ctx->pc != 0x358A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EB0_0x358eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A68u; }
        if (ctx->pc != 0x358A68u) { return; }
    }
    ctx->pc = 0x358A68u;
label_358a68:
    // 0x358a68: 0xc04e738  jal         func_139CE0
label_358a6c:
    if (ctx->pc == 0x358A6Cu) {
        ctx->pc = 0x358A6Cu;
            // 0x358a6c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x358A70u;
        goto label_358a70;
    }
    ctx->pc = 0x358A68u;
    SET_GPR_U32(ctx, 31, 0x358A70u);
    ctx->pc = 0x358A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A68u;
            // 0x358a6c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A70u; }
        if (ctx->pc != 0x358A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A70u; }
        if (ctx->pc != 0x358A70u) { return; }
    }
    ctx->pc = 0x358A70u;
label_358a70:
    // 0x358a70: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x358a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_358a74:
    // 0x358a74: 0xc0d63a8  jal         func_358EA0
label_358a78:
    if (ctx->pc == 0x358A78u) {
        ctx->pc = 0x358A78u;
            // 0x358a78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358A7Cu;
        goto label_358a7c;
    }
    ctx->pc = 0x358A74u;
    SET_GPR_U32(ctx, 31, 0x358A7Cu);
    ctx->pc = 0x358A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A74u;
            // 0x358a78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358EA0u;
    if (runtime->hasFunction(0x358EA0u)) {
        auto targetFn = runtime->lookupFunction(0x358EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A7Cu; }
        if (ctx->pc != 0x358A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EA0_0x358ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A7Cu; }
        if (ctx->pc != 0x358A7Cu) { return; }
    }
    ctx->pc = 0x358A7Cu;
label_358a7c:
    // 0x358a7c: 0x0  nop
    ctx->pc = 0x358a7cu;
    // NOP
label_358a80:
    // 0x358a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_358a84:
    // 0x358a84: 0xc0d63a0  jal         func_358E80
label_358a88:
    if (ctx->pc == 0x358A88u) {
        ctx->pc = 0x358A88u;
            // 0x358a88: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358A8Cu;
        goto label_358a8c;
    }
    ctx->pc = 0x358A84u;
    SET_GPR_U32(ctx, 31, 0x358A8Cu);
    ctx->pc = 0x358A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A84u;
            // 0x358a88: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E80u;
    if (runtime->hasFunction(0x358E80u)) {
        auto targetFn = runtime->lookupFunction(0x358E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A8Cu; }
        if (ctx->pc != 0x358A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E80_0x358e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A8Cu; }
        if (ctx->pc != 0x358A8Cu) { return; }
    }
    ctx->pc = 0x358A8Cu;
label_358a8c:
    // 0x358a8c: 0xc0d639c  jal         func_358E70
label_358a90:
    if (ctx->pc == 0x358A90u) {
        ctx->pc = 0x358A90u;
            // 0x358a90: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x358A94u;
        goto label_358a94;
    }
    ctx->pc = 0x358A8Cu;
    SET_GPR_U32(ctx, 31, 0x358A94u);
    ctx->pc = 0x358A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A8Cu;
            // 0x358a90: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A94u; }
        if (ctx->pc != 0x358A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358A94u; }
        if (ctx->pc != 0x358A94u) { return; }
    }
    ctx->pc = 0x358A94u;
label_358a94:
    // 0x358a94: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_358a98:
    if (ctx->pc == 0x358A98u) {
        ctx->pc = 0x358A9Cu;
        goto label_358a9c;
    }
    ctx->pc = 0x358A94u;
    {
        const bool branch_taken_0x358a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a94) {
            ctx->pc = 0x358B98u;
            goto label_358b98;
        }
    }
    ctx->pc = 0x358A9Cu;
label_358a9c:
    // 0x358a9c: 0xc0d1c14  jal         func_347050
label_358aa0:
    if (ctx->pc == 0x358AA0u) {
        ctx->pc = 0x358AA0u;
            // 0x358aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358AA4u;
        goto label_358aa4;
    }
    ctx->pc = 0x358A9Cu;
    SET_GPR_U32(ctx, 31, 0x358AA4u);
    ctx->pc = 0x358AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358A9Cu;
            // 0x358aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AA4u; }
        if (ctx->pc != 0x358AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AA4u; }
        if (ctx->pc != 0x358AA4u) { return; }
    }
    ctx->pc = 0x358AA4u;
label_358aa4:
    // 0x358aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358aa8:
    // 0x358aa8: 0xc04f278  jal         func_13C9E0
label_358aac:
    if (ctx->pc == 0x358AACu) {
        ctx->pc = 0x358AACu;
            // 0x358aac: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x358AB0u;
        goto label_358ab0;
    }
    ctx->pc = 0x358AA8u;
    SET_GPR_U32(ctx, 31, 0x358AB0u);
    ctx->pc = 0x358AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358AA8u;
            // 0x358aac: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AB0u; }
        if (ctx->pc != 0x358AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AB0u; }
        if (ctx->pc != 0x358AB0u) { return; }
    }
    ctx->pc = 0x358AB0u;
label_358ab0:
    // 0x358ab0: 0xc0d1c10  jal         func_347040
label_358ab4:
    if (ctx->pc == 0x358AB4u) {
        ctx->pc = 0x358AB4u;
            // 0x358ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358AB8u;
        goto label_358ab8;
    }
    ctx->pc = 0x358AB0u;
    SET_GPR_U32(ctx, 31, 0x358AB8u);
    ctx->pc = 0x358AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358AB0u;
            // 0x358ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AB8u; }
        if (ctx->pc != 0x358AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AB8u; }
        if (ctx->pc != 0x358AB8u) { return; }
    }
    ctx->pc = 0x358AB8u;
label_358ab8:
    // 0x358ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358abc:
    // 0x358abc: 0xc04ce80  jal         func_133A00
label_358ac0:
    if (ctx->pc == 0x358AC0u) {
        ctx->pc = 0x358AC0u;
            // 0x358ac0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x358AC4u;
        goto label_358ac4;
    }
    ctx->pc = 0x358ABCu;
    SET_GPR_U32(ctx, 31, 0x358AC4u);
    ctx->pc = 0x358AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358ABCu;
            // 0x358ac0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AC4u; }
        if (ctx->pc != 0x358AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AC4u; }
        if (ctx->pc != 0x358AC4u) { return; }
    }
    ctx->pc = 0x358AC4u;
label_358ac4:
    // 0x358ac4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x358ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358ac8:
    // 0x358ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_358acc:
    // 0x358acc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x358accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_358ad0:
    // 0x358ad0: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x358ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_358ad4:
    // 0x358ad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358ad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_358ad8:
    // 0x358ad8: 0xc0d6334  jal         func_358CD0
label_358adc:
    if (ctx->pc == 0x358ADCu) {
        ctx->pc = 0x358ADCu;
            // 0x358adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358AE0u;
        goto label_358ae0;
    }
    ctx->pc = 0x358AD8u;
    SET_GPR_U32(ctx, 31, 0x358AE0u);
    ctx->pc = 0x358ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358AD8u;
            // 0x358adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358CD0u;
    if (runtime->hasFunction(0x358CD0u)) {
        auto targetFn = runtime->lookupFunction(0x358CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AE0u; }
        if (ctx->pc != 0x358AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358CD0_0x358cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AE0u; }
        if (ctx->pc != 0x358AE0u) { return; }
    }
    ctx->pc = 0x358AE0u;
label_358ae0:
    // 0x358ae0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_358ae4:
    if (ctx->pc == 0x358AE4u) {
        ctx->pc = 0x358AE8u;
        goto label_358ae8;
    }
    ctx->pc = 0x358AE0u;
    {
        const bool branch_taken_0x358ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358ae0) {
            ctx->pc = 0x358B80u;
            goto label_358b80;
        }
    }
    ctx->pc = 0x358AE8u;
label_358ae8:
    // 0x358ae8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x358ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358aec:
    // 0x358aec: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_358af0:
    // 0x358af0: 0xc0d630c  jal         func_358C30
label_358af4:
    if (ctx->pc == 0x358AF4u) {
        ctx->pc = 0x358AF4u;
            // 0x358af4: 0x27a601c8  addiu       $a2, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->pc = 0x358AF8u;
        goto label_358af8;
    }
    ctx->pc = 0x358AF0u;
    SET_GPR_U32(ctx, 31, 0x358AF8u);
    ctx->pc = 0x358AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358AF0u;
            // 0x358af4: 0x27a601c8  addiu       $a2, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358C30u;
    if (runtime->hasFunction(0x358C30u)) {
        auto targetFn = runtime->lookupFunction(0x358C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AF8u; }
        if (ctx->pc != 0x358AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358C30_0x358c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358AF8u; }
        if (ctx->pc != 0x358AF8u) { return; }
    }
    ctx->pc = 0x358AF8u;
label_358af8:
    // 0x358af8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x358af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_358afc:
    // 0x358afc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x358afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_358b00:
    // 0x358b00: 0xc04cd60  jal         func_133580
label_358b04:
    if (ctx->pc == 0x358B04u) {
        ctx->pc = 0x358B04u;
            // 0x358b04: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x358B08u;
        goto label_358b08;
    }
    ctx->pc = 0x358B00u;
    SET_GPR_U32(ctx, 31, 0x358B08u);
    ctx->pc = 0x358B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358B00u;
            // 0x358b04: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B08u; }
        if (ctx->pc != 0x358B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B08u; }
        if (ctx->pc != 0x358B08u) { return; }
    }
    ctx->pc = 0x358B08u;
label_358b08:
    // 0x358b08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x358b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358b0c:
    // 0x358b0c: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x358b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_358b10:
    // 0x358b10: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x358b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_358b14:
    // 0x358b14: 0xc04e4a4  jal         func_139290
label_358b18:
    if (ctx->pc == 0x358B18u) {
        ctx->pc = 0x358B18u;
            // 0x358b18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x358B1Cu;
        goto label_358b1c;
    }
    ctx->pc = 0x358B14u;
    SET_GPR_U32(ctx, 31, 0x358B1Cu);
    ctx->pc = 0x358B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358B14u;
            // 0x358b18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B1Cu; }
        if (ctx->pc != 0x358B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B1Cu; }
        if (ctx->pc != 0x358B1Cu) { return; }
    }
    ctx->pc = 0x358B1Cu;
label_358b1c:
    // 0x358b1c: 0xc0d5d80  jal         func_357600
label_358b20:
    if (ctx->pc == 0x358B20u) {
        ctx->pc = 0x358B20u;
            // 0x358b20: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x358B24u;
        goto label_358b24;
    }
    ctx->pc = 0x358B1Cu;
    SET_GPR_U32(ctx, 31, 0x358B24u);
    ctx->pc = 0x358B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358B1Cu;
            // 0x358b20: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B24u; }
        if (ctx->pc != 0x358B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B24u; }
        if (ctx->pc != 0x358B24u) { return; }
    }
    ctx->pc = 0x358B24u;
label_358b24:
    // 0x358b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_358b28:
    // 0x358b28: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x358b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_358b2c:
    // 0x358b2c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x358b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_358b30:
    // 0x358b30: 0x24634460  addiu       $v1, $v1, 0x4460
    ctx->pc = 0x358b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17504));
label_358b34:
    // 0x358b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_358b38:
    // 0x358b38: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x358b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_358b3c:
    // 0x358b3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358b40:
    // 0x358b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x358b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_358b44:
    // 0x358b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_358b48:
    // 0x358b48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x358b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_358b4c:
    // 0x358b4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x358b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_358b50:
    // 0x358b50: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x358b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_358b54:
    // 0x358b54: 0x320f809  jalr        $t9
label_358b58:
    if (ctx->pc == 0x358B58u) {
        ctx->pc = 0x358B58u;
            // 0x358b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358B5Cu;
        goto label_358b5c;
    }
    ctx->pc = 0x358B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358B5Cu);
        ctx->pc = 0x358B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B54u;
            // 0x358b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x358B5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358B5Cu; }
            if (ctx->pc != 0x358B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x358B5Cu;
label_358b5c:
    // 0x358b5c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x358b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_358b60:
    // 0x358b60: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x358b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_358b64:
    // 0x358b64: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x358b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_358b68:
    // 0x358b68: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x358b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358b6c:
    // 0x358b6c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x358b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358b70:
    // 0x358b70: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x358b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_358b74:
    // 0x358b74: 0xc04cfcc  jal         func_133F30
label_358b78:
    if (ctx->pc == 0x358B78u) {
        ctx->pc = 0x358B78u;
            // 0x358b78: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x358B7Cu;
        goto label_358b7c;
    }
    ctx->pc = 0x358B74u;
    SET_GPR_U32(ctx, 31, 0x358B7Cu);
    ctx->pc = 0x358B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358B74u;
            // 0x358b78: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B7Cu; }
        if (ctx->pc != 0x358B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B7Cu; }
        if (ctx->pc != 0x358B7Cu) { return; }
    }
    ctx->pc = 0x358B7Cu;
label_358b7c:
    // 0x358b7c: 0x0  nop
    ctx->pc = 0x358b7cu;
    // NOP
label_358b80:
    // 0x358b80: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x358b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358b84:
    // 0x358b84: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x358b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358b88:
    // 0x358b88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_358b8c:
    // 0x358b8c: 0xc0e325c  jal         func_38C970
label_358b90:
    if (ctx->pc == 0x358B90u) {
        ctx->pc = 0x358B90u;
            // 0x358b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358B94u;
        goto label_358b94;
    }
    ctx->pc = 0x358B8Cu;
    SET_GPR_U32(ctx, 31, 0x358B94u);
    ctx->pc = 0x358B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358B8Cu;
            // 0x358b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B94u; }
        if (ctx->pc != 0x358B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358B94u; }
        if (ctx->pc != 0x358B94u) { return; }
    }
    ctx->pc = 0x358B94u;
label_358b94:
    // 0x358b94: 0x0  nop
    ctx->pc = 0x358b94u;
    // NOP
label_358b98:
    // 0x358b98: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x358b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_358b9c:
    // 0x358b9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x358b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_358ba0:
    // 0x358ba0: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x358ba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_358ba4:
    // 0x358ba4: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_358ba8:
    if (ctx->pc == 0x358BA8u) {
        ctx->pc = 0x358BA8u;
            // 0x358ba8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x358BACu;
        goto label_358bac;
    }
    ctx->pc = 0x358BA4u;
    {
        const bool branch_taken_0x358ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BA4u;
            // 0x358ba8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ba4) {
            ctx->pc = 0x3589E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3589e4;
        }
    }
    ctx->pc = 0x358BACu;
label_358bac:
    // 0x358bac: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x358bacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_358bb0:
    // 0x358bb0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x358bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_358bb4:
    // 0x358bb4: 0x8c89e3c0  lw          $t1, -0x1C40($a0)
    ctx->pc = 0x358bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960064)));
label_358bb8:
    // 0x358bb8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x358bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358bbc:
    // 0x358bbc: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x358bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_358bc0:
    // 0x358bc0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x358bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_358bc4:
    // 0x358bc4: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x358bc4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_358bc8:
    // 0x358bc8: 0x1810  mfhi        $v1
    ctx->pc = 0x358bc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_358bcc:
    // 0x358bcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x358bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_358bd0:
    // 0x358bd0: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x358bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_358bd4:
    // 0x358bd4: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_358bd8:
    if (ctx->pc == 0x358BD8u) {
        ctx->pc = 0x358BD8u;
            // 0x358bd8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x358BDCu;
        goto label_358bdc;
    }
    ctx->pc = 0x358BD4u;
    {
        const bool branch_taken_0x358bd4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x358BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BD4u;
            // 0x358bd8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bd4) {
            ctx->pc = 0x358BFCu;
            goto label_358bfc;
        }
    }
    ctx->pc = 0x358BDCu;
label_358bdc:
    // 0x358bdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_358be0:
    // 0x358be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x358be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_358be4:
    // 0x358be4: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x358be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_358be8:
    // 0x358be8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x358be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_358bec:
    // 0x358bec: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x358becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_358bf0:
    // 0x358bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x358bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358bf4:
    // 0x358bf4: 0xc055d28  jal         func_1574A0
label_358bf8:
    if (ctx->pc == 0x358BF8u) {
        ctx->pc = 0x358BF8u;
            // 0x358bf8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358BFCu;
        goto label_358bfc;
    }
    ctx->pc = 0x358BF4u;
    SET_GPR_U32(ctx, 31, 0x358BFCu);
    ctx->pc = 0x358BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358BF4u;
            // 0x358bf8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358BFCu; }
        if (ctx->pc != 0x358BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358BFCu; }
        if (ctx->pc != 0x358BFCu) { return; }
    }
    ctx->pc = 0x358BFCu;
label_358bfc:
    // 0x358bfc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x358bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_358c00:
    // 0x358c00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x358c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_358c04:
    // 0x358c04: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x358c04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_358c08:
    // 0x358c08: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x358c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_358c0c:
    // 0x358c0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x358c0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_358c10:
    // 0x358c10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x358c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_358c14:
    // 0x358c14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x358c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_358c18:
    // 0x358c18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x358c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_358c1c:
    // 0x358c1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x358c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_358c20:
    // 0x358c20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_358c24:
    // 0x358c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x358c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_358c28:
    // 0x358c28: 0x3e00008  jr          $ra
label_358c2c:
    if (ctx->pc == 0x358C2Cu) {
        ctx->pc = 0x358C2Cu;
            // 0x358c2c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x358C30u;
        goto label_fallthrough_0x358c28;
    }
    ctx->pc = 0x358C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358C28u;
            // 0x358c2c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x358c28:
    ctx->pc = 0x358C30u;
}

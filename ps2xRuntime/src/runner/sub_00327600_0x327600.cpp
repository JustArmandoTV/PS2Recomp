#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327600
// Address: 0x327600 - 0x327b00
void sub_00327600_0x327600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327600_0x327600");
#endif

    switch (ctx->pc) {
        case 0x327600u: goto label_327600;
        case 0x327604u: goto label_327604;
        case 0x327608u: goto label_327608;
        case 0x32760cu: goto label_32760c;
        case 0x327610u: goto label_327610;
        case 0x327614u: goto label_327614;
        case 0x327618u: goto label_327618;
        case 0x32761cu: goto label_32761c;
        case 0x327620u: goto label_327620;
        case 0x327624u: goto label_327624;
        case 0x327628u: goto label_327628;
        case 0x32762cu: goto label_32762c;
        case 0x327630u: goto label_327630;
        case 0x327634u: goto label_327634;
        case 0x327638u: goto label_327638;
        case 0x32763cu: goto label_32763c;
        case 0x327640u: goto label_327640;
        case 0x327644u: goto label_327644;
        case 0x327648u: goto label_327648;
        case 0x32764cu: goto label_32764c;
        case 0x327650u: goto label_327650;
        case 0x327654u: goto label_327654;
        case 0x327658u: goto label_327658;
        case 0x32765cu: goto label_32765c;
        case 0x327660u: goto label_327660;
        case 0x327664u: goto label_327664;
        case 0x327668u: goto label_327668;
        case 0x32766cu: goto label_32766c;
        case 0x327670u: goto label_327670;
        case 0x327674u: goto label_327674;
        case 0x327678u: goto label_327678;
        case 0x32767cu: goto label_32767c;
        case 0x327680u: goto label_327680;
        case 0x327684u: goto label_327684;
        case 0x327688u: goto label_327688;
        case 0x32768cu: goto label_32768c;
        case 0x327690u: goto label_327690;
        case 0x327694u: goto label_327694;
        case 0x327698u: goto label_327698;
        case 0x32769cu: goto label_32769c;
        case 0x3276a0u: goto label_3276a0;
        case 0x3276a4u: goto label_3276a4;
        case 0x3276a8u: goto label_3276a8;
        case 0x3276acu: goto label_3276ac;
        case 0x3276b0u: goto label_3276b0;
        case 0x3276b4u: goto label_3276b4;
        case 0x3276b8u: goto label_3276b8;
        case 0x3276bcu: goto label_3276bc;
        case 0x3276c0u: goto label_3276c0;
        case 0x3276c4u: goto label_3276c4;
        case 0x3276c8u: goto label_3276c8;
        case 0x3276ccu: goto label_3276cc;
        case 0x3276d0u: goto label_3276d0;
        case 0x3276d4u: goto label_3276d4;
        case 0x3276d8u: goto label_3276d8;
        case 0x3276dcu: goto label_3276dc;
        case 0x3276e0u: goto label_3276e0;
        case 0x3276e4u: goto label_3276e4;
        case 0x3276e8u: goto label_3276e8;
        case 0x3276ecu: goto label_3276ec;
        case 0x3276f0u: goto label_3276f0;
        case 0x3276f4u: goto label_3276f4;
        case 0x3276f8u: goto label_3276f8;
        case 0x3276fcu: goto label_3276fc;
        case 0x327700u: goto label_327700;
        case 0x327704u: goto label_327704;
        case 0x327708u: goto label_327708;
        case 0x32770cu: goto label_32770c;
        case 0x327710u: goto label_327710;
        case 0x327714u: goto label_327714;
        case 0x327718u: goto label_327718;
        case 0x32771cu: goto label_32771c;
        case 0x327720u: goto label_327720;
        case 0x327724u: goto label_327724;
        case 0x327728u: goto label_327728;
        case 0x32772cu: goto label_32772c;
        case 0x327730u: goto label_327730;
        case 0x327734u: goto label_327734;
        case 0x327738u: goto label_327738;
        case 0x32773cu: goto label_32773c;
        case 0x327740u: goto label_327740;
        case 0x327744u: goto label_327744;
        case 0x327748u: goto label_327748;
        case 0x32774cu: goto label_32774c;
        case 0x327750u: goto label_327750;
        case 0x327754u: goto label_327754;
        case 0x327758u: goto label_327758;
        case 0x32775cu: goto label_32775c;
        case 0x327760u: goto label_327760;
        case 0x327764u: goto label_327764;
        case 0x327768u: goto label_327768;
        case 0x32776cu: goto label_32776c;
        case 0x327770u: goto label_327770;
        case 0x327774u: goto label_327774;
        case 0x327778u: goto label_327778;
        case 0x32777cu: goto label_32777c;
        case 0x327780u: goto label_327780;
        case 0x327784u: goto label_327784;
        case 0x327788u: goto label_327788;
        case 0x32778cu: goto label_32778c;
        case 0x327790u: goto label_327790;
        case 0x327794u: goto label_327794;
        case 0x327798u: goto label_327798;
        case 0x32779cu: goto label_32779c;
        case 0x3277a0u: goto label_3277a0;
        case 0x3277a4u: goto label_3277a4;
        case 0x3277a8u: goto label_3277a8;
        case 0x3277acu: goto label_3277ac;
        case 0x3277b0u: goto label_3277b0;
        case 0x3277b4u: goto label_3277b4;
        case 0x3277b8u: goto label_3277b8;
        case 0x3277bcu: goto label_3277bc;
        case 0x3277c0u: goto label_3277c0;
        case 0x3277c4u: goto label_3277c4;
        case 0x3277c8u: goto label_3277c8;
        case 0x3277ccu: goto label_3277cc;
        case 0x3277d0u: goto label_3277d0;
        case 0x3277d4u: goto label_3277d4;
        case 0x3277d8u: goto label_3277d8;
        case 0x3277dcu: goto label_3277dc;
        case 0x3277e0u: goto label_3277e0;
        case 0x3277e4u: goto label_3277e4;
        case 0x3277e8u: goto label_3277e8;
        case 0x3277ecu: goto label_3277ec;
        case 0x3277f0u: goto label_3277f0;
        case 0x3277f4u: goto label_3277f4;
        case 0x3277f8u: goto label_3277f8;
        case 0x3277fcu: goto label_3277fc;
        case 0x327800u: goto label_327800;
        case 0x327804u: goto label_327804;
        case 0x327808u: goto label_327808;
        case 0x32780cu: goto label_32780c;
        case 0x327810u: goto label_327810;
        case 0x327814u: goto label_327814;
        case 0x327818u: goto label_327818;
        case 0x32781cu: goto label_32781c;
        case 0x327820u: goto label_327820;
        case 0x327824u: goto label_327824;
        case 0x327828u: goto label_327828;
        case 0x32782cu: goto label_32782c;
        case 0x327830u: goto label_327830;
        case 0x327834u: goto label_327834;
        case 0x327838u: goto label_327838;
        case 0x32783cu: goto label_32783c;
        case 0x327840u: goto label_327840;
        case 0x327844u: goto label_327844;
        case 0x327848u: goto label_327848;
        case 0x32784cu: goto label_32784c;
        case 0x327850u: goto label_327850;
        case 0x327854u: goto label_327854;
        case 0x327858u: goto label_327858;
        case 0x32785cu: goto label_32785c;
        case 0x327860u: goto label_327860;
        case 0x327864u: goto label_327864;
        case 0x327868u: goto label_327868;
        case 0x32786cu: goto label_32786c;
        case 0x327870u: goto label_327870;
        case 0x327874u: goto label_327874;
        case 0x327878u: goto label_327878;
        case 0x32787cu: goto label_32787c;
        case 0x327880u: goto label_327880;
        case 0x327884u: goto label_327884;
        case 0x327888u: goto label_327888;
        case 0x32788cu: goto label_32788c;
        case 0x327890u: goto label_327890;
        case 0x327894u: goto label_327894;
        case 0x327898u: goto label_327898;
        case 0x32789cu: goto label_32789c;
        case 0x3278a0u: goto label_3278a0;
        case 0x3278a4u: goto label_3278a4;
        case 0x3278a8u: goto label_3278a8;
        case 0x3278acu: goto label_3278ac;
        case 0x3278b0u: goto label_3278b0;
        case 0x3278b4u: goto label_3278b4;
        case 0x3278b8u: goto label_3278b8;
        case 0x3278bcu: goto label_3278bc;
        case 0x3278c0u: goto label_3278c0;
        case 0x3278c4u: goto label_3278c4;
        case 0x3278c8u: goto label_3278c8;
        case 0x3278ccu: goto label_3278cc;
        case 0x3278d0u: goto label_3278d0;
        case 0x3278d4u: goto label_3278d4;
        case 0x3278d8u: goto label_3278d8;
        case 0x3278dcu: goto label_3278dc;
        case 0x3278e0u: goto label_3278e0;
        case 0x3278e4u: goto label_3278e4;
        case 0x3278e8u: goto label_3278e8;
        case 0x3278ecu: goto label_3278ec;
        case 0x3278f0u: goto label_3278f0;
        case 0x3278f4u: goto label_3278f4;
        case 0x3278f8u: goto label_3278f8;
        case 0x3278fcu: goto label_3278fc;
        case 0x327900u: goto label_327900;
        case 0x327904u: goto label_327904;
        case 0x327908u: goto label_327908;
        case 0x32790cu: goto label_32790c;
        case 0x327910u: goto label_327910;
        case 0x327914u: goto label_327914;
        case 0x327918u: goto label_327918;
        case 0x32791cu: goto label_32791c;
        case 0x327920u: goto label_327920;
        case 0x327924u: goto label_327924;
        case 0x327928u: goto label_327928;
        case 0x32792cu: goto label_32792c;
        case 0x327930u: goto label_327930;
        case 0x327934u: goto label_327934;
        case 0x327938u: goto label_327938;
        case 0x32793cu: goto label_32793c;
        case 0x327940u: goto label_327940;
        case 0x327944u: goto label_327944;
        case 0x327948u: goto label_327948;
        case 0x32794cu: goto label_32794c;
        case 0x327950u: goto label_327950;
        case 0x327954u: goto label_327954;
        case 0x327958u: goto label_327958;
        case 0x32795cu: goto label_32795c;
        case 0x327960u: goto label_327960;
        case 0x327964u: goto label_327964;
        case 0x327968u: goto label_327968;
        case 0x32796cu: goto label_32796c;
        case 0x327970u: goto label_327970;
        case 0x327974u: goto label_327974;
        case 0x327978u: goto label_327978;
        case 0x32797cu: goto label_32797c;
        case 0x327980u: goto label_327980;
        case 0x327984u: goto label_327984;
        case 0x327988u: goto label_327988;
        case 0x32798cu: goto label_32798c;
        case 0x327990u: goto label_327990;
        case 0x327994u: goto label_327994;
        case 0x327998u: goto label_327998;
        case 0x32799cu: goto label_32799c;
        case 0x3279a0u: goto label_3279a0;
        case 0x3279a4u: goto label_3279a4;
        case 0x3279a8u: goto label_3279a8;
        case 0x3279acu: goto label_3279ac;
        case 0x3279b0u: goto label_3279b0;
        case 0x3279b4u: goto label_3279b4;
        case 0x3279b8u: goto label_3279b8;
        case 0x3279bcu: goto label_3279bc;
        case 0x3279c0u: goto label_3279c0;
        case 0x3279c4u: goto label_3279c4;
        case 0x3279c8u: goto label_3279c8;
        case 0x3279ccu: goto label_3279cc;
        case 0x3279d0u: goto label_3279d0;
        case 0x3279d4u: goto label_3279d4;
        case 0x3279d8u: goto label_3279d8;
        case 0x3279dcu: goto label_3279dc;
        case 0x3279e0u: goto label_3279e0;
        case 0x3279e4u: goto label_3279e4;
        case 0x3279e8u: goto label_3279e8;
        case 0x3279ecu: goto label_3279ec;
        case 0x3279f0u: goto label_3279f0;
        case 0x3279f4u: goto label_3279f4;
        case 0x3279f8u: goto label_3279f8;
        case 0x3279fcu: goto label_3279fc;
        case 0x327a00u: goto label_327a00;
        case 0x327a04u: goto label_327a04;
        case 0x327a08u: goto label_327a08;
        case 0x327a0cu: goto label_327a0c;
        case 0x327a10u: goto label_327a10;
        case 0x327a14u: goto label_327a14;
        case 0x327a18u: goto label_327a18;
        case 0x327a1cu: goto label_327a1c;
        case 0x327a20u: goto label_327a20;
        case 0x327a24u: goto label_327a24;
        case 0x327a28u: goto label_327a28;
        case 0x327a2cu: goto label_327a2c;
        case 0x327a30u: goto label_327a30;
        case 0x327a34u: goto label_327a34;
        case 0x327a38u: goto label_327a38;
        case 0x327a3cu: goto label_327a3c;
        case 0x327a40u: goto label_327a40;
        case 0x327a44u: goto label_327a44;
        case 0x327a48u: goto label_327a48;
        case 0x327a4cu: goto label_327a4c;
        case 0x327a50u: goto label_327a50;
        case 0x327a54u: goto label_327a54;
        case 0x327a58u: goto label_327a58;
        case 0x327a5cu: goto label_327a5c;
        case 0x327a60u: goto label_327a60;
        case 0x327a64u: goto label_327a64;
        case 0x327a68u: goto label_327a68;
        case 0x327a6cu: goto label_327a6c;
        case 0x327a70u: goto label_327a70;
        case 0x327a74u: goto label_327a74;
        case 0x327a78u: goto label_327a78;
        case 0x327a7cu: goto label_327a7c;
        case 0x327a80u: goto label_327a80;
        case 0x327a84u: goto label_327a84;
        case 0x327a88u: goto label_327a88;
        case 0x327a8cu: goto label_327a8c;
        case 0x327a90u: goto label_327a90;
        case 0x327a94u: goto label_327a94;
        case 0x327a98u: goto label_327a98;
        case 0x327a9cu: goto label_327a9c;
        case 0x327aa0u: goto label_327aa0;
        case 0x327aa4u: goto label_327aa4;
        case 0x327aa8u: goto label_327aa8;
        case 0x327aacu: goto label_327aac;
        case 0x327ab0u: goto label_327ab0;
        case 0x327ab4u: goto label_327ab4;
        case 0x327ab8u: goto label_327ab8;
        case 0x327abcu: goto label_327abc;
        case 0x327ac0u: goto label_327ac0;
        case 0x327ac4u: goto label_327ac4;
        case 0x327ac8u: goto label_327ac8;
        case 0x327accu: goto label_327acc;
        case 0x327ad0u: goto label_327ad0;
        case 0x327ad4u: goto label_327ad4;
        case 0x327ad8u: goto label_327ad8;
        case 0x327adcu: goto label_327adc;
        case 0x327ae0u: goto label_327ae0;
        case 0x327ae4u: goto label_327ae4;
        case 0x327ae8u: goto label_327ae8;
        case 0x327aecu: goto label_327aec;
        case 0x327af0u: goto label_327af0;
        case 0x327af4u: goto label_327af4;
        case 0x327af8u: goto label_327af8;
        case 0x327afcu: goto label_327afc;
        default: break;
    }

    ctx->pc = 0x327600u;

label_327600:
    // 0x327600: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x327600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_327604:
    // 0x327604: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x327604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_327608:
    // 0x327608: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x327608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32760c:
    // 0x32760c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x32760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_327610:
    // 0x327610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x327610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_327614:
    // 0x327614: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327618:
    // 0x327618: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x327618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32761c:
    // 0x32761c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_327620:
    // 0x327620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_327624:
    // 0x327624: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x327624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
label_327628:
    // 0x327628: 0x26700234  addiu       $s0, $s3, 0x234
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 564));
label_32762c:
    // 0x32762c: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x32762cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
label_327630:
    // 0x327630: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_327634:
    if (ctx->pc == 0x327634u) {
        ctx->pc = 0x327634u;
            // 0x327634: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x327638u;
        goto label_327638;
    }
    ctx->pc = 0x327630u;
    {
        const bool branch_taken_0x327630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327630u;
            // 0x327634: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327630) {
            ctx->pc = 0x327654u;
            goto label_327654;
        }
    }
    ctx->pc = 0x327638u;
label_327638:
    // 0x327638: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x327638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_32763c:
    // 0x32763c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_327640:
    // 0x327640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_327644:
    // 0x327644: 0x0  nop
    ctx->pc = 0x327644u;
    // NOP
label_327648:
    // 0x327648: 0x0  nop
    ctx->pc = 0x327648u;
    // NOP
label_32764c:
    // 0x32764c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_327650:
    if (ctx->pc == 0x327650u) {
        ctx->pc = 0x327654u;
        goto label_327654;
    }
    ctx->pc = 0x32764Cu;
    {
        const bool branch_taken_0x32764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32764c) {
            ctx->pc = 0x327638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_327638;
        }
    }
    ctx->pc = 0x327654u;
label_327654:
    // 0x327654: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x327654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_327658:
    // 0x327658: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_32765c:
    if (ctx->pc == 0x32765Cu) {
        ctx->pc = 0x32765Cu;
            // 0x32765c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x327660u;
        goto label_327660;
    }
    ctx->pc = 0x327658u;
    {
        const bool branch_taken_0x327658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327658u;
            // 0x32765c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327658) {
            ctx->pc = 0x32767Cu;
            goto label_32767c;
        }
    }
    ctx->pc = 0x327660u;
label_327660:
    // 0x327660: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x327660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_327664:
    // 0x327664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_327668:
    // 0x327668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32766c:
    // 0x32766c: 0x0  nop
    ctx->pc = 0x32766cu;
    // NOP
label_327670:
    // 0x327670: 0x0  nop
    ctx->pc = 0x327670u;
    // NOP
label_327674:
    // 0x327674: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_327678:
    if (ctx->pc == 0x327678u) {
        ctx->pc = 0x32767Cu;
        goto label_32767c;
    }
    ctx->pc = 0x327674u;
    {
        const bool branch_taken_0x327674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327674) {
            ctx->pc = 0x327660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_327660;
        }
    }
    ctx->pc = 0x32767Cu;
label_32767c:
    // 0x32767c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_327680:
    // 0x327680: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x327680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_327684:
    // 0x327684: 0x8c443e30  lw          $a0, 0x3E30($v0)
    ctx->pc = 0x327684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_327688:
    // 0x327688: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x327688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_32768c:
    // 0x32768c: 0x2482fffd  addiu       $v0, $a0, -0x3
    ctx->pc = 0x32768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_327690:
    // 0x327690: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x327690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_327694:
    // 0x327694: 0x102000ec  beqz        $at, . + 4 + (0xEC << 2)
label_327698:
    if (ctx->pc == 0x327698u) {
        ctx->pc = 0x327698u;
            // 0x327698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32769Cu;
        goto label_32769c;
    }
    ctx->pc = 0x327694u;
    {
        const bool branch_taken_0x327694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x327698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327694u;
            // 0x327698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327694) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x32769Cu;
label_32769c:
    // 0x32769c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3276a0:
    // 0x3276a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3276a4:
    // 0x3276a4: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x3276a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
label_3276a8:
    // 0x3276a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3276ac:
    // 0x3276ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3276b0:
    // 0x3276b0: 0x400008  jr          $v0
label_3276b4:
    if (ctx->pc == 0x3276B4u) {
        ctx->pc = 0x3276B8u;
        goto label_3276b8;
    }
    ctx->pc = 0x3276B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3276B8u: goto label_3276b8;
            case 0x327794u: goto label_327794;
            case 0x327800u: goto label_327800;
            case 0x327874u: goto label_327874;
            case 0x3278E8u: goto label_3278e8;
            case 0x32796Cu: goto label_32796c;
            case 0x3279C8u: goto label_3279c8;
            case 0x327A24u: goto label_327a24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3276B8u;
label_3276b8:
    // 0x3276b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3276bc:
    // 0x3276bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3276bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3276c0:
    // 0x3276c0: 0xc1232d8  jal         func_48CB60
label_3276c4:
    if (ctx->pc == 0x3276C4u) {
        ctx->pc = 0x3276C4u;
            // 0x3276c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3276C8u;
        goto label_3276c8;
    }
    ctx->pc = 0x3276C0u;
    SET_GPR_U32(ctx, 31, 0x3276C8u);
    ctx->pc = 0x3276C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3276C0u;
            // 0x3276c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3276C8u; }
        if (ctx->pc != 0x3276C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3276C8u; }
        if (ctx->pc != 0x3276C8u) { return; }
    }
    ctx->pc = 0x3276C8u;
label_3276c8:
    // 0x3276c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3276cc:
    // 0x3276cc: 0xc123328  jal         func_48CCA0
label_3276d0:
    if (ctx->pc == 0x3276D0u) {
        ctx->pc = 0x3276D0u;
            // 0x3276d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3276D4u;
        goto label_3276d4;
    }
    ctx->pc = 0x3276CCu;
    SET_GPR_U32(ctx, 31, 0x3276D4u);
    ctx->pc = 0x3276D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3276CCu;
            // 0x3276d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3276D4u; }
        if (ctx->pc != 0x3276D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3276D4u; }
        if (ctx->pc != 0x3276D4u) { return; }
    }
    ctx->pc = 0x3276D4u;
label_3276d4:
    // 0x3276d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3276d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3276d8:
    // 0x3276d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3276d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3276dc:
    // 0x3276dc: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x3276dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3276e0:
    // 0x3276e0: 0x9063003d  lbu         $v1, 0x3D($v1)
    ctx->pc = 0x3276e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
label_3276e4:
    // 0x3276e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3276e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3276e8:
    // 0x3276e8: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
label_3276ec:
    if (ctx->pc == 0x3276ECu) {
        ctx->pc = 0x3276ECu;
            // 0x3276ec: 0x8e640604  lw          $a0, 0x604($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1540)));
        ctx->pc = 0x3276F0u;
        goto label_3276f0;
    }
    ctx->pc = 0x3276E8u;
    {
        const bool branch_taken_0x3276e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3276e8) {
            ctx->pc = 0x3276ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3276E8u;
            // 0x3276ec: 0x8e640604  lw          $a0, 0x604($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1540)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32772Cu;
            goto label_32772c;
        }
    }
    ctx->pc = 0x3276F0u;
label_3276f0:
    // 0x3276f0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3276f4:
    if (ctx->pc == 0x3276F4u) {
        ctx->pc = 0x3276F4u;
            // 0x3276f4: 0x8e6405fc  lw          $a0, 0x5FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1532)));
        ctx->pc = 0x3276F8u;
        goto label_3276f8;
    }
    ctx->pc = 0x3276F0u;
    {
        const bool branch_taken_0x3276f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3276f0) {
            ctx->pc = 0x3276F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3276F0u;
            // 0x3276f4: 0x8e6405fc  lw          $a0, 0x5FC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1532)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327700u;
            goto label_327700;
        }
    }
    ctx->pc = 0x3276F8u;
label_3276f8:
    // 0x3276f8: 0x10000016  b           . + 4 + (0x16 << 2)
label_3276fc:
    if (ctx->pc == 0x3276FCu) {
        ctx->pc = 0x3276FCu;
            // 0x3276fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x327700u;
        goto label_327700;
    }
    ctx->pc = 0x3276F8u;
    {
        const bool branch_taken_0x3276f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3276F8u;
            // 0x3276fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276f8) {
            ctx->pc = 0x327754u;
            goto label_327754;
        }
    }
    ctx->pc = 0x327700u;
label_327700:
    // 0x327700: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x327700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_327704:
    // 0x327704: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x327704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
label_327708:
    // 0x327708: 0xc123020  jal         func_48C080
label_32770c:
    if (ctx->pc == 0x32770Cu) {
        ctx->pc = 0x32770Cu;
            // 0x32770c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x327710u;
        goto label_327710;
    }
    ctx->pc = 0x327708u;
    SET_GPR_U32(ctx, 31, 0x327710u);
    ctx->pc = 0x32770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327708u;
            // 0x32770c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327710u; }
        if (ctx->pc != 0x327710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327710u; }
        if (ctx->pc != 0x327710u) { return; }
    }
    ctx->pc = 0x327710u;
label_327710:
    // 0x327710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327714:
    // 0x327714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327718:
    // 0x327718: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x327718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32771c:
    // 0x32771c: 0xc0c7b74  jal         func_31EDD0
label_327720:
    if (ctx->pc == 0x327720u) {
        ctx->pc = 0x327720u;
            // 0x327720: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327724u;
        goto label_327724;
    }
    ctx->pc = 0x32771Cu;
    SET_GPR_U32(ctx, 31, 0x327724u);
    ctx->pc = 0x327720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32771Cu;
            // 0x327720: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327724u; }
        if (ctx->pc != 0x327724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327724u; }
        if (ctx->pc != 0x327724u) { return; }
    }
    ctx->pc = 0x327724u;
label_327724:
    // 0x327724: 0x1000000a  b           . + 4 + (0xA << 2)
label_327728:
    if (ctx->pc == 0x327728u) {
        ctx->pc = 0x32772Cu;
        goto label_32772c;
    }
    ctx->pc = 0x327724u;
    {
        const bool branch_taken_0x327724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327724) {
            ctx->pc = 0x327750u;
            goto label_327750;
        }
    }
    ctx->pc = 0x32772Cu;
label_32772c:
    // 0x32772c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32772cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_327730:
    // 0x327730: 0x24a5ce90  addiu       $a1, $a1, -0x3170
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954640));
label_327734:
    // 0x327734: 0xc123020  jal         func_48C080
label_327738:
    if (ctx->pc == 0x327738u) {
        ctx->pc = 0x327738u;
            // 0x327738: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x32773Cu;
        goto label_32773c;
    }
    ctx->pc = 0x327734u;
    SET_GPR_U32(ctx, 31, 0x32773Cu);
    ctx->pc = 0x327738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327734u;
            // 0x327738: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32773Cu; }
        if (ctx->pc != 0x32773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32773Cu; }
        if (ctx->pc != 0x32773Cu) { return; }
    }
    ctx->pc = 0x32773Cu;
label_32773c:
    // 0x32773c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327740:
    // 0x327740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327744:
    // 0x327744: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x327744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327748:
    // 0x327748: 0xc0c7b74  jal         func_31EDD0
label_32774c:
    if (ctx->pc == 0x32774Cu) {
        ctx->pc = 0x32774Cu;
            // 0x32774c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x327750u;
        goto label_327750;
    }
    ctx->pc = 0x327748u;
    SET_GPR_U32(ctx, 31, 0x327750u);
    ctx->pc = 0x32774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327748u;
            // 0x32774c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327750u; }
        if (ctx->pc != 0x327750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327750u; }
        if (ctx->pc != 0x327750u) { return; }
    }
    ctx->pc = 0x327750u;
label_327750:
    // 0x327750: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327754:
    // 0x327754: 0xc123328  jal         func_48CCA0
label_327758:
    if (ctx->pc == 0x327758u) {
        ctx->pc = 0x327758u;
            // 0x327758: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x32775Cu;
        goto label_32775c;
    }
    ctx->pc = 0x327754u;
    SET_GPR_U32(ctx, 31, 0x32775Cu);
    ctx->pc = 0x327758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327754u;
            // 0x327758: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32775Cu; }
        if (ctx->pc != 0x32775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32775Cu; }
        if (ctx->pc != 0x32775Cu) { return; }
    }
    ctx->pc = 0x32775Cu;
label_32775c:
    // 0x32775c: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x32775cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_327760:
    // 0x327760: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_327764:
    if (ctx->pc == 0x327764u) {
        ctx->pc = 0x327764u;
            // 0x327764: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x327768u;
        goto label_327768;
    }
    ctx->pc = 0x327760u;
    {
        const bool branch_taken_0x327760 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327760) {
            ctx->pc = 0x327764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327760u;
            // 0x327764: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327770u;
            goto label_327770;
        }
    }
    ctx->pc = 0x327768u;
label_327768:
    // 0x327768: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x327768u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_32776c:
    // 0x32776c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327770:
    // 0x327770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x327770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327774:
    // 0x327774: 0xc1232d8  jal         func_48CB60
label_327778:
    if (ctx->pc == 0x327778u) {
        ctx->pc = 0x327778u;
            // 0x327778: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32777Cu;
        goto label_32777c;
    }
    ctx->pc = 0x327774u;
    SET_GPR_U32(ctx, 31, 0x32777Cu);
    ctx->pc = 0x327778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327774u;
            // 0x327778: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32777Cu; }
        if (ctx->pc != 0x32777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32777Cu; }
        if (ctx->pc != 0x32777Cu) { return; }
    }
    ctx->pc = 0x32777Cu;
label_32777c:
    // 0x32777c: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x32777cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_327780:
    // 0x327780: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x327780u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_327784:
    // 0x327784: 0x2652c618  addiu       $s2, $s2, -0x39E8
    ctx->pc = 0x327784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952472));
label_327788:
    // 0x327788: 0x2631cea8  addiu       $s1, $s1, -0x3158
    ctx->pc = 0x327788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
label_32778c:
    // 0x32778c: 0x100000ae  b           . + 4 + (0xAE << 2)
label_327790:
    if (ctx->pc == 0x327790u) {
        ctx->pc = 0x327790u;
            // 0x327790: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x327794u;
        goto label_327794;
    }
    ctx->pc = 0x32778Cu;
    {
        const bool branch_taken_0x32778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32778Cu;
            // 0x327790: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32778c) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x327794u;
label_327794:
    // 0x327794: 0x2486fffe  addiu       $a2, $a0, -0x2
    ctx->pc = 0x327794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_327798:
    // 0x327798: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32779c:
    // 0x32779c: 0xc1232d8  jal         func_48CB60
label_3277a0:
    if (ctx->pc == 0x3277A0u) {
        ctx->pc = 0x3277A0u;
            // 0x3277a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3277A4u;
        goto label_3277a4;
    }
    ctx->pc = 0x32779Cu;
    SET_GPR_U32(ctx, 31, 0x3277A4u);
    ctx->pc = 0x3277A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32779Cu;
            // 0x3277a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277A4u; }
        if (ctx->pc != 0x3277A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277A4u; }
        if (ctx->pc != 0x3277A4u) { return; }
    }
    ctx->pc = 0x3277A4u;
label_3277a4:
    // 0x3277a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3277a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3277a8:
    // 0x3277a8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x3277a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_3277ac:
    // 0x3277ac: 0xc1232d8  jal         func_48CB60
label_3277b0:
    if (ctx->pc == 0x3277B0u) {
        ctx->pc = 0x3277B0u;
            // 0x3277b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3277B4u;
        goto label_3277b4;
    }
    ctx->pc = 0x3277ACu;
    SET_GPR_U32(ctx, 31, 0x3277B4u);
    ctx->pc = 0x3277B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3277ACu;
            // 0x3277b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277B4u; }
        if (ctx->pc != 0x3277B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277B4u; }
        if (ctx->pc != 0x3277B4u) { return; }
    }
    ctx->pc = 0x3277B4u;
label_3277b4:
    // 0x3277b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3277b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3277b8:
    // 0x3277b8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x3277b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3277bc:
    // 0x3277bc: 0xc1232d8  jal         func_48CB60
label_3277c0:
    if (ctx->pc == 0x3277C0u) {
        ctx->pc = 0x3277C0u;
            // 0x3277c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3277C4u;
        goto label_3277c4;
    }
    ctx->pc = 0x3277BCu;
    SET_GPR_U32(ctx, 31, 0x3277C4u);
    ctx->pc = 0x3277C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3277BCu;
            // 0x3277c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277C4u; }
        if (ctx->pc != 0x3277C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277C4u; }
        if (ctx->pc != 0x3277C4u) { return; }
    }
    ctx->pc = 0x3277C4u;
label_3277c4:
    // 0x3277c4: 0x8e6405f4  lw          $a0, 0x5F4($s3)
    ctx->pc = 0x3277c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1524)));
label_3277c8:
    // 0x3277c8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3277c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3277cc:
    // 0x3277cc: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x3277ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_3277d0:
    // 0x3277d0: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x3277d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_3277d4:
    // 0x3277d4: 0x24a5cec0  addiu       $a1, $a1, -0x3140
    ctx->pc = 0x3277d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
label_3277d8:
    // 0x3277d8: 0x2652c618  addiu       $s2, $s2, -0x39E8
    ctx->pc = 0x3277d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952472));
label_3277dc:
    // 0x3277dc: 0xc123020  jal         func_48C080
label_3277e0:
    if (ctx->pc == 0x3277E0u) {
        ctx->pc = 0x3277E0u;
            // 0x3277e0: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->pc = 0x3277E4u;
        goto label_3277e4;
    }
    ctx->pc = 0x3277DCu;
    SET_GPR_U32(ctx, 31, 0x3277E4u);
    ctx->pc = 0x3277E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3277DCu;
            // 0x3277e0: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277E4u; }
        if (ctx->pc != 0x3277E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277E4u; }
        if (ctx->pc != 0x3277E4u) { return; }
    }
    ctx->pc = 0x3277E4u;
label_3277e4:
    // 0x3277e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3277e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3277e8:
    // 0x3277e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3277e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3277ec:
    // 0x3277ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3277ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3277f0:
    // 0x3277f0: 0xc0c7b74  jal         func_31EDD0
label_3277f4:
    if (ctx->pc == 0x3277F4u) {
        ctx->pc = 0x3277F4u;
            // 0x3277f4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3277F8u;
        goto label_3277f8;
    }
    ctx->pc = 0x3277F0u;
    SET_GPR_U32(ctx, 31, 0x3277F8u);
    ctx->pc = 0x3277F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3277F0u;
            // 0x3277f4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277F8u; }
        if (ctx->pc != 0x3277F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3277F8u; }
        if (ctx->pc != 0x3277F8u) { return; }
    }
    ctx->pc = 0x3277F8u;
label_3277f8:
    // 0x3277f8: 0x10000093  b           . + 4 + (0x93 << 2)
label_3277fc:
    if (ctx->pc == 0x3277FCu) {
        ctx->pc = 0x3277FCu;
            // 0x3277fc: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x327800u;
        goto label_327800;
    }
    ctx->pc = 0x3277F8u;
    {
        const bool branch_taken_0x3277f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3277F8u;
            // 0x3277fc: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277f8) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x327800u;
label_327800:
    // 0x327800: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327804:
    // 0x327804: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x327804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_327808:
    // 0x327808: 0xc1232d8  jal         func_48CB60
label_32780c:
    if (ctx->pc == 0x32780Cu) {
        ctx->pc = 0x32780Cu;
            // 0x32780c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x327810u;
        goto label_327810;
    }
    ctx->pc = 0x327808u;
    SET_GPR_U32(ctx, 31, 0x327810u);
    ctx->pc = 0x32780Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327808u;
            // 0x32780c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327810u; }
        if (ctx->pc != 0x327810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327810u; }
        if (ctx->pc != 0x327810u) { return; }
    }
    ctx->pc = 0x327810u;
label_327810:
    // 0x327810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327814:
    // 0x327814: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_327818:
    // 0x327818: 0xc1232d8  jal         func_48CB60
label_32781c:
    if (ctx->pc == 0x32781Cu) {
        ctx->pc = 0x32781Cu;
            // 0x32781c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x327820u;
        goto label_327820;
    }
    ctx->pc = 0x327818u;
    SET_GPR_U32(ctx, 31, 0x327820u);
    ctx->pc = 0x32781Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327818u;
            // 0x32781c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327820u; }
        if (ctx->pc != 0x327820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327820u; }
        if (ctx->pc != 0x327820u) { return; }
    }
    ctx->pc = 0x327820u;
label_327820:
    // 0x327820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_327824:
    // 0x327824: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327828:
    // 0x327828: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x327828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_32782c:
    // 0x32782c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327830:
    // 0x327830: 0xc1232d8  jal         func_48CB60
label_327834:
    if (ctx->pc == 0x327834u) {
        ctx->pc = 0x327834u;
            // 0x327834: 0x2446fffe  addiu       $a2, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->pc = 0x327838u;
        goto label_327838;
    }
    ctx->pc = 0x327830u;
    SET_GPR_U32(ctx, 31, 0x327838u);
    ctx->pc = 0x327834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327830u;
            // 0x327834: 0x2446fffe  addiu       $a2, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327838u; }
        if (ctx->pc != 0x327838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327838u; }
        if (ctx->pc != 0x327838u) { return; }
    }
    ctx->pc = 0x327838u;
label_327838:
    // 0x327838: 0x8e6405f4  lw          $a0, 0x5F4($s3)
    ctx->pc = 0x327838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1524)));
label_32783c:
    // 0x32783c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32783cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_327840:
    // 0x327840: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_327844:
    // 0x327844: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x327844u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_327848:
    // 0x327848: 0x24a5cec0  addiu       $a1, $a1, -0x3140
    ctx->pc = 0x327848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
label_32784c:
    // 0x32784c: 0x2652c618  addiu       $s2, $s2, -0x39E8
    ctx->pc = 0x32784cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952472));
label_327850:
    // 0x327850: 0xc123020  jal         func_48C080
label_327854:
    if (ctx->pc == 0x327854u) {
        ctx->pc = 0x327854u;
            // 0x327854: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->pc = 0x327858u;
        goto label_327858;
    }
    ctx->pc = 0x327850u;
    SET_GPR_U32(ctx, 31, 0x327858u);
    ctx->pc = 0x327854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327850u;
            // 0x327854: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327858u; }
        if (ctx->pc != 0x327858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327858u; }
        if (ctx->pc != 0x327858u) { return; }
    }
    ctx->pc = 0x327858u;
label_327858:
    // 0x327858: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x327858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32785c:
    // 0x32785c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327860:
    // 0x327860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327864:
    // 0x327864: 0xc0c7b74  jal         func_31EDD0
label_327868:
    if (ctx->pc == 0x327868u) {
        ctx->pc = 0x327868u;
            // 0x327868: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32786Cu;
        goto label_32786c;
    }
    ctx->pc = 0x327864u;
    SET_GPR_U32(ctx, 31, 0x32786Cu);
    ctx->pc = 0x327868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327864u;
            // 0x327868: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32786Cu; }
        if (ctx->pc != 0x32786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32786Cu; }
        if (ctx->pc != 0x32786Cu) { return; }
    }
    ctx->pc = 0x32786Cu;
label_32786c:
    // 0x32786c: 0x10000076  b           . + 4 + (0x76 << 2)
label_327870:
    if (ctx->pc == 0x327870u) {
        ctx->pc = 0x327870u;
            // 0x327870: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x327874u;
        goto label_327874;
    }
    ctx->pc = 0x32786Cu;
    {
        const bool branch_taken_0x32786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32786Cu;
            // 0x327870: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32786c) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x327874u;
label_327874:
    // 0x327874: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327878:
    // 0x327878: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x327878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32787c:
    // 0x32787c: 0xc1232d8  jal         func_48CB60
label_327880:
    if (ctx->pc == 0x327880u) {
        ctx->pc = 0x327880u;
            // 0x327880: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x327884u;
        goto label_327884;
    }
    ctx->pc = 0x32787Cu;
    SET_GPR_U32(ctx, 31, 0x327884u);
    ctx->pc = 0x327880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32787Cu;
            // 0x327880: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327884u; }
        if (ctx->pc != 0x327884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327884u; }
        if (ctx->pc != 0x327884u) { return; }
    }
    ctx->pc = 0x327884u;
label_327884:
    // 0x327884: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327888:
    // 0x327888: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x327888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_32788c:
    // 0x32788c: 0xc1232d8  jal         func_48CB60
label_327890:
    if (ctx->pc == 0x327890u) {
        ctx->pc = 0x327890u;
            // 0x327890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x327894u;
        goto label_327894;
    }
    ctx->pc = 0x32788Cu;
    SET_GPR_U32(ctx, 31, 0x327894u);
    ctx->pc = 0x327890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32788Cu;
            // 0x327890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327894u; }
        if (ctx->pc != 0x327894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327894u; }
        if (ctx->pc != 0x327894u) { return; }
    }
    ctx->pc = 0x327894u;
label_327894:
    // 0x327894: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327898:
    // 0x327898: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x327898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_32789c:
    // 0x32789c: 0xc1232d8  jal         func_48CB60
label_3278a0:
    if (ctx->pc == 0x3278A0u) {
        ctx->pc = 0x3278A0u;
            // 0x3278a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3278A4u;
        goto label_3278a4;
    }
    ctx->pc = 0x32789Cu;
    SET_GPR_U32(ctx, 31, 0x3278A4u);
    ctx->pc = 0x3278A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32789Cu;
            // 0x3278a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278A4u; }
        if (ctx->pc != 0x3278A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278A4u; }
        if (ctx->pc != 0x3278A4u) { return; }
    }
    ctx->pc = 0x3278A4u;
label_3278a4:
    // 0x3278a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3278a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3278a8:
    // 0x3278a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3278a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3278ac:
    // 0x3278ac: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3278acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3278b0:
    // 0x3278b0: 0x9046004c  lbu         $a2, 0x4C($v0)
    ctx->pc = 0x3278b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
label_3278b4:
    // 0x3278b4: 0xc1232d8  jal         func_48CB60
label_3278b8:
    if (ctx->pc == 0x3278B8u) {
        ctx->pc = 0x3278B8u;
            // 0x3278b8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x3278BCu;
        goto label_3278bc;
    }
    ctx->pc = 0x3278B4u;
    SET_GPR_U32(ctx, 31, 0x3278BCu);
    ctx->pc = 0x3278B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3278B4u;
            // 0x3278b8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278BCu; }
        if (ctx->pc != 0x3278BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278BCu; }
        if (ctx->pc != 0x3278BCu) { return; }
    }
    ctx->pc = 0x3278BCu;
label_3278bc:
    // 0x3278bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3278bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3278c0:
    // 0x3278c0: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x3278c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_3278c4:
    // 0x3278c4: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x3278c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_3278c8:
    // 0x3278c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3278c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3278cc:
    // 0x3278cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3278ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3278d0:
    // 0x3278d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3278d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3278d4:
    // 0x3278d4: 0x2652ced8  addiu       $s2, $s2, -0x3128
    ctx->pc = 0x3278d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954712));
label_3278d8:
    // 0x3278d8: 0xc0c7b74  jal         func_31EDD0
label_3278dc:
    if (ctx->pc == 0x3278DCu) {
        ctx->pc = 0x3278DCu;
            // 0x3278dc: 0x2631cee8  addiu       $s1, $s1, -0x3118 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954728));
        ctx->pc = 0x3278E0u;
        goto label_3278e0;
    }
    ctx->pc = 0x3278D8u;
    SET_GPR_U32(ctx, 31, 0x3278E0u);
    ctx->pc = 0x3278DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3278D8u;
            // 0x3278dc: 0x2631cee8  addiu       $s1, $s1, -0x3118 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278E0u; }
        if (ctx->pc != 0x3278E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278E0u; }
        if (ctx->pc != 0x3278E0u) { return; }
    }
    ctx->pc = 0x3278E0u;
label_3278e0:
    // 0x3278e0: 0x10000059  b           . + 4 + (0x59 << 2)
label_3278e4:
    if (ctx->pc == 0x3278E4u) {
        ctx->pc = 0x3278E4u;
            // 0x3278e4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3278E8u;
        goto label_3278e8;
    }
    ctx->pc = 0x3278E0u;
    {
        const bool branch_taken_0x3278e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3278E0u;
            // 0x3278e4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278e0) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x3278E8u;
label_3278e8:
    // 0x3278e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3278ec:
    // 0x3278ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3278ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3278f0:
    // 0x3278f0: 0xc1232d8  jal         func_48CB60
label_3278f4:
    if (ctx->pc == 0x3278F4u) {
        ctx->pc = 0x3278F4u;
            // 0x3278f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3278F8u;
        goto label_3278f8;
    }
    ctx->pc = 0x3278F0u;
    SET_GPR_U32(ctx, 31, 0x3278F8u);
    ctx->pc = 0x3278F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3278F0u;
            // 0x3278f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278F8u; }
        if (ctx->pc != 0x3278F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3278F8u; }
        if (ctx->pc != 0x3278F8u) { return; }
    }
    ctx->pc = 0x3278F8u;
label_3278f8:
    // 0x3278f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3278f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3278fc:
    // 0x3278fc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x3278fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_327900:
    // 0x327900: 0xc1232d8  jal         func_48CB60
label_327904:
    if (ctx->pc == 0x327904u) {
        ctx->pc = 0x327904u;
            // 0x327904: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x327908u;
        goto label_327908;
    }
    ctx->pc = 0x327900u;
    SET_GPR_U32(ctx, 31, 0x327908u);
    ctx->pc = 0x327904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327900u;
            // 0x327904: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327908u; }
        if (ctx->pc != 0x327908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327908u; }
        if (ctx->pc != 0x327908u) { return; }
    }
    ctx->pc = 0x327908u;
label_327908:
    // 0x327908: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32790c:
    // 0x32790c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x32790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_327910:
    // 0x327910: 0xc1232d8  jal         func_48CB60
label_327914:
    if (ctx->pc == 0x327914u) {
        ctx->pc = 0x327914u;
            // 0x327914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x327918u;
        goto label_327918;
    }
    ctx->pc = 0x327910u;
    SET_GPR_U32(ctx, 31, 0x327918u);
    ctx->pc = 0x327914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327910u;
            // 0x327914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327918u; }
        if (ctx->pc != 0x327918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327918u; }
        if (ctx->pc != 0x327918u) { return; }
    }
    ctx->pc = 0x327918u;
label_327918:
    // 0x327918: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x327918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32791c:
    // 0x32791c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327920:
    // 0x327920: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x327920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_327924:
    // 0x327924: 0x8046002a  lb          $a2, 0x2A($v0)
    ctx->pc = 0x327924u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
label_327928:
    // 0x327928: 0xc1232d8  jal         func_48CB60
label_32792c:
    if (ctx->pc == 0x32792Cu) {
        ctx->pc = 0x32792Cu;
            // 0x32792c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x327930u;
        goto label_327930;
    }
    ctx->pc = 0x327928u;
    SET_GPR_U32(ctx, 31, 0x327930u);
    ctx->pc = 0x32792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327928u;
            // 0x32792c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327930u; }
        if (ctx->pc != 0x327930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327930u; }
        if (ctx->pc != 0x327930u) { return; }
    }
    ctx->pc = 0x327930u;
label_327930:
    // 0x327930: 0x8e6405f4  lw          $a0, 0x5F4($s3)
    ctx->pc = 0x327930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1524)));
label_327934:
    // 0x327934: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x327934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_327938:
    // 0x327938: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x327938u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_32793c:
    // 0x32793c: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_327940:
    // 0x327940: 0x24a5cec0  addiu       $a1, $a1, -0x3140
    ctx->pc = 0x327940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
label_327944:
    // 0x327944: 0x2652c618  addiu       $s2, $s2, -0x39E8
    ctx->pc = 0x327944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952472));
label_327948:
    // 0x327948: 0xc123020  jal         func_48C080
label_32794c:
    if (ctx->pc == 0x32794Cu) {
        ctx->pc = 0x32794Cu;
            // 0x32794c: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->pc = 0x327950u;
        goto label_327950;
    }
    ctx->pc = 0x327948u;
    SET_GPR_U32(ctx, 31, 0x327950u);
    ctx->pc = 0x32794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327948u;
            // 0x32794c: 0x2631cea8  addiu       $s1, $s1, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327950u; }
        if (ctx->pc != 0x327950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327950u; }
        if (ctx->pc != 0x327950u) { return; }
    }
    ctx->pc = 0x327950u;
label_327950:
    // 0x327950: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x327950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327954:
    // 0x327954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327958:
    // 0x327958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32795c:
    // 0x32795c: 0xc0c7b74  jal         func_31EDD0
label_327960:
    if (ctx->pc == 0x327960u) {
        ctx->pc = 0x327960u;
            // 0x327960: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327964u;
        goto label_327964;
    }
    ctx->pc = 0x32795Cu;
    SET_GPR_U32(ctx, 31, 0x327964u);
    ctx->pc = 0x327960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32795Cu;
            // 0x327960: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327964u; }
        if (ctx->pc != 0x327964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327964u; }
        if (ctx->pc != 0x327964u) { return; }
    }
    ctx->pc = 0x327964u;
label_327964:
    // 0x327964: 0x10000038  b           . + 4 + (0x38 << 2)
label_327968:
    if (ctx->pc == 0x327968u) {
        ctx->pc = 0x327968u;
            // 0x327968: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32796Cu;
        goto label_32796c;
    }
    ctx->pc = 0x327964u;
    {
        const bool branch_taken_0x327964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327964u;
            // 0x327968: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327964) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x32796Cu;
label_32796c:
    // 0x32796c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327970:
    // 0x327970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327974:
    // 0x327974: 0xc1232d8  jal         func_48CB60
label_327978:
    if (ctx->pc == 0x327978u) {
        ctx->pc = 0x327978u;
            // 0x327978: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x32797Cu;
        goto label_32797c;
    }
    ctx->pc = 0x327974u;
    SET_GPR_U32(ctx, 31, 0x32797Cu);
    ctx->pc = 0x327978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327974u;
            // 0x327978: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32797Cu; }
        if (ctx->pc != 0x32797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32797Cu; }
        if (ctx->pc != 0x32797Cu) { return; }
    }
    ctx->pc = 0x32797Cu;
label_32797c:
    // 0x32797c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327980:
    // 0x327980: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x327980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_327984:
    // 0x327984: 0xc1232d8  jal         func_48CB60
label_327988:
    if (ctx->pc == 0x327988u) {
        ctx->pc = 0x327988u;
            // 0x327988: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32798Cu;
        goto label_32798c;
    }
    ctx->pc = 0x327984u;
    SET_GPR_U32(ctx, 31, 0x32798Cu);
    ctx->pc = 0x327988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327984u;
            // 0x327988: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32798Cu; }
        if (ctx->pc != 0x32798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32798Cu; }
        if (ctx->pc != 0x32798Cu) { return; }
    }
    ctx->pc = 0x32798Cu;
label_32798c:
    // 0x32798c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327990:
    // 0x327990: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_327994:
    // 0x327994: 0xc1232d8  jal         func_48CB60
label_327998:
    if (ctx->pc == 0x327998u) {
        ctx->pc = 0x327998u;
            // 0x327998: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32799Cu;
        goto label_32799c;
    }
    ctx->pc = 0x327994u;
    SET_GPR_U32(ctx, 31, 0x32799Cu);
    ctx->pc = 0x327998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327994u;
            // 0x327998: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32799Cu; }
        if (ctx->pc != 0x32799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32799Cu; }
        if (ctx->pc != 0x32799Cu) { return; }
    }
    ctx->pc = 0x32799Cu;
label_32799c:
    // 0x32799c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3279a0:
    // 0x3279a0: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x3279a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_3279a4:
    // 0x3279a4: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x3279a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_3279a8:
    // 0x3279a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3279a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3279ac:
    // 0x3279ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3279acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3279b0:
    // 0x3279b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3279b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3279b4:
    // 0x3279b4: 0x2652cf00  addiu       $s2, $s2, -0x3100
    ctx->pc = 0x3279b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954752));
label_3279b8:
    // 0x3279b8: 0xc0c7b74  jal         func_31EDD0
label_3279bc:
    if (ctx->pc == 0x3279BCu) {
        ctx->pc = 0x3279BCu;
            // 0x3279bc: 0x2631cf20  addiu       $s1, $s1, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954784));
        ctx->pc = 0x3279C0u;
        goto label_3279c0;
    }
    ctx->pc = 0x3279B8u;
    SET_GPR_U32(ctx, 31, 0x3279C0u);
    ctx->pc = 0x3279BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3279B8u;
            // 0x3279bc: 0x2631cf20  addiu       $s1, $s1, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279C0u; }
        if (ctx->pc != 0x3279C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279C0u; }
        if (ctx->pc != 0x3279C0u) { return; }
    }
    ctx->pc = 0x3279C0u;
label_3279c0:
    // 0x3279c0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3279c4:
    if (ctx->pc == 0x3279C4u) {
        ctx->pc = 0x3279C4u;
            // 0x3279c4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3279C8u;
        goto label_3279c8;
    }
    ctx->pc = 0x3279C0u;
    {
        const bool branch_taken_0x3279c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3279C0u;
            // 0x3279c4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279c0) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x3279C8u;
label_3279c8:
    // 0x3279c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3279c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3279cc:
    // 0x3279cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3279ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3279d0:
    // 0x3279d0: 0xc1232d8  jal         func_48CB60
label_3279d4:
    if (ctx->pc == 0x3279D4u) {
        ctx->pc = 0x3279D4u;
            // 0x3279d4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3279D8u;
        goto label_3279d8;
    }
    ctx->pc = 0x3279D0u;
    SET_GPR_U32(ctx, 31, 0x3279D8u);
    ctx->pc = 0x3279D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3279D0u;
            // 0x3279d4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279D8u; }
        if (ctx->pc != 0x3279D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279D8u; }
        if (ctx->pc != 0x3279D8u) { return; }
    }
    ctx->pc = 0x3279D8u;
label_3279d8:
    // 0x3279d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3279d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3279dc:
    // 0x3279dc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x3279dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_3279e0:
    // 0x3279e0: 0xc1232d8  jal         func_48CB60
label_3279e4:
    if (ctx->pc == 0x3279E4u) {
        ctx->pc = 0x3279E4u;
            // 0x3279e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3279E8u;
        goto label_3279e8;
    }
    ctx->pc = 0x3279E0u;
    SET_GPR_U32(ctx, 31, 0x3279E8u);
    ctx->pc = 0x3279E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3279E0u;
            // 0x3279e4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279E8u; }
        if (ctx->pc != 0x3279E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279E8u; }
        if (ctx->pc != 0x3279E8u) { return; }
    }
    ctx->pc = 0x3279E8u;
label_3279e8:
    // 0x3279e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3279e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3279ec:
    // 0x3279ec: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x3279ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3279f0:
    // 0x3279f0: 0xc1232d8  jal         func_48CB60
label_3279f4:
    if (ctx->pc == 0x3279F4u) {
        ctx->pc = 0x3279F4u;
            // 0x3279f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3279F8u;
        goto label_3279f8;
    }
    ctx->pc = 0x3279F0u;
    SET_GPR_U32(ctx, 31, 0x3279F8u);
    ctx->pc = 0x3279F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3279F0u;
            // 0x3279f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279F8u; }
        if (ctx->pc != 0x3279F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3279F8u; }
        if (ctx->pc != 0x3279F8u) { return; }
    }
    ctx->pc = 0x3279F8u;
label_3279f8:
    // 0x3279f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3279f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3279fc:
    // 0x3279fc: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x3279fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_327a00:
    // 0x327a00: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x327a00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_327a04:
    // 0x327a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327a08:
    // 0x327a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327a0c:
    // 0x327a0c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x327a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327a10:
    // 0x327a10: 0x2652cf30  addiu       $s2, $s2, -0x30D0
    ctx->pc = 0x327a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954800));
label_327a14:
    // 0x327a14: 0xc0c7b74  jal         func_31EDD0
label_327a18:
    if (ctx->pc == 0x327A18u) {
        ctx->pc = 0x327A18u;
            // 0x327a18: 0x2631cf50  addiu       $s1, $s1, -0x30B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954832));
        ctx->pc = 0x327A1Cu;
        goto label_327a1c;
    }
    ctx->pc = 0x327A14u;
    SET_GPR_U32(ctx, 31, 0x327A1Cu);
    ctx->pc = 0x327A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A14u;
            // 0x327a18: 0x2631cf50  addiu       $s1, $s1, -0x30B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A1Cu; }
        if (ctx->pc != 0x327A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A1Cu; }
        if (ctx->pc != 0x327A1Cu) { return; }
    }
    ctx->pc = 0x327A1Cu;
label_327a1c:
    // 0x327a1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_327a20:
    if (ctx->pc == 0x327A20u) {
        ctx->pc = 0x327A20u;
            // 0x327a20: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x327A24u;
        goto label_327a24;
    }
    ctx->pc = 0x327A1Cu;
    {
        const bool branch_taken_0x327a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327A1Cu;
            // 0x327a20: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a1c) {
            ctx->pc = 0x327A48u;
            goto label_327a48;
        }
    }
    ctx->pc = 0x327A24u;
label_327a24:
    // 0x327a24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x327a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327a28:
    // 0x327a28: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x327a28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_327a2c:
    // 0x327a2c: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x327a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_327a30:
    // 0x327a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327a34:
    // 0x327a34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327a38:
    // 0x327a38: 0x2652c9d0  addiu       $s2, $s2, -0x3630
    ctx->pc = 0x327a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953424));
label_327a3c:
    // 0x327a3c: 0xc0c7b74  jal         func_31EDD0
label_327a40:
    if (ctx->pc == 0x327A40u) {
        ctx->pc = 0x327A40u;
            // 0x327a40: 0x2631cf68  addiu       $s1, $s1, -0x3098 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954856));
        ctx->pc = 0x327A44u;
        goto label_327a44;
    }
    ctx->pc = 0x327A3Cu;
    SET_GPR_U32(ctx, 31, 0x327A44u);
    ctx->pc = 0x327A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A3Cu;
            // 0x327a40: 0x2631cf68  addiu       $s1, $s1, -0x3098 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (runtime->hasFunction(0x31EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A44u; }
        if (ctx->pc != 0x327A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EDD0_0x31edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A44u; }
        if (ctx->pc != 0x327A44u) { return; }
    }
    ctx->pc = 0x327A44u;
label_327a44:
    // 0x327a44: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x327a44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_327a48:
    // 0x327a48: 0x50a00023  beql        $a1, $zero, . + 4 + (0x23 << 2)
label_327a4c:
    if (ctx->pc == 0x327A4Cu) {
        ctx->pc = 0x327A4Cu;
            // 0x327a4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x327A50u;
        goto label_327a50;
    }
    ctx->pc = 0x327A48u;
    {
        const bool branch_taken_0x327a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a48) {
            ctx->pc = 0x327A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327A48u;
            // 0x327a4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327AD8u;
            goto label_327ad8;
        }
    }
    ctx->pc = 0x327A50u;
label_327a50:
    // 0x327a50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327a54:
    // 0x327a54: 0xc123328  jal         func_48CCA0
label_327a58:
    if (ctx->pc == 0x327A58u) {
        ctx->pc = 0x327A58u;
            // 0x327a58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x327A5Cu;
        goto label_327a5c;
    }
    ctx->pc = 0x327A54u;
    SET_GPR_U32(ctx, 31, 0x327A5Cu);
    ctx->pc = 0x327A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A54u;
            // 0x327a58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A5Cu; }
        if (ctx->pc != 0x327A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A5Cu; }
        if (ctx->pc != 0x327A5Cu) { return; }
    }
    ctx->pc = 0x327A5Cu;
label_327a5c:
    // 0x327a5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_327a60:
    if (ctx->pc == 0x327A60u) {
        ctx->pc = 0x327A60u;
            // 0x327a60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x327A64u;
        goto label_327a64;
    }
    ctx->pc = 0x327A5Cu;
    {
        const bool branch_taken_0x327a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a5c) {
            ctx->pc = 0x327A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327A5Cu;
            // 0x327a60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327A78u;
            goto label_327a78;
        }
    }
    ctx->pc = 0x327A64u;
label_327a64:
    // 0x327a64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327a68:
    // 0x327a68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x327a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_327a6c:
    // 0x327a6c: 0xc1232d8  jal         func_48CB60
label_327a70:
    if (ctx->pc == 0x327A70u) {
        ctx->pc = 0x327A70u;
            // 0x327a70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327A74u;
        goto label_327a74;
    }
    ctx->pc = 0x327A6Cu;
    SET_GPR_U32(ctx, 31, 0x327A74u);
    ctx->pc = 0x327A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A6Cu;
            // 0x327a70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A74u; }
        if (ctx->pc != 0x327A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A74u; }
        if (ctx->pc != 0x327A74u) { return; }
    }
    ctx->pc = 0x327A74u;
label_327a74:
    // 0x327a74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x327a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327a78:
    // 0x327a78: 0xc1230ac  jal         func_48C2B0
label_327a7c:
    if (ctx->pc == 0x327A7Cu) {
        ctx->pc = 0x327A7Cu;
            // 0x327a7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327A80u;
        goto label_327a80;
    }
    ctx->pc = 0x327A78u;
    SET_GPR_U32(ctx, 31, 0x327A80u);
    ctx->pc = 0x327A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A78u;
            // 0x327a7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A80u; }
        if (ctx->pc != 0x327A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A80u; }
        if (ctx->pc != 0x327A80u) { return; }
    }
    ctx->pc = 0x327A80u;
label_327a80:
    // 0x327a80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x327a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327a84:
    // 0x327a84: 0xc123020  jal         func_48C080
label_327a88:
    if (ctx->pc == 0x327A88u) {
        ctx->pc = 0x327A88u;
            // 0x327a88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327A8Cu;
        goto label_327a8c;
    }
    ctx->pc = 0x327A84u;
    SET_GPR_U32(ctx, 31, 0x327A8Cu);
    ctx->pc = 0x327A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A84u;
            // 0x327a88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A8Cu; }
        if (ctx->pc != 0x327A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A8Cu; }
        if (ctx->pc != 0x327A8Cu) { return; }
    }
    ctx->pc = 0x327A8Cu;
label_327a8c:
    // 0x327a8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327a90:
    // 0x327a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327a94:
    // 0x327a94: 0xc1232d8  jal         func_48CB60
label_327a98:
    if (ctx->pc == 0x327A98u) {
        ctx->pc = 0x327A98u;
            // 0x327a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327A9Cu;
        goto label_327a9c;
    }
    ctx->pc = 0x327A94u;
    SET_GPR_U32(ctx, 31, 0x327A9Cu);
    ctx->pc = 0x327A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327A94u;
            // 0x327a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A9Cu; }
        if (ctx->pc != 0x327A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327A9Cu; }
        if (ctx->pc != 0x327A9Cu) { return; }
    }
    ctx->pc = 0x327A9Cu;
label_327a9c:
    // 0x327a9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327aa0:
    // 0x327aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327aa4:
    // 0x327aa4: 0xc1232d8  jal         func_48CB60
label_327aa8:
    if (ctx->pc == 0x327AA8u) {
        ctx->pc = 0x327AA8u;
            // 0x327aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327AACu;
        goto label_327aac;
    }
    ctx->pc = 0x327AA4u;
    SET_GPR_U32(ctx, 31, 0x327AACu);
    ctx->pc = 0x327AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327AA4u;
            // 0x327aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327AACu; }
        if (ctx->pc != 0x327AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327AACu; }
        if (ctx->pc != 0x327AACu) { return; }
    }
    ctx->pc = 0x327AACu;
label_327aac:
    // 0x327aac: 0x8e640234  lw          $a0, 0x234($s3)
    ctx->pc = 0x327aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_327ab0:
    // 0x327ab0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_327ab4:
    if (ctx->pc == 0x327AB4u) {
        ctx->pc = 0x327AB4u;
            // 0x327ab4: 0xae60067c  sw          $zero, 0x67C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 0));
        ctx->pc = 0x327AB8u;
        goto label_327ab8;
    }
    ctx->pc = 0x327AB0u;
    {
        const bool branch_taken_0x327ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ab0) {
            ctx->pc = 0x327AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327AB0u;
            // 0x327ab4: 0xae60067c  sw          $zero, 0x67C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327ACCu;
            goto label_327acc;
        }
    }
    ctx->pc = 0x327AB8u;
label_327ab8:
    // 0x327ab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x327ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_327abc:
    // 0x327abc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x327abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_327ac0:
    // 0x327ac0: 0x320f809  jalr        $t9
label_327ac4:
    if (ctx->pc == 0x327AC4u) {
        ctx->pc = 0x327AC8u;
        goto label_327ac8;
    }
    ctx->pc = 0x327AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x327AC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x327AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x327AC8u; }
            if (ctx->pc != 0x327AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x327AC8u;
label_327ac8:
    // 0x327ac8: 0xae60067c  sw          $zero, 0x67C($s3)
    ctx->pc = 0x327ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 0));
label_327acc:
    // 0x327acc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_327ad0:
    // 0x327ad0: 0xac403e30  sw          $zero, 0x3E30($v0)
    ctx->pc = 0x327ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 0));
label_327ad4:
    // 0x327ad4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x327ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_327ad8:
    // 0x327ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327adc:
    // 0x327adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x327adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_327ae0:
    // 0x327ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327ae4:
    // 0x327ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_327ae8:
    // 0x327ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_327aec:
    // 0x327aec: 0x3e00008  jr          $ra
label_327af0:
    if (ctx->pc == 0x327AF0u) {
        ctx->pc = 0x327AF0u;
            // 0x327af0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x327AF4u;
        goto label_327af4;
    }
    ctx->pc = 0x327AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327AECu;
            // 0x327af0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327AF4u;
label_327af4:
    // 0x327af4: 0x0  nop
    ctx->pc = 0x327af4u;
    // NOP
label_327af8:
    // 0x327af8: 0x0  nop
    ctx->pc = 0x327af8u;
    // NOP
label_327afc:
    // 0x327afc: 0x0  nop
    ctx->pc = 0x327afcu;
    // NOP
}

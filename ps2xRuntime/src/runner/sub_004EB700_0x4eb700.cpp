#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EB700
// Address: 0x4eb700 - 0x4ebaa0
void sub_004EB700_0x4eb700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB700_0x4eb700");
#endif

    switch (ctx->pc) {
        case 0x4eb700u: goto label_4eb700;
        case 0x4eb704u: goto label_4eb704;
        case 0x4eb708u: goto label_4eb708;
        case 0x4eb70cu: goto label_4eb70c;
        case 0x4eb710u: goto label_4eb710;
        case 0x4eb714u: goto label_4eb714;
        case 0x4eb718u: goto label_4eb718;
        case 0x4eb71cu: goto label_4eb71c;
        case 0x4eb720u: goto label_4eb720;
        case 0x4eb724u: goto label_4eb724;
        case 0x4eb728u: goto label_4eb728;
        case 0x4eb72cu: goto label_4eb72c;
        case 0x4eb730u: goto label_4eb730;
        case 0x4eb734u: goto label_4eb734;
        case 0x4eb738u: goto label_4eb738;
        case 0x4eb73cu: goto label_4eb73c;
        case 0x4eb740u: goto label_4eb740;
        case 0x4eb744u: goto label_4eb744;
        case 0x4eb748u: goto label_4eb748;
        case 0x4eb74cu: goto label_4eb74c;
        case 0x4eb750u: goto label_4eb750;
        case 0x4eb754u: goto label_4eb754;
        case 0x4eb758u: goto label_4eb758;
        case 0x4eb75cu: goto label_4eb75c;
        case 0x4eb760u: goto label_4eb760;
        case 0x4eb764u: goto label_4eb764;
        case 0x4eb768u: goto label_4eb768;
        case 0x4eb76cu: goto label_4eb76c;
        case 0x4eb770u: goto label_4eb770;
        case 0x4eb774u: goto label_4eb774;
        case 0x4eb778u: goto label_4eb778;
        case 0x4eb77cu: goto label_4eb77c;
        case 0x4eb780u: goto label_4eb780;
        case 0x4eb784u: goto label_4eb784;
        case 0x4eb788u: goto label_4eb788;
        case 0x4eb78cu: goto label_4eb78c;
        case 0x4eb790u: goto label_4eb790;
        case 0x4eb794u: goto label_4eb794;
        case 0x4eb798u: goto label_4eb798;
        case 0x4eb79cu: goto label_4eb79c;
        case 0x4eb7a0u: goto label_4eb7a0;
        case 0x4eb7a4u: goto label_4eb7a4;
        case 0x4eb7a8u: goto label_4eb7a8;
        case 0x4eb7acu: goto label_4eb7ac;
        case 0x4eb7b0u: goto label_4eb7b0;
        case 0x4eb7b4u: goto label_4eb7b4;
        case 0x4eb7b8u: goto label_4eb7b8;
        case 0x4eb7bcu: goto label_4eb7bc;
        case 0x4eb7c0u: goto label_4eb7c0;
        case 0x4eb7c4u: goto label_4eb7c4;
        case 0x4eb7c8u: goto label_4eb7c8;
        case 0x4eb7ccu: goto label_4eb7cc;
        case 0x4eb7d0u: goto label_4eb7d0;
        case 0x4eb7d4u: goto label_4eb7d4;
        case 0x4eb7d8u: goto label_4eb7d8;
        case 0x4eb7dcu: goto label_4eb7dc;
        case 0x4eb7e0u: goto label_4eb7e0;
        case 0x4eb7e4u: goto label_4eb7e4;
        case 0x4eb7e8u: goto label_4eb7e8;
        case 0x4eb7ecu: goto label_4eb7ec;
        case 0x4eb7f0u: goto label_4eb7f0;
        case 0x4eb7f4u: goto label_4eb7f4;
        case 0x4eb7f8u: goto label_4eb7f8;
        case 0x4eb7fcu: goto label_4eb7fc;
        case 0x4eb800u: goto label_4eb800;
        case 0x4eb804u: goto label_4eb804;
        case 0x4eb808u: goto label_4eb808;
        case 0x4eb80cu: goto label_4eb80c;
        case 0x4eb810u: goto label_4eb810;
        case 0x4eb814u: goto label_4eb814;
        case 0x4eb818u: goto label_4eb818;
        case 0x4eb81cu: goto label_4eb81c;
        case 0x4eb820u: goto label_4eb820;
        case 0x4eb824u: goto label_4eb824;
        case 0x4eb828u: goto label_4eb828;
        case 0x4eb82cu: goto label_4eb82c;
        case 0x4eb830u: goto label_4eb830;
        case 0x4eb834u: goto label_4eb834;
        case 0x4eb838u: goto label_4eb838;
        case 0x4eb83cu: goto label_4eb83c;
        case 0x4eb840u: goto label_4eb840;
        case 0x4eb844u: goto label_4eb844;
        case 0x4eb848u: goto label_4eb848;
        case 0x4eb84cu: goto label_4eb84c;
        case 0x4eb850u: goto label_4eb850;
        case 0x4eb854u: goto label_4eb854;
        case 0x4eb858u: goto label_4eb858;
        case 0x4eb85cu: goto label_4eb85c;
        case 0x4eb860u: goto label_4eb860;
        case 0x4eb864u: goto label_4eb864;
        case 0x4eb868u: goto label_4eb868;
        case 0x4eb86cu: goto label_4eb86c;
        case 0x4eb870u: goto label_4eb870;
        case 0x4eb874u: goto label_4eb874;
        case 0x4eb878u: goto label_4eb878;
        case 0x4eb87cu: goto label_4eb87c;
        case 0x4eb880u: goto label_4eb880;
        case 0x4eb884u: goto label_4eb884;
        case 0x4eb888u: goto label_4eb888;
        case 0x4eb88cu: goto label_4eb88c;
        case 0x4eb890u: goto label_4eb890;
        case 0x4eb894u: goto label_4eb894;
        case 0x4eb898u: goto label_4eb898;
        case 0x4eb89cu: goto label_4eb89c;
        case 0x4eb8a0u: goto label_4eb8a0;
        case 0x4eb8a4u: goto label_4eb8a4;
        case 0x4eb8a8u: goto label_4eb8a8;
        case 0x4eb8acu: goto label_4eb8ac;
        case 0x4eb8b0u: goto label_4eb8b0;
        case 0x4eb8b4u: goto label_4eb8b4;
        case 0x4eb8b8u: goto label_4eb8b8;
        case 0x4eb8bcu: goto label_4eb8bc;
        case 0x4eb8c0u: goto label_4eb8c0;
        case 0x4eb8c4u: goto label_4eb8c4;
        case 0x4eb8c8u: goto label_4eb8c8;
        case 0x4eb8ccu: goto label_4eb8cc;
        case 0x4eb8d0u: goto label_4eb8d0;
        case 0x4eb8d4u: goto label_4eb8d4;
        case 0x4eb8d8u: goto label_4eb8d8;
        case 0x4eb8dcu: goto label_4eb8dc;
        case 0x4eb8e0u: goto label_4eb8e0;
        case 0x4eb8e4u: goto label_4eb8e4;
        case 0x4eb8e8u: goto label_4eb8e8;
        case 0x4eb8ecu: goto label_4eb8ec;
        case 0x4eb8f0u: goto label_4eb8f0;
        case 0x4eb8f4u: goto label_4eb8f4;
        case 0x4eb8f8u: goto label_4eb8f8;
        case 0x4eb8fcu: goto label_4eb8fc;
        case 0x4eb900u: goto label_4eb900;
        case 0x4eb904u: goto label_4eb904;
        case 0x4eb908u: goto label_4eb908;
        case 0x4eb90cu: goto label_4eb90c;
        case 0x4eb910u: goto label_4eb910;
        case 0x4eb914u: goto label_4eb914;
        case 0x4eb918u: goto label_4eb918;
        case 0x4eb91cu: goto label_4eb91c;
        case 0x4eb920u: goto label_4eb920;
        case 0x4eb924u: goto label_4eb924;
        case 0x4eb928u: goto label_4eb928;
        case 0x4eb92cu: goto label_4eb92c;
        case 0x4eb930u: goto label_4eb930;
        case 0x4eb934u: goto label_4eb934;
        case 0x4eb938u: goto label_4eb938;
        case 0x4eb93cu: goto label_4eb93c;
        case 0x4eb940u: goto label_4eb940;
        case 0x4eb944u: goto label_4eb944;
        case 0x4eb948u: goto label_4eb948;
        case 0x4eb94cu: goto label_4eb94c;
        case 0x4eb950u: goto label_4eb950;
        case 0x4eb954u: goto label_4eb954;
        case 0x4eb958u: goto label_4eb958;
        case 0x4eb95cu: goto label_4eb95c;
        case 0x4eb960u: goto label_4eb960;
        case 0x4eb964u: goto label_4eb964;
        case 0x4eb968u: goto label_4eb968;
        case 0x4eb96cu: goto label_4eb96c;
        case 0x4eb970u: goto label_4eb970;
        case 0x4eb974u: goto label_4eb974;
        case 0x4eb978u: goto label_4eb978;
        case 0x4eb97cu: goto label_4eb97c;
        case 0x4eb980u: goto label_4eb980;
        case 0x4eb984u: goto label_4eb984;
        case 0x4eb988u: goto label_4eb988;
        case 0x4eb98cu: goto label_4eb98c;
        case 0x4eb990u: goto label_4eb990;
        case 0x4eb994u: goto label_4eb994;
        case 0x4eb998u: goto label_4eb998;
        case 0x4eb99cu: goto label_4eb99c;
        case 0x4eb9a0u: goto label_4eb9a0;
        case 0x4eb9a4u: goto label_4eb9a4;
        case 0x4eb9a8u: goto label_4eb9a8;
        case 0x4eb9acu: goto label_4eb9ac;
        case 0x4eb9b0u: goto label_4eb9b0;
        case 0x4eb9b4u: goto label_4eb9b4;
        case 0x4eb9b8u: goto label_4eb9b8;
        case 0x4eb9bcu: goto label_4eb9bc;
        case 0x4eb9c0u: goto label_4eb9c0;
        case 0x4eb9c4u: goto label_4eb9c4;
        case 0x4eb9c8u: goto label_4eb9c8;
        case 0x4eb9ccu: goto label_4eb9cc;
        case 0x4eb9d0u: goto label_4eb9d0;
        case 0x4eb9d4u: goto label_4eb9d4;
        case 0x4eb9d8u: goto label_4eb9d8;
        case 0x4eb9dcu: goto label_4eb9dc;
        case 0x4eb9e0u: goto label_4eb9e0;
        case 0x4eb9e4u: goto label_4eb9e4;
        case 0x4eb9e8u: goto label_4eb9e8;
        case 0x4eb9ecu: goto label_4eb9ec;
        case 0x4eb9f0u: goto label_4eb9f0;
        case 0x4eb9f4u: goto label_4eb9f4;
        case 0x4eb9f8u: goto label_4eb9f8;
        case 0x4eb9fcu: goto label_4eb9fc;
        case 0x4eba00u: goto label_4eba00;
        case 0x4eba04u: goto label_4eba04;
        case 0x4eba08u: goto label_4eba08;
        case 0x4eba0cu: goto label_4eba0c;
        case 0x4eba10u: goto label_4eba10;
        case 0x4eba14u: goto label_4eba14;
        case 0x4eba18u: goto label_4eba18;
        case 0x4eba1cu: goto label_4eba1c;
        case 0x4eba20u: goto label_4eba20;
        case 0x4eba24u: goto label_4eba24;
        case 0x4eba28u: goto label_4eba28;
        case 0x4eba2cu: goto label_4eba2c;
        case 0x4eba30u: goto label_4eba30;
        case 0x4eba34u: goto label_4eba34;
        case 0x4eba38u: goto label_4eba38;
        case 0x4eba3cu: goto label_4eba3c;
        case 0x4eba40u: goto label_4eba40;
        case 0x4eba44u: goto label_4eba44;
        case 0x4eba48u: goto label_4eba48;
        case 0x4eba4cu: goto label_4eba4c;
        case 0x4eba50u: goto label_4eba50;
        case 0x4eba54u: goto label_4eba54;
        case 0x4eba58u: goto label_4eba58;
        case 0x4eba5cu: goto label_4eba5c;
        case 0x4eba60u: goto label_4eba60;
        case 0x4eba64u: goto label_4eba64;
        case 0x4eba68u: goto label_4eba68;
        case 0x4eba6cu: goto label_4eba6c;
        case 0x4eba70u: goto label_4eba70;
        case 0x4eba74u: goto label_4eba74;
        case 0x4eba78u: goto label_4eba78;
        case 0x4eba7cu: goto label_4eba7c;
        case 0x4eba80u: goto label_4eba80;
        case 0x4eba84u: goto label_4eba84;
        case 0x4eba88u: goto label_4eba88;
        case 0x4eba8cu: goto label_4eba8c;
        case 0x4eba90u: goto label_4eba90;
        case 0x4eba94u: goto label_4eba94;
        case 0x4eba98u: goto label_4eba98;
        case 0x4eba9cu: goto label_4eba9c;
        default: break;
    }

    ctx->pc = 0x4eb700u;

label_4eb700:
    // 0x4eb700: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4eb700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4eb704:
    // 0x4eb704: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4eb704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4eb708:
    // 0x4eb708: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4eb708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4eb70c:
    // 0x4eb70c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4eb70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4eb710:
    // 0x4eb710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4eb710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4eb714:
    // 0x4eb714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4eb714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4eb718:
    // 0x4eb718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4eb718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4eb71c:
    // 0x4eb71c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4eb71cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb720:
    // 0x4eb720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4eb720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4eb724:
    // 0x4eb724: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x4eb724u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_4eb728:
    // 0x4eb728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4eb72c:
    // 0x4eb72c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4eb72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4eb730:
    // 0x4eb730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eb734:
    // 0x4eb734: 0x26940e84  addiu       $s4, $s4, 0xE84
    ctx->pc = 0x4eb734u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3716));
label_4eb738:
    // 0x4eb738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eb73c:
    // 0x4eb73c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x4eb73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4eb740:
    // 0x4eb740: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x4eb740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_4eb744:
    // 0x4eb744: 0x907787b0  lbu         $s7, -0x7850($v1)
    ctx->pc = 0x4eb744u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294936496)));
label_4eb748:
    // 0x4eb748: 0x8c96077c  lw          $s6, 0x77C($a0)
    ctx->pc = 0x4eb748u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_4eb74c:
    // 0x4eb74c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4eb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4eb750:
    // 0x4eb750: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4eb750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eb754:
    // 0x4eb754: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
label_4eb758:
    if (ctx->pc == 0x4EB758u) {
        ctx->pc = 0x4EB75Cu;
        goto label_4eb75c;
    }
    ctx->pc = 0x4EB754u;
    {
        const bool branch_taken_0x4eb754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb754) {
            ctx->pc = 0x4EB870u;
            goto label_4eb870;
        }
    }
    ctx->pc = 0x4EB75Cu;
label_4eb75c:
    // 0x4eb75c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eb760:
    // 0x4eb760: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4eb764:
    if (ctx->pc == 0x4EB764u) {
        ctx->pc = 0x4EB768u;
        goto label_4eb768;
    }
    ctx->pc = 0x4EB760u;
    {
        const bool branch_taken_0x4eb760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb760) {
            ctx->pc = 0x4EB778u;
            goto label_4eb778;
        }
    }
    ctx->pc = 0x4EB768u;
label_4eb768:
    // 0x4eb768: 0x108000bb  beqz        $a0, . + 4 + (0xBB << 2)
label_4eb76c:
    if (ctx->pc == 0x4EB76Cu) {
        ctx->pc = 0x4EB770u;
        goto label_4eb770;
    }
    ctx->pc = 0x4EB768u;
    {
        const bool branch_taken_0x4eb768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb768) {
            ctx->pc = 0x4EBA58u;
            goto label_4eba58;
        }
    }
    ctx->pc = 0x4EB770u;
label_4eb770:
    // 0x4eb770: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_4eb774:
    if (ctx->pc == 0x4EB774u) {
        ctx->pc = 0x4EB778u;
        goto label_4eb778;
    }
    ctx->pc = 0x4EB770u;
    {
        const bool branch_taken_0x4eb770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb770) {
            ctx->pc = 0x4EBA58u;
            goto label_4eba58;
        }
    }
    ctx->pc = 0x4EB778u;
label_4eb778:
    // 0x4eb778: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4eb778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4eb77c:
    // 0x4eb77c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x4eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4eb780:
    // 0x4eb780: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4eb780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4eb784:
    // 0x4eb784: 0x26a500b0  addiu       $a1, $s5, 0xB0
    ctx->pc = 0x4eb784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_4eb788:
    // 0x4eb788: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x4eb788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_4eb78c:
    // 0x4eb78c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4eb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4eb790:
    // 0x4eb790: 0xc04cc04  jal         func_133010
label_4eb794:
    if (ctx->pc == 0x4EB794u) {
        ctx->pc = 0x4EB794u;
            // 0x4eb794: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x4EB798u;
        goto label_4eb798;
    }
    ctx->pc = 0x4EB790u;
    SET_GPR_U32(ctx, 31, 0x4EB798u);
    ctx->pc = 0x4EB794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB790u;
            // 0x4eb794: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB798u; }
        if (ctx->pc != 0x4EB798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB798u; }
        if (ctx->pc != 0x4EB798u) { return; }
    }
    ctx->pc = 0x4EB798u;
label_4eb798:
    // 0x4eb798: 0xc60002c4  lwc1        $f0, 0x2C4($s0)
    ctx->pc = 0x4eb798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eb79c:
    // 0x4eb79c: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4eb79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4eb7a0:
    // 0x4eb7a0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4eb7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4eb7a4:
    // 0x4eb7a4: 0xc04cc34  jal         func_1330D0
label_4eb7a8:
    if (ctx->pc == 0x4EB7A8u) {
        ctx->pc = 0x4EB7A8u;
            // 0x4eb7a8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4EB7ACu;
        goto label_4eb7ac;
    }
    ctx->pc = 0x4EB7A4u;
    SET_GPR_U32(ctx, 31, 0x4EB7ACu);
    ctx->pc = 0x4EB7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB7A4u;
            // 0x4eb7a8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7ACu; }
        if (ctx->pc != 0x4EB7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7ACu; }
        if (ctx->pc != 0x4EB7ACu) { return; }
    }
    ctx->pc = 0x4EB7ACu;
label_4eb7ac:
    // 0x4eb7ac: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4eb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4eb7b0:
    // 0x4eb7b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4eb7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4eb7b4:
    // 0x4eb7b4: 0x0  nop
    ctx->pc = 0x4eb7b4u;
    // NOP
label_4eb7b8:
    // 0x4eb7b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4eb7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eb7bc:
    // 0x4eb7bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4eb7c0:
    if (ctx->pc == 0x4EB7C0u) {
        ctx->pc = 0x4EB7C4u;
        goto label_4eb7c4;
    }
    ctx->pc = 0x4EB7BCu;
    {
        const bool branch_taken_0x4eb7bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eb7bc) {
            ctx->pc = 0x4EB7D8u;
            goto label_4eb7d8;
        }
    }
    ctx->pc = 0x4EB7C4u;
label_4eb7c4:
    // 0x4eb7c4: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x4eb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_4eb7c8:
    // 0x4eb7c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4eb7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eb7cc:
    // 0x4eb7cc: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_4eb7d0:
    if (ctx->pc == 0x4EB7D0u) {
        ctx->pc = 0x4EB7D0u;
            // 0x4eb7d0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4EB7D4u;
        goto label_4eb7d4;
    }
    ctx->pc = 0x4EB7CCu;
    {
        const bool branch_taken_0x4eb7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB7CCu;
            // 0x4eb7d0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb7cc) {
            ctx->pc = 0x4EBA58u;
            goto label_4eba58;
        }
    }
    ctx->pc = 0x4EB7D4u;
label_4eb7d4:
    // 0x4eb7d4: 0x0  nop
    ctx->pc = 0x4eb7d4u;
    // NOP
label_4eb7d8:
    // 0x4eb7d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4eb7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4eb7dc:
    // 0x4eb7dc: 0x26a500b0  addiu       $a1, $s5, 0xB0
    ctx->pc = 0x4eb7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_4eb7e0:
    // 0x4eb7e0: 0xc04cc90  jal         func_133240
label_4eb7e4:
    if (ctx->pc == 0x4EB7E4u) {
        ctx->pc = 0x4EB7E4u;
            // 0x4eb7e4: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x4EB7E8u;
        goto label_4eb7e8;
    }
    ctx->pc = 0x4EB7E0u;
    SET_GPR_U32(ctx, 31, 0x4EB7E8u);
    ctx->pc = 0x4EB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB7E0u;
            // 0x4eb7e4: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7E8u; }
        if (ctx->pc != 0x4EB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7E8u; }
        if (ctx->pc != 0x4EB7E8u) { return; }
    }
    ctx->pc = 0x4EB7E8u;
label_4eb7e8:
    // 0x4eb7e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4eb7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4eb7ec:
    // 0x4eb7ec: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x4eb7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_4eb7f0:
    // 0x4eb7f0: 0xc04cc44  jal         func_133110
label_4eb7f4:
    if (ctx->pc == 0x4EB7F4u) {
        ctx->pc = 0x4EB7F4u;
            // 0x4eb7f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB7F8u;
        goto label_4eb7f8;
    }
    ctx->pc = 0x4EB7F0u;
    SET_GPR_U32(ctx, 31, 0x4EB7F8u);
    ctx->pc = 0x4EB7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB7F0u;
            // 0x4eb7f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7F8u; }
        if (ctx->pc != 0x4EB7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB7F8u; }
        if (ctx->pc != 0x4EB7F8u) { return; }
    }
    ctx->pc = 0x4EB7F8u;
label_4eb7f8:
    // 0x4eb7f8: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x4eb7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_4eb7fc:
    // 0x4eb7fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4eb7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4eb800:
    // 0x4eb800: 0xc075378  jal         func_1D4DE0
label_4eb804:
    if (ctx->pc == 0x4EB804u) {
        ctx->pc = 0x4EB804u;
            // 0x4eb804: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x4EB808u;
        goto label_4eb808;
    }
    ctx->pc = 0x4EB800u;
    SET_GPR_U32(ctx, 31, 0x4EB808u);
    ctx->pc = 0x4EB804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB800u;
            // 0x4eb804: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB808u; }
        if (ctx->pc != 0x4EB808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB808u; }
        if (ctx->pc != 0x4EB808u) { return; }
    }
    ctx->pc = 0x4EB808u;
label_4eb808:
    // 0x4eb808: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x4eb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eb80c:
    // 0x4eb80c: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x4eb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_4eb810:
    // 0x4eb810: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4eb810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4eb814:
    // 0x4eb814: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x4eb814u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4eb818:
    // 0x4eb818: 0xc0c753c  jal         func_31D4F0
label_4eb81c:
    if (ctx->pc == 0x4EB81Cu) {
        ctx->pc = 0x4EB81Cu;
            // 0x4eb81c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4EB820u;
        goto label_4eb820;
    }
    ctx->pc = 0x4EB818u;
    SET_GPR_U32(ctx, 31, 0x4EB820u);
    ctx->pc = 0x4EB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB818u;
            // 0x4eb81c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB820u; }
        if (ctx->pc != 0x4EB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB820u; }
        if (ctx->pc != 0x4EB820u) { return; }
    }
    ctx->pc = 0x4EB820u;
label_4eb820:
    // 0x4eb820: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x4eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_4eb824:
    // 0x4eb824: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x4eb824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_4eb828:
    // 0x4eb828: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x4eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4eb82c:
    // 0x4eb82c: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x4eb82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4eb830:
    // 0x4eb830: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4eb830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4eb834:
    // 0x4eb834: 0xc0c753c  jal         func_31D4F0
label_4eb838:
    if (ctx->pc == 0x4EB838u) {
        ctx->pc = 0x4EB838u;
            // 0x4eb838: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->pc = 0x4EB83Cu;
        goto label_4eb83c;
    }
    ctx->pc = 0x4EB834u;
    SET_GPR_U32(ctx, 31, 0x4EB83Cu);
    ctx->pc = 0x4EB838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB834u;
            // 0x4eb838: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB83Cu; }
        if (ctx->pc != 0x4EB83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB83Cu; }
        if (ctx->pc != 0x4EB83Cu) { return; }
    }
    ctx->pc = 0x4EB83Cu;
label_4eb83c:
    // 0x4eb83c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x4eb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_4eb840:
    // 0x4eb840: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x4eb840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4eb844:
    // 0x4eb844: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x4eb844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_4eb848:
    // 0x4eb848: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x4eb848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_4eb84c:
    // 0x4eb84c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4eb84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eb850:
    // 0x4eb850: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x4eb850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_4eb854:
    // 0x4eb854: 0xc0c6250  jal         func_318940
label_4eb858:
    if (ctx->pc == 0x4EB858u) {
        ctx->pc = 0x4EB858u;
            // 0x4eb858: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x4EB85Cu;
        goto label_4eb85c;
    }
    ctx->pc = 0x4EB854u;
    SET_GPR_U32(ctx, 31, 0x4EB85Cu);
    ctx->pc = 0x4EB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB854u;
            // 0x4eb858: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB85Cu; }
        if (ctx->pc != 0x4EB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB85Cu; }
        if (ctx->pc != 0x4EB85Cu) { return; }
    }
    ctx->pc = 0x4EB85Cu;
label_4eb85c:
    // 0x4eb85c: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x4eb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_4eb860:
    // 0x4eb860: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4eb860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4eb864:
    // 0x4eb864: 0x1000007c  b           . + 4 + (0x7C << 2)
label_4eb868:
    if (ctx->pc == 0x4EB868u) {
        ctx->pc = 0x4EB868u;
            // 0x4eb868: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x4EB86Cu;
        goto label_4eb86c;
    }
    ctx->pc = 0x4EB864u;
    {
        const bool branch_taken_0x4eb864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB864u;
            // 0x4eb868: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb864) {
            ctx->pc = 0x4EBA58u;
            goto label_4eba58;
        }
    }
    ctx->pc = 0x4EB86Cu;
label_4eb86c:
    // 0x4eb86c: 0x0  nop
    ctx->pc = 0x4eb86cu;
    // NOP
label_4eb870:
    // 0x4eb870: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4eb870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4eb874:
    // 0x4eb874: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x4eb874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4eb878:
    // 0x4eb878: 0x8e040d9c  lw          $a0, 0xD9C($s0)
    ctx->pc = 0x4eb878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_4eb87c:
    // 0x4eb87c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4eb87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4eb880:
    // 0x4eb880: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x4eb880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_4eb884:
    // 0x4eb884: 0x8ea60068  lw          $a2, 0x68($s5)
    ctx->pc = 0x4eb884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_4eb888:
    // 0x4eb888: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_4eb88c:
    if (ctx->pc == 0x4EB88Cu) {
        ctx->pc = 0x4EB890u;
        goto label_4eb890;
    }
    ctx->pc = 0x4EB888u;
    {
        const bool branch_taken_0x4eb888 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb888) {
            ctx->pc = 0x4EB8C8u;
            goto label_4eb8c8;
        }
    }
    ctx->pc = 0x4EB890u;
label_4eb890:
    // 0x4eb890: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x4eb890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_4eb894:
    // 0x4eb894: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4eb894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4eb898:
    // 0x4eb898: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x4eb898u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4eb89c:
    // 0x4eb89c: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x4eb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_4eb8a0:
    // 0x4eb8a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_4eb8a4:
    if (ctx->pc == 0x4EB8A4u) {
        ctx->pc = 0x4EB8A8u;
        goto label_4eb8a8;
    }
    ctx->pc = 0x4EB8A0u;
    {
        const bool branch_taken_0x4eb8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4eb8a0) {
            ctx->pc = 0x4EB8B0u;
            goto label_4eb8b0;
        }
    }
    ctx->pc = 0x4EB8A8u;
label_4eb8a8:
    // 0x4eb8a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4eb8ac:
    if (ctx->pc == 0x4EB8ACu) {
        ctx->pc = 0x4EB8B0u;
        goto label_4eb8b0;
    }
    ctx->pc = 0x4EB8A8u;
    {
        const bool branch_taken_0x4eb8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb8a8) {
            ctx->pc = 0x4EB8D0u;
            goto label_4eb8d0;
        }
    }
    ctx->pc = 0x4EB8B0u;
label_4eb8b0:
    // 0x4eb8b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4eb8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4eb8b4:
    // 0x4eb8b4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_4eb8b8:
    if (ctx->pc == 0x4EB8B8u) {
        ctx->pc = 0x4EB8B8u;
            // 0x4eb8b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4EB8BCu;
        goto label_4eb8bc;
    }
    ctx->pc = 0x4EB8B4u;
    {
        const bool branch_taken_0x4eb8b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB8B4u;
            // 0x4eb8b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb8b4) {
            ctx->pc = 0x4EB898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb898;
        }
    }
    ctx->pc = 0x4EB8BCu;
label_4eb8bc:
    // 0x4eb8bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4eb8c0:
    if (ctx->pc == 0x4EB8C0u) {
        ctx->pc = 0x4EB8C0u;
            // 0x4eb8c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB8C4u;
        goto label_4eb8c4;
    }
    ctx->pc = 0x4EB8BCu;
    {
        const bool branch_taken_0x4eb8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB8BCu;
            // 0x4eb8c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb8bc) {
            ctx->pc = 0x4EB8D0u;
            goto label_4eb8d0;
        }
    }
    ctx->pc = 0x4EB8C4u;
label_4eb8c4:
    // 0x4eb8c4: 0x0  nop
    ctx->pc = 0x4eb8c4u;
    // NOP
label_4eb8c8:
    // 0x4eb8c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4eb8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb8cc:
    // 0x4eb8cc: 0x0  nop
    ctx->pc = 0x4eb8ccu;
    // NOP
label_4eb8d0:
    // 0x4eb8d0: 0x12400061  beqz        $s2, . + 4 + (0x61 << 2)
label_4eb8d4:
    if (ctx->pc == 0x4EB8D4u) {
        ctx->pc = 0x4EB8D8u;
        goto label_4eb8d8;
    }
    ctx->pc = 0x4EB8D0u;
    {
        const bool branch_taken_0x4eb8d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb8d0) {
            ctx->pc = 0x4EBA58u;
            goto label_4eba58;
        }
    }
    ctx->pc = 0x4EB8D8u;
label_4eb8d8:
    // 0x4eb8d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4eb8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eb8dc:
    // 0x4eb8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb8e0:
    // 0x4eb8e0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4eb8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4eb8e4:
    // 0x4eb8e4: 0x320f809  jalr        $t9
label_4eb8e8:
    if (ctx->pc == 0x4EB8E8u) {
        ctx->pc = 0x4EB8E8u;
            // 0x4eb8e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4EB8ECu;
        goto label_4eb8ec;
    }
    ctx->pc = 0x4EB8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB8ECu);
        ctx->pc = 0x4EB8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB8E4u;
            // 0x4eb8e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB8ECu; }
            if (ctx->pc != 0x4EB8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4EB8ECu;
label_4eb8ec:
    // 0x4eb8ec: 0x8e110550  lw          $s1, 0x550($s0)
    ctx->pc = 0x4eb8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_4eb8f0:
    // 0x4eb8f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4eb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4eb8f4:
    // 0x4eb8f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4eb8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4eb8f8:
    // 0x4eb8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eb8fc:
    // 0x4eb8fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4eb8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4eb900:
    // 0x4eb900: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4eb900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eb904:
    // 0x4eb904: 0x8222010c  lb          $v0, 0x10C($s1)
    ctx->pc = 0x4eb904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4eb908:
    // 0x4eb908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4eb908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eb90c:
    // 0x4eb90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb910:
    // 0x4eb910: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4eb914:
    // 0x4eb914: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4eb914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4eb918:
    // 0x4eb918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eb918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4eb91c:
    // 0x4eb91c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4eb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4eb920:
    // 0x4eb920: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4eb920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4eb924:
    // 0x4eb924: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4eb924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4eb928:
    // 0x4eb928: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4eb928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4eb92c:
    // 0x4eb92c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4eb92cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4eb930:
    // 0x4eb930: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4eb930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4eb934:
    // 0x4eb934: 0x320f809  jalr        $t9
label_4eb938:
    if (ctx->pc == 0x4EB938u) {
        ctx->pc = 0x4EB938u;
            // 0x4eb938: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4EB93Cu;
        goto label_4eb93c;
    }
    ctx->pc = 0x4EB934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB93Cu);
        ctx->pc = 0x4EB938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB934u;
            // 0x4eb938: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB93Cu; }
            if (ctx->pc != 0x4EB93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EB93Cu;
label_4eb93c:
    // 0x4eb93c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4eb93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4eb940:
    // 0x4eb940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb944:
    // 0x4eb944: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4eb944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4eb948:
    // 0x4eb948: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4eb948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4eb94c:
    // 0x4eb94c: 0x320f809  jalr        $t9
label_4eb950:
    if (ctx->pc == 0x4EB950u) {
        ctx->pc = 0x4EB950u;
            // 0x4eb950: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4EB954u;
        goto label_4eb954;
    }
    ctx->pc = 0x4EB94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB954u);
        ctx->pc = 0x4EB950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB94Cu;
            // 0x4eb950: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB954u; }
            if (ctx->pc != 0x4EB954u) { return; }
        }
        }
    }
    ctx->pc = 0x4EB954u;
label_4eb954:
    // 0x4eb954: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4eb954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eb958:
    // 0x4eb958: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x4eb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_4eb95c:
    // 0x4eb95c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4eb95cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4eb960:
    // 0x4eb960: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x4eb960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_4eb964:
    // 0x4eb964: 0xc04cbd8  jal         func_132F60
label_4eb968:
    if (ctx->pc == 0x4EB968u) {
        ctx->pc = 0x4EB968u;
            // 0x4eb968: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4EB96Cu;
        goto label_4eb96c;
    }
    ctx->pc = 0x4EB964u;
    SET_GPR_U32(ctx, 31, 0x4EB96Cu);
    ctx->pc = 0x4EB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB964u;
            // 0x4eb968: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB96Cu; }
        if (ctx->pc != 0x4EB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB96Cu; }
        if (ctx->pc != 0x4EB96Cu) { return; }
    }
    ctx->pc = 0x4EB96Cu;
label_4eb96c:
    // 0x4eb96c: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4eb96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4eb970:
    // 0x4eb970: 0xc04cc1c  jal         func_133070
label_4eb974:
    if (ctx->pc == 0x4EB974u) {
        ctx->pc = 0x4EB974u;
            // 0x4eb974: 0x26a500b0  addiu       $a1, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->pc = 0x4EB978u;
        goto label_4eb978;
    }
    ctx->pc = 0x4EB970u;
    SET_GPR_U32(ctx, 31, 0x4EB978u);
    ctx->pc = 0x4EB974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB970u;
            // 0x4eb974: 0x26a500b0  addiu       $a1, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB978u; }
        if (ctx->pc != 0x4EB978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB978u; }
        if (ctx->pc != 0x4EB978u) { return; }
    }
    ctx->pc = 0x4EB978u;
label_4eb978:
    // 0x4eb978: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x4eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_4eb97c:
    // 0x4eb97c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4eb97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4eb980:
    // 0x4eb980: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x4eb980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4eb984:
    // 0x4eb984: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4eb984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4eb988:
    // 0x4eb988: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x4eb988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_4eb98c:
    // 0x4eb98c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4eb98cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4eb990:
    // 0x4eb990: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4eb990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4eb994:
    // 0x4eb994: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4eb994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4eb998:
    // 0x4eb998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eb998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb99c:
    // 0x4eb99c: 0x0  nop
    ctx->pc = 0x4eb99cu;
    // NOP
label_4eb9a0:
    // 0x4eb9a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4eb9a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4eb9a4:
    // 0x4eb9a4: 0xe6000de0  swc1        $f0, 0xDE0($s0)
    ctx->pc = 0x4eb9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
label_4eb9a8:
    // 0x4eb9a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4eb9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eb9ac:
    // 0x4eb9ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4eb9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4eb9b0:
    // 0x4eb9b0: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x4eb9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_4eb9b4:
    // 0x4eb9b4: 0xc04cbd8  jal         func_132F60
label_4eb9b8:
    if (ctx->pc == 0x4EB9B8u) {
        ctx->pc = 0x4EB9B8u;
            // 0x4eb9b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4EB9BCu;
        goto label_4eb9bc;
    }
    ctx->pc = 0x4EB9B4u;
    SET_GPR_U32(ctx, 31, 0x4EB9BCu);
    ctx->pc = 0x4EB9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB9B4u;
            // 0x4eb9b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9BCu; }
        if (ctx->pc != 0x4EB9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9BCu; }
        if (ctx->pc != 0x4EB9BCu) { return; }
    }
    ctx->pc = 0x4EB9BCu;
label_4eb9bc:
    // 0x4eb9bc: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x4eb9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_4eb9c0:
    // 0x4eb9c0: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x4eb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_4eb9c4:
    // 0x4eb9c4: 0xc04cca0  jal         func_133280
label_4eb9c8:
    if (ctx->pc == 0x4EB9C8u) {
        ctx->pc = 0x4EB9C8u;
            // 0x4eb9c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4EB9CCu;
        goto label_4eb9cc;
    }
    ctx->pc = 0x4EB9C4u;
    SET_GPR_U32(ctx, 31, 0x4EB9CCu);
    ctx->pc = 0x4EB9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB9C4u;
            // 0x4eb9c8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9CCu; }
        if (ctx->pc != 0x4EB9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9CCu; }
        if (ctx->pc != 0x4EB9CCu) { return; }
    }
    ctx->pc = 0x4EB9CCu;
label_4eb9cc:
    // 0x4eb9cc: 0x3c023d2a  lui         $v0, 0x3D2A
    ctx->pc = 0x4eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15658 << 16));
label_4eb9d0:
    // 0x4eb9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eb9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9d4:
    // 0x4eb9d4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4eb9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4eb9d8:
    // 0x4eb9d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9dc:
    // 0x4eb9dc: 0xae020690  sw          $v0, 0x690($s0)
    ctx->pc = 0x4eb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 2));
label_4eb9e0:
    // 0x4eb9e0: 0xc13b414  jal         func_4ED050
label_4eb9e4:
    if (ctx->pc == 0x4EB9E4u) {
        ctx->pc = 0x4EB9E4u;
            // 0x4eb9e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB9E8u;
        goto label_4eb9e8;
    }
    ctx->pc = 0x4EB9E0u;
    SET_GPR_U32(ctx, 31, 0x4EB9E8u);
    ctx->pc = 0x4EB9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB9E0u;
            // 0x4eb9e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED050u;
    if (runtime->hasFunction(0x4ED050u)) {
        auto targetFn = runtime->lookupFunction(0x4ED050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9E8u; }
        if (ctx->pc != 0x4EB9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED050_0x4ed050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9E8u; }
        if (ctx->pc != 0x4EB9E8u) { return; }
    }
    ctx->pc = 0x4EB9E8u;
label_4eb9e8:
    // 0x4eb9e8: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x4eb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_4eb9ec:
    // 0x4eb9ec: 0xc13b4a0  jal         func_4ED280
label_4eb9f0:
    if (ctx->pc == 0x4EB9F0u) {
        ctx->pc = 0x4EB9F0u;
            // 0x4eb9f0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x4EB9F4u;
        goto label_4eb9f4;
    }
    ctx->pc = 0x4EB9ECu;
    SET_GPR_U32(ctx, 31, 0x4EB9F4u);
    ctx->pc = 0x4EB9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB9ECu;
            // 0x4eb9f0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED280u;
    if (runtime->hasFunction(0x4ED280u)) {
        auto targetFn = runtime->lookupFunction(0x4ED280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9F4u; }
        if (ctx->pc != 0x4EB9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED280_0x4ed280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB9F4u; }
        if (ctx->pc != 0x4EB9F4u) { return; }
    }
    ctx->pc = 0x4EB9F4u;
label_4eb9f4:
    // 0x4eb9f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4eb9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4eb9f8:
    // 0x4eb9f8: 0xac5501c8  sw          $s5, 0x1C8($v0)
    ctx->pc = 0x4eb9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 21));
label_4eb9fc:
    // 0x4eb9fc: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x4eb9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_4eba00:
    // 0x4eba00: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4eba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4eba04:
    // 0x4eba04: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4eba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4eba08:
    // 0x4eba08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4eba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4eba0c:
    // 0x4eba0c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4eba0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eba10:
    // 0x4eba10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eba14:
    // 0x4eba14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4eba14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4eba18:
    // 0x4eba18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4eba18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4eba1c:
    // 0x4eba1c: 0xc122b58  jal         func_48AD60
label_4eba20:
    if (ctx->pc == 0x4EBA20u) {
        ctx->pc = 0x4EBA20u;
            // 0x4eba20: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBA24u;
        goto label_4eba24;
    }
    ctx->pc = 0x4EBA1Cu;
    SET_GPR_U32(ctx, 31, 0x4EBA24u);
    ctx->pc = 0x4EBA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBA1Cu;
            // 0x4eba20: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA24u; }
        if (ctx->pc != 0x4EBA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA24u; }
        if (ctx->pc != 0x4EBA24u) { return; }
    }
    ctx->pc = 0x4EBA24u;
label_4eba24:
    // 0x4eba24: 0x262401dc  addiu       $a0, $s1, 0x1DC
    ctx->pc = 0x4eba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
label_4eba28:
    // 0x4eba28: 0xc04c720  jal         func_131C80
label_4eba2c:
    if (ctx->pc == 0x4EBA2Cu) {
        ctx->pc = 0x4EBA2Cu;
            // 0x4eba2c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4EBA30u;
        goto label_4eba30;
    }
    ctx->pc = 0x4EBA28u;
    SET_GPR_U32(ctx, 31, 0x4EBA30u);
    ctx->pc = 0x4EBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBA28u;
            // 0x4eba2c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA30u; }
        if (ctx->pc != 0x4EBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA30u; }
        if (ctx->pc != 0x4EBA30u) { return; }
    }
    ctx->pc = 0x4EBA30u;
label_4eba30:
    // 0x4eba30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eba34:
    // 0x4eba34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4eba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4eba38:
    // 0x4eba38: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x4eba38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_4eba3c:
    // 0x4eba3c: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x4eba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_4eba40:
    // 0x4eba40: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x4eba40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_4eba44:
    // 0x4eba44: 0xc13b4ac  jal         func_4ED2B0
label_4eba48:
    if (ctx->pc == 0x4EBA48u) {
        ctx->pc = 0x4EBA48u;
            // 0x4eba48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBA4Cu;
        goto label_4eba4c;
    }
    ctx->pc = 0x4EBA44u;
    SET_GPR_U32(ctx, 31, 0x4EBA4Cu);
    ctx->pc = 0x4EBA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBA44u;
            // 0x4eba48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED2B0u;
    if (runtime->hasFunction(0x4ED2B0u)) {
        auto targetFn = runtime->lookupFunction(0x4ED2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA4Cu; }
        if (ctx->pc != 0x4EBA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED2B0_0x4ed2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBA4Cu; }
        if (ctx->pc != 0x4EBA4Cu) { return; }
    }
    ctx->pc = 0x4EBA4Cu;
label_4eba4c:
    // 0x4eba4c: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x4eba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_4eba50:
    // 0x4eba50: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4eba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_4eba54:
    // 0x4eba54: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x4eba54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_4eba58:
    // 0x4eba58: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4eba58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4eba5c:
    // 0x4eba5c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4eba5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4eba60:
    // 0x4eba60: 0x16c0ff3a  bnez        $s6, . + 4 + (-0xC6 << 2)
label_4eba64:
    if (ctx->pc == 0x4EBA64u) {
        ctx->pc = 0x4EBA64u;
            // 0x4eba64: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4EBA68u;
        goto label_4eba68;
    }
    ctx->pc = 0x4EBA60u;
    {
        const bool branch_taken_0x4eba60 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EBA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBA60u;
            // 0x4eba64: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eba60) {
            ctx->pc = 0x4EB74Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb74c;
        }
    }
    ctx->pc = 0x4EBA68u;
label_4eba68:
    // 0x4eba68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4eba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4eba6c:
    // 0x4eba6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4eba6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4eba70:
    // 0x4eba70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4eba70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eba74:
    // 0x4eba74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4eba74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eba78:
    // 0x4eba78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eba78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eba7c:
    // 0x4eba7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4eba7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eba80:
    // 0x4eba80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eba80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eba84:
    // 0x4eba84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eba84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eba88:
    // 0x4eba88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eba88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eba8c:
    // 0x4eba8c: 0x3e00008  jr          $ra
label_4eba90:
    if (ctx->pc == 0x4EBA90u) {
        ctx->pc = 0x4EBA90u;
            // 0x4eba90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4EBA94u;
        goto label_4eba94;
    }
    ctx->pc = 0x4EBA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBA8Cu;
            // 0x4eba90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBA94u;
label_4eba94:
    // 0x4eba94: 0x0  nop
    ctx->pc = 0x4eba94u;
    // NOP
label_4eba98:
    // 0x4eba98: 0x0  nop
    ctx->pc = 0x4eba98u;
    // NOP
label_4eba9c:
    // 0x4eba9c: 0x0  nop
    ctx->pc = 0x4eba9cu;
    // NOP
}

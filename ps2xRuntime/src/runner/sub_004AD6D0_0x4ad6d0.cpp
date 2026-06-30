#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AD6D0
// Address: 0x4ad6d0 - 0x4adaf0
void sub_004AD6D0_0x4ad6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD6D0_0x4ad6d0");
#endif

    switch (ctx->pc) {
        case 0x4ad6d0u: goto label_4ad6d0;
        case 0x4ad6d4u: goto label_4ad6d4;
        case 0x4ad6d8u: goto label_4ad6d8;
        case 0x4ad6dcu: goto label_4ad6dc;
        case 0x4ad6e0u: goto label_4ad6e0;
        case 0x4ad6e4u: goto label_4ad6e4;
        case 0x4ad6e8u: goto label_4ad6e8;
        case 0x4ad6ecu: goto label_4ad6ec;
        case 0x4ad6f0u: goto label_4ad6f0;
        case 0x4ad6f4u: goto label_4ad6f4;
        case 0x4ad6f8u: goto label_4ad6f8;
        case 0x4ad6fcu: goto label_4ad6fc;
        case 0x4ad700u: goto label_4ad700;
        case 0x4ad704u: goto label_4ad704;
        case 0x4ad708u: goto label_4ad708;
        case 0x4ad70cu: goto label_4ad70c;
        case 0x4ad710u: goto label_4ad710;
        case 0x4ad714u: goto label_4ad714;
        case 0x4ad718u: goto label_4ad718;
        case 0x4ad71cu: goto label_4ad71c;
        case 0x4ad720u: goto label_4ad720;
        case 0x4ad724u: goto label_4ad724;
        case 0x4ad728u: goto label_4ad728;
        case 0x4ad72cu: goto label_4ad72c;
        case 0x4ad730u: goto label_4ad730;
        case 0x4ad734u: goto label_4ad734;
        case 0x4ad738u: goto label_4ad738;
        case 0x4ad73cu: goto label_4ad73c;
        case 0x4ad740u: goto label_4ad740;
        case 0x4ad744u: goto label_4ad744;
        case 0x4ad748u: goto label_4ad748;
        case 0x4ad74cu: goto label_4ad74c;
        case 0x4ad750u: goto label_4ad750;
        case 0x4ad754u: goto label_4ad754;
        case 0x4ad758u: goto label_4ad758;
        case 0x4ad75cu: goto label_4ad75c;
        case 0x4ad760u: goto label_4ad760;
        case 0x4ad764u: goto label_4ad764;
        case 0x4ad768u: goto label_4ad768;
        case 0x4ad76cu: goto label_4ad76c;
        case 0x4ad770u: goto label_4ad770;
        case 0x4ad774u: goto label_4ad774;
        case 0x4ad778u: goto label_4ad778;
        case 0x4ad77cu: goto label_4ad77c;
        case 0x4ad780u: goto label_4ad780;
        case 0x4ad784u: goto label_4ad784;
        case 0x4ad788u: goto label_4ad788;
        case 0x4ad78cu: goto label_4ad78c;
        case 0x4ad790u: goto label_4ad790;
        case 0x4ad794u: goto label_4ad794;
        case 0x4ad798u: goto label_4ad798;
        case 0x4ad79cu: goto label_4ad79c;
        case 0x4ad7a0u: goto label_4ad7a0;
        case 0x4ad7a4u: goto label_4ad7a4;
        case 0x4ad7a8u: goto label_4ad7a8;
        case 0x4ad7acu: goto label_4ad7ac;
        case 0x4ad7b0u: goto label_4ad7b0;
        case 0x4ad7b4u: goto label_4ad7b4;
        case 0x4ad7b8u: goto label_4ad7b8;
        case 0x4ad7bcu: goto label_4ad7bc;
        case 0x4ad7c0u: goto label_4ad7c0;
        case 0x4ad7c4u: goto label_4ad7c4;
        case 0x4ad7c8u: goto label_4ad7c8;
        case 0x4ad7ccu: goto label_4ad7cc;
        case 0x4ad7d0u: goto label_4ad7d0;
        case 0x4ad7d4u: goto label_4ad7d4;
        case 0x4ad7d8u: goto label_4ad7d8;
        case 0x4ad7dcu: goto label_4ad7dc;
        case 0x4ad7e0u: goto label_4ad7e0;
        case 0x4ad7e4u: goto label_4ad7e4;
        case 0x4ad7e8u: goto label_4ad7e8;
        case 0x4ad7ecu: goto label_4ad7ec;
        case 0x4ad7f0u: goto label_4ad7f0;
        case 0x4ad7f4u: goto label_4ad7f4;
        case 0x4ad7f8u: goto label_4ad7f8;
        case 0x4ad7fcu: goto label_4ad7fc;
        case 0x4ad800u: goto label_4ad800;
        case 0x4ad804u: goto label_4ad804;
        case 0x4ad808u: goto label_4ad808;
        case 0x4ad80cu: goto label_4ad80c;
        case 0x4ad810u: goto label_4ad810;
        case 0x4ad814u: goto label_4ad814;
        case 0x4ad818u: goto label_4ad818;
        case 0x4ad81cu: goto label_4ad81c;
        case 0x4ad820u: goto label_4ad820;
        case 0x4ad824u: goto label_4ad824;
        case 0x4ad828u: goto label_4ad828;
        case 0x4ad82cu: goto label_4ad82c;
        case 0x4ad830u: goto label_4ad830;
        case 0x4ad834u: goto label_4ad834;
        case 0x4ad838u: goto label_4ad838;
        case 0x4ad83cu: goto label_4ad83c;
        case 0x4ad840u: goto label_4ad840;
        case 0x4ad844u: goto label_4ad844;
        case 0x4ad848u: goto label_4ad848;
        case 0x4ad84cu: goto label_4ad84c;
        case 0x4ad850u: goto label_4ad850;
        case 0x4ad854u: goto label_4ad854;
        case 0x4ad858u: goto label_4ad858;
        case 0x4ad85cu: goto label_4ad85c;
        case 0x4ad860u: goto label_4ad860;
        case 0x4ad864u: goto label_4ad864;
        case 0x4ad868u: goto label_4ad868;
        case 0x4ad86cu: goto label_4ad86c;
        case 0x4ad870u: goto label_4ad870;
        case 0x4ad874u: goto label_4ad874;
        case 0x4ad878u: goto label_4ad878;
        case 0x4ad87cu: goto label_4ad87c;
        case 0x4ad880u: goto label_4ad880;
        case 0x4ad884u: goto label_4ad884;
        case 0x4ad888u: goto label_4ad888;
        case 0x4ad88cu: goto label_4ad88c;
        case 0x4ad890u: goto label_4ad890;
        case 0x4ad894u: goto label_4ad894;
        case 0x4ad898u: goto label_4ad898;
        case 0x4ad89cu: goto label_4ad89c;
        case 0x4ad8a0u: goto label_4ad8a0;
        case 0x4ad8a4u: goto label_4ad8a4;
        case 0x4ad8a8u: goto label_4ad8a8;
        case 0x4ad8acu: goto label_4ad8ac;
        case 0x4ad8b0u: goto label_4ad8b0;
        case 0x4ad8b4u: goto label_4ad8b4;
        case 0x4ad8b8u: goto label_4ad8b8;
        case 0x4ad8bcu: goto label_4ad8bc;
        case 0x4ad8c0u: goto label_4ad8c0;
        case 0x4ad8c4u: goto label_4ad8c4;
        case 0x4ad8c8u: goto label_4ad8c8;
        case 0x4ad8ccu: goto label_4ad8cc;
        case 0x4ad8d0u: goto label_4ad8d0;
        case 0x4ad8d4u: goto label_4ad8d4;
        case 0x4ad8d8u: goto label_4ad8d8;
        case 0x4ad8dcu: goto label_4ad8dc;
        case 0x4ad8e0u: goto label_4ad8e0;
        case 0x4ad8e4u: goto label_4ad8e4;
        case 0x4ad8e8u: goto label_4ad8e8;
        case 0x4ad8ecu: goto label_4ad8ec;
        case 0x4ad8f0u: goto label_4ad8f0;
        case 0x4ad8f4u: goto label_4ad8f4;
        case 0x4ad8f8u: goto label_4ad8f8;
        case 0x4ad8fcu: goto label_4ad8fc;
        case 0x4ad900u: goto label_4ad900;
        case 0x4ad904u: goto label_4ad904;
        case 0x4ad908u: goto label_4ad908;
        case 0x4ad90cu: goto label_4ad90c;
        case 0x4ad910u: goto label_4ad910;
        case 0x4ad914u: goto label_4ad914;
        case 0x4ad918u: goto label_4ad918;
        case 0x4ad91cu: goto label_4ad91c;
        case 0x4ad920u: goto label_4ad920;
        case 0x4ad924u: goto label_4ad924;
        case 0x4ad928u: goto label_4ad928;
        case 0x4ad92cu: goto label_4ad92c;
        case 0x4ad930u: goto label_4ad930;
        case 0x4ad934u: goto label_4ad934;
        case 0x4ad938u: goto label_4ad938;
        case 0x4ad93cu: goto label_4ad93c;
        case 0x4ad940u: goto label_4ad940;
        case 0x4ad944u: goto label_4ad944;
        case 0x4ad948u: goto label_4ad948;
        case 0x4ad94cu: goto label_4ad94c;
        case 0x4ad950u: goto label_4ad950;
        case 0x4ad954u: goto label_4ad954;
        case 0x4ad958u: goto label_4ad958;
        case 0x4ad95cu: goto label_4ad95c;
        case 0x4ad960u: goto label_4ad960;
        case 0x4ad964u: goto label_4ad964;
        case 0x4ad968u: goto label_4ad968;
        case 0x4ad96cu: goto label_4ad96c;
        case 0x4ad970u: goto label_4ad970;
        case 0x4ad974u: goto label_4ad974;
        case 0x4ad978u: goto label_4ad978;
        case 0x4ad97cu: goto label_4ad97c;
        case 0x4ad980u: goto label_4ad980;
        case 0x4ad984u: goto label_4ad984;
        case 0x4ad988u: goto label_4ad988;
        case 0x4ad98cu: goto label_4ad98c;
        case 0x4ad990u: goto label_4ad990;
        case 0x4ad994u: goto label_4ad994;
        case 0x4ad998u: goto label_4ad998;
        case 0x4ad99cu: goto label_4ad99c;
        case 0x4ad9a0u: goto label_4ad9a0;
        case 0x4ad9a4u: goto label_4ad9a4;
        case 0x4ad9a8u: goto label_4ad9a8;
        case 0x4ad9acu: goto label_4ad9ac;
        case 0x4ad9b0u: goto label_4ad9b0;
        case 0x4ad9b4u: goto label_4ad9b4;
        case 0x4ad9b8u: goto label_4ad9b8;
        case 0x4ad9bcu: goto label_4ad9bc;
        case 0x4ad9c0u: goto label_4ad9c0;
        case 0x4ad9c4u: goto label_4ad9c4;
        case 0x4ad9c8u: goto label_4ad9c8;
        case 0x4ad9ccu: goto label_4ad9cc;
        case 0x4ad9d0u: goto label_4ad9d0;
        case 0x4ad9d4u: goto label_4ad9d4;
        case 0x4ad9d8u: goto label_4ad9d8;
        case 0x4ad9dcu: goto label_4ad9dc;
        case 0x4ad9e0u: goto label_4ad9e0;
        case 0x4ad9e4u: goto label_4ad9e4;
        case 0x4ad9e8u: goto label_4ad9e8;
        case 0x4ad9ecu: goto label_4ad9ec;
        case 0x4ad9f0u: goto label_4ad9f0;
        case 0x4ad9f4u: goto label_4ad9f4;
        case 0x4ad9f8u: goto label_4ad9f8;
        case 0x4ad9fcu: goto label_4ad9fc;
        case 0x4ada00u: goto label_4ada00;
        case 0x4ada04u: goto label_4ada04;
        case 0x4ada08u: goto label_4ada08;
        case 0x4ada0cu: goto label_4ada0c;
        case 0x4ada10u: goto label_4ada10;
        case 0x4ada14u: goto label_4ada14;
        case 0x4ada18u: goto label_4ada18;
        case 0x4ada1cu: goto label_4ada1c;
        case 0x4ada20u: goto label_4ada20;
        case 0x4ada24u: goto label_4ada24;
        case 0x4ada28u: goto label_4ada28;
        case 0x4ada2cu: goto label_4ada2c;
        case 0x4ada30u: goto label_4ada30;
        case 0x4ada34u: goto label_4ada34;
        case 0x4ada38u: goto label_4ada38;
        case 0x4ada3cu: goto label_4ada3c;
        case 0x4ada40u: goto label_4ada40;
        case 0x4ada44u: goto label_4ada44;
        case 0x4ada48u: goto label_4ada48;
        case 0x4ada4cu: goto label_4ada4c;
        case 0x4ada50u: goto label_4ada50;
        case 0x4ada54u: goto label_4ada54;
        case 0x4ada58u: goto label_4ada58;
        case 0x4ada5cu: goto label_4ada5c;
        case 0x4ada60u: goto label_4ada60;
        case 0x4ada64u: goto label_4ada64;
        case 0x4ada68u: goto label_4ada68;
        case 0x4ada6cu: goto label_4ada6c;
        case 0x4ada70u: goto label_4ada70;
        case 0x4ada74u: goto label_4ada74;
        case 0x4ada78u: goto label_4ada78;
        case 0x4ada7cu: goto label_4ada7c;
        case 0x4ada80u: goto label_4ada80;
        case 0x4ada84u: goto label_4ada84;
        case 0x4ada88u: goto label_4ada88;
        case 0x4ada8cu: goto label_4ada8c;
        case 0x4ada90u: goto label_4ada90;
        case 0x4ada94u: goto label_4ada94;
        case 0x4ada98u: goto label_4ada98;
        case 0x4ada9cu: goto label_4ada9c;
        case 0x4adaa0u: goto label_4adaa0;
        case 0x4adaa4u: goto label_4adaa4;
        case 0x4adaa8u: goto label_4adaa8;
        case 0x4adaacu: goto label_4adaac;
        case 0x4adab0u: goto label_4adab0;
        case 0x4adab4u: goto label_4adab4;
        case 0x4adab8u: goto label_4adab8;
        case 0x4adabcu: goto label_4adabc;
        case 0x4adac0u: goto label_4adac0;
        case 0x4adac4u: goto label_4adac4;
        case 0x4adac8u: goto label_4adac8;
        case 0x4adaccu: goto label_4adacc;
        case 0x4adad0u: goto label_4adad0;
        case 0x4adad4u: goto label_4adad4;
        case 0x4adad8u: goto label_4adad8;
        case 0x4adadcu: goto label_4adadc;
        case 0x4adae0u: goto label_4adae0;
        case 0x4adae4u: goto label_4adae4;
        case 0x4adae8u: goto label_4adae8;
        case 0x4adaecu: goto label_4adaec;
        default: break;
    }

    ctx->pc = 0x4ad6d0u;

label_4ad6d0:
    // 0x4ad6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ad6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ad6d4:
    // 0x4ad6d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4ad6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ad6d8:
    // 0x4ad6d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ad6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ad6dc:
    // 0x4ad6dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ad6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ad6e0:
    // 0x4ad6e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ad6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ad6e4:
    // 0x4ad6e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ad6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6e8:
    // 0x4ad6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ad6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ad6ec:
    // 0x4ad6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ad6f0:
    // 0x4ad6f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ad6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6f4:
    // 0x4ad6f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4ad6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ad6f8:
    // 0x4ad6f8: 0xc10ca68  jal         func_4329A0
label_4ad6fc:
    if (ctx->pc == 0x4AD6FCu) {
        ctx->pc = 0x4AD6FCu;
            // 0x4ad6fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4AD700u;
        goto label_4ad700;
    }
    ctx->pc = 0x4AD6F8u;
    SET_GPR_U32(ctx, 31, 0x4AD700u);
    ctx->pc = 0x4AD6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD6F8u;
            // 0x4ad6fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD700u; }
        if (ctx->pc != 0x4AD700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD700u; }
        if (ctx->pc != 0x4AD700u) { return; }
    }
    ctx->pc = 0x4AD700u;
label_4ad700:
    // 0x4ad700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ad700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ad704:
    // 0x4ad704: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ad708:
    // 0x4ad708: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4ad708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4ad70c:
    // 0x4ad70c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ad70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4ad710:
    // 0x4ad710: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ad710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4ad714:
    // 0x4ad714: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4ad714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4ad718:
    // 0x4ad718: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4ad718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4ad71c:
    // 0x4ad71c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ad720:
    // 0x4ad720: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4ad720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4ad724:
    // 0x4ad724: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad728:
    // 0x4ad728: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4ad728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4ad72c:
    // 0x4ad72c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4ad72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ad730:
    // 0x4ad730: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4ad730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4ad734:
    // 0x4ad734: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4ad734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4ad738:
    // 0x4ad738: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4ad738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4ad73c:
    // 0x4ad73c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4ad73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4ad740:
    // 0x4ad740: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4ad740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4ad744:
    // 0x4ad744: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4ad744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4ad748:
    // 0x4ad748: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4ad748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4ad74c:
    // 0x4ad74c: 0xc0582cc  jal         func_160B30
label_4ad750:
    if (ctx->pc == 0x4AD750u) {
        ctx->pc = 0x4AD750u;
            // 0x4ad750: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4AD754u;
        goto label_4ad754;
    }
    ctx->pc = 0x4AD74Cu;
    SET_GPR_U32(ctx, 31, 0x4AD754u);
    ctx->pc = 0x4AD750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD74Cu;
            // 0x4ad750: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD754u; }
        if (ctx->pc != 0x4AD754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD754u; }
        if (ctx->pc != 0x4AD754u) { return; }
    }
    ctx->pc = 0x4AD754u;
label_4ad754:
    // 0x4ad754: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ad758:
    // 0x4ad758: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4ad75c:
    // 0x4ad75c: 0x24630478  addiu       $v1, $v1, 0x478
    ctx->pc = 0x4ad75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
label_4ad760:
    // 0x4ad760: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4ad760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4ad764:
    // 0x4ad764: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4ad764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4ad768:
    // 0x4ad768: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4ad768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4ad76c:
    // 0x4ad76c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ad770:
    // 0x4ad770: 0xac44a990  sw          $a0, -0x5670($v0)
    ctx->pc = 0x4ad770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945168), GPR_U32(ctx, 4));
label_4ad774:
    // 0x4ad774: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x4ad774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
label_4ad778:
    // 0x4ad778: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ad77c:
    // 0x4ad77c: 0x244204c8  addiu       $v0, $v0, 0x4C8
    ctx->pc = 0x4ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1224));
label_4ad780:
    // 0x4ad780: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ad780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4ad784:
    // 0x4ad784: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4ad788:
    // 0x4ad788: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4ad788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4ad78c:
    // 0x4ad78c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4ad790:
    // 0x4ad790: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4ad790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4ad794:
    // 0x4ad794: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4ad794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4ad798:
    // 0x4ad798: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4ad798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4ad79c:
    // 0x4ad79c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4ad79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4ad7a0:
    // 0x4ad7a0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4ad7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4ad7a4:
    // 0x4ad7a4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4ad7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4ad7a8:
    // 0x4ad7a8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4ad7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4ad7ac:
    // 0x4ad7ac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4ad7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4ad7b0:
    // 0x4ad7b0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4ad7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_4ad7b4:
    // 0x4ad7b4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4ad7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_4ad7b8:
    // 0x4ad7b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4ad7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4ad7bc:
    // 0x4ad7bc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4ad7c0:
    if (ctx->pc == 0x4AD7C0u) {
        ctx->pc = 0x4AD7C4u;
        goto label_4ad7c4;
    }
    ctx->pc = 0x4AD7BCu;
    {
        const bool branch_taken_0x4ad7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad7bc) {
            ctx->pc = 0x4AD850u;
            goto label_4ad850;
        }
    }
    ctx->pc = 0x4AD7C4u;
label_4ad7c4:
    // 0x4ad7c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4ad7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4ad7c8:
    // 0x4ad7c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ad7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ad7cc:
    // 0x4ad7cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4ad7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4ad7d0:
    // 0x4ad7d0: 0xc040138  jal         func_1004E0
label_4ad7d4:
    if (ctx->pc == 0x4AD7D4u) {
        ctx->pc = 0x4AD7D4u;
            // 0x4ad7d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4AD7D8u;
        goto label_4ad7d8;
    }
    ctx->pc = 0x4AD7D0u;
    SET_GPR_U32(ctx, 31, 0x4AD7D8u);
    ctx->pc = 0x4AD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD7D0u;
            // 0x4ad7d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD7D8u; }
        if (ctx->pc != 0x4AD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD7D8u; }
        if (ctx->pc != 0x4AD7D8u) { return; }
    }
    ctx->pc = 0x4AD7D8u;
label_4ad7d8:
    // 0x4ad7d8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4ad7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4ad7dc:
    // 0x4ad7dc: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4ad7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_4ad7e0:
    // 0x4ad7e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ad7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad7e4:
    // 0x4ad7e4: 0x24a5d870  addiu       $a1, $a1, -0x2790
    ctx->pc = 0x4ad7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957168));
label_4ad7e8:
    // 0x4ad7e8: 0x24c6c400  addiu       $a2, $a2, -0x3C00
    ctx->pc = 0x4ad7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951936));
label_4ad7ec:
    // 0x4ad7ec: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x4ad7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_4ad7f0:
    // 0x4ad7f0: 0xc040840  jal         func_102100
label_4ad7f4:
    if (ctx->pc == 0x4AD7F4u) {
        ctx->pc = 0x4AD7F4u;
            // 0x4ad7f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD7F8u;
        goto label_4ad7f8;
    }
    ctx->pc = 0x4AD7F0u;
    SET_GPR_U32(ctx, 31, 0x4AD7F8u);
    ctx->pc = 0x4AD7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD7F0u;
            // 0x4ad7f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD7F8u; }
        if (ctx->pc != 0x4AD7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD7F8u; }
        if (ctx->pc != 0x4AD7F8u) { return; }
    }
    ctx->pc = 0x4AD7F8u;
label_4ad7f8:
    // 0x4ad7f8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4ad7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4ad7fc:
    // 0x4ad7fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4ad7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ad800:
    // 0x4ad800: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4ad800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4ad804:
    // 0x4ad804: 0xc0788fc  jal         func_1E23F0
label_4ad808:
    if (ctx->pc == 0x4AD808u) {
        ctx->pc = 0x4AD808u;
            // 0x4ad808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD80Cu;
        goto label_4ad80c;
    }
    ctx->pc = 0x4AD804u;
    SET_GPR_U32(ctx, 31, 0x4AD80Cu);
    ctx->pc = 0x4AD808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD804u;
            // 0x4ad808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD80Cu; }
        if (ctx->pc != 0x4AD80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD80Cu; }
        if (ctx->pc != 0x4AD80Cu) { return; }
    }
    ctx->pc = 0x4AD80Cu;
label_4ad80c:
    // 0x4ad80c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4ad80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4ad810:
    // 0x4ad810: 0xc0788fc  jal         func_1E23F0
label_4ad814:
    if (ctx->pc == 0x4AD814u) {
        ctx->pc = 0x4AD814u;
            // 0x4ad814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD818u;
        goto label_4ad818;
    }
    ctx->pc = 0x4AD810u;
    SET_GPR_U32(ctx, 31, 0x4AD818u);
    ctx->pc = 0x4AD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD810u;
            // 0x4ad814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD818u; }
        if (ctx->pc != 0x4AD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD818u; }
        if (ctx->pc != 0x4AD818u) { return; }
    }
    ctx->pc = 0x4AD818u;
label_4ad818:
    // 0x4ad818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ad818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad81c:
    // 0x4ad81c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4ad81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4ad820:
    // 0x4ad820: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4ad820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4ad824:
    // 0x4ad824: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4ad824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4ad828:
    // 0x4ad828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ad828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad82c:
    // 0x4ad82c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4ad82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4ad830:
    // 0x4ad830: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4ad830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4ad834:
    // 0x4ad834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ad834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ad838:
    // 0x4ad838: 0xc0a997c  jal         func_2A65F0
label_4ad83c:
    if (ctx->pc == 0x4AD83Cu) {
        ctx->pc = 0x4AD83Cu;
            // 0x4ad83c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4AD840u;
        goto label_4ad840;
    }
    ctx->pc = 0x4AD838u;
    SET_GPR_U32(ctx, 31, 0x4AD840u);
    ctx->pc = 0x4AD83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD838u;
            // 0x4ad83c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD840u; }
        if (ctx->pc != 0x4AD840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD840u; }
        if (ctx->pc != 0x4AD840u) { return; }
    }
    ctx->pc = 0x4AD840u;
label_4ad840:
    // 0x4ad840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4ad840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ad844:
    // 0x4ad844: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4ad844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ad848:
    // 0x4ad848: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4ad84c:
    if (ctx->pc == 0x4AD84Cu) {
        ctx->pc = 0x4AD84Cu;
            // 0x4ad84c: 0x265200c0  addiu       $s2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x4AD850u;
        goto label_4ad850;
    }
    ctx->pc = 0x4AD848u;
    {
        const bool branch_taken_0x4ad848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD848u;
            // 0x4ad84c: 0x265200c0  addiu       $s2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad848) {
            ctx->pc = 0x4AD81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ad81c;
        }
    }
    ctx->pc = 0x4AD850u;
label_4ad850:
    // 0x4ad850: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4ad850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ad854:
    // 0x4ad854: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ad854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ad858:
    // 0x4ad858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ad858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ad85c:
    // 0x4ad85c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ad85cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ad860:
    // 0x4ad860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ad860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ad864:
    // 0x4ad864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ad868:
    // 0x4ad868: 0x3e00008  jr          $ra
label_4ad86c:
    if (ctx->pc == 0x4AD86Cu) {
        ctx->pc = 0x4AD86Cu;
            // 0x4ad86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4AD870u;
        goto label_4ad870;
    }
    ctx->pc = 0x4AD868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD868u;
            // 0x4ad86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD870u;
label_4ad870:
    // 0x4ad870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ad874:
    // 0x4ad874: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ad874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ad878:
    // 0x4ad878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ad87c:
    // 0x4ad87c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ad87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ad880:
    // 0x4ad880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ad884:
    // 0x4ad884: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4ad884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4ad888:
    // 0x4ad888: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ad888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ad88c:
    // 0x4ad88c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ad88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4ad890:
    // 0x4ad890: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4ad890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_4ad894:
    // 0x4ad894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad898:
    // 0x4ad898: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ad898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4ad89c:
    // 0x4ad89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad8a0:
    // 0x4ad8a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4ad8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_4ad8a4:
    // 0x4ad8a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ad8a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4ad8a8:
    // 0x4ad8a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4ad8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4ad8ac:
    // 0x4ad8ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4ad8acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4ad8b0:
    // 0x4ad8b0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4ad8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_4ad8b4:
    // 0x4ad8b4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4ad8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_4ad8b8:
    // 0x4ad8b8: 0xc04cbd8  jal         func_132F60
label_4ad8bc:
    if (ctx->pc == 0x4AD8BCu) {
        ctx->pc = 0x4AD8BCu;
            // 0x4ad8bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4AD8C0u;
        goto label_4ad8c0;
    }
    ctx->pc = 0x4AD8B8u;
    SET_GPR_U32(ctx, 31, 0x4AD8C0u);
    ctx->pc = 0x4AD8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD8B8u;
            // 0x4ad8bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD8C0u; }
        if (ctx->pc != 0x4AD8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD8C0u; }
        if (ctx->pc != 0x4AD8C0u) { return; }
    }
    ctx->pc = 0x4AD8C0u;
label_4ad8c0:
    // 0x4ad8c0: 0xc04c968  jal         func_1325A0
label_4ad8c4:
    if (ctx->pc == 0x4AD8C4u) {
        ctx->pc = 0x4AD8C4u;
            // 0x4ad8c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4AD8C8u;
        goto label_4ad8c8;
    }
    ctx->pc = 0x4AD8C0u;
    SET_GPR_U32(ctx, 31, 0x4AD8C8u);
    ctx->pc = 0x4AD8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD8C0u;
            // 0x4ad8c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD8C8u; }
        if (ctx->pc != 0x4AD8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD8C8u; }
        if (ctx->pc != 0x4AD8C8u) { return; }
    }
    ctx->pc = 0x4AD8C8u;
label_4ad8c8:
    // 0x4ad8c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ad8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ad8cc:
    // 0x4ad8cc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x4ad8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_4ad8d0:
    // 0x4ad8d0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ad8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ad8d4:
    // 0x4ad8d4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4ad8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_4ad8d8:
    // 0x4ad8d8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4ad8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_4ad8dc:
    // 0x4ad8dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4ad8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4ad8e0:
    // 0x4ad8e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4ad8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4ad8e4:
    // 0x4ad8e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ad8e8:
    // 0x4ad8e8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x4ad8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4ad8ec:
    // 0x4ad8ec: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x4ad8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_4ad8f0:
    // 0x4ad8f0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x4ad8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_4ad8f4:
    // 0x4ad8f4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x4ad8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_4ad8f8:
    // 0x4ad8f8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4ad8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_4ad8fc:
    // 0x4ad8fc: 0x24840530  addiu       $a0, $a0, 0x530
    ctx->pc = 0x4ad8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
label_4ad900:
    // 0x4ad900: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4ad900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4ad904:
    // 0x4ad904: 0x24630570  addiu       $v1, $v1, 0x570
    ctx->pc = 0x4ad904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
label_4ad908:
    // 0x4ad908: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x4ad908u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4ad90c:
    // 0x4ad90c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad910:
    // 0x4ad910: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x4ad910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_4ad914:
    // 0x4ad914: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4ad914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_4ad918:
    // 0x4ad918: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4ad918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4ad91c:
    // 0x4ad91c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ad91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4ad920:
    // 0x4ad920: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4ad920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_4ad924:
    // 0x4ad924: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ad924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4ad928:
    // 0x4ad928: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4ad928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4ad92c:
    // 0x4ad92c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x4ad92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_4ad930:
    // 0x4ad930: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x4ad930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_4ad934:
    // 0x4ad934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ad938:
    // 0x4ad938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ad93c:
    // 0x4ad93c: 0x3e00008  jr          $ra
label_4ad940:
    if (ctx->pc == 0x4AD940u) {
        ctx->pc = 0x4AD940u;
            // 0x4ad940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4AD944u;
        goto label_4ad944;
    }
    ctx->pc = 0x4AD93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD93Cu;
            // 0x4ad940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD944u;
label_4ad944:
    // 0x4ad944: 0x0  nop
    ctx->pc = 0x4ad944u;
    // NOP
label_4ad948:
    // 0x4ad948: 0x0  nop
    ctx->pc = 0x4ad948u;
    // NOP
label_4ad94c:
    // 0x4ad94c: 0x0  nop
    ctx->pc = 0x4ad94cu;
    // NOP
label_4ad950:
    // 0x4ad950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ad950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ad954:
    // 0x4ad954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad958:
    // 0x4ad958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ad958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ad95c:
    // 0x4ad95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ad95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ad960:
    // 0x4ad960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ad960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ad964:
    // 0x4ad964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ad964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ad968:
    // 0x4ad968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ad96c:
    // 0x4ad96c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ad96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad970:
    // 0x4ad970: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x4ad970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4ad974:
    // 0x4ad974: 0x14830054  bne         $a0, $v1, . + 4 + (0x54 << 2)
label_4ad978:
    if (ctx->pc == 0x4AD978u) {
        ctx->pc = 0x4AD978u;
            // 0x4ad978: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD97Cu;
        goto label_4ad97c;
    }
    ctx->pc = 0x4AD974u;
    {
        const bool branch_taken_0x4ad974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AD978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD974u;
            // 0x4ad978: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad974) {
            ctx->pc = 0x4ADAC8u;
            goto label_4adac8;
        }
    }
    ctx->pc = 0x4AD97Cu;
label_4ad97c:
    // 0x4ad97c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4ad97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4ad980:
    // 0x4ad980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ad980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ad984:
    // 0x4ad984: 0x8c63a990  lw          $v1, -0x5670($v1)
    ctx->pc = 0x4ad984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945168)));
label_4ad988:
    // 0x4ad988: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x4ad988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4ad98c:
    // 0x4ad98c: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x4ad98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4ad990:
    // 0x4ad990: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ad990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ad994:
    // 0x4ad994: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4ad994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4ad998:
    // 0x4ad998: 0x54700004  bnel        $v1, $s0, . + 4 + (0x4 << 2)
label_4ad99c:
    if (ctx->pc == 0x4AD99Cu) {
        ctx->pc = 0x4AD99Cu;
            // 0x4ad99c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4AD9A0u;
        goto label_4ad9a0;
    }
    ctx->pc = 0x4AD998u;
    {
        const bool branch_taken_0x4ad998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4ad998) {
            ctx->pc = 0x4AD99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD998u;
            // 0x4ad99c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD9ACu;
            goto label_4ad9ac;
        }
    }
    ctx->pc = 0x4AD9A0u;
label_4ad9a0:
    // 0x4ad9a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ad9a4:
    if (ctx->pc == 0x4AD9A4u) {
        ctx->pc = 0x4AD9A4u;
            // 0x4ad9a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9A8u;
        goto label_4ad9a8;
    }
    ctx->pc = 0x4AD9A0u;
    {
        const bool branch_taken_0x4ad9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9A0u;
            // 0x4ad9a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad9a0) {
            ctx->pc = 0x4AD9BCu;
            goto label_4ad9bc;
        }
    }
    ctx->pc = 0x4AD9A8u;
label_4ad9a8:
    // 0x4ad9a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4ad9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4ad9ac:
    // 0x4ad9ac: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x4ad9acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4ad9b0:
    // 0x4ad9b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_4ad9b4:
    if (ctx->pc == 0x4AD9B4u) {
        ctx->pc = 0x4AD9B4u;
            // 0x4ad9b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4AD9B8u;
        goto label_4ad9b8;
    }
    ctx->pc = 0x4AD9B0u;
    {
        const bool branch_taken_0x4ad9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9B0u;
            // 0x4ad9b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad9b0) {
            ctx->pc = 0x4AD990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ad990;
        }
    }
    ctx->pc = 0x4AD9B8u;
label_4ad9b8:
    // 0x4ad9b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad9bc:
    // 0x4ad9bc: 0x50600043  beql        $v1, $zero, . + 4 + (0x43 << 2)
label_4ad9c0:
    if (ctx->pc == 0x4AD9C0u) {
        ctx->pc = 0x4AD9C0u;
            // 0x4ad9c0: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x4AD9C4u;
        goto label_4ad9c4;
    }
    ctx->pc = 0x4AD9BCu;
    {
        const bool branch_taken_0x4ad9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad9bc) {
            ctx->pc = 0x4AD9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9BCu;
            // 0x4ad9c0: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADACCu;
            goto label_4adacc;
        }
    }
    ctx->pc = 0x4AD9C4u;
label_4ad9c4:
    // 0x4ad9c4: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x4ad9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_4ad9c8:
    // 0x4ad9c8: 0x1470003f  bne         $v1, $s0, . + 4 + (0x3F << 2)
label_4ad9cc:
    if (ctx->pc == 0x4AD9CCu) {
        ctx->pc = 0x4AD9D0u;
        goto label_4ad9d0;
    }
    ctx->pc = 0x4AD9C8u;
    {
        const bool branch_taken_0x4ad9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4ad9c8) {
            ctx->pc = 0x4ADAC8u;
            goto label_4adac8;
        }
    }
    ctx->pc = 0x4AD9D0u;
label_4ad9d0:
    // 0x4ad9d0: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x4ad9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4ad9d4:
    // 0x4ad9d4: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x4ad9d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_4ad9d8:
    // 0x4ad9d8: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_4ad9dc:
    if (ctx->pc == 0x4AD9DCu) {
        ctx->pc = 0x4AD9DCu;
            // 0x4ad9dc: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x4AD9E0u;
        goto label_4ad9e0;
    }
    ctx->pc = 0x4AD9D8u;
    {
        const bool branch_taken_0x4ad9d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad9d8) {
            ctx->pc = 0x4AD9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9D8u;
            // 0x4ad9dc: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD9F0u;
            goto label_4ad9f0;
        }
    }
    ctx->pc = 0x4AD9E0u;
label_4ad9e0:
    // 0x4ad9e0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ad9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ad9e4:
    // 0x4ad9e4: 0x5483003a  bnel        $a0, $v1, . + 4 + (0x3A << 2)
label_4ad9e8:
    if (ctx->pc == 0x4AD9E8u) {
        ctx->pc = 0x4AD9E8u;
            // 0x4ad9e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4AD9ECu;
        goto label_4ad9ec;
    }
    ctx->pc = 0x4AD9E4u;
    {
        const bool branch_taken_0x4ad9e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ad9e4) {
            ctx->pc = 0x4AD9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9E4u;
            // 0x4ad9e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADAD0u;
            goto label_4adad0;
        }
    }
    ctx->pc = 0x4AD9ECu;
label_4ad9ec:
    // 0x4ad9ec: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x4ad9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4ad9f0:
    // 0x4ad9f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ad9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ad9f4:
    // 0x4ad9f4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4ad9f8:
    if (ctx->pc == 0x4AD9F8u) {
        ctx->pc = 0x4AD9F8u;
            // 0x4ad9f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4AD9FCu;
        goto label_4ad9fc;
    }
    ctx->pc = 0x4AD9F4u;
    {
        const bool branch_taken_0x4ad9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad9f4) {
            ctx->pc = 0x4AD9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD9F4u;
            // 0x4ad9f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ADA08u;
            goto label_4ada08;
        }
    }
    ctx->pc = 0x4AD9FCu;
label_4ad9fc:
    // 0x4ad9fc: 0x10000033  b           . + 4 + (0x33 << 2)
label_4ada00:
    if (ctx->pc == 0x4ADA00u) {
        ctx->pc = 0x4ADA04u;
        goto label_4ada04;
    }
    ctx->pc = 0x4AD9FCu;
    {
        const bool branch_taken_0x4ad9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad9fc) {
            ctx->pc = 0x4ADACCu;
            goto label_4adacc;
        }
    }
    ctx->pc = 0x4ADA04u;
label_4ada04:
    // 0x4ada04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ada04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ada08:
    // 0x4ada08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ada08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ada0c:
    // 0x4ada0c: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x4ada0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_4ada10:
    // 0x4ada10: 0xae300084  sw          $s0, 0x84($s1)
    ctx->pc = 0x4ada10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
label_4ada14:
    // 0x4ada14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ada14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ada18:
    // 0x4ada18: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ada18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ada1c:
    // 0x4ada1c: 0x320f809  jalr        $t9
label_4ada20:
    if (ctx->pc == 0x4ADA20u) {
        ctx->pc = 0x4ADA20u;
            // 0x4ada20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADA24u;
        goto label_4ada24;
    }
    ctx->pc = 0x4ADA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ADA24u);
        ctx->pc = 0x4ADA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA1Cu;
            // 0x4ada20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ADA24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA24u; }
            if (ctx->pc != 0x4ADA24u) { return; }
        }
        }
    }
    ctx->pc = 0x4ADA24u;
label_4ada24:
    // 0x4ada24: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x4ada24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_4ada28:
    // 0x4ada28: 0x26120580  addiu       $s2, $s0, 0x580
    ctx->pc = 0x4ada28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_4ada2c:
    // 0x4ada2c: 0xc0754b4  jal         func_1D52D0
label_4ada30:
    if (ctx->pc == 0x4ADA30u) {
        ctx->pc = 0x4ADA30u;
            // 0x4ada30: 0x26130560  addiu       $s3, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x4ADA34u;
        goto label_4ada34;
    }
    ctx->pc = 0x4ADA2Cu;
    SET_GPR_U32(ctx, 31, 0x4ADA34u);
    ctx->pc = 0x4ADA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA2Cu;
            // 0x4ada30: 0x26130560  addiu       $s3, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA34u; }
        if (ctx->pc != 0x4ADA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA34u; }
        if (ctx->pc != 0x4ADA34u) { return; }
    }
    ctx->pc = 0x4ADA34u;
label_4ada34:
    // 0x4ada34: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x4ada34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_4ada38:
    // 0x4ada38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ada38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ada3c:
    // 0x4ada3c: 0xae060dbc  sw          $a2, 0xDBC($s0)
    ctx->pc = 0x4ada3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 6));
label_4ada40:
    // 0x4ada40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ada40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ada44:
    // 0x4ada44: 0xae060694  sw          $a2, 0x694($s0)
    ctx->pc = 0x4ada44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 6));
label_4ada48:
    // 0x4ada48: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x4ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_4ada4c:
    // 0x4ada4c: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x4ada4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_4ada50:
    // 0x4ada50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4ada50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ada54:
    // 0x4ada54: 0xe6000de0  swc1        $f0, 0xDE0($s0)
    ctx->pc = 0x4ada54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
label_4ada58:
    // 0x4ada58: 0xae000ddc  sw          $zero, 0xDDC($s0)
    ctx->pc = 0x4ada58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 0));
label_4ada5c:
    // 0x4ada5c: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x4ada5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_4ada60:
    // 0x4ada60: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x4ada60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_4ada64:
    // 0x4ada64: 0xc077fb0  jal         func_1DFEC0
label_4ada68:
    if (ctx->pc == 0x4ADA68u) {
        ctx->pc = 0x4ADA68u;
            // 0x4ada68: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x4ADA6Cu;
        goto label_4ada6c;
    }
    ctx->pc = 0x4ADA64u;
    SET_GPR_U32(ctx, 31, 0x4ADA6Cu);
    ctx->pc = 0x4ADA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA64u;
            // 0x4ada68: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA6Cu; }
        if (ctx->pc != 0x4ADA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA6Cu; }
        if (ctx->pc != 0x4ADA6Cu) { return; }
    }
    ctx->pc = 0x4ADA6Cu;
label_4ada6c:
    // 0x4ada6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ada6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ada70:
    // 0x4ada70: 0xc075318  jal         func_1D4C60
label_4ada74:
    if (ctx->pc == 0x4ADA74u) {
        ctx->pc = 0x4ADA74u;
            // 0x4ada74: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->pc = 0x4ADA78u;
        goto label_4ada78;
    }
    ctx->pc = 0x4ADA70u;
    SET_GPR_U32(ctx, 31, 0x4ADA78u);
    ctx->pc = 0x4ADA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA70u;
            // 0x4ada74: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA78u; }
        if (ctx->pc != 0x4ADA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA78u; }
        if (ctx->pc != 0x4ADA78u) { return; }
    }
    ctx->pc = 0x4ADA78u;
label_4ada78:
    // 0x4ada78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ada78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ada7c:
    // 0x4ada7c: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x4ada7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_4ada80:
    // 0x4ada80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ada80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ada84:
    // 0x4ada84: 0xc0c6250  jal         func_318940
label_4ada88:
    if (ctx->pc == 0x4ADA88u) {
        ctx->pc = 0x4ADA88u;
            // 0x4ada88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ADA8Cu;
        goto label_4ada8c;
    }
    ctx->pc = 0x4ADA84u;
    SET_GPR_U32(ctx, 31, 0x4ADA8Cu);
    ctx->pc = 0x4ADA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA84u;
            // 0x4ada88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA8Cu; }
        if (ctx->pc != 0x4ADA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADA8Cu; }
        if (ctx->pc != 0x4ADA8Cu) { return; }
    }
    ctx->pc = 0x4ADA8Cu;
label_4ada8c:
    // 0x4ada8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ada8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ada90:
    // 0x4ada90: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x4ada90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_4ada94:
    // 0x4ada94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ada94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4ada98:
    // 0x4ada98: 0xc04cbd8  jal         func_132F60
label_4ada9c:
    if (ctx->pc == 0x4ADA9Cu) {
        ctx->pc = 0x4ADA9Cu;
            // 0x4ada9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4ADAA0u;
        goto label_4adaa0;
    }
    ctx->pc = 0x4ADA98u;
    SET_GPR_U32(ctx, 31, 0x4ADAA0u);
    ctx->pc = 0x4ADA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADA98u;
            // 0x4ada9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAA0u; }
        if (ctx->pc != 0x4ADAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAA0u; }
        if (ctx->pc != 0x4ADAA0u) { return; }
    }
    ctx->pc = 0x4ADAA0u;
label_4adaa0:
    // 0x4adaa0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4adaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4adaa4:
    // 0x4adaa4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4adaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4adaa8:
    // 0x4adaa8: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x4adaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_4adaac:
    // 0x4adaac: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x4adaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_4adab0:
    // 0x4adab0: 0xc04cc04  jal         func_133010
label_4adab4:
    if (ctx->pc == 0x4ADAB4u) {
        ctx->pc = 0x4ADAB4u;
            // 0x4adab4: 0x24a55670  addiu       $a1, $a1, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
        ctx->pc = 0x4ADAB8u;
        goto label_4adab8;
    }
    ctx->pc = 0x4ADAB0u;
    SET_GPR_U32(ctx, 31, 0x4ADAB8u);
    ctx->pc = 0x4ADAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADAB0u;
            // 0x4adab4: 0x24a55670  addiu       $a1, $a1, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAB8u; }
        if (ctx->pc != 0x4ADAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAB8u; }
        if (ctx->pc != 0x4ADAB8u) { return; }
    }
    ctx->pc = 0x4ADAB8u;
label_4adab8:
    // 0x4adab8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4adab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4adabc:
    // 0x4adabc: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x4adabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_4adac0:
    // 0x4adac0: 0xc04cc04  jal         func_133010
label_4adac4:
    if (ctx->pc == 0x4ADAC4u) {
        ctx->pc = 0x4ADAC4u;
            // 0x4adac4: 0x24a55670  addiu       $a1, $a1, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
        ctx->pc = 0x4ADAC8u;
        goto label_4adac8;
    }
    ctx->pc = 0x4ADAC0u;
    SET_GPR_U32(ctx, 31, 0x4ADAC8u);
    ctx->pc = 0x4ADAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADAC0u;
            // 0x4adac4: 0x24a55670  addiu       $a1, $a1, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAC8u; }
        if (ctx->pc != 0x4ADAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ADAC8u; }
        if (ctx->pc != 0x4ADAC8u) { return; }
    }
    ctx->pc = 0x4ADAC8u;
label_4adac8:
    // 0x4adac8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x4adac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_4adacc:
    // 0x4adacc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4adaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4adad0:
    // 0x4adad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4adad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4adad4:
    // 0x4adad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4adad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4adad8:
    // 0x4adad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4adad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4adadc:
    // 0x4adadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4adadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4adae0:
    // 0x4adae0: 0x3e00008  jr          $ra
label_4adae4:
    if (ctx->pc == 0x4ADAE4u) {
        ctx->pc = 0x4ADAE4u;
            // 0x4adae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4ADAE8u;
        goto label_4adae8;
    }
    ctx->pc = 0x4ADAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADAE0u;
            // 0x4adae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADAE8u;
label_4adae8:
    // 0x4adae8: 0x0  nop
    ctx->pc = 0x4adae8u;
    // NOP
label_4adaec:
    // 0x4adaec: 0x0  nop
    ctx->pc = 0x4adaecu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494580
// Address: 0x494580 - 0x494800
void sub_00494580_0x494580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494580_0x494580");
#endif

    switch (ctx->pc) {
        case 0x4945d4u: goto label_4945d4;
        case 0x4945e4u: goto label_4945e4;
        case 0x49460cu: goto label_49460c;
        case 0x49462cu: goto label_49462c;
        case 0x494648u: goto label_494648;
        case 0x494658u: goto label_494658;
        case 0x494670u: goto label_494670;
        case 0x494684u: goto label_494684;
        case 0x494694u: goto label_494694;
        case 0x4946dcu: goto label_4946dc;
        case 0x4946e0u: goto label_4946e0;
        case 0x494714u: goto label_494714;
        case 0x494744u: goto label_494744;
        default: break;
    }

    ctx->pc = 0x494580u;

    // 0x494580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x494580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x494584: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x494584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x494588: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x494588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x49458c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x494590: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x494590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x494594: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x494594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x494598: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x494598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49459c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4945a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4945a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4945a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4945a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4945a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4945a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4945ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4945acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4945b0: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x4945b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x4945b4: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x4945b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4945b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4945b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x4945bc: 0xac940020  sw          $s4, 0x20($a0)
    ctx->pc = 0x4945bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 20));
    // 0x4945c0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4945c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4945c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4945c8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4945C8u;
    {
        const bool branch_taken_0x4945c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4945CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4945C8u;
            // 0x4945cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4945c8) {
            ctx->pc = 0x494640u;
            goto label_494640;
        }
    }
    ctx->pc = 0x4945D0u;
    // 0x4945d0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4945d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4945d4:
    // 0x4945d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4945d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4945d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4945d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4945dc: 0xc040140  jal         func_100500
    ctx->pc = 0x4945DCu;
    SET_GPR_U32(ctx, 31, 0x4945E4u);
    ctx->pc = 0x4945E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4945DCu;
            // 0x4945e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4945E4u; }
        if (ctx->pc != 0x4945E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4945E4u; }
        if (ctx->pc != 0x4945E4u) { return; }
    }
    ctx->pc = 0x4945E4u;
label_4945e4:
    // 0x4945e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4945E4u;
    {
        const bool branch_taken_0x4945e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4945e4) {
            ctx->pc = 0x4945F8u;
            goto label_4945f8;
        }
    }
    ctx->pc = 0x4945ECu;
    // 0x4945ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4945ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4945f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4945f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4945f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4945f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4945f8:
    // 0x4945f8: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x4945f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x4945fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4945fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494604: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x494604u;
    SET_GPR_U32(ctx, 31, 0x49460Cu);
    ctx->pc = 0x494608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494604u;
            // 0x494608: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49460Cu; }
        if (ctx->pc != 0x49460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49460Cu; }
        if (ctx->pc != 0x49460Cu) { return; }
    }
    ctx->pc = 0x49460Cu;
label_49460c:
    // 0x49460c: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x49460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x494610: 0x26a40024  addiu       $a0, $s5, 0x24
    ctx->pc = 0x494610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x494614: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x494614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x494618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x494618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49461c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x49461cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x494620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x494624: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x494624u;
    SET_GPR_U32(ctx, 31, 0x49462Cu);
    ctx->pc = 0x494628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494624u;
            // 0x494628: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49462Cu; }
        if (ctx->pc != 0x49462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49462Cu; }
        if (ctx->pc != 0x49462Cu) { return; }
    }
    ctx->pc = 0x49462Cu;
label_49462c:
    // 0x49462c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x49462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x494630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x494634: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x494634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x494638: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x494638u;
    {
        const bool branch_taken_0x494638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494638) {
            ctx->pc = 0x49463Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494638u;
            // 0x49463c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4945D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4945d4;
        }
    }
    ctx->pc = 0x494640u;
label_494640:
    // 0x494640: 0xc040138  jal         func_1004E0
    ctx->pc = 0x494640u;
    SET_GPR_U32(ctx, 31, 0x494648u);
    ctx->pc = 0x494644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494640u;
            // 0x494644: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494648u; }
        if (ctx->pc != 0x494648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494648u; }
        if (ctx->pc != 0x494648u) { return; }
    }
    ctx->pc = 0x494648u;
label_494648:
    // 0x494648: 0xaea200b8  sw          $v0, 0xB8($s5)
    ctx->pc = 0x494648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 2));
    // 0x49464c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x49464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494650: 0xc040138  jal         func_1004E0
    ctx->pc = 0x494650u;
    SET_GPR_U32(ctx, 31, 0x494658u);
    ctx->pc = 0x494654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494650u;
            // 0x494654: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494658u; }
        if (ctx->pc != 0x494658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494658u; }
        if (ctx->pc != 0x494658u) { return; }
    }
    ctx->pc = 0x494658u;
label_494658:
    // 0x494658: 0xaea200bc  sw          $v0, 0xBC($s5)
    ctx->pc = 0x494658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 2));
    // 0x49465c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494660: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x494660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494664: 0x8ea400b8  lw          $a0, 0xB8($s5)
    ctx->pc = 0x494664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x494668: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x494668u;
    SET_GPR_U32(ctx, 31, 0x494670u);
    ctx->pc = 0x49466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494668u;
            // 0x49466c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494670u; }
        if (ctx->pc != 0x494670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494670u; }
        if (ctx->pc != 0x494670u) { return; }
    }
    ctx->pc = 0x494670u;
label_494670:
    // 0x494670: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x494670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x494674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494678: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x494678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x49467c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x49467Cu;
    SET_GPR_U32(ctx, 31, 0x494684u);
    ctx->pc = 0x494680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49467Cu;
            // 0x494680: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494684u; }
        if (ctx->pc != 0x494684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494684u; }
        if (ctx->pc != 0x494684u) { return; }
    }
    ctx->pc = 0x494684u;
label_494684:
    // 0x494684: 0x8eb0002c  lw          $s0, 0x2C($s5)
    ctx->pc = 0x494684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x494688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x494688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49468c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x49468cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494690: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x494690u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494694:
    // 0x494694: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x494694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x494698: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x494698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x49469c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x49469cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4946a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4946a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4946a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4946a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4946a8: 0x762821  addu        $a1, $v1, $s6
    ctx->pc = 0x4946a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x4946ac: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4946acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4946b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4946b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4946b4: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x4946b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4946b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4946bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4946bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4946c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4946c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4946c4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4946c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4946c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4946c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4946cc: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x4946ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x4946d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4946d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4946d4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4946D4u;
    SET_GPR_U32(ctx, 31, 0x4946DCu);
    ctx->pc = 0x4946D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4946D4u;
            // 0x4946d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4946DCu; }
        if (ctx->pc != 0x4946DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4946DCu; }
        if (ctx->pc != 0x4946DCu) { return; }
    }
    ctx->pc = 0x4946DCu;
label_4946dc:
    // 0x4946dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4946dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4946e0:
    // 0x4946e0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4946e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x4946e4: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4946e8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4946e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4946ec: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4946ECu;
    {
        const bool branch_taken_0x4946ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4946ec) {
            ctx->pc = 0x494718u;
            goto label_494718;
        }
    }
    ctx->pc = 0x4946F4u;
    // 0x4946f4: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x4946f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x4946f8: 0x26a400ac  addiu       $a0, $s5, 0xAC
    ctx->pc = 0x4946f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
    // 0x4946fc: 0x8ea200b4  lw          $v0, 0xB4($s5)
    ctx->pc = 0x4946fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x494700: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x494700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x494704: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x494704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x494708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49470c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x49470Cu;
    SET_GPR_U32(ctx, 31, 0x494714u);
    ctx->pc = 0x494710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49470Cu;
            // 0x494710: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494714u; }
        if (ctx->pc != 0x494714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494714u; }
        if (ctx->pc != 0x494714u) { return; }
    }
    ctx->pc = 0x494714u;
label_494714:
    // 0x494714: 0x0  nop
    ctx->pc = 0x494714u;
    // NOP
label_494718:
    // 0x494718: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x49471c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49471cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x494720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x494720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x494724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x494724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x494728: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x494728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x49472c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x49472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x494730: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x494730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x494734: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x494734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x494738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49473c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x49473Cu;
    SET_GPR_U32(ctx, 31, 0x494744u);
    ctx->pc = 0x494740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49473Cu;
            // 0x494740: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494744u; }
        if (ctx->pc != 0x494744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494744u; }
        if (ctx->pc != 0x494744u) { return; }
    }
    ctx->pc = 0x494744u;
label_494744:
    // 0x494744: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x494744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x494748: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x494748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49474c: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x49474cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x494750: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x494750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x494754: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x494754u;
    {
        const bool branch_taken_0x494754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494754u;
            // 0x494758: 0xafa30094  sw          $v1, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494754) {
            ctx->pc = 0x4946E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4946e0;
        }
    }
    ctx->pc = 0x49475Cu;
    // 0x49475c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x49475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x494760: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x494764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x494768: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x494768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49476c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x49476cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x494770: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x494770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x494774: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x494774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x494778: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x494778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x49477c: 0x8c42fff4  lw          $v0, -0xC($v0)
    ctx->pc = 0x49477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x494780: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x494780u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x494784: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x494784u;
    {
        const bool branch_taken_0x494784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x494784) {
            ctx->pc = 0x494788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494784u;
            // 0x494788: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49478Cu;
            goto label_49478c;
        }
    }
    ctx->pc = 0x49478Cu;
label_49478c:
    // 0x49478c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494790: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x494794: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x494798: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x494798u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x49479c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x49479cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4947a0: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x4947a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4947a4: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x4947a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x4947a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4947a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4947ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4947acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x4947b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4947b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4947b4: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x4947b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4947b8: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x4947B8u;
    {
        const bool branch_taken_0x4947b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4947BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4947B8u;
            // 0x4947bc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4947b8) {
            ctx->pc = 0x494694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494694;
        }
    }
    ctx->pc = 0x4947C0u;
    // 0x4947c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x4947c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4947c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4947c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4947c8: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x4947c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x4947cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4947ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4947d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4947d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4947d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4947d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4947d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4947d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4947dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4947dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4947e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4947e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4947e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4947e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4947e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4947e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4947ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4947ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4947f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4947F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4947F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4947F0u;
            // 0x4947f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4947F8u;
    // 0x4947f8: 0x0  nop
    ctx->pc = 0x4947f8u;
    // NOP
    // 0x4947fc: 0x0  nop
    ctx->pc = 0x4947fcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494800
// Address: 0x494800 - 0x4949c0
void sub_00494800_0x494800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494800_0x494800");
#endif

    switch (ctx->pc) {
        case 0x494850u: goto label_494850;
        case 0x494860u: goto label_494860;
        case 0x49488cu: goto label_49488c;
        case 0x4948acu: goto label_4948ac;
        case 0x4948c8u: goto label_4948c8;
        case 0x4948d8u: goto label_4948d8;
        case 0x4948f0u: goto label_4948f0;
        case 0x494904u: goto label_494904;
        case 0x494914u: goto label_494914;
        case 0x494954u: goto label_494954;
        default: break;
    }

    ctx->pc = 0x494800u;

    // 0x494800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x494800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x494804: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x494804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x494808: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x494808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x49480c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x49480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x494810: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x494810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494814: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x494814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x494818: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x494818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49481c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x494820: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x494820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494824: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x494828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49482c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x494830: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x494830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x494834: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x494834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x494838: 0xac940020  sw          $s4, 0x20($a0)
    ctx->pc = 0x494838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 20));
    // 0x49483c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x49483cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x494840: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x494840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x494844: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x494844u;
    {
        const bool branch_taken_0x494844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x494848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494844u;
            // 0x494848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494844) {
            ctx->pc = 0x4948C0u;
            goto label_4948c0;
        }
    }
    ctx->pc = 0x49484Cu;
    // 0x49484c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x49484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_494850:
    // 0x494850: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x494850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x494854: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x494854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x494858: 0xc040140  jal         func_100500
    ctx->pc = 0x494858u;
    SET_GPR_U32(ctx, 31, 0x494860u);
    ctx->pc = 0x49485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494858u;
            // 0x49485c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494860u; }
        if (ctx->pc != 0x494860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494860u; }
        if (ctx->pc != 0x494860u) { return; }
    }
    ctx->pc = 0x494860u;
label_494860:
    // 0x494860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x494860u;
    {
        const bool branch_taken_0x494860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494860) {
            ctx->pc = 0x494878u;
            goto label_494878;
        }
    }
    ctx->pc = 0x494868u;
    // 0x494868: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x494868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x49486c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x49486cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x494870: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x494870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x494874: 0x0  nop
    ctx->pc = 0x494874u;
    // NOP
label_494878:
    // 0x494878: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x494878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x49487c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494884: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x494884u;
    SET_GPR_U32(ctx, 31, 0x49488Cu);
    ctx->pc = 0x494888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494884u;
            // 0x494888: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49488Cu; }
        if (ctx->pc != 0x49488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49488Cu; }
        if (ctx->pc != 0x49488Cu) { return; }
    }
    ctx->pc = 0x49488Cu;
label_49488c:
    // 0x49488c: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x49488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x494890: 0x26a40024  addiu       $a0, $s5, 0x24
    ctx->pc = 0x494890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x494894: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x494894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x494898: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x494898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49489c: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x49489cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x4948a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4948a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4948a4: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4948A4u;
    SET_GPR_U32(ctx, 31, 0x4948ACu);
    ctx->pc = 0x4948A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4948A4u;
            // 0x4948a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948ACu; }
        if (ctx->pc != 0x4948ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948ACu; }
        if (ctx->pc != 0x4948ACu) { return; }
    }
    ctx->pc = 0x4948ACu;
label_4948ac:
    // 0x4948ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4948acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4948b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4948b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4948b4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4948b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4948b8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4948B8u;
    {
        const bool branch_taken_0x4948b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4948b8) {
            ctx->pc = 0x4948BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4948B8u;
            // 0x4948bc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494850;
        }
    }
    ctx->pc = 0x4948C0u;
label_4948c0:
    // 0x4948c0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4948C0u;
    SET_GPR_U32(ctx, 31, 0x4948C8u);
    ctx->pc = 0x4948C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4948C0u;
            // 0x4948c4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948C8u; }
        if (ctx->pc != 0x4948C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948C8u; }
        if (ctx->pc != 0x4948C8u) { return; }
    }
    ctx->pc = 0x4948C8u;
label_4948c8:
    // 0x4948c8: 0xaea200b8  sw          $v0, 0xB8($s5)
    ctx->pc = 0x4948c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 2));
    // 0x4948cc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4948ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4948d0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4948D0u;
    SET_GPR_U32(ctx, 31, 0x4948D8u);
    ctx->pc = 0x4948D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4948D0u;
            // 0x4948d4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948D8u; }
        if (ctx->pc != 0x4948D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948D8u; }
        if (ctx->pc != 0x4948D8u) { return; }
    }
    ctx->pc = 0x4948D8u;
label_4948d8:
    // 0x4948d8: 0xaea200bc  sw          $v0, 0xBC($s5)
    ctx->pc = 0x4948d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 2));
    // 0x4948dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4948dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4948e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4948e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4948e4: 0x8ea400b8  lw          $a0, 0xB8($s5)
    ctx->pc = 0x4948e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x4948e8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4948E8u;
    SET_GPR_U32(ctx, 31, 0x4948F0u);
    ctx->pc = 0x4948ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4948E8u;
            // 0x4948ec: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948F0u; }
        if (ctx->pc != 0x4948F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4948F0u; }
        if (ctx->pc != 0x4948F0u) { return; }
    }
    ctx->pc = 0x4948F0u;
label_4948f0:
    // 0x4948f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4948f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4948f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4948f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4948f8: 0x8ea400bc  lw          $a0, 0xBC($s5)
    ctx->pc = 0x4948f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x4948fc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4948FCu;
    SET_GPR_U32(ctx, 31, 0x494904u);
    ctx->pc = 0x494900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4948FCu;
            // 0x494900: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494904u; }
        if (ctx->pc != 0x494904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494904u; }
        if (ctx->pc != 0x494904u) { return; }
    }
    ctx->pc = 0x494904u;
label_494904:
    // 0x494904: 0x8eb0002c  lw          $s0, 0x2C($s5)
    ctx->pc = 0x494904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x494908: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x494908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49490c: 0x8ed1002c  lw          $s1, 0x2C($s6)
    ctx->pc = 0x49490cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x494910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x494910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494914:
    // 0x494914: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x494914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x494918: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x494918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x49491c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x49491cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x494920: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x494920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x494924: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x494924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x494928: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x49492c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x49492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x494930: 0x26a400ac  addiu       $a0, $s5, 0xAC
    ctx->pc = 0x494930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
    // 0x494934: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x494934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x494938: 0x26c500ac  addiu       $a1, $s6, 0xAC
    ctx->pc = 0x494938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 172));
    // 0x49493c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x49493cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x494940: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x494944: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x494944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x494948: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x494948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x49494c: 0xc1007d8  jal         func_401F60
    ctx->pc = 0x49494Cu;
    SET_GPR_U32(ctx, 31, 0x494954u);
    ctx->pc = 0x494950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49494Cu;
            // 0x494950: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F60u;
    if (runtime->hasFunction(0x401F60u)) {
        auto targetFn = runtime->lookupFunction(0x401F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494954u; }
        if (ctx->pc != 0x494954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F60_0x401f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494954u; }
        if (ctx->pc != 0x494954u) { return; }
    }
    ctx->pc = 0x494954u;
label_494954:
    // 0x494954: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x494954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x494958: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x494958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x49495c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x49495cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x494960: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x494960u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x494964: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x494964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x494968: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x494968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x49496c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494970: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x494970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x494974: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x494974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x494978: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x494978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49497c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x49497cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x494980: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x494980u;
    {
        const bool branch_taken_0x494980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x494984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494980u;
            // 0x494984: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494980) {
            ctx->pc = 0x494914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494914;
        }
    }
    ctx->pc = 0x494988u;
    // 0x494988: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x494988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x49498c: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x49498cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x494990: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x494990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x494994: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x494994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x494998: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x494998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49499c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49499cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4949a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4949a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4949a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4949a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4949a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4949a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4949ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4949acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4949b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4949B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4949B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4949B0u;
            // 0x4949b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4949B8u;
    // 0x4949b8: 0x0  nop
    ctx->pc = 0x4949b8u;
    // NOP
    // 0x4949bc: 0x0  nop
    ctx->pc = 0x4949bcu;
    // NOP
}

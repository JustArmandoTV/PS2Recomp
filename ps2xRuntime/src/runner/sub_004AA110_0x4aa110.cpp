#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA110
// Address: 0x4aa110 - 0x4aa280
void sub_004AA110_0x4aa110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA110_0x4aa110");
#endif

    switch (ctx->pc) {
        case 0x4aa190u: goto label_4aa190;
        case 0x4aa1acu: goto label_4aa1ac;
        case 0x4aa1fcu: goto label_4aa1fc;
        case 0x4aa23cu: goto label_4aa23c;
        default: break;
    }

    ctx->pc = 0x4aa110u;

    // 0x4aa110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aa114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4aa114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4aa118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4aa118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4aa11c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4aa120: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4aa120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aa124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aa128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4aa128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4aa12c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4aa12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aa130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA130u;
    {
        const bool branch_taken_0x4aa130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA130u;
            // 0x4aa134: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa130) {
            ctx->pc = 0x4AA140u;
            goto label_4aa140;
        }
    }
    ctx->pc = 0x4AA138u;
    // 0x4aa138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA138u;
    {
        const bool branch_taken_0x4aa138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA138u;
            // 0x4aa13c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa138) {
            ctx->pc = 0x4AA144u;
            goto label_4aa144;
        }
    }
    ctx->pc = 0x4AA140u;
label_4aa140:
    // 0x4aa140: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4aa144:
    // 0x4aa144: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x4aa144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4aa148: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x4aa148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4aa14c: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4AA14Cu;
    {
        const bool branch_taken_0x4aa14c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa14c) {
            ctx->pc = 0x4AA150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA14Cu;
            // 0x4aa150: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA188u;
            goto label_4aa188;
        }
    }
    ctx->pc = 0x4AA154u;
    // 0x4aa154: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x4aa154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4aa158: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x4aa158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x4aa15c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x4aa15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4aa160: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4aa160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4aa164: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x4aa164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4aa168: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4aa168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4aa16c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4aa16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aa170: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4aa170u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4aa174: 0x2010  mfhi        $a0
    ctx->pc = 0x4aa174u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x4aa178: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4aa178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4aa17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4aa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4aa180: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4AA180u;
    {
        const bool branch_taken_0x4aa180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA180u;
            // 0x4aa184: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa180) {
            ctx->pc = 0x4AA258u;
            goto label_4aa258;
        }
    }
    ctx->pc = 0x4AA188u;
label_4aa188:
    // 0x4aa188: 0xc12a8f0  jal         func_4AA3C0
    ctx->pc = 0x4AA188u;
    SET_GPR_U32(ctx, 31, 0x4AA190u);
    ctx->pc = 0x4AA18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA188u;
            // 0x4aa18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3C0u;
    if (runtime->hasFunction(0x4AA3C0u)) {
        auto targetFn = runtime->lookupFunction(0x4AA3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA190u; }
        if (ctx->pc != 0x4AA190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA3C0_0x4aa3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA190u; }
        if (ctx->pc != 0x4AA190u) { return; }
    }
    ctx->pc = 0x4AA190u;
label_4aa190:
    // 0x4aa190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa194: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4aa194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aa198: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aa198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4aa19c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4aa19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4aa1a0: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x4aa1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x4aa1a4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x4AA1A4u;
    SET_GPR_U32(ctx, 31, 0x4AA1ACu);
    ctx->pc = 0x4AA1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA1A4u;
            // 0x4aa1a8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA1ACu; }
        if (ctx->pc != 0x4AA1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA1ACu; }
        if (ctx->pc != 0x4AA1ACu) { return; }
    }
    ctx->pc = 0x4AA1ACu;
label_4aa1ac:
    // 0x4aa1ac: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x4aa1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4aa1b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4aa1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1b4: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x4aa1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4aa1b8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4aa1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4aa1bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4aa1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4aa1c0: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x4aa1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4aa1c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4aa1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4aa1c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AA1C8u;
    {
        const bool branch_taken_0x4aa1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA1C8u;
            // 0x4aa1cc: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa1c8) {
            ctx->pc = 0x4AA1E8u;
            goto label_4aa1e8;
        }
    }
    ctx->pc = 0x4AA1D0u;
    // 0x4aa1d0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4aa1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4aa1d4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4aa1d8: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x4aa1d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4aa1dc: 0x1810  mfhi        $v1
    ctx->pc = 0x4aa1dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4aa1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA1E0u;
    {
        const bool branch_taken_0x4aa1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA1E0u;
            // 0x4aa1e4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa1e0) {
            ctx->pc = 0x4AA1F0u;
            goto label_4aa1f0;
        }
    }
    ctx->pc = 0x4AA1E8u;
label_4aa1e8:
    // 0x4aa1e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4aa1e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa1ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aa1f0:
    // 0x4aa1f0: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x4aa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4aa1f4: 0x11040008  beq         $t0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AA1F4u;
    {
        const bool branch_taken_0x4aa1f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AA1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA1F4u;
            // 0x4aa1f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa1f4) {
            ctx->pc = 0x4AA218u;
            goto label_4aa218;
        }
    }
    ctx->pc = 0x4AA1FCu;
label_4aa1fc:
    // 0x4aa1fc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4aa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4aa200: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4aa200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4aa204: 0x15050002  bne         $t0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA204u;
    {
        const bool branch_taken_0x4aa204 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AA208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA204u;
            // 0x4aa208: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa204) {
            ctx->pc = 0x4AA210u;
            goto label_4aa210;
        }
    }
    ctx->pc = 0x4AA20Cu;
    // 0x4aa20c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4aa20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4aa210:
    // 0x4aa210: 0x1504fffa  bne         $t0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AA210u;
    {
        const bool branch_taken_0x4aa210 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AA214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA210u;
            // 0x4aa214: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa210) {
            ctx->pc = 0x4AA1FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aa1fc;
        }
    }
    ctx->pc = 0x4AA218u;
label_4aa218:
    // 0x4aa218: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aa218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aa21c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4aa21cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4aa220: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x4aa220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4aa224: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA224u;
    {
        const bool branch_taken_0x4aa224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa224) {
            ctx->pc = 0x4AA228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA224u;
            // 0x4aa228: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA240u;
            goto label_4aa240;
        }
    }
    ctx->pc = 0x4AA22Cu;
    // 0x4aa22c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA22Cu;
    {
        const bool branch_taken_0x4aa22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa22c) {
            ctx->pc = 0x4AA23Cu;
            goto label_4aa23c;
        }
    }
    ctx->pc = 0x4AA234u;
    // 0x4aa234: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4AA234u;
    SET_GPR_U32(ctx, 31, 0x4AA23Cu);
    ctx->pc = 0x4AA238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA234u;
            // 0x4aa238: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA23Cu; }
        if (ctx->pc != 0x4AA23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA23Cu; }
        if (ctx->pc != 0x4AA23Cu) { return; }
    }
    ctx->pc = 0x4AA23Cu;
label_4aa23c:
    // 0x4aa23c: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x4aa23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
label_4aa240:
    // 0x4aa240: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x4aa240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4aa244: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x4aa244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x4aa248: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4aa248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x4aa24c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4aa24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4aa250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4aa250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4aa254: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x4aa254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_4aa258:
    // 0x4aa258: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4aa258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aa25c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4aa25cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aa260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aa264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aa268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa26c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA26Cu;
            // 0x4aa270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA274u;
    // 0x4aa274: 0x0  nop
    ctx->pc = 0x4aa274u;
    // NOP
    // 0x4aa278: 0x0  nop
    ctx->pc = 0x4aa278u;
    // NOP
    // 0x4aa27c: 0x0  nop
    ctx->pc = 0x4aa27cu;
    // NOP
}

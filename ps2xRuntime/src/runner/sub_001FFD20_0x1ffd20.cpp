#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFD20
// Address: 0x1ffd20 - 0x1ffe60
void sub_001FFD20_0x1ffd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFD20_0x1ffd20");
#endif

    switch (ctx->pc) {
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdd8u: goto label_1ffdd8;
        case 0x1ffe0cu: goto label_1ffe0c;
        case 0x1ffe34u: goto label_1ffe34;
        default: break;
    }

    ctx->pc = 0x1ffd20u;

    // 0x1ffd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ffd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ffd24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ffd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ffd28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ffd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ffd2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ffd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ffd30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ffd30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ffd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ffd38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ffd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffd40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd44: 0x8c8a0190  lw          $t2, 0x190($a0)
    ctx->pc = 0x1ffd44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x1ffd48: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ffd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffd50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ffd54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd58: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ffd58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd5c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1ffd60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ffd60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd64: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ffd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ffd68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ffd6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1ffd6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd70: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ffd74: 0xac6209a0  sw          $v0, 0x9A0($v1)
    ctx->pc = 0x1ffd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2464), GPR_U32(ctx, 2));
    // 0x1ffd78: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ffd7c: 0xac6209a4  sw          $v0, 0x9A4($v1)
    ctx->pc = 0x1ffd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2468), GPR_U32(ctx, 2));
    // 0x1ffd80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ffd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ffd84: 0xac6209a8  sw          $v0, 0x9A8($v1)
    ctx->pc = 0x1ffd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2472), GPR_U32(ctx, 2));
    // 0x1ffd88: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ffd8c: 0xac6209ac  sw          $v0, 0x9AC($v1)
    ctx->pc = 0x1ffd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2476), GPR_U32(ctx, 2));
    // 0x1ffd90: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x1ffd90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ffd94: 0xa06209b0  sb          $v0, 0x9B0($v1)
    ctx->pc = 0x1ffd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffd98: 0x90a20011  lbu         $v0, 0x11($a1)
    ctx->pc = 0x1ffd98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x1ffd9c: 0xa06209b1  sb          $v0, 0x9B1($v1)
    ctx->pc = 0x1ffd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2481), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffda0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ffda4: 0x8c8b1c48  lw          $t3, 0x1C48($a0)
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7240)));
    // 0x1ffda8: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFDA8u;
    SET_GPR_U32(ctx, 31, 0x1FFDB0u);
    ctx->pc = 0x1FFDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDA8u;
            // 0x1ffdac: 0x26650eb0  addiu       $a1, $s3, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDB0u; }
        if (ctx->pc != 0x1FFDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDB0u; }
        if (ctx->pc != 0x1FFDB0u) { return; }
    }
    ctx->pc = 0x1FFDB0u;
label_1ffdb0:
    // 0x1ffdb0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ffdb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ffdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdb8: 0x8e660190  lw          $a2, 0x190($s3)
    ctx->pc = 0x1ffdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x1ffdbc: 0x266501a0  addiu       $a1, $s3, 0x1A0
    ctx->pc = 0x1ffdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
    // 0x1ffdc0: 0x8e6b1c40  lw          $t3, 0x1C40($s3)
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7232)));
    // 0x1ffdc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ffdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdc8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ffdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdcc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ffdccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdd0: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFDD0u;
    SET_GPR_U32(ctx, 31, 0x1FFDD8u);
    ctx->pc = 0x1FFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDD0u;
            // 0x1ffdd4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDD8u; }
        if (ctx->pc != 0x1FFDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDD8u; }
        if (ctx->pc != 0x1FFDD8u) { return; }
    }
    ctx->pc = 0x1FFDD8u;
label_1ffdd8:
    // 0x1ffdd8: 0x82430011  lb          $v1, 0x11($s2)
    ctx->pc = 0x1ffdd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x1ffddc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FFDDCu;
    {
        const bool branch_taken_0x1ffddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffddc) {
            ctx->pc = 0x1FFDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFDDCu;
            // 0x1ffde0: 0x8e630190  lw          $v1, 0x190($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE38u;
            goto label_1ffe38;
        }
    }
    ctx->pc = 0x1FFDE4u;
    // 0x1ffde4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ffde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ffde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdec: 0x8e6b1c4c  lw          $t3, 0x1C4C($s3)
    ctx->pc = 0x1ffdecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7244)));
    // 0x1ffdf0: 0x266512b0  addiu       $a1, $s3, 0x12B0
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4784));
    // 0x1ffdf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffdf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ffdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffdfc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ffdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe00: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ffe00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe04: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFE04u;
    SET_GPR_U32(ctx, 31, 0x1FFE0Cu);
    ctx->pc = 0x1FFE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE04u;
            // 0x1ffe08: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE0Cu; }
        if (ctx->pc != 0x1FFE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE0Cu; }
        if (ctx->pc != 0x1FFE0Cu) { return; }
    }
    ctx->pc = 0x1FFE0Cu;
label_1ffe0c:
    // 0x1ffe0c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ffe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ffe10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ffe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe14: 0x8e660190  lw          $a2, 0x190($s3)
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x1ffe18: 0x266505a0  addiu       $a1, $s3, 0x5A0
    ctx->pc = 0x1ffe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
    // 0x1ffe1c: 0x8e6b1c44  lw          $t3, 0x1C44($s3)
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7236)));
    // 0x1ffe20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ffe20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe24: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ffe24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe28: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ffe28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe2c: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x1FFE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE34u);
    ctx->pc = 0x1FFE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE2Cu;
            // 0x1ffe30: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE34u; }
        if (ctx->pc != 0x1FFE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE34u; }
        if (ctx->pc != 0x1FFE34u) { return; }
    }
    ctx->pc = 0x1FFE34u;
label_1ffe34:
    // 0x1ffe34: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x1ffe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
label_1ffe38:
    // 0x1ffe38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffe3c: 0xae630190  sw          $v1, 0x190($s3)
    ctx->pc = 0x1ffe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 3));
    // 0x1ffe40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ffe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffe44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ffe44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffe48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ffe48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffe4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ffe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffe50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffe54: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE54u;
            // 0x1ffe58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFE5Cu;
    // 0x1ffe5c: 0x0  nop
    ctx->pc = 0x1ffe5cu;
    // NOP
}

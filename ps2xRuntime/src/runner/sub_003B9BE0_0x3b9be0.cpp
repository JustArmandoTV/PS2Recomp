#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9BE0
// Address: 0x3b9be0 - 0x3b9d10
void sub_003B9BE0_0x3b9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9BE0_0x3b9be0");
#endif

    switch (ctx->pc) {
        case 0x3b9c38u: goto label_3b9c38;
        case 0x3b9c40u: goto label_3b9c40;
        case 0x3b9c48u: goto label_3b9c48;
        case 0x3b9c6cu: goto label_3b9c6c;
        case 0x3b9c74u: goto label_3b9c74;
        case 0x3b9cd0u: goto label_3b9cd0;
        default: break;
    }

    ctx->pc = 0x3b9be0u;

    // 0x3b9be0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b9be4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b9be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b9be8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b9be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b9bec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b9becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b9bf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b9bf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b9bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b9bf8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b9bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b9c00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b9c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b9c08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b9c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9c10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b9c14: 0x2c41ffff  sltiu       $at, $v0, -0x1
    ctx->pc = 0x3b9c14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x3b9c18: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9C18u;
    {
        const bool branch_taken_0x3b9c18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C18u;
            // 0x3b9c1c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9c18) {
            ctx->pc = 0x3B9C40u;
            goto label_3b9c40;
        }
    }
    ctx->pc = 0x3B9C20u;
    // 0x3b9c20: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3b9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3b9c24: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b9c28: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3b9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3b9c2c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3b9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3b9c30: 0xc049e92  jal         func_127A48
    ctx->pc = 0x3B9C30u;
    SET_GPR_U32(ctx, 31, 0x3B9C38u);
    ctx->pc = 0x3B9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C30u;
            // 0x3b9c34: 0x24a58260  addiu       $a1, $a1, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C38u; }
        if (ctx->pc != 0x3B9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C38u; }
        if (ctx->pc != 0x3B9C38u) { return; }
    }
    ctx->pc = 0x3B9C38u;
label_3b9c38:
    // 0x3b9c38: 0xc04981a  jal         func_126068
    ctx->pc = 0x3B9C38u;
    SET_GPR_U32(ctx, 31, 0x3B9C40u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C40u; }
        if (ctx->pc != 0x3B9C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C40u; }
        if (ctx->pc != 0x3B9C40u) { return; }
    }
    ctx->pc = 0x3B9C40u;
label_3b9c40:
    // 0x3b9c40: 0xc040180  jal         func_100600
    ctx->pc = 0x3B9C40u;
    SET_GPR_U32(ctx, 31, 0x3B9C48u);
    ctx->pc = 0x3B9C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C40u;
            // 0x3b9c44: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C48u; }
        if (ctx->pc != 0x3B9C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C48u; }
        if (ctx->pc != 0x3B9C48u) { return; }
    }
    ctx->pc = 0x3B9C48u;
label_3b9c48:
    // 0x3b9c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c4c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B9C4Cu;
    {
        const bool branch_taken_0x3b9c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c4c) {
            ctx->pc = 0x3B9C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C4Cu;
            // 0x3b9c50: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9C78u;
            goto label_3b9c78;
        }
    }
    ctx->pc = 0x3B9C54u;
    // 0x3b9c54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3b9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3b9c58: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b9c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b9c5c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3b9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3b9c60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3b9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3b9c64: 0xc049e92  jal         func_127A48
    ctx->pc = 0x3B9C64u;
    SET_GPR_U32(ctx, 31, 0x3B9C6Cu);
    ctx->pc = 0x3B9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C64u;
            // 0x3b9c68: 0x24a58280  addiu       $a1, $a1, -0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C6Cu; }
        if (ctx->pc != 0x3B9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C6Cu; }
        if (ctx->pc != 0x3B9C6Cu) { return; }
    }
    ctx->pc = 0x3B9C6Cu;
label_3b9c6c:
    // 0x3b9c6c: 0xc04981a  jal         func_126068
    ctx->pc = 0x3B9C6Cu;
    SET_GPR_U32(ctx, 31, 0x3B9C74u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C74u; }
        if (ctx->pc != 0x3B9C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9C74u; }
        if (ctx->pc != 0x3B9C74u) { return; }
    }
    ctx->pc = 0x3B9C74u;
label_3b9c74:
    // 0x3b9c74: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x3b9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b9c78:
    // 0x3b9c78: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9C78u;
    {
        const bool branch_taken_0x3b9c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c78) {
            ctx->pc = 0x3B9C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9C78u;
            // 0x3b9c7c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9C94u;
            goto label_3b9c94;
        }
    }
    ctx->pc = 0x3B9C80u;
    // 0x3b9c80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3b9c80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b9c84: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3b9c84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b9c88: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b9c8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3b9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3b9c90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3b9c94:
    // 0x3b9c94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3b9c98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b9c9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b9c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b9ca0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3b9ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3b9ca4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9CA4u;
    {
        const bool branch_taken_0x3b9ca4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9CA4u;
            // 0x3b9ca8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ca4) {
            ctx->pc = 0x3B9CB4u;
            goto label_3b9cb4;
        }
    }
    ctx->pc = 0x3B9CACu;
    // 0x3b9cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B9CACu;
    {
        const bool branch_taken_0x3b9cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9CACu;
            // 0x3b9cb0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9cac) {
            ctx->pc = 0x3B9CB8u;
            goto label_3b9cb8;
        }
    }
    ctx->pc = 0x3B9CB4u;
label_3b9cb4:
    // 0x3b9cb4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x3b9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_3b9cb8:
    // 0x3b9cb8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b9cbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b9cc0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3b9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3b9cc4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x3b9cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3b9cc8: 0xc0583d8  jal         func_160F60
    ctx->pc = 0x3B9CC8u;
    SET_GPR_U32(ctx, 31, 0x3B9CD0u);
    ctx->pc = 0x3B9CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9CC8u;
            // 0x3b9ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F60u;
    if (runtime->hasFunction(0x160F60u)) {
        auto targetFn = runtime->lookupFunction(0x160F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9CD0u; }
        if (ctx->pc != 0x3B9CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F60_0x160f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9CD0u; }
        if (ctx->pc != 0x3B9CD0u) { return; }
    }
    ctx->pc = 0x3B9CD0u;
label_3b9cd0:
    // 0x3b9cd0: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9CD0u;
    {
        const bool branch_taken_0x3b9cd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9cd0) {
            ctx->pc = 0x3B9CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9CD0u;
            // 0x3b9cd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9CE0u;
            goto label_3b9ce0;
        }
    }
    ctx->pc = 0x3B9CD8u;
    // 0x3b9cd8: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x3b9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    // 0x3b9cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b9cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9ce0:
    // 0x3b9ce0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b9ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b9ce4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b9ce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b9ce8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b9ce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b9cec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b9cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9CFCu;
            // 0x3b9d00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9D04u;
    // 0x3b9d04: 0x0  nop
    ctx->pc = 0x3b9d04u;
    // NOP
    // 0x3b9d08: 0x0  nop
    ctx->pc = 0x3b9d08u;
    // NOP
    // 0x3b9d0c: 0x0  nop
    ctx->pc = 0x3b9d0cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107C18
// Address: 0x107c18 - 0x107db8
void sub_00107C18_0x107c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C18_0x107c18");
#endif

    switch (ctx->pc) {
        case 0x107c50u: goto label_107c50;
        case 0x107c58u: goto label_107c58;
        case 0x107c60u: goto label_107c60;
        case 0x107c6cu: goto label_107c6c;
        case 0x107c88u: goto label_107c88;
        case 0x107cacu: goto label_107cac;
        case 0x107cbcu: goto label_107cbc;
        case 0x107cc8u: goto label_107cc8;
        case 0x107cd8u: goto label_107cd8;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cf4u: goto label_107cf4;
        case 0x107d00u: goto label_107d00;
        case 0x107d08u: goto label_107d08;
        case 0x107d14u: goto label_107d14;
        case 0x107d24u: goto label_107d24;
        case 0x107d44u: goto label_107d44;
        default: break;
    }

    ctx->pc = 0x107c18u;

    // 0x107c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x107c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107c20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107c2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x107c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107c34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x107c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107c3c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107c40: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x107c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c44: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x107c48: 0xc04234a  jal         func_108D28
    ctx->pc = 0x107C48u;
    SET_GPR_U32(ctx, 31, 0x107C50u);
    ctx->pc = 0x107C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C48u;
            // 0x107c4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D28u;
    if (runtime->hasFunction(0x108D28u)) {
        auto targetFn = runtime->lookupFunction(0x108D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C50u; }
        if (ctx->pc != 0x107C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D28_0x108d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C50u; }
        if (ctx->pc != 0x107C50u) { return; }
    }
    ctx->pc = 0x107C50u;
label_107c50:
    // 0x107c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107C50u;
    {
        const bool branch_taken_0x107c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C50u;
            // 0x107c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c50) {
            ctx->pc = 0x107C64u;
            goto label_107c64;
        }
    }
    ctx->pc = 0x107C58u;
label_107c58:
    // 0x107c58: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x107C58u;
    SET_GPR_U32(ctx, 31, 0x107C60u);
    ctx->pc = 0x107C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C58u;
            // 0x107c5c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C60u; }
        if (ctx->pc != 0x107C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C60u; }
        if (ctx->pc != 0x107C60u) { return; }
    }
    ctx->pc = 0x107C60u;
label_107c60:
    // 0x107c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107c64:
    // 0x107c64: 0xc041a4c  jal         func_106930
    ctx->pc = 0x107C64u;
    SET_GPR_U32(ctx, 31, 0x107C6Cu);
    ctx->pc = 0x107C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C64u;
            // 0x107c68: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C6Cu; }
        if (ctx->pc != 0x107C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C6Cu; }
        if (ctx->pc != 0x107C6Cu) { return; }
    }
    ctx->pc = 0x107C6Cu;
label_107c6c:
    // 0x107c6c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x107C6Cu;
    {
        const bool branch_taken_0x107c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x107C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C6Cu;
            // 0x107c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c6c) {
            ctx->pc = 0x107C80u;
            goto label_107c80;
        }
    }
    ctx->pc = 0x107C74u;
    // 0x107c74: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x107c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x107c78: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x107C78u;
    {
        const bool branch_taken_0x107c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c78) {
            ctx->pc = 0x107C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107c58;
        }
    }
    ctx->pc = 0x107C80u;
label_107c80:
    // 0x107c80: 0xc041a4c  jal         func_106930
    ctx->pc = 0x107C80u;
    SET_GPR_U32(ctx, 31, 0x107C88u);
    ctx->pc = 0x107C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C80u;
            // 0x107c84: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C88u; }
        if (ctx->pc != 0x107C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C88u; }
        if (ctx->pc != 0x107C88u) { return; }
    }
    ctx->pc = 0x107C88u;
label_107c88:
    // 0x107c88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c8c: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x107c90: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x107c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x107c94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107C94u;
    {
        const bool branch_taken_0x107c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C94u;
            // 0x107c98: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c94) {
            ctx->pc = 0x107CB4u;
            goto label_107cb4;
        }
    }
    ctx->pc = 0x107C9Cu;
    // 0x107c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ca0: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x107ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
    // 0x107ca4: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x107CA4u;
    SET_GPR_U32(ctx, 31, 0x107CACu);
    ctx->pc = 0x107CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CA4u;
            // 0x107ca8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CACu; }
        if (ctx->pc != 0x107CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CACu; }
        if (ctx->pc != 0x107CACu) { return; }
    }
    ctx->pc = 0x107CACu;
label_107cac:
    // 0x107cac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x107CACu;
    {
        const bool branch_taken_0x107cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CACu;
            // 0x107cb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cac) {
            ctx->pc = 0x107D98u;
            goto label_107d98;
        }
    }
    ctx->pc = 0x107CB4u;
label_107cb4:
    // 0x107cb4: 0xc042348  jal         func_108D20
    ctx->pc = 0x107CB4u;
    SET_GPR_U32(ctx, 31, 0x107CBCu);
    ctx->pc = 0x107CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CB4u;
            // 0x107cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D20u;
    if (runtime->hasFunction(0x108D20u)) {
        auto targetFn = runtime->lookupFunction(0x108D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CBCu; }
        if (ctx->pc != 0x107CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D20_0x108d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CBCu; }
        if (ctx->pc != 0x107CBCu) { return; }
    }
    ctx->pc = 0x107CBCu;
label_107cbc:
    // 0x107cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cc0: 0xc041a12  jal         func_106848
    ctx->pc = 0x107CC0u;
    SET_GPR_U32(ctx, 31, 0x107CC8u);
    ctx->pc = 0x107CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CC0u;
            // 0x107cc4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CC8u; }
        if (ctx->pc != 0x107CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CC8u; }
        if (ctx->pc != 0x107CC8u) { return; }
    }
    ctx->pc = 0x107CC8u;
label_107cc8:
    // 0x107cc8: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x107cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x107ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd0: 0xc041a12  jal         func_106848
    ctx->pc = 0x107CD0u;
    SET_GPR_U32(ctx, 31, 0x107CD8u);
    ctx->pc = 0x107CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CD0u;
            // 0x107cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CD8u; }
        if (ctx->pc != 0x107CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CD8u; }
        if (ctx->pc != 0x107CD8u) { return; }
    }
    ctx->pc = 0x107CD8u;
label_107cd8:
    // 0x107cd8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x107CD8u;
    {
        const bool branch_taken_0x107cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CD8u;
            // 0x107cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd8) {
            ctx->pc = 0x107D1Cu;
            goto label_107d1c;
        }
    }
    ctx->pc = 0x107CE0u;
    // 0x107ce0: 0xc041a12  jal         func_106848
    ctx->pc = 0x107CE0u;
    SET_GPR_U32(ctx, 31, 0x107CE8u);
    ctx->pc = 0x107CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CE0u;
            // 0x107ce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE8u; }
        if (ctx->pc != 0x107CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE8u; }
        if (ctx->pc != 0x107CE8u) { return; }
    }
    ctx->pc = 0x107CE8u;
label_107ce8:
    // 0x107ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cec: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x107CECu;
    SET_GPR_U32(ctx, 31, 0x107CF4u);
    ctx->pc = 0x107CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CECu;
            // 0x107cf0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CF4u; }
        if (ctx->pc != 0x107CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CF4u; }
        if (ctx->pc != 0x107CF4u) { return; }
    }
    ctx->pc = 0x107CF4u;
label_107cf4:
    // 0x107cf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107CF4u;
    {
        const bool branch_taken_0x107cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CF4u;
            // 0x107cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cf4) {
            ctx->pc = 0x107D0Cu;
            goto label_107d0c;
        }
    }
    ctx->pc = 0x107CFCu;
    // 0x107cfc: 0x0  nop
    ctx->pc = 0x107cfcu;
    // NOP
label_107d00:
    // 0x107d00: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x107D00u;
    SET_GPR_U32(ctx, 31, 0x107D08u);
    ctx->pc = 0x107D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D00u;
            // 0x107d04: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D08u; }
        if (ctx->pc != 0x107D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D08u; }
        if (ctx->pc != 0x107D08u) { return; }
    }
    ctx->pc = 0x107D08u;
label_107d08:
    // 0x107d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107d0c:
    // 0x107d0c: 0xc041a12  jal         func_106848
    ctx->pc = 0x107D0Cu;
    SET_GPR_U32(ctx, 31, 0x107D14u);
    ctx->pc = 0x107D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D0Cu;
            // 0x107d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D14u; }
        if (ctx->pc != 0x107D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D14u; }
        if (ctx->pc != 0x107D14u) { return; }
    }
    ctx->pc = 0x107D14u;
label_107d14:
    // 0x107d14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107D14u;
    {
        const bool branch_taken_0x107d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D14u;
            // 0x107d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d14) {
            ctx->pc = 0x107D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107d00;
        }
    }
    ctx->pc = 0x107D1Cu;
label_107d1c:
    // 0x107d1c: 0xc0418fa  jal         func_1063E8
    ctx->pc = 0x107D1Cu;
    SET_GPR_U32(ctx, 31, 0x107D24u);
    ctx->pc = 0x107D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D1Cu;
            // 0x107d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063E8u;
    if (runtime->hasFunction(0x1063E8u)) {
        auto targetFn = runtime->lookupFunction(0x1063E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D24u; }
        if (ctx->pc != 0x107D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063E8_0x1063e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D24u; }
        if (ctx->pc != 0x107D24u) { return; }
    }
    ctx->pc = 0x107D24u;
label_107d24:
    // 0x107d24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d28: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x107d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x107d2c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x107d30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107D30u;
    {
        const bool branch_taken_0x107d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D30u;
            // 0x107d34: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d30) {
            ctx->pc = 0x107D4Cu;
            goto label_107d4c;
        }
    }
    ctx->pc = 0x107D38u;
    // 0x107d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d3c: 0xc042e16  jal         func_10B858
    ctx->pc = 0x107D3Cu;
    SET_GPR_U32(ctx, 31, 0x107D44u);
    ctx->pc = 0x107D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D3Cu;
            // 0x107d40: 0x24a5e7c0  addiu       $a1, $a1, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D44u; }
        if (ctx->pc != 0x107D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D44u; }
        if (ctx->pc != 0x107D44u) { return; }
    }
    ctx->pc = 0x107D44u;
label_107d44:
    // 0x107d44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x107D44u;
    {
        const bool branch_taken_0x107d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D44u;
            // 0x107d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d44) {
            ctx->pc = 0x107D98u;
            goto label_107d98;
        }
    }
    ctx->pc = 0x107D4Cu;
label_107d4c:
    // 0x107d4c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x107d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x107d50: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x107d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x107d54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107d5c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x107d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d64: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x107d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107d6c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x107d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x107d70: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x107d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x107d74: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x107d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x107d78: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x107d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x107d7c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x107d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x107d80: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x107d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x107d84: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x107d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x107d88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x107d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x107d8c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x107d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x107d90: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x107d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x107d94: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x107d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_107d98:
    // 0x107d98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107d9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107da0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107da4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107da8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107db0: 0x3e00008  jr          $ra
    ctx->pc = 0x107DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DB0u;
            // 0x107db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107DB8u;
}

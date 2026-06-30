#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0D20
// Address: 0x1b0d20 - 0x1b0df0
void sub_001B0D20_0x1b0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0D20_0x1b0d20");
#endif

    switch (ctx->pc) {
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0dd8u: goto label_1b0dd8;
        default: break;
    }

    ctx->pc = 0x1b0d20u;

    // 0x1b0d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0d30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0d38: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B0D38u;
    SET_GPR_U32(ctx, 31, 0x1B0D40u);
    ctx->pc = 0x1B0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D38u;
            // 0x1b0d3c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D40u; }
        if (ctx->pc != 0x1B0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D40u; }
        if (ctx->pc != 0x1B0D40u) { return; }
    }
    ctx->pc = 0x1B0D40u;
label_1b0d40:
    // 0x1b0d40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b0d44: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x1b0d44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b0d48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b0d4c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b0d50: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1b0d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1b0d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0d58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1b0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1b0d5c: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x1b0d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x1b0d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0d68: 0x80430e0  j           func_10C380
    ctx->pc = 0x1B0D68u;
    ctx->pc = 0x1B0D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D68u;
            // 0x1b0d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C380_0x10c380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0d88: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B0D88u;
    SET_GPR_U32(ctx, 31, 0x1B0D90u);
    ctx->pc = 0x1B0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D88u;
            // 0x1b0d8c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D90u; }
        if (ctx->pc != 0x1B0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D90u; }
        if (ctx->pc != 0x1B0D90u) { return; }
    }
    ctx->pc = 0x1B0D90u;
label_1b0d90:
    // 0x1b0d90: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b0d94: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x1b0d94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b0d98: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b0d9c: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x1b0d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x1b0da0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1b0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1b0da4: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B0DA4u;
    {
        const bool branch_taken_0x1b0da4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B0DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DA4u;
            // 0x1b0da8: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0da4) {
            ctx->pc = 0x1B0DD0u;
            goto label_1b0dd0;
        }
    }
    ctx->pc = 0x1B0DACu;
    // 0x1b0dac: 0x0  nop
    ctx->pc = 0x1b0dacu;
    // NOP
label_1b0db0:
    // 0x1b0db0: 0x0  nop
    ctx->pc = 0x1b0db0u;
    // NOP
    // 0x1b0db4: 0x0  nop
    ctx->pc = 0x1b0db4u;
    // NOP
    // 0x1b0db8: 0x0  nop
    ctx->pc = 0x1b0db8u;
    // NOP
    // 0x1b0dbc: 0x0  nop
    ctx->pc = 0x1b0dbcu;
    // NOP
    // 0x1b0dc0: 0x0  nop
    ctx->pc = 0x1b0dc0u;
    // NOP
    // 0x1b0dc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B0DC4u;
    {
        const bool branch_taken_0x1b0dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0dc4) {
            ctx->pc = 0x1B0DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0db0;
        }
    }
    ctx->pc = 0x1B0DCCu;
    // 0x1b0dcc: 0x0  nop
    ctx->pc = 0x1b0dccu;
    // NOP
label_1b0dd0:
    // 0x1b0dd0: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x1B0DD0u;
    SET_GPR_U32(ctx, 31, 0x1B0DD8u);
    ctx->pc = 0x1B0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DD0u;
            // 0x1b0dd4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0DD8u; }
        if (ctx->pc != 0x1B0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0DD8u; }
        if (ctx->pc != 0x1B0DD8u) { return; }
    }
    ctx->pc = 0x1B0DD8u;
label_1b0dd8:
    // 0x1b0dd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b0dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DE8u;
            // 0x1b0dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0DF0u;
}

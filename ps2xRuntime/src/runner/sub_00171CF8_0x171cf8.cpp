#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171CF8
// Address: 0x171cf8 - 0x171d88
void sub_00171CF8_0x171cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CF8_0x171cf8");
#endif

    switch (ctx->pc) {
        case 0x171d18u: goto label_171d18;
        case 0x171d5cu: goto label_171d5c;
        case 0x171d68u: goto label_171d68;
        case 0x171d70u: goto label_171d70;
        default: break;
    }

    ctx->pc = 0x171cf8u;

    // 0x171cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x171CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CF8u;
            // 0x171cfc: 0x80820048  lb          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171D00u;
    // 0x171d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x171d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171d10: 0xc05e3ee  jal         func_178FB8
    ctx->pc = 0x171D10u;
    SET_GPR_U32(ctx, 31, 0x171D18u);
    ctx->pc = 0x171D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D10u;
            // 0x171d14: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178FB8u;
    if (runtime->hasFunction(0x178FB8u)) {
        auto targetFn = runtime->lookupFunction(0x178FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D18u; }
        if (ctx->pc != 0x171D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FB8_0x178fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D18u; }
        if (ctx->pc != 0x171D18u) { return; }
    }
    ctx->pc = 0x171D18u;
label_171d18:
    // 0x171d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x171d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x171d1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d24: 0x3e00008  jr          $ra
    ctx->pc = 0x171D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D24u;
            // 0x171d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171D2Cu;
    // 0x171d2c: 0x0  nop
    ctx->pc = 0x171d2cu;
    // NOP
    // 0x171d30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x171d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x171d34: 0x3e00008  jr          $ra
    ctx->pc = 0x171D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D34u;
            // 0x171d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171D3Cu;
    // 0x171d3c: 0x0  nop
    ctx->pc = 0x171d3cu;
    // NOP
    // 0x171d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171d54: 0xc05c846  jal         func_172118
    ctx->pc = 0x171D54u;
    SET_GPR_U32(ctx, 31, 0x171D5Cu);
    ctx->pc = 0x171D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D54u;
            // 0x171d58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D5Cu; }
        if (ctx->pc != 0x171D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D5Cu; }
        if (ctx->pc != 0x171D5Cu) { return; }
    }
    ctx->pc = 0x171D5Cu;
label_171d5c:
    // 0x171d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d60: 0xc05c762  jal         func_171D88
    ctx->pc = 0x171D60u;
    SET_GPR_U32(ctx, 31, 0x171D68u);
    ctx->pc = 0x171D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D60u;
            // 0x171d64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171D88u;
    if (runtime->hasFunction(0x171D88u)) {
        auto targetFn = runtime->lookupFunction(0x171D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D68u; }
        if (ctx->pc != 0x171D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171D88_0x171d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D68u; }
        if (ctx->pc != 0x171D68u) { return; }
    }
    ctx->pc = 0x171D68u;
label_171d68:
    // 0x171d68: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171D68u;
    SET_GPR_U32(ctx, 31, 0x171D70u);
    ctx->pc = 0x171D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D68u;
            // 0x171d6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D70u; }
        if (ctx->pc != 0x171D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D70u; }
        if (ctx->pc != 0x171D70u) { return; }
    }
    ctx->pc = 0x171D70u;
label_171d70:
    // 0x171d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d80: 0x3e00008  jr          $ra
    ctx->pc = 0x171D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D80u;
            // 0x171d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171D88u;
}

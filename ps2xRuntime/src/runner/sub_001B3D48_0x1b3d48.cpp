#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3D48
// Address: 0x1b3d48 - 0x1b3db0
void sub_001B3D48_0x1b3d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D48_0x1b3d48");
#endif

    switch (ctx->pc) {
        case 0x1b3d70u: goto label_1b3d70;
        case 0x1b3d84u: goto label_1b3d84;
        case 0x1b3d8cu: goto label_1b3d8c;
        case 0x1b3d98u: goto label_1b3d98;
        default: break;
    }

    ctx->pc = 0x1b3d48u;

    // 0x1b3d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3d5c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b3d60: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B3D60u;
    {
        const bool branch_taken_0x1b3d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B3D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D60u;
            // 0x1b3d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d60) {
            ctx->pc = 0x1B3D9Cu;
            goto label_1b3d9c;
        }
    }
    ctx->pc = 0x1B3D68u;
    // 0x1b3d68: 0xc06cf74  jal         func_1B3DD0
    ctx->pc = 0x1B3D68u;
    SET_GPR_U32(ctx, 31, 0x1B3D70u);
    ctx->pc = 0x1B3DD0u;
    if (runtime->hasFunction(0x1B3DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D70u; }
        if (ctx->pc != 0x1B3D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DD0_0x1b3dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D70u; }
        if (ctx->pc != 0x1B3D70u) { return; }
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B3D70u;
    {
        const bool branch_taken_0x1b3d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D70u;
            // 0x1b3d74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d70) {
            ctx->pc = 0x1B3D9Cu;
            goto label_1b3d9c;
        }
    }
    ctx->pc = 0x1B3D78u;
    // 0x1b3d78: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1b3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1b3d7c: 0xc06cf6c  jal         func_1B3DB0
    ctx->pc = 0x1B3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D84u);
    ctx->pc = 0x1B3D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D7Cu;
            // 0x1b3d80: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DB0u;
    if (runtime->hasFunction(0x1B3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D84u; }
        if (ctx->pc != 0x1B3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DB0_0x1b3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D84u; }
        if (ctx->pc != 0x1B3D84u) { return; }
    }
    ctx->pc = 0x1B3D84u;
label_1b3d84:
    // 0x1b3d84: 0xc06cf8c  jal         func_1B3E30
    ctx->pc = 0x1B3D84u;
    SET_GPR_U32(ctx, 31, 0x1B3D8Cu);
    ctx->pc = 0x1B3D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D84u;
            // 0x1b3d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E30u;
    if (runtime->hasFunction(0x1B3E30u)) {
        auto targetFn = runtime->lookupFunction(0x1B3E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D8Cu; }
        if (ctx->pc != 0x1B3D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3E30_0x1b3e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D8Cu; }
        if (ctx->pc != 0x1B3D8Cu) { return; }
    }
    ctx->pc = 0x1B3D8Cu;
label_1b3d8c:
    // 0x1b3d8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d90: 0xc06cf6c  jal         func_1B3DB0
    ctx->pc = 0x1B3D90u;
    SET_GPR_U32(ctx, 31, 0x1B3D98u);
    ctx->pc = 0x1B3D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D90u;
            // 0x1b3d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DB0u;
    if (runtime->hasFunction(0x1B3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D98u; }
        if (ctx->pc != 0x1B3D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DB0_0x1b3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D98u; }
        if (ctx->pc != 0x1B3D98u) { return; }
    }
    ctx->pc = 0x1B3D98u;
label_1b3d98:
    // 0x1b3d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d9c:
    // 0x1b3d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DA4u;
            // 0x1b3da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3DACu;
    // 0x1b3dac: 0x0  nop
    ctx->pc = 0x1b3dacu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2A20
// Address: 0x1a2a20 - 0x1a2a90
void sub_001A2A20_0x1a2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2A20_0x1a2a20");
#endif

    switch (ctx->pc) {
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a70u: goto label_1a2a70;
        default: break;
    }

    ctx->pc = 0x1a2a20u;

    // 0x1a2a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2a24: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1a2a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2a30: 0x8c516c14  lw          $s1, 0x6C14($v0)
    ctx->pc = 0x1a2a30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27668)));
    // 0x1a2a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2a38: 0x16230010  bne         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2A38u;
    {
        const bool branch_taken_0x1a2a38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A38u;
            // 0x1a2a3c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a38) {
            ctx->pc = 0x1A2A7Cu;
            goto label_1a2a7c;
        }
    }
    ctx->pc = 0x1A2A40u;
    // 0x1a2a40: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A2A40u;
    SET_GPR_U32(ctx, 31, 0x1A2A48u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A48u; }
        if (ctx->pc != 0x1A2A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A48u; }
        if (ctx->pc != 0x1A2A48u) { return; }
    }
    ctx->pc = 0x1A2A48u;
label_1a2a48:
    // 0x1a2a48: 0xc068a80  jal         func_1A2A00
    ctx->pc = 0x1A2A48u;
    SET_GPR_U32(ctx, 31, 0x1A2A50u);
    ctx->pc = 0x1A2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A48u;
            // 0x1a2a4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A00u;
    if (runtime->hasFunction(0x1A2A00u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A50u; }
        if (ctx->pc != 0x1A2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A00_0x1a2a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A50u; }
        if (ctx->pc != 0x1A2A50u) { return; }
    }
    ctx->pc = 0x1A2A50u;
label_1a2a50:
    // 0x1a2a50: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2A50u;
    {
        const bool branch_taken_0x1a2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A2A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A50u;
            // 0x1a2a54: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a50) {
            ctx->pc = 0x1A2A7Cu;
            goto label_1a2a7c;
        }
    }
    ctx->pc = 0x1A2A58u;
    // 0x1a2a58: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2a5c: 0x0  nop
    ctx->pc = 0x1a2a5cu;
    // NOP
label_1a2a60:
    // 0x1a2a60: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2A60u;
    {
        const bool branch_taken_0x1a2a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a60) {
            ctx->pc = 0x1A2A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A60u;
            // 0x1a2a64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2A74u;
            goto label_1a2a74;
        }
    }
    ctx->pc = 0x1A2A68u;
    // 0x1a2a68: 0xc068288  jal         func_1A0A20
    ctx->pc = 0x1A2A68u;
    SET_GPR_U32(ctx, 31, 0x1A2A70u);
    ctx->pc = 0x1A2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A68u;
            // 0x1a2a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0A20u;
    if (runtime->hasFunction(0x1A0A20u)) {
        auto targetFn = runtime->lookupFunction(0x1A0A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A70u; }
        if (ctx->pc != 0x1A2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0A20_0x1a0a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A70u; }
        if (ctx->pc != 0x1A2A70u) { return; }
    }
    ctx->pc = 0x1A2A70u;
label_1a2a70:
    // 0x1a2a70: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a2a74:
    // 0x1a2a74: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2A74u;
    {
        const bool branch_taken_0x1a2a74 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A2A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A74u;
            // 0x1a2a78: 0x26100594  addiu       $s0, $s0, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a74) {
            ctx->pc = 0x1A2A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2a60;
        }
    }
    ctx->pc = 0x1A2A7Cu;
label_1a2a7c:
    // 0x1a2a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2a80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A88u;
            // 0x1a2a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2A90u;
}

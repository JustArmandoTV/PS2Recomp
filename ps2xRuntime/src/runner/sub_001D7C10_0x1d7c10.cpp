#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7C10
// Address: 0x1d7c10 - 0x1d7c80
void sub_001D7C10_0x1d7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7C10_0x1d7c10");
#endif

    switch (ctx->pc) {
        case 0x1d7c34u: goto label_1d7c34;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c60u: goto label_1d7c60;
        default: break;
    }

    ctx->pc = 0x1d7c10u;

    // 0x1d7c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7c1c: 0x8c830d90  lw          $v1, 0xD90($a0)
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3472)));
    // 0x1d7c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c24: 0x26060d8c  addiu       $a2, $s0, 0xD8C
    ctx->pc = 0x1d7c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3468));
    // 0x1d7c28: 0x10660011  beq         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7C28u;
    {
        const bool branch_taken_0x1d7c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d7c28) {
            ctx->pc = 0x1D7C70u;
            goto label_1d7c70;
        }
    }
    ctx->pc = 0x1D7C30u;
    // 0x1d7c30: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d7c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1d7c34:
    // 0x1d7c34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d7c34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d7c38: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d7c3c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7C3Cu;
    {
        const bool branch_taken_0x1d7c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d7c3c) {
            ctx->pc = 0x1D7C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C3Cu;
            // 0x1d7c40: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C68u;
            goto label_1d7c68;
        }
    }
    ctx->pc = 0x1D7C44u;
    // 0x1d7c44: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x1d7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x1d7c48: 0x26050d80  addiu       $a1, $s0, 0xD80
    ctx->pc = 0x1d7c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
    // 0x1d7c4c: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1d7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1d7c50: 0xc0582ac  jal         func_160AB0
    ctx->pc = 0x1D7C50u;
    SET_GPR_U32(ctx, 31, 0x1D7C58u);
    ctx->pc = 0x1D7C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C50u;
            // 0x1d7c54: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C58u; }
        if (ctx->pc != 0x1D7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C58u; }
        if (ctx->pc != 0x1D7C58u) { return; }
    }
    ctx->pc = 0x1D7C58u;
label_1d7c58:
    // 0x1d7c58: 0xc075ee8  jal         func_1D7BA0
    ctx->pc = 0x1D7C58u;
    SET_GPR_U32(ctx, 31, 0x1D7C60u);
    ctx->pc = 0x1D7C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C58u;
            // 0x1d7c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C60u; }
        if (ctx->pc != 0x1D7C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C60u; }
        if (ctx->pc != 0x1D7C60u) { return; }
    }
    ctx->pc = 0x1D7C60u;
label_1d7c60:
    // 0x1d7c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7C60u;
    {
        const bool branch_taken_0x1d7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c60) {
            ctx->pc = 0x1D7C70u;
            goto label_1d7c70;
        }
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0x5466fff2  bnel        $v1, $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D7C68u;
    {
        const bool branch_taken_0x1d7c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1d7c68) {
            ctx->pc = 0x1D7C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C68u;
            // 0x1d7c6c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7c34;
        }
    }
    ctx->pc = 0x1D7C70u;
label_1d7c70:
    // 0x1d7c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C78u;
            // 0x1d7c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7C80u;
}

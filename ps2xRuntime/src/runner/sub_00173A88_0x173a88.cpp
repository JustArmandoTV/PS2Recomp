#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173A88
// Address: 0x173a88 - 0x173ad8
void sub_00173A88_0x173a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173A88_0x173a88");
#endif

    switch (ctx->pc) {
        case 0x173aa0u: goto label_173aa0;
        default: break;
    }

    ctx->pc = 0x173a88u;

    // 0x173a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173a8c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173A8Cu;
    {
        const bool branch_taken_0x173a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A8Cu;
            // 0x173a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a8c) {
            ctx->pc = 0x173AA8u;
            goto label_173aa8;
        }
    }
    ctx->pc = 0x173A94u;
    // 0x173a94: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173a98: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173A98u;
    SET_GPR_U32(ctx, 31, 0x173AA0u);
    ctx->pc = 0x173A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A98u;
            // 0x173a9c: 0x24844218  addiu       $a0, $a0, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AA0u; }
        if (ctx->pc != 0x173AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AA0u; }
        if (ctx->pc != 0x173AA0u) { return; }
    }
    ctx->pc = 0x173AA0u;
label_173aa0:
    // 0x173aa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173AA0u;
    {
        const bool branch_taken_0x173aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AA0u;
            // 0x173aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173aa0) {
            ctx->pc = 0x173AC8u;
            goto label_173ac8;
        }
    }
    ctx->pc = 0x173AA8u;
label_173aa8:
    // 0x173aa8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x173aac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x173aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173ab0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173AB0u;
    {
        const bool branch_taken_0x173ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ab0) {
            ctx->pc = 0x173AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173AB0u;
            // 0x173ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173AC8u;
            goto label_173ac8;
        }
    }
    ctx->pc = 0x173AB8u;
    // 0x173ab8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x173ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ac0: 0x805c064  j           func_170190
    ctx->pc = 0x173AC0u;
    ctx->pc = 0x173AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173AC0u;
            // 0x173ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170190_0x170190(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173acc: 0x3e00008  jr          $ra
    ctx->pc = 0x173ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173ACCu;
            // 0x173ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173AD4u;
    // 0x173ad4: 0x0  nop
    ctx->pc = 0x173ad4u;
    // NOP
}

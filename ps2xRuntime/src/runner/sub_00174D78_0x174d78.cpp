#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174D78
// Address: 0x174d78 - 0x174da8
void sub_00174D78_0x174d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D78_0x174d78");
#endif

    switch (ctx->pc) {
        case 0x174d90u: goto label_174d90;
        default: break;
    }

    ctx->pc = 0x174d78u;

    // 0x174d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174d7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174D7Cu;
    {
        const bool branch_taken_0x174d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D7Cu;
            // 0x174d80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d7c) {
            ctx->pc = 0x174D98u;
            goto label_174d98;
        }
    }
    ctx->pc = 0x174D84u;
    // 0x174d84: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174d88: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x174D88u;
    SET_GPR_U32(ctx, 31, 0x174D90u);
    ctx->pc = 0x174D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D88u;
            // 0x174d8c: 0x24844670  addiu       $a0, $a0, 0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D90u; }
        if (ctx->pc != 0x174D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D90u; }
        if (ctx->pc != 0x174D90u) { return; }
    }
    ctx->pc = 0x174D90u;
label_174d90:
    // 0x174d90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174D90u;
    {
        const bool branch_taken_0x174d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D90u;
            // 0x174d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d90) {
            ctx->pc = 0x174D9Cu;
            goto label_174d9c;
        }
    }
    ctx->pc = 0x174D98u;
label_174d98:
    // 0x174d98: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x174d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_174d9c:
    // 0x174d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174da0: 0x3e00008  jr          $ra
    ctx->pc = 0x174DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174DA0u;
            // 0x174da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174DA8u;
}

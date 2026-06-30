#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CCE0
// Address: 0x19cce0 - 0x19cd20
void sub_0019CCE0_0x19cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CCE0_0x19cce0");
#endif

    switch (ctx->pc) {
        case 0x19ccfcu: goto label_19ccfc;
        case 0x19cd10u: goto label_19cd10;
        default: break;
    }

    ctx->pc = 0x19cce0u;

    // 0x19cce0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19cce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cce8: 0x8c43993c  lw          $v1, -0x66C4($v0)
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940988)));
    // 0x19ccec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CCECu;
    {
        const bool branch_taken_0x19ccec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCECu;
            // 0x19ccf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccec) {
            ctx->pc = 0x19CD08u;
            goto label_19cd08;
        }
    }
    ctx->pc = 0x19CCF4u;
    // 0x19ccf4: 0xc067354  jal         func_19CD50
    ctx->pc = 0x19CCF4u;
    SET_GPR_U32(ctx, 31, 0x19CCFCu);
    ctx->pc = 0x19CD50u;
    if (runtime->hasFunction(0x19CD50u)) {
        auto targetFn = runtime->lookupFunction(0x19CD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCFCu; }
        if (ctx->pc != 0x19CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CD50_0x19cd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCFCu; }
        if (ctx->pc != 0x19CCFCu) { return; }
    }
    ctx->pc = 0x19CCFCu;
label_19ccfc:
    // 0x19ccfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CCFCu;
    {
        const bool branch_taken_0x19ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCFCu;
            // 0x19cd00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccfc) {
            ctx->pc = 0x19CD14u;
            goto label_19cd14;
        }
    }
    ctx->pc = 0x19CD04u;
    // 0x19cd04: 0x0  nop
    ctx->pc = 0x19cd04u;
    // NOP
label_19cd08:
    // 0x19cd08: 0xc067348  jal         func_19CD20
    ctx->pc = 0x19CD08u;
    SET_GPR_U32(ctx, 31, 0x19CD10u);
    ctx->pc = 0x19CD20u;
    if (runtime->hasFunction(0x19CD20u)) {
        auto targetFn = runtime->lookupFunction(0x19CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD10u; }
        if (ctx->pc != 0x19CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CD20_0x19cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD10u; }
        if (ctx->pc != 0x19CD10u) { return; }
    }
    ctx->pc = 0x19CD10u;
label_19cd10:
    // 0x19cd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cd14:
    // 0x19cd14: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD14u;
            // 0x19cd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CD1Cu;
    // 0x19cd1c: 0x0  nop
    ctx->pc = 0x19cd1cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CC00
// Address: 0x19cc00 - 0x19cc40
void sub_0019CC00_0x19cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CC00_0x19cc00");
#endif

    switch (ctx->pc) {
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc30u: goto label_19cc30;
        default: break;
    }

    ctx->pc = 0x19cc00u;

    // 0x19cc00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19cc04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cc08: 0x8c43993c  lw          $v1, -0x66C4($v0)
    ctx->pc = 0x19cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940988)));
    // 0x19cc0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CC0Cu;
    {
        const bool branch_taken_0x19cc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC0Cu;
            // 0x19cc10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc0c) {
            ctx->pc = 0x19CC28u;
            goto label_19cc28;
        }
    }
    ctx->pc = 0x19CC14u;
    // 0x19cc14: 0xc06731e  jal         func_19CC78
    ctx->pc = 0x19CC14u;
    SET_GPR_U32(ctx, 31, 0x19CC1Cu);
    ctx->pc = 0x19CC78u;
    if (runtime->hasFunction(0x19CC78u)) {
        auto targetFn = runtime->lookupFunction(0x19CC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC1Cu; }
        if (ctx->pc != 0x19CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CC78_0x19cc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC1Cu; }
        if (ctx->pc != 0x19CC1Cu) { return; }
    }
    ctx->pc = 0x19CC1Cu;
label_19cc1c:
    // 0x19cc1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CC1Cu;
    {
        const bool branch_taken_0x19cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC1Cu;
            // 0x19cc20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc1c) {
            ctx->pc = 0x19CC34u;
            goto label_19cc34;
        }
    }
    ctx->pc = 0x19CC24u;
    // 0x19cc24: 0x0  nop
    ctx->pc = 0x19cc24u;
    // NOP
label_19cc28:
    // 0x19cc28: 0xc067310  jal         func_19CC40
    ctx->pc = 0x19CC28u;
    SET_GPR_U32(ctx, 31, 0x19CC30u);
    ctx->pc = 0x19CC40u;
    if (runtime->hasFunction(0x19CC40u)) {
        auto targetFn = runtime->lookupFunction(0x19CC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC30u; }
        if (ctx->pc != 0x19CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CC40_0x19cc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC30u; }
        if (ctx->pc != 0x19CC30u) { return; }
    }
    ctx->pc = 0x19CC30u;
label_19cc30:
    // 0x19cc30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cc34:
    // 0x19cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC34u;
            // 0x19cc38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CC3Cu;
    // 0x19cc3c: 0x0  nop
    ctx->pc = 0x19cc3cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234710
// Address: 0x234710 - 0x234730
void sub_00234710_0x234710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234710_0x234710");
#endif

    switch (ctx->pc) {
        case 0x234724u: goto label_234724;
        default: break;
    }

    ctx->pc = 0x234710u;

    // 0x234710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234718: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x234718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x23471c: 0xc08efec  jal         func_23BFB0
    ctx->pc = 0x23471Cu;
    SET_GPR_U32(ctx, 31, 0x234724u);
    ctx->pc = 0x234720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23471Cu;
            // 0x234720: 0x8c84007c  lw          $a0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BFB0u;
    if (runtime->hasFunction(0x23BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x23BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234724u; }
        if (ctx->pc != 0x234724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BFB0_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234724u; }
        if (ctx->pc != 0x234724u) { return; }
    }
    ctx->pc = 0x234724u;
label_234724:
    // 0x234724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234728: 0x3e00008  jr          $ra
    ctx->pc = 0x234728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234728u;
            // 0x23472c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234730u;
}

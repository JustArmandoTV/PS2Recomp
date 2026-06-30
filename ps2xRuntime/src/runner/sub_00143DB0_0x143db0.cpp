#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143DB0
// Address: 0x143db0 - 0x143de0
void sub_00143DB0_0x143db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143DB0_0x143db0");
#endif

    switch (ctx->pc) {
        case 0x143dccu: goto label_143dcc;
        default: break;
    }

    ctx->pc = 0x143db0u;

    // 0x143db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143db8: 0x8f8482b0  lw          $a0, -0x7D50($gp)
    ctx->pc = 0x143db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x143dbc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x143DBCu;
    {
        const bool branch_taken_0x143dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143dbc) {
            ctx->pc = 0x143DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143DBCu;
            // 0x143dc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143DD4u;
            goto label_143dd4;
        }
    }
    ctx->pc = 0x143DC4u;
    // 0x143dc4: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x143DC4u;
    SET_GPR_U32(ctx, 31, 0x143DCCu);
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DCCu; }
        if (ctx->pc != 0x143DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DCCu; }
        if (ctx->pc != 0x143DCCu) { return; }
    }
    ctx->pc = 0x143DCCu;
label_143dcc:
    // 0x143dcc: 0xaf8082b0  sw          $zero, -0x7D50($gp)
    ctx->pc = 0x143dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 0));
    // 0x143dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143dd4:
    // 0x143dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x143DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DD4u;
            // 0x143dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143DDCu;
    // 0x143ddc: 0x0  nop
    ctx->pc = 0x143ddcu;
    // NOP
}

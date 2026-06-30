#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1C00
// Address: 0x1f1c00 - 0x1f1c30
void sub_001F1C00_0x1f1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C00_0x1f1c00");
#endif

    switch (ctx->pc) {
        case 0x1f1c1cu: goto label_1f1c1c;
        default: break;
    }

    ctx->pc = 0x1f1c00u;

    // 0x1f1c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1c04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c08: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1c10: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f1c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c14: 0xc07c70c  jal         func_1F1C30
    ctx->pc = 0x1F1C14u;
    SET_GPR_U32(ctx, 31, 0x1F1C1Cu);
    ctx->pc = 0x1F1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C14u;
            // 0x1f1c18: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C30u;
    if (runtime->hasFunction(0x1F1C30u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C1Cu; }
        if (ctx->pc != 0x1F1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C30_0x1f1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C1Cu; }
        if (ctx->pc != 0x1F1C1Cu) { return; }
    }
    ctx->pc = 0x1F1C1Cu;
label_1f1c1c:
    // 0x1f1c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C20u;
            // 0x1f1c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1C28u;
    // 0x1f1c28: 0x0  nop
    ctx->pc = 0x1f1c28u;
    // NOP
    // 0x1f1c2c: 0x0  nop
    ctx->pc = 0x1f1c2cu;
    // NOP
}

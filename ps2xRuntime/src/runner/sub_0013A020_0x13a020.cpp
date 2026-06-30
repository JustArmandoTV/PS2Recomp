#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A020
// Address: 0x13a020 - 0x13a050
void sub_0013A020_0x13a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A020_0x13a020");
#endif

    switch (ctx->pc) {
        case 0x13a034u: goto label_13a034;
        default: break;
    }

    ctx->pc = 0x13a020u;

    // 0x13a020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a028: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x13a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13a02c: 0xc0563a0  jal         func_158E80
    ctx->pc = 0x13A02Cu;
    SET_GPR_U32(ctx, 31, 0x13A034u);
    ctx->pc = 0x13A030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A02Cu;
            // 0x13a030: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E80u;
    if (runtime->hasFunction(0x158E80u)) {
        auto targetFn = runtime->lookupFunction(0x158E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A034u; }
        if (ctx->pc != 0x13A034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158E80_0x158e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A034u; }
        if (ctx->pc != 0x13A034u) { return; }
    }
    ctx->pc = 0x13A034u;
label_13a034:
    // 0x13a034: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A03Cu;
            // 0x13a040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A044u;
    // 0x13a044: 0x0  nop
    ctx->pc = 0x13a044u;
    // NOP
    // 0x13a048: 0x0  nop
    ctx->pc = 0x13a048u;
    // NOP
    // 0x13a04c: 0x0  nop
    ctx->pc = 0x13a04cu;
    // NOP
}

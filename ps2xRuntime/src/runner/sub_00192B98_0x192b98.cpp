#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192B98
// Address: 0x192b98 - 0x192bd0
void sub_00192B98_0x192b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B98_0x192b98");
#endif

    switch (ctx->pc) {
        case 0x192ba8u: goto label_192ba8;
        default: break;
    }

    ctx->pc = 0x192b98u;

    // 0x192b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192ba0: 0xc064af4  jal         func_192BD0
    ctx->pc = 0x192BA0u;
    SET_GPR_U32(ctx, 31, 0x192BA8u);
    ctx->pc = 0x192BD0u;
    if (runtime->hasFunction(0x192BD0u)) {
        auto targetFn = runtime->lookupFunction(0x192BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BA8u; }
        if (ctx->pc != 0x192BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192BD0_0x192bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BA8u; }
        if (ctx->pc != 0x192BA8u) { return; }
    }
    ctx->pc = 0x192BA8u;
label_192ba8:
    // 0x192ba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x192ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192BACu;
    {
        const bool branch_taken_0x192bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BACu;
            // 0x192bb0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bac) {
            ctx->pc = 0x192BC0u;
            goto label_192bc0;
        }
    }
    ctx->pc = 0x192BB4u;
    // 0x192bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192bb8: 0x8064b0a  j           func_192C28
    ctx->pc = 0x192BB8u;
    ctx->pc = 0x192BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BB8u;
            // 0x192bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192C28u;
    {
        auto targetFn = runtime->lookupFunction(0x192C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192BC0u;
label_192bc0:
    // 0x192bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x192BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BC4u;
            // 0x192bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192BCCu;
    // 0x192bcc: 0x0  nop
    ctx->pc = 0x192bccu;
    // NOP
}

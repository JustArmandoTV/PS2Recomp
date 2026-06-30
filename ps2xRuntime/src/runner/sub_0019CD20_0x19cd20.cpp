#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CD20
// Address: 0x19cd20 - 0x19cd50
void sub_0019CD20_0x19cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD20_0x19cd20");
#endif

    switch (ctx->pc) {
        case 0x19cd40u: goto label_19cd40;
        default: break;
    }

    ctx->pc = 0x19cd20u;

    // 0x19cd20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19cd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd24: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x19cd28: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19cd2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cd30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19cd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cd38: 0xc04a508  jal         func_129420
    ctx->pc = 0x19CD38u;
    SET_GPR_U32(ctx, 31, 0x19CD40u);
    ctx->pc = 0x19CD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD38u;
            // 0x19cd3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD40u; }
        if (ctx->pc != 0x19CD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD40u; }
        if (ctx->pc != 0x19CD40u) { return; }
    }
    ctx->pc = 0x19CD40u;
label_19cd40:
    // 0x19cd40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD48u;
            // 0x19cd4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CD50u;
}

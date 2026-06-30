#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CC40
// Address: 0x19cc40 - 0x19cc78
void sub_0019CC40_0x19cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CC40_0x19cc40");
#endif

    switch (ctx->pc) {
        case 0x19cc64u: goto label_19cc64;
        default: break;
    }

    ctx->pc = 0x19cc40u;

    // 0x19cc40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19cc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x19cc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x19cc48: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x19cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x19cc4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cc50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19cc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc54: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19cc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cc5c: 0xc04a508  jal         func_129420
    ctx->pc = 0x19CC5Cu;
    SET_GPR_U32(ctx, 31, 0x19CC64u);
    ctx->pc = 0x19CC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC5Cu;
            // 0x19cc60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC64u; }
        if (ctx->pc != 0x19CC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC64u; }
        if (ctx->pc != 0x19CC64u) { return; }
    }
    ctx->pc = 0x19CC64u;
label_19cc64:
    // 0x19cc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC6Cu;
            // 0x19cc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CC74u;
    // 0x19cc74: 0x0  nop
    ctx->pc = 0x19cc74u;
    // NOP
}

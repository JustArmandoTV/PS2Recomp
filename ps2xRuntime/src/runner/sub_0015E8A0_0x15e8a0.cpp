#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E8A0
// Address: 0x15e8a0 - 0x15e8d0
void sub_0015E8A0_0x15e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E8A0_0x15e8a0");
#endif

    switch (ctx->pc) {
        case 0x15e8b4u: goto label_15e8b4;
        default: break;
    }

    ctx->pc = 0x15e8a0u;

    // 0x15e8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e8ac: 0xc057f80  jal         func_15FE00
    ctx->pc = 0x15E8ACu;
    SET_GPR_U32(ctx, 31, 0x15E8B4u);
    ctx->pc = 0x15E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8ACu;
            // 0x15e8b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE00u;
    if (runtime->hasFunction(0x15FE00u)) {
        auto targetFn = runtime->lookupFunction(0x15FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B4u; }
        if (ctx->pc != 0x15E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE00_0x15fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B4u; }
        if (ctx->pc != 0x15E8B4u) { return; }
    }
    ctx->pc = 0x15E8B4u;
label_15e8b4:
    // 0x15e8b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8C0u;
            // 0x15e8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E8C8u;
    // 0x15e8c8: 0x0  nop
    ctx->pc = 0x15e8c8u;
    // NOP
    // 0x15e8cc: 0x0  nop
    ctx->pc = 0x15e8ccu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B0D0
// Address: 0x16b0d0 - 0x16b100
void sub_0016B0D0_0x16b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B0D0_0x16b0d0");
#endif

    switch (ctx->pc) {
        case 0x16b0f0u: goto label_16b0f0;
        default: break;
    }

    ctx->pc = 0x16b0d0u;

    // 0x16b0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b0d4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x16b0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0d8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x16b0d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x16b0dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16b0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b0e8: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x16B0E8u;
    SET_GPR_U32(ctx, 31, 0x16B0F0u);
    ctx->pc = 0x16B0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0E8u;
            // 0x16b0ec: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0F0u; }
        if (ctx->pc != 0x16B0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0F0u; }
        if (ctx->pc != 0x16B0F0u) { return; }
    }
    ctx->pc = 0x16B0F0u;
label_16b0f0:
    // 0x16b0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0F4u;
            // 0x16b0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B0FCu;
    // 0x16b0fc: 0x0  nop
    ctx->pc = 0x16b0fcu;
    // NOP
}

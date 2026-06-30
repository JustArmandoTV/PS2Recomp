#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D470
// Address: 0x16d470 - 0x16d498
void sub_0016D470_0x16d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D470_0x16d470");
#endif

    switch (ctx->pc) {
        case 0x16d480u: goto label_16d480;
        default: break;
    }

    ctx->pc = 0x16d470u;

    // 0x16d470: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d474: 0x8c62aa34  lw          $v0, -0x55CC($v1)
    ctx->pc = 0x16d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945332)));
    // 0x16d478: 0x3e00008  jr          $ra
    ctx->pc = 0x16D478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D478u;
            // 0x16d47c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D480u;
label_16d480:
    // 0x16d480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d48c: 0x806219c  j           func_188670
    ctx->pc = 0x16D48Cu;
    ctx->pc = 0x16D490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D48Cu;
            // 0x16d490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188670u;
    {
        auto targetFn = runtime->lookupFunction(0x188670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16D494u;
    // 0x16d494: 0x0  nop
    ctx->pc = 0x16d494u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001814A8
// Address: 0x1814a8 - 0x1814c8
void sub_001814A8_0x1814a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001814A8_0x1814a8");
#endif

    switch (ctx->pc) {
        case 0x1814b8u: goto label_1814b8;
        default: break;
    }

    ctx->pc = 0x1814a8u;

    // 0x1814a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1814a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1814ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1814acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1814b0: 0xc0604e4  jal         func_181390
    ctx->pc = 0x1814B0u;
    SET_GPR_U32(ctx, 31, 0x1814B8u);
    ctx->pc = 0x1814B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814B0u;
            // 0x1814b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181390u;
    if (runtime->hasFunction(0x181390u)) {
        auto targetFn = runtime->lookupFunction(0x181390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814B8u; }
        if (ctx->pc != 0x1814B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181390_0x181390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814B8u; }
        if (ctx->pc != 0x1814B8u) { return; }
    }
    ctx->pc = 0x1814B8u;
label_1814b8:
    // 0x1814b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1814bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1814c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1814C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814C0u;
            // 0x1814c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1814C8u;
}

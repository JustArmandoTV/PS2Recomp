#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125F40
// Address: 0x125f40 - 0x125f70
void sub_00125F40_0x125f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F40_0x125f40");
#endif

    switch (ctx->pc) {
        case 0x125f64u: goto label_125f64;
        default: break;
    }

    ctx->pc = 0x125f40u;

    // 0x125f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125f44: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125f50: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x125f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x125f54: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x125f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x125f58: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x125f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x125f5c: 0xc049524  jal         func_125490
    ctx->pc = 0x125F5Cu;
    SET_GPR_U32(ctx, 31, 0x125F64u);
    ctx->pc = 0x125F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F5Cu;
            // 0x125f60: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F64u; }
        if (ctx->pc != 0x125F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F64u; }
        if (ctx->pc != 0x125F64u) { return; }
    }
    ctx->pc = 0x125F64u;
label_125f64:
    // 0x125f64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125f68: 0x3e00008  jr          $ra
    ctx->pc = 0x125F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F68u;
            // 0x125f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125F70u;
}

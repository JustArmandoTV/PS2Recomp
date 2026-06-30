#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A730
// Address: 0x19a730 - 0x19a760
void sub_0019A730_0x19a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A730_0x19a730");
#endif

    switch (ctx->pc) {
        case 0x19a740u: goto label_19a740;
        default: break;
    }

    ctx->pc = 0x19a730u;

    // 0x19a730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a738: 0xc06eaa6  jal         func_1BAA98
    ctx->pc = 0x19A738u;
    SET_GPR_U32(ctx, 31, 0x19A740u);
    ctx->pc = 0x19A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A738u;
            // 0x19a73c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA98u;
    if (runtime->hasFunction(0x1BAA98u)) {
        auto targetFn = runtime->lookupFunction(0x1BAA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A740u; }
        if (ctx->pc != 0x19A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAA98_0x1baa98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A740u; }
        if (ctx->pc != 0x19A740u) { return; }
    }
    ctx->pc = 0x19A740u;
label_19a740:
    // 0x19a740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a744: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19a744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a748: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x19a748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19a74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a750: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a754: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x19a754u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x19a758: 0x3e00008  jr          $ra
    ctx->pc = 0x19A758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A758u;
            // 0x19a75c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A760u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAE70
// Address: 0x2aae70 - 0x2aaea0
void sub_002AAE70_0x2aae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAE70_0x2aae70");
#endif

    switch (ctx->pc) {
        case 0x2aae84u: goto label_2aae84;
        default: break;
    }

    ctx->pc = 0x2aae70u;

    // 0x2aae70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aae74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aae78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aae7c: 0xc0aaba8  jal         func_2AAEA0
    ctx->pc = 0x2AAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE84u);
    ctx->pc = 0x2AAE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE7Cu;
            // 0x2aae80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEA0u;
    if (runtime->hasFunction(0x2AAEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2AAEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE84u; }
        if (ctx->pc != 0x2AAE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAEA0_0x2aaea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE84u; }
        if (ctx->pc != 0x2AAE84u) { return; }
    }
    ctx->pc = 0x2AAE84u;
label_2aae84:
    // 0x2aae84: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2aae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2aae88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aae88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae8c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2aae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2aae90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aae94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aae94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aae98: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE98u;
            // 0x2aae9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAEA0u;
}

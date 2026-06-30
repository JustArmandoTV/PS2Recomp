#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100800
// Address: 0x100800 - 0x100830
void sub_00100800_0x100800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100800_0x100800");
#endif

    switch (ctx->pc) {
        case 0x100810u: goto label_100810;
        default: break;
    }

    ctx->pc = 0x100800u;

    // 0x100800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100808: 0xc049760  jal         func_125D80
    ctx->pc = 0x100808u;
    SET_GPR_U32(ctx, 31, 0x100810u);
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100810u; }
        if (ctx->pc != 0x100810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100810u; }
        if (ctx->pc != 0x100810u) { return; }
    }
    ctx->pc = 0x100810u;
label_100810:
    // 0x100810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100814: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x100814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x100818: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10081c: 0x3e00008  jr          $ra
    ctx->pc = 0x10081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10081Cu;
            // 0x100820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100824u;
    // 0x100824: 0x0  nop
    ctx->pc = 0x100824u;
    // NOP
    // 0x100828: 0x0  nop
    ctx->pc = 0x100828u;
    // NOP
    // 0x10082c: 0x0  nop
    ctx->pc = 0x10082cu;
    // NOP
}

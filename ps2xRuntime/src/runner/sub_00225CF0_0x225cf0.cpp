#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225CF0
// Address: 0x225cf0 - 0x225d30
void sub_00225CF0_0x225cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225CF0_0x225cf0");
#endif

    switch (ctx->pc) {
        case 0x225d04u: goto label_225d04;
        default: break;
    }

    ctx->pc = 0x225cf0u;

    // 0x225cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225cfc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x225CFCu;
    SET_GPR_U32(ctx, 31, 0x225D04u);
    ctx->pc = 0x225D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225CFCu;
            // 0x225d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D04u; }
        if (ctx->pc != 0x225D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225D30_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D04u; }
        if (ctx->pc != 0x225D04u) { return; }
    }
    ctx->pc = 0x225D04u;
label_225d04:
    // 0x225d04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x225d08: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225d0c: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x225d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x225d10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x225d14: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x225d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x225d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d24: 0x3e00008  jr          $ra
    ctx->pc = 0x225D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225D24u;
            // 0x225d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225D2Cu;
    // 0x225d2c: 0x0  nop
    ctx->pc = 0x225d2cu;
    // NOP
}

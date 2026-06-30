#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B69F0
// Address: 0x2b69f0 - 0x2b6a30
void sub_002B69F0_0x2b69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B69F0_0x2b69f0");
#endif

    switch (ctx->pc) {
        case 0x2b6a18u: goto label_2b6a18;
        default: break;
    }

    ctx->pc = 0x2b69f0u;

    // 0x2b69f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b69f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b69f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b69fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6a00: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b6a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a08: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b6a0c: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x2b6a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6a10: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6A10u;
    SET_GPR_U32(ctx, 31, 0x2B6A18u);
    ctx->pc = 0x2B6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A10u;
            // 0x2b6a14: 0xa480001a  sh          $zero, 0x1A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A18u; }
        if (ctx->pc != 0x2B6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A18u; }
        if (ctx->pc != 0x2B6A18u) { return; }
    }
    ctx->pc = 0x2B6A18u;
label_2b6a18:
    // 0x2b6a18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A24u;
            // 0x2b6a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6A2Cu;
    // 0x2b6a2c: 0x0  nop
    ctx->pc = 0x2b6a2cu;
    // NOP
}

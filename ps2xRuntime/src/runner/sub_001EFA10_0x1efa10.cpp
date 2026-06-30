#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFA10
// Address: 0x1efa10 - 0x1efa50
void sub_001EFA10_0x1efa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFA10_0x1efa10");
#endif

    switch (ctx->pc) {
        case 0x1efa24u: goto label_1efa24;
        default: break;
    }

    ctx->pc = 0x1efa10u;

    // 0x1efa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efa14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efa18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efa1c: 0xc07bb08  jal         func_1EEC20
    ctx->pc = 0x1EFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA24u);
    ctx->pc = 0x1EFA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA1Cu;
            // 0x1efa20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC20u;
    if (runtime->hasFunction(0x1EEC20u)) {
        auto targetFn = runtime->lookupFunction(0x1EEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA24u; }
        if (ctx->pc != 0x1EFA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEC20_0x1eec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA24u; }
        if (ctx->pc != 0x1EFA24u) { return; }
    }
    ctx->pc = 0x1EFA24u;
label_1efa24:
    // 0x1efa24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1efa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1efa28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa2c: 0x2463d960  addiu       $v1, $v1, -0x26A0
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
    // 0x1efa30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1efa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1efa34: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1efa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1efa38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa40: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA40u;
            // 0x1efa44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFA48u;
    // 0x1efa48: 0x0  nop
    ctx->pc = 0x1efa48u;
    // NOP
    // 0x1efa4c: 0x0  nop
    ctx->pc = 0x1efa4cu;
    // NOP
}

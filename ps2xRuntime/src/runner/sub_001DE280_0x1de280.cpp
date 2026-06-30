#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE280
// Address: 0x1de280 - 0x1de2c0
void sub_001DE280_0x1de280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE280_0x1de280");
#endif

    switch (ctx->pc) {
        case 0x1de2a8u: goto label_1de2a8;
        default: break;
    }

    ctx->pc = 0x1de280u;

    // 0x1de280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de28c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1de28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1de290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de294: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1de294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1de298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de29c: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x1de29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1de2a0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1DE2A0u;
    SET_GPR_U32(ctx, 31, 0x1DE2A8u);
    ctx->pc = 0x1DE2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2A0u;
            // 0x1de2a4: 0xa4800014  sh          $zero, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2A8u; }
        if (ctx->pc != 0x1DE2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2A8u; }
        if (ctx->pc != 0x1DE2A8u) { return; }
    }
    ctx->pc = 0x1DE2A8u;
label_1de2a8:
    // 0x1de2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2B4u;
            // 0x1de2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE2BCu;
    // 0x1de2bc: 0x0  nop
    ctx->pc = 0x1de2bcu;
    // NOP
}

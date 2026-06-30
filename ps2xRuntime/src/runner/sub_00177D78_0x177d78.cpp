#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177D78
// Address: 0x177d78 - 0x177db8
void sub_00177D78_0x177d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177D78_0x177d78");
#endif

    ctx->pc = 0x177d78u;

    // 0x177d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177d7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x177d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177D80u;
    {
        const bool branch_taken_0x177d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D80u;
            // 0x177d84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d80) {
            ctx->pc = 0x177DA0u;
            goto label_177da0;
        }
    }
    ctx->pc = 0x177D88u;
    // 0x177d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d90: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x177d94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x177d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x177d98: 0x804a576  j           func_1295D8
    ctx->pc = 0x177D98u;
    ctx->pc = 0x177D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D98u;
            // 0x177d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x177DA0u;
label_177da0:
    // 0x177da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177da4: 0x3e00008  jr          $ra
    ctx->pc = 0x177DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DA4u;
            // 0x177da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DACu;
    // 0x177dac: 0x0  nop
    ctx->pc = 0x177dacu;
    // NOP
    // 0x177db0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DB0u;
            // 0x177db4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DB8u;
}

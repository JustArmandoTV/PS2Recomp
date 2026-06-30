#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001888E8
// Address: 0x1888e8 - 0x188928
void sub_001888E8_0x1888e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001888E8_0x1888e8");
#endif

    ctx->pc = 0x1888e8u;

    // 0x1888e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1888e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1888ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1888f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1888f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1888f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1888f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888f8: 0x80621b8  j           func_1886E0
    ctx->pc = 0x1888F8u;
    ctx->pc = 0x1888FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888F8u;
            // 0x1888fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1886E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x188900u;
    // 0x188900: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x188904: 0x2c840007  sltiu       $a0, $a0, 0x7
    ctx->pc = 0x188904u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x188908: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x18890c: 0x24216918  addiu       $at, $at, 0x6918
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 26904));
    // 0x188910: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x188910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x188914: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188914u;
    {
        const bool branch_taken_0x188914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188914u;
            // 0x188918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188914) {
            ctx->pc = 0x188920u;
            goto label_188920;
        }
    }
    ctx->pc = 0x18891Cu;
    // 0x18891c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188920:
    // 0x188920: 0x3e00008  jr          $ra
    ctx->pc = 0x188920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188928u;
}

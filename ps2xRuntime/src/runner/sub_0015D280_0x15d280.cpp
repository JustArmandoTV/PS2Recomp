#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D280
// Address: 0x15d280 - 0x15d2c0
void sub_0015D280_0x15d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D280_0x15d280");
#endif

    ctx->pc = 0x15d280u;

    // 0x15d280: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x15d284: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x15d284u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x15d288: 0x73bc0  sll         $a3, $a3, 15
    ctx->pc = 0x15d288u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x15d28c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x15d28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x15d290: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x15d290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x15d294: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x15d294u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x15d298: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x15d298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x15d29c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x15d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x15d2a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x15d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x15d2a4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x15d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x15d2a8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x15d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x15d2ac: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x15d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x15d2b0: 0xac890024  sw          $t1, 0x24($a0)
    ctx->pc = 0x15d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 9));
    // 0x15d2b4: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x15d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x15d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2B8u;
            // 0x15d2bc: 0xac8b002c  sw          $t3, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D2C0u;
}

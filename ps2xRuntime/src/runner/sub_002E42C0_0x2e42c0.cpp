#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E42C0
// Address: 0x2e42c0 - 0x2e4330
void sub_002E42C0_0x2e42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E42C0_0x2e42c0");
#endif

    switch (ctx->pc) {
        case 0x2e42c8u: goto label_2e42c8;
        case 0x2e42d0u: goto label_2e42d0;
        case 0x2e4308u: goto label_2e4308;
        default: break;
    }

    ctx->pc = 0x2e42c0u;

    // 0x2e42c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e42c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e42c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e42c8:
    // 0x2e42c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e42c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e42ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e42d0:
    // 0x2e42d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e42d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e42d4: 0xa0c00095  sb          $zero, 0x95($a2)
    ctx->pc = 0x2e42d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e42d8: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x2e42d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e42dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e42dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e42e0: 0x0  nop
    ctx->pc = 0x2e42e0u;
    // NOP
    // 0x2e42e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E42E4u;
    {
        const bool branch_taken_0x2e42e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e42e4) {
            ctx->pc = 0x2E42D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e42d0;
        }
    }
    ctx->pc = 0x2E42ECu;
    // 0x2e42ec: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2e42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2e42f0: 0xa06000d5  sb          $zero, 0xD5($v1)
    ctx->pc = 0x2e42f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e42f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e42f8: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x2e42f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e42fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E42FCu;
    {
        const bool branch_taken_0x2e42fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42FCu;
            // 0x2e4300: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42fc) {
            ctx->pc = 0x2E42C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e42c8;
        }
    }
    ctx->pc = 0x2E4304u;
    // 0x2e4304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4308:
    // 0x2e4308: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e430c: 0xa06000e5  sb          $zero, 0xE5($v1)
    ctx->pc = 0x2e430cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 229), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4310: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e4310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e4314: 0x28a3000b  slti        $v1, $a1, 0xB
    ctx->pc = 0x2e4314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2e4318: 0x0  nop
    ctx->pc = 0x2e4318u;
    // NOP
    // 0x2e431c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E431Cu;
    {
        const bool branch_taken_0x2e431c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e431c) {
            ctx->pc = 0x2E4308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4308;
        }
    }
    ctx->pc = 0x2E4324u;
    // 0x2e4324: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4324u;
            // 0x2e4328: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E432Cu;
    // 0x2e432c: 0x0  nop
    ctx->pc = 0x2e432cu;
    // NOP
}

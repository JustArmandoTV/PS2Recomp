#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161EC0
// Address: 0x161ec0 - 0x161f08
void sub_00161EC0_0x161ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161EC0_0x161ec0");
#endif

    switch (ctx->pc) {
        case 0x161ed8u: goto label_161ed8;
        default: break;
    }

    ctx->pc = 0x161ec0u;

    // 0x161ec0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x161ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ec4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x161ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x161ec8: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x161ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x161ecc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161ECCu;
    {
        const bool branch_taken_0x161ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161ECCu;
            // 0x161ed0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ecc) {
            ctx->pc = 0x161EFCu;
            goto label_161efc;
        }
    }
    ctx->pc = 0x161ED4u;
    // 0x161ed4: 0x0  nop
    ctx->pc = 0x161ed4u;
    // NOP
label_161ed8:
    // 0x161ed8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x161edc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x161ee0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161ee4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x161ee4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161ee8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x161ee8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161eec: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x161eecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x161ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x161ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x161ef4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x161EF4u;
    {
        const bool branch_taken_0x161ef4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x161EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161EF4u;
            // 0x161ef8: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ef4) {
            ctx->pc = 0x161ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161ed8;
        }
    }
    ctx->pc = 0x161EFCu;
label_161efc:
    // 0x161efc: 0x3e00008  jr          $ra
    ctx->pc = 0x161EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161F04u;
    // 0x161f04: 0x0  nop
    ctx->pc = 0x161f04u;
    // NOP
}

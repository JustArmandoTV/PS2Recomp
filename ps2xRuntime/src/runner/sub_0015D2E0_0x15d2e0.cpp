#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D2E0
// Address: 0x15d2e0 - 0x15d360
void sub_0015D2E0_0x15d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D2E0_0x15d2e0");
#endif

    switch (ctx->pc) {
        case 0x15d308u: goto label_15d308;
        default: break;
    }

    ctx->pc = 0x15d2e0u;

    // 0x15d2e0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x15d2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15d2e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d2e8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d2ec: 0x2463ce60  addiu       $v1, $v1, -0x31A0
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954592));
    // 0x15d2f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d2f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15d2fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d300: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x15d300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x15d304: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d308:
    // 0x15d308: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x15d308u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x15d30c: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x15d310: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x15d310u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x15d314: 0x28c3000f  slti        $v1, $a2, 0xF
    ctx->pc = 0x15d314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x15d318: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x15d318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x15d31c: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x15d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x15d320: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x15d320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x15d324: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x15d324u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
    // 0x15d328: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x15d328u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x15d32c: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x15d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x15d330: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x15d330u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x15d334: 0xfc800048  sd          $zero, 0x48($a0)
    ctx->pc = 0x15d334u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 0));
    // 0x15d338: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x15d338u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x15d33c: 0xfc800058  sd          $zero, 0x58($a0)
    ctx->pc = 0x15d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 0));
    // 0x15d340: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x15d340u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x15d344: 0xfc800068  sd          $zero, 0x68($a0)
    ctx->pc = 0x15d344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 0));
    // 0x15d348: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15D348u;
    {
        const bool branch_taken_0x15d348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D348u;
            // 0x15d34c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d348) {
            ctx->pc = 0x15D308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D350u;
    // 0x15d350: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x15d350u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x15d354: 0x3e00008  jr          $ra
    ctx->pc = 0x15D354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D354u;
            // 0x15d358: 0xfc800008  sd          $zero, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D35Cu;
    // 0x15d35c: 0x0  nop
    ctx->pc = 0x15d35cu;
    // NOP
}

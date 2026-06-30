#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196068
// Address: 0x196068 - 0x1960b0
void sub_00196068_0x196068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196068_0x196068");
#endif

    switch (ctx->pc) {
        case 0x196088u: goto label_196088;
        default: break;
    }

    ctx->pc = 0x196068u;

    // 0x196068: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x19606c: 0x2442fed8  addiu       $v0, $v0, -0x128
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x196070: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x196074: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x196074u;
    {
        const bool branch_taken_0x196074 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x196078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196074u;
            // 0x196078: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196074) {
            ctx->pc = 0x1960A4u;
            goto label_1960a4;
        }
    }
    ctx->pc = 0x19607Cu;
    // 0x19607c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19607cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196084: 0x0  nop
    ctx->pc = 0x196084u;
    // NOP
label_196088:
    // 0x196088: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19608c: 0xac640188  sw          $a0, 0x188($v1)
    ctx->pc = 0x19608cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x196090: 0x0  nop
    ctx->pc = 0x196090u;
    // NOP
    // 0x196094: 0x0  nop
    ctx->pc = 0x196094u;
    // NOP
    // 0x196098: 0x0  nop
    ctx->pc = 0x196098u;
    // NOP
    // 0x19609c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19609Cu;
    {
        const bool branch_taken_0x19609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19609Cu;
            // 0x1960a0: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19609c) {
            ctx->pc = 0x196088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196088;
        }
    }
    ctx->pc = 0x1960A4u;
label_1960a4:
    // 0x1960a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1960A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1960ACu;
    // 0x1960ac: 0x0  nop
    ctx->pc = 0x1960acu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD570
// Address: 0x1bd570 - 0x1bd5b8
void sub_001BD570_0x1bd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD570_0x1bd570");
#endif

    switch (ctx->pc) {
        case 0x1bd578u: goto label_1bd578;
        case 0x1bd598u: goto label_1bd598;
        default: break;
    }

    ctx->pc = 0x1bd570u;

    // 0x1bd570: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD570u;
            // 0x1bd574: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD578u;
label_1bd578:
    // 0x1bd578: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bd57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd580: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bd580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bd584: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1bd584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1bd588: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1bd588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1bd58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD58Cu;
            // 0x1bd590: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD594u;
    // 0x1bd594: 0x0  nop
    ctx->pc = 0x1bd594u;
    // NOP
label_1bd598:
    // 0x1bd598: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bd598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bd59c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd5a0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1bd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1bd5a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd5a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bd5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1bd5ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5B0u;
            // 0x1bd5b4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD5B8u;
}

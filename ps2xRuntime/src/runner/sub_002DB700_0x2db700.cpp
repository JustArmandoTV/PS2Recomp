#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB700
// Address: 0x2db700 - 0x2db720
void sub_002DB700_0x2db700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB700_0x2db700");
#endif

    ctx->pc = 0x2db700u;

    // 0x2db700: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2db704: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2db704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2db708: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB708u;
    {
        const bool branch_taken_0x2db708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db708) {
            ctx->pc = 0x2DB70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB708u;
            // 0x2db70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB714u;
            goto label_2db714;
        }
    }
    ctx->pc = 0x2DB710u;
    // 0x2db710: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2db710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2db714:
    // 0x2db714: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB71Cu;
    // 0x2db71c: 0x0  nop
    ctx->pc = 0x2db71cu;
    // NOP
}

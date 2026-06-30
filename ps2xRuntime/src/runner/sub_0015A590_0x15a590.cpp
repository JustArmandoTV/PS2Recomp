#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A590
// Address: 0x15a590 - 0x15a5e0
void sub_0015A590_0x15a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A590_0x15a590");
#endif

    ctx->pc = 0x15a590u;

    // 0x15a590: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x15a590u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15a594: 0x24026500  addiu       $v0, $zero, 0x6500
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
    // 0x15a598: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x15a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x15a59c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15A59Cu;
    {
        const bool branch_taken_0x15a59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a59c) {
            ctx->pc = 0x15A5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A59Cu;
            // 0x15a5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A5D4u;
            goto label_15a5d4;
        }
    }
    ctx->pc = 0x15A5A4u;
    // 0x15a5a4: 0x24026400  addiu       $v0, $zero, 0x6400
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x15a5a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A5A8u;
    {
        const bool branch_taken_0x15a5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a5a8) {
            ctx->pc = 0x15A5D0u;
            goto label_15a5d0;
        }
    }
    ctx->pc = 0x15A5B0u;
    // 0x15a5b0: 0x24026300  addiu       $v0, $zero, 0x6300
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
    // 0x15a5b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A5B4u;
    {
        const bool branch_taken_0x15a5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a5b4) {
            ctx->pc = 0x15A5D0u;
            goto label_15a5d0;
        }
    }
    ctx->pc = 0x15A5BCu;
    // 0x15a5bc: 0x24026200  addiu       $v0, $zero, 0x6200
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x15a5c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A5C0u;
    {
        const bool branch_taken_0x15a5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a5c0) {
            ctx->pc = 0x15A5D0u;
            goto label_15a5d0;
        }
    }
    ctx->pc = 0x15A5C8u;
    // 0x15a5c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A5C8u;
    {
        const bool branch_taken_0x15a5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5C8u;
            // 0x15a5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5c8) {
            ctx->pc = 0x15A5D4u;
            goto label_15a5d4;
        }
    }
    ctx->pc = 0x15A5D0u;
label_15a5d0:
    // 0x15a5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a5d4:
    // 0x15a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A5DCu;
    // 0x15a5dc: 0x0  nop
    ctx->pc = 0x15a5dcu;
    // NOP
}

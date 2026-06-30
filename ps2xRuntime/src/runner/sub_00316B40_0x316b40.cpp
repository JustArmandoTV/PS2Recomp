#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316B40
// Address: 0x316b40 - 0x316ba0
void sub_00316B40_0x316b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316B40_0x316b40");
#endif

    switch (ctx->pc) {
        case 0x316b60u: goto label_316b60;
        case 0x316b68u: goto label_316b68;
        default: break;
    }

    ctx->pc = 0x316b40u;

    // 0x316b40: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x316b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x316b44: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x316b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x316b48: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x316b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x316b4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x316b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x316b50: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x316b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x316b54: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316b58: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x316b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x316b5c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x316b5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_316b60:
    // 0x316b60: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x316b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b64: 0x0  nop
    ctx->pc = 0x316b64u;
    // NOP
label_316b68:
    // 0x316b68: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x316b68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x316b6c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x316B6Cu;
    {
        const bool branch_taken_0x316b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x316b6c) {
            ctx->pc = 0x316B80u;
            goto label_316b80;
        }
    }
    ctx->pc = 0x316B74u;
    // 0x316b74: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x316B74u;
    {
        const bool branch_taken_0x316b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B74u;
            // 0x316b78: 0x24a5ffc0  addiu       $a1, $a1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b74) {
            ctx->pc = 0x316B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316b68;
        }
    }
    ctx->pc = 0x316B7Cu;
    // 0x316b7c: 0x0  nop
    ctx->pc = 0x316b7cu;
    // NOP
label_316b80:
    // 0x316b80: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x316b80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x316b84: 0x5462fff6  bnel        $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x316B84u;
    {
        const bool branch_taken_0x316b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316b84) {
            ctx->pc = 0x316B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316B84u;
            // 0x316b88: 0x94a30002  lhu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316b60;
        }
    }
    ctx->pc = 0x316B8Cu;
    // 0x316b8c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x316b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x316b90: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x316b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x316b94: 0x3e00008  jr          $ra
    ctx->pc = 0x316B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B94u;
            // 0x316b98: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316B9Cu;
    // 0x316b9c: 0x0  nop
    ctx->pc = 0x316b9cu;
    // NOP
}

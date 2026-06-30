#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4B20
// Address: 0x2a4b20 - 0x2a4b80
void sub_002A4B20_0x2a4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B20_0x2a4b20");
#endif

    ctx->pc = 0x2a4b20u;

    // 0x2a4b20: 0x90830566  lbu         $v1, 0x566($a0)
    ctx->pc = 0x2a4b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1382)));
    // 0x2a4b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a4b2c: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x2a4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x2a4b30: 0x90830566  lbu         $v1, 0x566($a0)
    ctx->pc = 0x2a4b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1382)));
    // 0x2a4b34: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4B34u;
    {
        const bool branch_taken_0x2a4b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b34) {
            ctx->pc = 0x2A4B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B34u;
            // 0x2a4b38: 0xa0860564  sb          $a2, 0x564($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1380), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B40u;
            goto label_2a4b40;
        }
    }
    ctx->pc = 0x2A4B3Cu;
    // 0x2a4b3c: 0xa0800564  sb          $zero, 0x564($a0)
    ctx->pc = 0x2a4b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1380), (uint8_t)GPR_U32(ctx, 0));
label_2a4b40:
    // 0x2a4b40: 0xac800568  sw          $zero, 0x568($a0)
    ctx->pc = 0x2a4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1384), GPR_U32(ctx, 0));
    // 0x2a4b44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4b48: 0xac87056c  sw          $a3, 0x56C($a0)
    ctx->pc = 0x2a4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1388), GPR_U32(ctx, 7));
    // 0x2a4b4c: 0x90850564  lbu         $a1, 0x564($a0)
    ctx->pc = 0x2a4b4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x2a4b50: 0x54a30007  bnel        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4B50u;
    {
        const bool branch_taken_0x2a4b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a4b50) {
            ctx->pc = 0x2A4B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B50u;
            // 0x2a4b54: 0x90830566  lbu         $v1, 0x566($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1382)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B70u;
            goto label_2a4b70;
        }
    }
    ctx->pc = 0x2A4B58u;
    // 0x2a4b58: 0x8c83056c  lw          $v1, 0x56C($a0)
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1388)));
    // 0x2a4b5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4B5Cu;
    {
        const bool branch_taken_0x2a4b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b5c) {
            ctx->pc = 0x2A4B6Cu;
            goto label_2a4b6c;
        }
    }
    ctx->pc = 0x2A4B64u;
    // 0x2a4b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4b68: 0xa0830564  sb          $v1, 0x564($a0)
    ctx->pc = 0x2a4b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1380), (uint8_t)GPR_U32(ctx, 3));
label_2a4b6c:
    // 0x2a4b6c: 0x90830566  lbu         $v1, 0x566($a0)
    ctx->pc = 0x2a4b6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1382)));
label_2a4b70:
    // 0x2a4b70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a4b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4B74u;
            // 0x2a4b78: 0xa0830566  sb          $v1, 0x566($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1382), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4B7Cu;
    // 0x2a4b7c: 0x0  nop
    ctx->pc = 0x2a4b7cu;
    // NOP
}

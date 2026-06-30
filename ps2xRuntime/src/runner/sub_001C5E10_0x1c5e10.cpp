#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5E10
// Address: 0x1c5e10 - 0x1c5e80
void sub_001C5E10_0x1c5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5E10_0x1c5e10");
#endif

    ctx->pc = 0x1c5e10u;

    // 0x1c5e10: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5e14: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c5e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5e18: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c5e1c: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c5e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c5e20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c5e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5e28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c5e2c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c5e30: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c5e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c5e34: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c5e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c5e38: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c5e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c5e3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c5e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c5e40: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1c5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1c5e44: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1c5e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5e48: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c5e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5e4c: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x1c5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1c5e50: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c5e54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c5e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5e5c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c5e60: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1c5e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1c5e64: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c5e68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c5e6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c5e70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c5e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E74u;
            // 0x1c5e78: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5E7Cu;
    // 0x1c5e7c: 0x0  nop
    ctx->pc = 0x1c5e7cu;
    // NOP
}

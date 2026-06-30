#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8208
// Address: 0x1c8208 - 0x1c8248
void sub_001C8208_0x1c8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8208_0x1c8208");
#endif

    ctx->pc = 0x1c8208u;

    // 0x1c8208: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c820c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1c820cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1c8210: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x1c8210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1c8214: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x1c8214u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1c8218: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c8218u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c821c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1c821cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c8220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c8224: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1c8224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1c8228: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c822c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c822cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c8230: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c8230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8234: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c8234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c8238: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c8238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c823c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C823Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C823Cu;
            // 0x1c8240: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8244u;
    // 0x1c8244: 0x0  nop
    ctx->pc = 0x1c8244u;
    // NOP
}

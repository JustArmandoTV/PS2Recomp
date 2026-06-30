#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050AE00
// Address: 0x50ae00 - 0x50ae40
void sub_0050AE00_0x50ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AE00_0x50ae00");
#endif

    switch (ctx->pc) {
        case 0x50ae00u: goto label_50ae00;
        case 0x50ae04u: goto label_50ae04;
        case 0x50ae08u: goto label_50ae08;
        case 0x50ae0cu: goto label_50ae0c;
        case 0x50ae10u: goto label_50ae10;
        case 0x50ae14u: goto label_50ae14;
        case 0x50ae18u: goto label_50ae18;
        case 0x50ae1cu: goto label_50ae1c;
        case 0x50ae20u: goto label_50ae20;
        case 0x50ae24u: goto label_50ae24;
        case 0x50ae28u: goto label_50ae28;
        case 0x50ae2cu: goto label_50ae2c;
        case 0x50ae30u: goto label_50ae30;
        case 0x50ae34u: goto label_50ae34;
        case 0x50ae38u: goto label_50ae38;
        case 0x50ae3cu: goto label_50ae3c;
        default: break;
    }

    ctx->pc = 0x50ae00u;

label_50ae00:
    // 0x50ae00: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x50ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_50ae04:
    // 0x50ae04: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x50ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_50ae08:
    // 0x50ae08: 0x8c430d74  lw          $v1, 0xD74($v0)
    ctx->pc = 0x50ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
label_50ae0c:
    // 0x50ae0c: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x50ae0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_50ae10:
    // 0x50ae10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x50ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_50ae14:
    // 0x50ae14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50ae18:
    // 0x50ae18: 0x90420284  lbu         $v0, 0x284($v0)
    ctx->pc = 0x50ae18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 644)));
label_50ae1c:
    // 0x50ae1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50ae20:
    // 0x50ae20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x50ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_50ae24:
    // 0x50ae24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x50ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50ae28:
    // 0x50ae28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50ae28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50ae2c:
    // 0x50ae2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x50ae2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50ae30:
    // 0x50ae30: 0x3200008  jr          $t9
label_50ae34:
    if (ctx->pc == 0x50AE34u) {
        ctx->pc = 0x50AE38u;
        goto label_50ae38;
    }
    ctx->pc = 0x50AE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50AE38u;
label_50ae38:
    // 0x50ae38: 0x0  nop
    ctx->pc = 0x50ae38u;
    // NOP
label_50ae3c:
    // 0x50ae3c: 0x0  nop
    ctx->pc = 0x50ae3cu;
    // NOP
}

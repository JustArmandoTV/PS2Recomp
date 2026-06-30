#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDA30
// Address: 0x2cda30 - 0x2cda70
void sub_002CDA30_0x2cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA30_0x2cda30");
#endif

    switch (ctx->pc) {
        case 0x2cda5cu: goto label_2cda5c;
        default: break;
    }

    ctx->pc = 0x2cda30u;

    // 0x2cda30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cda34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cda34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cda38: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x2cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2cda3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cda3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cda40: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x2cda40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2cda44: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x2cda44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2cda48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cda48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda4c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2cda4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cda50: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x2cda50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2cda54: 0xc0b4824  jal         func_2D2090
    ctx->pc = 0x2CDA54u;
    SET_GPR_U32(ctx, 31, 0x2CDA5Cu);
    ctx->pc = 0x2CDA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA54u;
            // 0x2cda58: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2090u;
    if (runtime->hasFunction(0x2D2090u)) {
        auto targetFn = runtime->lookupFunction(0x2D2090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDA5Cu; }
        if (ctx->pc != 0x2CDA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2090_0x2d2090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDA5Cu; }
        if (ctx->pc != 0x2CDA5Cu) { return; }
    }
    ctx->pc = 0x2CDA5Cu;
label_2cda5c:
    // 0x2cda5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cda5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cda60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cda64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cda64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA68u;
            // 0x2cda6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDA70u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDA80
// Address: 0x2cda80 - 0x2cdac0
void sub_002CDA80_0x2cda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA80_0x2cda80");
#endif

    switch (ctx->pc) {
        case 0x2cdaacu: goto label_2cdaac;
        default: break;
    }

    ctx->pc = 0x2cda80u;

    // 0x2cda80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cda84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cda88: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2cda8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cda90: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2cda94: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x2cda94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2cda98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cda98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2cda9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cdaa0: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2cdaa4: 0xc0b4740  jal         func_2D1D00
    ctx->pc = 0x2CDAA4u;
    SET_GPR_U32(ctx, 31, 0x2CDAACu);
    ctx->pc = 0x2CDAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAA4u;
            // 0x2cdaa8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D00u;
    if (runtime->hasFunction(0x2D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDAACu; }
        if (ctx->pc != 0x2CDAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1D00_0x2d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDAACu; }
        if (ctx->pc != 0x2CDAACu) { return; }
    }
    ctx->pc = 0x2CDAACu;
label_2cdaac:
    // 0x2cdaac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cdaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cdab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAB8u;
            // 0x2cdabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDAC0u;
}

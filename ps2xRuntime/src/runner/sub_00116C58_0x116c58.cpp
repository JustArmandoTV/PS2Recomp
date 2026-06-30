#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116C58
// Address: 0x116c58 - 0x116cd0
void sub_00116C58_0x116c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116C58_0x116c58");
#endif

    switch (ctx->pc) {
        case 0x116c6cu: goto label_116c6c;
        case 0x116ca4u: goto label_116ca4;
        case 0x116cacu: goto label_116cac;
        default: break;
    }

    ctx->pc = 0x116c58u;

    // 0x116c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116c64: 0xc045ae6  jal         func_116B98
    ctx->pc = 0x116C64u;
    SET_GPR_U32(ctx, 31, 0x116C6Cu);
    ctx->pc = 0x116C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C64u;
            // 0x116c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B98u;
    if (runtime->hasFunction(0x116B98u)) {
        auto targetFn = runtime->lookupFunction(0x116B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C6Cu; }
        if (ctx->pc != 0x116C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116B98_0x116b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C6Cu; }
        if (ctx->pc != 0x116C6Cu) { return; }
    }
    ctx->pc = 0x116C6Cu;
label_116c6c:
    // 0x116c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c78: 0x8042fe0  j           func_10BF80
    ctx->pc = 0x116C78u;
    ctx->pc = 0x116C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C78u;
            // 0x116c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF80u;
    {
        auto targetFn = runtime->lookupFunction(0x10BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x116C80u;
    // 0x116c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116c84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x116c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116c94: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x116c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x116c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c9c: 0xc045aa0  jal         func_116A80
    ctx->pc = 0x116C9Cu;
    SET_GPR_U32(ctx, 31, 0x116CA4u);
    ctx->pc = 0x116CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C9Cu;
            // 0x116ca0: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A80u;
    if (runtime->hasFunction(0x116A80u)) {
        auto targetFn = runtime->lookupFunction(0x116A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA4u; }
        if (ctx->pc != 0x116CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A80_0x116a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA4u; }
        if (ctx->pc != 0x116CA4u) { return; }
    }
    ctx->pc = 0x116CA4u;
label_116ca4:
    // 0x116ca4: 0xc045ae6  jal         func_116B98
    ctx->pc = 0x116CA4u;
    SET_GPR_U32(ctx, 31, 0x116CACu);
    ctx->pc = 0x116B98u;
    if (runtime->hasFunction(0x116B98u)) {
        auto targetFn = runtime->lookupFunction(0x116B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CACu; }
        if (ctx->pc != 0x116CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116B98_0x116b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CACu; }
        if (ctx->pc != 0x116CACu) { return; }
    }
    ctx->pc = 0x116CACu;
label_116cac:
    // 0x116cac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x116cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cb4: 0x8c45e7e0  lw          $a1, -0x1820($v0)
    ctx->pc = 0x116cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x116cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116cc0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x116cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x116cc4: 0x80431e0  j           func_10C780
    ctx->pc = 0x116CC4u;
    ctx->pc = 0x116CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116CC4u;
            // 0x116cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C780u;
    {
        auto targetFn = runtime->lookupFunction(0x10C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x116CCCu;
    // 0x116ccc: 0x0  nop
    ctx->pc = 0x116cccu;
    // NOP
}

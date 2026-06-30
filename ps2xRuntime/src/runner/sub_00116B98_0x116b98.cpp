#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116B98
// Address: 0x116b98 - 0x116c58
void sub_00116B98_0x116b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116B98_0x116b98");
#endif

    switch (ctx->pc) {
        case 0x116bd4u: goto label_116bd4;
        case 0x116bdcu: goto label_116bdc;
        case 0x116bf8u: goto label_116bf8;
        case 0x116c28u: goto label_116c28;
        case 0x116c30u: goto label_116c30;
        default: break;
    }

    ctx->pc = 0x116b98u;

label_116b98:
    // 0x116b98: 0x8045800  j           func_116000
    ctx->pc = 0x116B98u;
    ctx->pc = 0x116000u;
    {
        auto targetFn = runtime->lookupFunction(0x116000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x116BA0u;
    // 0x116ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116bb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bb8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x116bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bbc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x116bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x116bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116bc8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x116bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x116bcc: 0xc045aa0  jal         func_116A80
    ctx->pc = 0x116BCCu;
    SET_GPR_U32(ctx, 31, 0x116BD4u);
    ctx->pc = 0x116BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116BCCu;
            // 0x116bd0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A80u;
    if (runtime->hasFunction(0x116A80u)) {
        auto targetFn = runtime->lookupFunction(0x116A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116BD4u; }
        if (ctx->pc != 0x116BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A80_0x116a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116BD4u; }
        if (ctx->pc != 0x116BD4u) { return; }
    }
    ctx->pc = 0x116BD4u;
label_116bd4:
    // 0x116bd4: 0xc045ae6  jal         func_116B98
    ctx->pc = 0x116BD4u;
    SET_GPR_U32(ctx, 31, 0x116BDCu);
    ctx->pc = 0x116B98u;
    goto label_116b98;
    ctx->pc = 0x116BDCu;
label_116bdc:
    // 0x116bdc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x116bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116be4: 0x8c47e7e0  lw          $a3, -0x1820($v0)
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x116be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x116becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bf0: 0xc042fec  jal         func_10BFB0
    ctx->pc = 0x116BF0u;
    SET_GPR_U32(ctx, 31, 0x116BF8u);
    ctx->pc = 0x116BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116BF0u;
            // 0x116bf4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFB0u;
    if (runtime->hasFunction(0x10BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116BF8u; }
        if (ctx->pc != 0x116BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010BFB0_0x10bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116BF8u; }
        if (ctx->pc != 0x116BF8u) { return; }
    }
    ctx->pc = 0x116BF8u;
label_116bf8:
    // 0x116bf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116bfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116c00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c08: 0x3e00008  jr          $ra
    ctx->pc = 0x116C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C08u;
            // 0x116c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116C10u;
    // 0x116c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116c14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116c1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116c20: 0xc045aa0  jal         func_116A80
    ctx->pc = 0x116C20u;
    SET_GPR_U32(ctx, 31, 0x116C28u);
    ctx->pc = 0x116C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C20u;
            // 0x116c24: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A80u;
    if (runtime->hasFunction(0x116A80u)) {
        auto targetFn = runtime->lookupFunction(0x116A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C28u; }
        if (ctx->pc != 0x116C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A80_0x116a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C28u; }
        if (ctx->pc != 0x116C28u) { return; }
    }
    ctx->pc = 0x116C28u;
label_116c28:
    // 0x116c28: 0xc045ae6  jal         func_116B98
    ctx->pc = 0x116C28u;
    SET_GPR_U32(ctx, 31, 0x116C30u);
    ctx->pc = 0x116C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C28u;
            // 0x116c2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B98u;
    goto label_116b98;
    ctx->pc = 0x116C30u;
label_116c30:
    // 0x116c30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c38: 0x8c46e7e0  lw          $a2, -0x1820($v0)
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x116c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x116c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116c44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x116c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x116c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c50: 0x8042fe8  j           func_10BFA0
    ctx->pc = 0x116C50u;
    ctx->pc = 0x116C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C50u;
            // 0x116c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFA0u;
    {
        auto targetFn = runtime->lookupFunction(0x10BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x116C58u;
}

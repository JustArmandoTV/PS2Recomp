#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5E30
// Address: 0x2a5e30 - 0x2a5f20
void sub_002A5E30_0x2a5e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5E30_0x2a5e30");
#endif

    switch (ctx->pc) {
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ebcu: goto label_2a5ebc;
        case 0x2a5ed4u: goto label_2a5ed4;
        case 0x2a5ef4u: goto label_2a5ef4;
        case 0x2a5f0cu: goto label_2a5f0c;
        default: break;
    }

    ctx->pc = 0x2a5e30u;

    // 0x2a5e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5e34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a5e38: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A5E38u;
    {
        const bool branch_taken_0x2a5e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A5E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E38u;
            // 0x2a5e3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e38) {
            ctx->pc = 0x2A5EDCu;
            goto label_2a5edc;
        }
    }
    ctx->pc = 0x2A5E40u;
    // 0x2a5e40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5e44: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A5E44u;
    {
        const bool branch_taken_0x2a5e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5e44) {
            ctx->pc = 0x2A5EDCu;
            goto label_2a5edc;
        }
    }
    ctx->pc = 0x2A5E4Cu;
    // 0x2a5e4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5e50: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A5E50u;
    {
        const bool branch_taken_0x2a5e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5e50) {
            ctx->pc = 0x2A5EA4u;
            goto label_2a5ea4;
        }
    }
    ctx->pc = 0x2A5E58u;
    // 0x2a5e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5e5c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5E5Cu;
    {
        const bool branch_taken_0x2a5e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5e5c) {
            ctx->pc = 0x2A5E6Cu;
            goto label_2a5e6c;
        }
    }
    ctx->pc = 0x2A5E64u;
    // 0x2a5e64: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A5E64u;
    {
        const bool branch_taken_0x2a5e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E64u;
            // 0x2a5e68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e64) {
            ctx->pc = 0x2A5F10u;
            goto label_2a5f10;
        }
    }
    ctx->pc = 0x2A5E6Cu;
label_2a5e6c:
    // 0x2a5e6c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5e70: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5e74: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    // 0x2a5e78: 0x24a52770  addiu       $a1, $a1, 0x2770
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10096));
    // 0x2a5e7c: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E84u);
    ctx->pc = 0x2A5E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E7Cu;
            // 0x2a5e80: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E84u; }
        if (ctx->pc != 0x2A5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E84u; }
        if (ctx->pc != 0x2A5E84u) { return; }
    }
    ctx->pc = 0x2A5E84u;
label_2a5e84:
    // 0x2a5e84: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5e88: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5e8c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2a5e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x2a5e90: 0x24a527e4  addiu       $a1, $a1, 0x27E4
    ctx->pc = 0x2a5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10212));
    // 0x2a5e94: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5E94u;
    SET_GPR_U32(ctx, 31, 0x2A5E9Cu);
    ctx->pc = 0x2A5E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E94u;
            // 0x2a5e98: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E9Cu; }
        if (ctx->pc != 0x2A5E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E9Cu; }
        if (ctx->pc != 0x2A5E9Cu) { return; }
    }
    ctx->pc = 0x2A5E9Cu;
label_2a5e9c:
    // 0x2a5e9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A5E9Cu;
    {
        const bool branch_taken_0x2a5e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5e9c) {
            ctx->pc = 0x2A5F0Cu;
            goto label_2a5f0c;
        }
    }
    ctx->pc = 0x2A5EA4u;
label_2a5ea4:
    // 0x2a5ea4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ea8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5eac: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x2a5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    // 0x2a5eb0: 0x24a52858  addiu       $a1, $a1, 0x2858
    ctx->pc = 0x2a5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10328));
    // 0x2a5eb4: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5EB4u;
    SET_GPR_U32(ctx, 31, 0x2A5EBCu);
    ctx->pc = 0x2A5EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5EB4u;
            // 0x2a5eb8: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EBCu; }
        if (ctx->pc != 0x2A5EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EBCu; }
        if (ctx->pc != 0x2A5EBCu) { return; }
    }
    ctx->pc = 0x2A5EBCu;
label_2a5ebc:
    // 0x2a5ebc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ec0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ec4: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2a5ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x2a5ec8: 0x24a528cc  addiu       $a1, $a1, 0x28CC
    ctx->pc = 0x2a5ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10444));
    // 0x2a5ecc: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5ECCu;
    SET_GPR_U32(ctx, 31, 0x2A5ED4u);
    ctx->pc = 0x2A5ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5ECCu;
            // 0x2a5ed0: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5ED4u; }
        if (ctx->pc != 0x2A5ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5ED4u; }
        if (ctx->pc != 0x2A5ED4u) { return; }
    }
    ctx->pc = 0x2A5ED4u;
label_2a5ed4:
    // 0x2a5ed4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A5ED4u;
    {
        const bool branch_taken_0x2a5ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ed4) {
            ctx->pc = 0x2A5F0Cu;
            goto label_2a5f0c;
        }
    }
    ctx->pc = 0x2A5EDCu;
label_2a5edc:
    // 0x2a5edc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ee0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ee4: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x2a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    // 0x2a5ee8: 0x24a52940  addiu       $a1, $a1, 0x2940
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10560));
    // 0x2a5eec: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5EECu;
    SET_GPR_U32(ctx, 31, 0x2A5EF4u);
    ctx->pc = 0x2A5EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5EECu;
            // 0x2a5ef0: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EF4u; }
        if (ctx->pc != 0x2A5EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EF4u; }
        if (ctx->pc != 0x2A5EF4u) { return; }
    }
    ctx->pc = 0x2A5EF4u;
label_2a5ef4:
    // 0x2a5ef4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2a5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2a5ef8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2a5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2a5efc: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x2a5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x2a5f00: 0x24a529b4  addiu       $a1, $a1, 0x29B4
    ctx->pc = 0x2a5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10676));
    // 0x2a5f04: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A5F04u;
    SET_GPR_U32(ctx, 31, 0x2A5F0Cu);
    ctx->pc = 0x2A5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F04u;
            // 0x2a5f08: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F0Cu; }
        if (ctx->pc != 0x2A5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F0Cu; }
        if (ctx->pc != 0x2A5F0Cu) { return; }
    }
    ctx->pc = 0x2A5F0Cu;
label_2a5f0c:
    // 0x2a5f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5f10:
    // 0x2a5f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F10u;
            // 0x2a5f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5F18u;
    // 0x2a5f18: 0x0  nop
    ctx->pc = 0x2a5f18u;
    // NOP
    // 0x2a5f1c: 0x0  nop
    ctx->pc = 0x2a5f1cu;
    // NOP
}

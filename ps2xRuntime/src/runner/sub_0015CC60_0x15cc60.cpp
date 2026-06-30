#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CC60
// Address: 0x15cc60 - 0x15cd60
void sub_0015CC60_0x15cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CC60_0x15cc60");
#endif

    switch (ctx->pc) {
        case 0x15cca4u: goto label_15cca4;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd48u: goto label_15cd48;
        default: break;
    }

    ctx->pc = 0x15cc60u;

    // 0x15cc60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15cc64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cc6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cc70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15cc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc74: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15CC74u;
    {
        const bool branch_taken_0x15cc74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC74u;
            // 0x15cc78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc74) {
            ctx->pc = 0x15CD24u;
            goto label_15cd24;
        }
    }
    ctx->pc = 0x15CC7Cu;
    // 0x15cc7c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x15cc80: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x15cc80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x15cc84: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x15cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x15cc88: 0x2610cd30  addiu       $s0, $s0, -0x32D0
    ctx->pc = 0x15cc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954288));
    // 0x15cc8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15CC8Cu;
    {
        const bool branch_taken_0x15cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC8Cu;
            // 0x15cc90: 0x2631cc70  addiu       $s1, $s1, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc8c) {
            ctx->pc = 0x15CCCCu;
            goto label_15cccc;
        }
    }
    ctx->pc = 0x15CC94u;
    // 0x15cc94: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cc98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15cc9c: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CC9Cu;
    SET_GPR_U32(ctx, 31, 0x15CCA4u);
    ctx->pc = 0x15CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC9Cu;
            // 0x15cca0: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCA4u; }
        if (ctx->pc != 0x15CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCA4u; }
        if (ctx->pc != 0x15CCA4u) { return; }
    }
    ctx->pc = 0x15CCA4u;
label_15cca4:
    // 0x15cca4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cca8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ccac: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CCACu;
    SET_GPR_U32(ctx, 31, 0x15CCB4u);
    ctx->pc = 0x15CCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCACu;
            // 0x15ccb0: 0x24a5cd00  addiu       $a1, $a1, -0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCB4u; }
        if (ctx->pc != 0x15CCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCB4u; }
        if (ctx->pc != 0x15CCB4u) { return; }
    }
    ctx->pc = 0x15CCB4u;
label_15ccb4:
    // 0x15ccb4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15ccb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ccbc: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CCBCu;
    SET_GPR_U32(ctx, 31, 0x15CCC4u);
    ctx->pc = 0x15CCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCBCu;
            // 0x15ccc0: 0x24a5cd10  addiu       $a1, $a1, -0x32F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCC4u; }
        if (ctx->pc != 0x15CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCC4u; }
        if (ctx->pc != 0x15CCC4u) { return; }
    }
    ctx->pc = 0x15CCC4u;
label_15ccc4:
    // 0x15ccc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CCC4u;
    {
        const bool branch_taken_0x15ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCC4u;
            // 0x15ccc8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccc4) {
            ctx->pc = 0x15CCD4u;
            goto label_15ccd4;
        }
    }
    ctx->pc = 0x15CCCCu;
label_15cccc:
    // 0x15cccc: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15ccd0: 0x24a5ccf0  addiu       $a1, $a1, -0x3310
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
label_15ccd4:
    // 0x15ccd4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x15ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x15ccd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CCD8u;
    {
        const bool branch_taken_0x15ccd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ccd8) {
            ctx->pc = 0x15CCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCD8u;
            // 0x15ccdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CCF4u;
            goto label_15ccf4;
        }
    }
    ctx->pc = 0x15CCE0u;
    // 0x15cce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cce4: 0xc0572b4  jal         func_15CAD0
    ctx->pc = 0x15CCE4u;
    SET_GPR_U32(ctx, 31, 0x15CCECu);
    ctx->pc = 0x15CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCE4u;
            // 0x15cce8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CAD0u;
    if (runtime->hasFunction(0x15CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCECu; }
        if (ctx->pc != 0x15CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CAD0_0x15cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCECu; }
        if (ctx->pc != 0x15CCECu) { return; }
    }
    ctx->pc = 0x15CCECu;
label_15ccec:
    // 0x15ccec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15CCECu;
    {
        const bool branch_taken_0x15ccec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCECu;
            // 0x15ccf0: 0x32430004  andi        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccec) {
            ctx->pc = 0x15CD00u;
            goto label_15cd00;
        }
    }
    ctx->pc = 0x15CCF4u;
label_15ccf4:
    // 0x15ccf4: 0xc05727c  jal         func_15C9F0
    ctx->pc = 0x15CCF4u;
    SET_GPR_U32(ctx, 31, 0x15CCFCu);
    ctx->pc = 0x15CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCF4u;
            // 0x15ccf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F0u;
    if (runtime->hasFunction(0x15C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCFCu; }
        if (ctx->pc != 0x15CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C9F0_0x15c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCFCu; }
        if (ctx->pc != 0x15CCFCu) { return; }
    }
    ctx->pc = 0x15CCFCu;
label_15ccfc:
    // 0x15ccfc: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x15ccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_15cd00:
    // 0x15cd00: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15CD00u;
    {
        const bool branch_taken_0x15cd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cd00) {
            ctx->pc = 0x15CD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD00u;
            // 0x15cd04: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CD4Cu;
            goto label_15cd4c;
        }
    }
    ctx->pc = 0x15CD08u;
    // 0x15cd08: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cd0c: 0x240403f8  addiu       $a0, $zero, 0x3F8
    ctx->pc = 0x15cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x15cd10: 0x24a5cc70  addiu       $a1, $a1, -0x3390
    ctx->pc = 0x15cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954096));
    // 0x15cd14: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CD14u;
    SET_GPR_U32(ctx, 31, 0x15CD1Cu);
    ctx->pc = 0x15CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD14u;
            // 0x15cd18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD1Cu; }
        if (ctx->pc != 0x15CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD1Cu; }
        if (ctx->pc != 0x15CD1Cu) { return; }
    }
    ctx->pc = 0x15CD1Cu;
label_15cd1c:
    // 0x15cd1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15CD1Cu;
    {
        const bool branch_taken_0x15cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd1c) {
            ctx->pc = 0x15CD48u;
            goto label_15cd48;
        }
    }
    ctx->pc = 0x15CD24u;
label_15cd24:
    // 0x15cd24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15cd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15cd2c: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CD2Cu;
    SET_GPR_U32(ctx, 31, 0x15CD34u);
    ctx->pc = 0x15CD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD2Cu;
            // 0x15cd30: 0x240403f8  addiu       $a0, $zero, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD34u; }
        if (ctx->pc != 0x15CD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD34u; }
        if (ctx->pc != 0x15CD34u) { return; }
    }
    ctx->pc = 0x15CD34u;
label_15cd34:
    // 0x15cd34: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cd38: 0x240403fc  addiu       $a0, $zero, 0x3FC
    ctx->pc = 0x15cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x15cd3c: 0x24a5ccb0  addiu       $a1, $a1, -0x3350
    ctx->pc = 0x15cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954160));
    // 0x15cd40: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CD40u;
    SET_GPR_U32(ctx, 31, 0x15CD48u);
    ctx->pc = 0x15CD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD40u;
            // 0x15cd44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD48u; }
        if (ctx->pc != 0x15CD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD48u; }
        if (ctx->pc != 0x15CD48u) { return; }
    }
    ctx->pc = 0x15CD48u;
label_15cd48:
    // 0x15cd48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15cd4c:
    // 0x15cd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cd58: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD58u;
            // 0x15cd5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CD60u;
}

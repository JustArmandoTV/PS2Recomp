#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D980
// Address: 0x16d980 - 0x16dab0
void sub_0016D980_0x16d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D980_0x16d980");
#endif

    switch (ctx->pc) {
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16da28u: goto label_16da28;
        case 0x16da38u: goto label_16da38;
        case 0x16da40u: goto label_16da40;
        case 0x16da48u: goto label_16da48;
        default: break;
    }

    ctx->pc = 0x16d980u;

    // 0x16d980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d984: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d98c: 0x2442aa80  addiu       $v0, $v0, -0x5580
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
    // 0x16d990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d99c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d9a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16d9a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16d9a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16d9ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16d9b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16d9b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d9b8: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x16D9B8u;
    {
        const bool branch_taken_0x16d9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x16D9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9B8u;
            // 0x16d9bc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9b8) {
            ctx->pc = 0x16D9F0u;
            goto label_16d9f0;
        }
    }
    ctx->pc = 0x16D9C0u;
    // 0x16d9c0: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x16d9c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x16d9c4: 0x26a2ab20  addiu       $v0, $s5, -0x54E0
    ctx->pc = 0x16d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945568));
label_16d9c8:
    // 0x16d9c8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16d9c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d9cc: 0x0  nop
    ctx->pc = 0x16d9ccu;
    // NOP
    // 0x16d9d0: 0x0  nop
    ctx->pc = 0x16d9d0u;
    // NOP
    // 0x16d9d4: 0x0  nop
    ctx->pc = 0x16d9d4u;
    // NOP
    // 0x16d9d8: 0x0  nop
    ctx->pc = 0x16d9d8u;
    // NOP
    // 0x16d9dc: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16D9DCu;
    {
        const bool branch_taken_0x16d9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9DCu;
            // 0x16d9e0: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9dc) {
            ctx->pc = 0x16D9C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16d9c8;
        }
    }
    ctx->pc = 0x16D9E4u;
    // 0x16d9e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16D9E4u;
    {
        const bool branch_taken_0x16d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9E4u;
            // 0x16d9e8: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9e4) {
            ctx->pc = 0x16DA6Cu;
            goto label_16da6c;
        }
    }
    ctx->pc = 0x16D9ECu;
    // 0x16d9ec: 0x0  nop
    ctx->pc = 0x16d9ecu;
    // NOP
label_16d9f0:
    // 0x16d9f0: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
    // 0x16d9f4: 0x2443ab5c  addiu       $v1, $v0, -0x54A4
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945628));
    // 0x16d9f8: 0x26a4ab20  addiu       $a0, $s5, -0x54E0
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945568));
    // 0x16d9fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16da00: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x16da00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16da04: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16DA04u;
    {
        const bool branch_taken_0x16da04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA04u;
            // 0x16da08: 0x3c17005e  lui         $s7, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da04) {
            ctx->pc = 0x16DA68u;
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA0Cu;
    // 0x16da0c: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16da0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16da10: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16da10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16da14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da18: 0x26f3ab18  addiu       $s3, $s7, -0x54E8
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945560));
    // 0x16da1c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16da1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16da20: 0x26d0aad4  addiu       $s0, $s6, -0x552C
    ctx->pc = 0x16da20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945492));
    // 0x16da24: 0x0  nop
    ctx->pc = 0x16da24u;
    // NOP
label_16da28:
    // 0x16da28: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x16da28u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x16da2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16da30: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16DA30u;
    SET_GPR_U32(ctx, 31, 0x16DA38u);
    ctx->pc = 0x16DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA30u;
            // 0x16da34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA38u; }
        if (ctx->pc != 0x16DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA38u; }
        if (ctx->pc != 0x16DA38u) { return; }
    }
    ctx->pc = 0x16DA38u;
label_16da38:
    // 0x16da38: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16DA38u;
    SET_GPR_U32(ctx, 31, 0x16DA40u);
    ctx->pc = 0x16DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA38u;
            // 0x16da3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA40u; }
        if (ctx->pc != 0x16DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA40u; }
        if (ctx->pc != 0x16DA40u) { return; }
    }
    ctx->pc = 0x16DA40u;
label_16da40:
    // 0x16da40: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16DA40u;
    SET_GPR_U32(ctx, 31, 0x16DA48u);
    ctx->pc = 0x16DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA40u;
            // 0x16da44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA48u; }
        if (ctx->pc != 0x16DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA48u; }
        if (ctx->pc != 0x16DA48u) { return; }
    }
    ctx->pc = 0x16DA48u;
label_16da48:
    // 0x16da48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16da4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16da50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x16da50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x16da54: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x16da54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16da58: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16DA58u;
    {
        const bool branch_taken_0x16da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA58u;
            // 0x16da5c: 0x26a2ab20  addiu       $v0, $s5, -0x54E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da58) {
            ctx->pc = 0x16DA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16da28;
        }
    }
    ctx->pc = 0x16DA60u;
    // 0x16da60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA60u;
    {
        const bool branch_taken_0x16da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA60u;
            // 0x16da64: 0xdfb50028  ld          $s5, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da60) {
            ctx->pc = 0x16DA74u;
            goto label_16da74;
        }
    }
    ctx->pc = 0x16DA68u;
label_16da68:
    // 0x16da68: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_16da6c:
    // 0x16da6c: 0x26a2ab20  addiu       $v0, $s5, -0x54E0
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945568));
    // 0x16da70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16da70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16da74:
    // 0x16da74: 0x26e3ab18  addiu       $v1, $s7, -0x54E8
    ctx->pc = 0x16da74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945560));
    // 0x16da78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16da78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16da7c: 0x26c4aad4  addiu       $a0, $s6, -0x552C
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945492));
    // 0x16da80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16da80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16da84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16da84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16da88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16da8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16da8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16da90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16da94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16da94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16da98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16da9c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16daa0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16daa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16daa8: 0x3e00008  jr          $ra
    ctx->pc = 0x16DAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAA8u;
            // 0x16daac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DAB0u;
}

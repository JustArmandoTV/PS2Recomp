#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012AA48
// Address: 0x12aa48 - 0x12abc8
void sub_0012AA48_0x12aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AA48_0x12aa48");
#endif

    switch (ctx->pc) {
        case 0x12aa7cu: goto label_12aa7c;
        case 0x12aaecu: goto label_12aaec;
        case 0x12ab14u: goto label_12ab14;
        case 0x12ab2cu: goto label_12ab2c;
        case 0x12ab4cu: goto label_12ab4c;
        case 0x12ab90u: goto label_12ab90;
        case 0x12abb0u: goto label_12abb0;
        default: break;
    }

    ctx->pc = 0x12aa48u;

    // 0x12aa48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12aa4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12aa50: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12aa54: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12aa58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12aa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12aa60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12aa60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12aa68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x12aa68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12aa70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12aa74: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12AA74u;
    SET_GPR_U32(ctx, 31, 0x12AA7Cu);
    ctx->pc = 0x12AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA74u;
            // 0x12aa78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA7Cu; }
        if (ctx->pc != 0x12AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA7Cu; }
        if (ctx->pc != 0x12AA7Cu) { return; }
    }
    ctx->pc = 0x12AA7Cu;
label_12aa7c:
    // 0x12aa7c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x12aa7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x12aa80: 0x10683f  dsra32      $t5, $s0, 0
    ctx->pc = 0x12aa80u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12aa84: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12aa84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12aa88: 0x3c0e000f  lui         $t6, 0xF
    ctx->pc = 0x12aa88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
    // 0x12aa8c: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x12aa8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12aa90: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12aa90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12aa94: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12aa94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12aa98: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12aa98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12aa9c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12aa9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12aaa0: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x12aaa0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x12aaa4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12aaa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12aaa8: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x12aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x12aaac: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12aaacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12aab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12aab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aab4: 0x20f8025  or          $s0, $s0, $t7
    ctx->pc = 0x12aab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x12aab8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x12aab8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x12aabc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AABCu;
    {
        const bool branch_taken_0x12aabc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AABCu;
            // 0x12aac0: 0x24530014  addiu       $s3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aabc) {
            ctx->pc = 0x12AAD0u;
            goto label_12aad0;
        }
    }
    ctx->pc = 0x12AAC4u;
    // 0x12aac4: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x12aac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x12aac8: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x12aac8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12aacc: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x12aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
label_12aad0:
    // 0x12aad0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x12aad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12aad4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12aad4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12aad8: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x12AAD8u;
    {
        const bool branch_taken_0x12aad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAD8u;
            // 0x12aadc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aad8) {
            ctx->pc = 0x12ABA8u;
            goto label_12aba8;
        }
    }
    ctx->pc = 0x12AAE0u;
    // 0x12aae0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12aae4: 0xc04a824  jal         func_12A090
    ctx->pc = 0x12AAE4u;
    SET_GPR_U32(ctx, 31, 0x12AAECu);
    ctx->pc = 0x12AAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAE4u;
            // 0x12aae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A090u;
    if (runtime->hasFunction(0x12A090u)) {
        auto targetFn = runtime->lookupFunction(0x12A090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AAECu; }
        if (ctx->pc != 0x12AAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A090_0x12a090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AAECu; }
        if (ctx->pc != 0x12AAECu) { return; }
    }
    ctx->pc = 0x12AAECu;
label_12aaec:
    // 0x12aaec: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12AAECu;
    {
        const bool branch_taken_0x12aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AAECu;
            // 0x12aaf0: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaec) {
            ctx->pc = 0x12AB9Cu;
            goto label_12ab9c;
        }
    }
    ctx->pc = 0x12AAF4u;
    // 0x12aaf4: 0x26823  negu        $t5, $v0
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12aaf8: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12aaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aafc: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x12ab00: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12ab00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12ab04: 0xae2f0014  sw          $t7, 0x14($s1)
    ctx->pc = 0x12ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
    // 0x12ab08: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ab0c: 0x4e7006  srlv        $t6, $t6, $v0
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x12ab10: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x12ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
label_12ab14:
    // 0x12ab14: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ab18: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12ab18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ab1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12ab1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ab20: 0x1ed700a  movz        $t6, $t7, $t5
    ctx->pc = 0x12ab20u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x12ab24: 0xae6d0004  sw          $t5, 0x4($s3)
    ctx->pc = 0x12ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 13));
    // 0x12ab28: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x12ab28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12ab2c:
    // 0x12ab2c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12AB2Cu;
    {
        const bool branch_taken_0x12ab2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB2Cu;
            // 0x12ab30: 0xae2e0010  sw          $t6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab2c) {
            ctx->pc = 0x12AB74u;
            goto label_12ab74;
        }
    }
    ctx->pc = 0x12AB34u;
    // 0x12ab34: 0x2427021  addu        $t6, $s2, $v0
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12ab38: 0x240f0035  addiu       $t7, $zero, 0x35
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x12ab3c: 0x25cefbcd  addiu       $t6, $t6, -0x433
    ctx->pc = 0x12ab3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966221));
    // 0x12ab40: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x12ab40u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12ab44: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12ab48: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x12ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_12ab4c:
    // 0x12ab4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12ab4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ab54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12ab54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ab58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12ab58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ab5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12ab5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ab60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12ab60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ab64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12ab64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ab68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ab6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB6Cu;
            // 0x12ab70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AB74u;
label_12ab74:
    // 0x12ab74: 0x244efbce  addiu       $t6, $v0, -0x432
    ctx->pc = 0x12ab74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966222));
    // 0x12ab78: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12ab78u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12ab7c: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12ab80: 0x26f7821  addu        $t7, $s3, $t7
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x12ab84: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12ab84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x12ab88: 0xc04a804  jal         func_12A010
    ctx->pc = 0x12AB88u;
    SET_GPR_U32(ctx, 31, 0x12AB90u);
    ctx->pc = 0x12AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB88u;
            // 0x12ab8c: 0x8de4fffc  lw          $a0, -0x4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A010u;
    if (runtime->hasFunction(0x12A010u)) {
        auto targetFn = runtime->lookupFunction(0x12A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB90u; }
        if (ctx->pc != 0x12AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A010_0x12a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AB90u; }
        if (ctx->pc != 0x12AB90u) { return; }
    }
    ctx->pc = 0x12AB90u;
label_12ab90:
    // 0x12ab90: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x12ab90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12ab94: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x12AB94u;
    {
        const bool branch_taken_0x12ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB94u;
            // 0x12ab98: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab94) {
            ctx->pc = 0x12AB4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ab4c;
        }
    }
    ctx->pc = 0x12AB9Cu;
label_12ab9c:
    // 0x12ab9c: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12ab9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aba0: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x12ABA0u;
    {
        const bool branch_taken_0x12aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABA0u;
            // 0x12aba4: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aba0) {
            ctx->pc = 0x12AB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ab14;
        }
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0xc04a824  jal         func_12A090
    ctx->pc = 0x12ABA8u;
    SET_GPR_U32(ctx, 31, 0x12ABB0u);
    ctx->pc = 0x12ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABA8u;
            // 0x12abac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A090u;
    if (runtime->hasFunction(0x12A090u)) {
        auto targetFn = runtime->lookupFunction(0x12A090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB0u; }
        if (ctx->pc != 0x12ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A090_0x12a090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB0u; }
        if (ctx->pc != 0x12ABB0u) { return; }
    }
    ctx->pc = 0x12ABB0u;
label_12abb0:
    // 0x12abb0: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12abb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12abb4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x12abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12abb8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12abb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12abbc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x12ABBCu;
    {
        const bool branch_taken_0x12abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABBCu;
            // 0x12abc0: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abbc) {
            ctx->pc = 0x12AB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ab2c;
        }
    }
    ctx->pc = 0x12ABC4u;
    // 0x12abc4: 0x0  nop
    ctx->pc = 0x12abc4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAEC0
// Address: 0x2aaec0 - 0x2ab340
void sub_002AAEC0_0x2aaec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAEC0_0x2aaec0");
#endif

    switch (ctx->pc) {
        case 0x2aafbcu: goto label_2aafbc;
        case 0x2aafe0u: goto label_2aafe0;
        case 0x2aaff8u: goto label_2aaff8;
        case 0x2ab0bcu: goto label_2ab0bc;
        case 0x2ab0e8u: goto label_2ab0e8;
        case 0x2ab100u: goto label_2ab100;
        case 0x2ab1d0u: goto label_2ab1d0;
        case 0x2ab1e8u: goto label_2ab1e8;
        case 0x2ab218u: goto label_2ab218;
        default: break;
    }

    ctx->pc = 0x2aaec0u;

    // 0x2aaec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aaec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aaec4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aaec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aaec8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2aaec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2aaecc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aaeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aaed0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2aaed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaed4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aaed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aaed8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2aaed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaedc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aaedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aaee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aaee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aaee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aaee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aaee8: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x2aaee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2aaeec: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x2aaeecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2aaef0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2aaef4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2aaef8: 0x8c930030  lw          $s3, 0x30($a0)
    ctx->pc = 0x2aaef8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2aaefc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2aaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aaf00: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AAF00u;
    {
        const bool branch_taken_0x2aaf00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF00u;
            // 0x2aaf04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf00) {
            ctx->pc = 0x2AB014u;
            goto label_2ab014;
        }
    }
    ctx->pc = 0x2AAF08u;
    // 0x2aaf08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2aaf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aaf0c: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x2aaf0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aaf10: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF10u;
    {
        const bool branch_taken_0x2aaf10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf10) {
            ctx->pc = 0x2AAF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF10u;
            // 0x2aaf14: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF20u;
            goto label_2aaf20;
        }
    }
    ctx->pc = 0x2AAF18u;
    // 0x2aaf18: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2aaf18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2aaf1c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2aaf20:
    // 0x2aaf20: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x2aaf20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aaf24: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF24u;
    {
        const bool branch_taken_0x2aaf24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf24) {
            ctx->pc = 0x2AAF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF24u;
            // 0x2aaf28: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF34u;
            goto label_2aaf34;
        }
    }
    ctx->pc = 0x2AAF2Cu;
    // 0x2aaf2c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2aaf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2aaf30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2aaf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2aaf34:
    // 0x2aaf34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aaf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aaf38: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x2aaf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2aaf3c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aaf40: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x2aaf40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2aaf44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF44u;
    {
        const bool branch_taken_0x2aaf44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF44u;
            // 0x2aaf48: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf44) {
            ctx->pc = 0x2AAF58u;
            goto label_2aaf58;
        }
    }
    ctx->pc = 0x2AAF4Cu;
    // 0x2aaf4c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2aaf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaf50: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2aaf50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2aaf54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2aaf58:
    // 0x2aaf58: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2aaf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aaf5c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2aaf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2aaf60: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x2aaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2aaf64: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2aaf68: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2aaf68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aaf6c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AAF6Cu;
    {
        const bool branch_taken_0x2aaf6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf6c) {
            ctx->pc = 0x2AAF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF6Cu;
            // 0x2aaf70: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF8Cu;
            goto label_2aaf8c;
        }
    }
    ctx->pc = 0x2AAF74u;
    // 0x2aaf74: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2aaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2aaf78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2aaf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aaf7c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2aaf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2aaf80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aaf84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAF84u;
    {
        const bool branch_taken_0x2aaf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF84u;
            // 0x2aaf88: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf84) {
            ctx->pc = 0x2AAF90u;
            goto label_2aaf90;
        }
    }
    ctx->pc = 0x2AAF8Cu;
label_2aaf8c:
    // 0x2aaf8c: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x2aaf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_2aaf90:
    // 0x2aaf90: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2aaf94: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2aaf98: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2aaf9c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2aaf9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aafa0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AAFA0u;
    {
        const bool branch_taken_0x2aafa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aafa0) {
            ctx->pc = 0x2AAFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFA0u;
            // 0x2aafa4: 0x8ea40030  lw          $a0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAFF0u;
            goto label_2aaff0;
        }
    }
    ctx->pc = 0x2AAFA8u;
    // 0x2aafa8: 0x8eb10030  lw          $s1, 0x30($s5)
    ctx->pc = 0x2aafa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2aafac: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x2aafacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aafb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aafb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafb4: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AAFB4u;
    SET_GPR_U32(ctx, 31, 0x2AAFBCu);
    ctx->pc = 0x2AAFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFB4u;
            // 0x2aafb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFBCu; }
        if (ctx->pc != 0x2AAFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFBCu; }
        if (ctx->pc != 0x2AAFBCu) { return; }
    }
    ctx->pc = 0x2AAFBCu;
label_2aafbc:
    // 0x2aafbc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2aafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2aafc0: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x2aafc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2aafc4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2AAFC4u;
    {
        const bool branch_taken_0x2aafc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFC4u;
            // 0x2aafc8: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafc4) {
            ctx->pc = 0x2AB004u;
            goto label_2ab004;
        }
    }
    ctx->pc = 0x2AAFCCu;
    // 0x2aafcc: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x2aafccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2aafd0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2aafd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2aafd4: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2aafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aafd8: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AAFD8u;
    SET_GPR_U32(ctx, 31, 0x2AAFE0u);
    ctx->pc = 0x2AAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFD8u;
            // 0x2aafdc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFE0u; }
        if (ctx->pc != 0x2AAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFE0u; }
        if (ctx->pc != 0x2AAFE0u) { return; }
    }
    ctx->pc = 0x2AAFE0u;
label_2aafe0:
    // 0x2aafe0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2aafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2aafe4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2aafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2aafe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAFE8u;
    {
        const bool branch_taken_0x2aafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFE8u;
            // 0x2aafec: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafe8) {
            ctx->pc = 0x2AB004u;
            goto label_2ab004;
        }
    }
    ctx->pc = 0x2AAFF0u;
label_2aaff0:
    // 0x2aaff0: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AAFF0u;
    SET_GPR_U32(ctx, 31, 0x2AAFF8u);
    ctx->pc = 0x2AAFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFF0u;
            // 0x2aaff4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFF8u; }
        if (ctx->pc != 0x2AAFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFF8u; }
        if (ctx->pc != 0x2AAFF8u) { return; }
    }
    ctx->pc = 0x2AAFF8u;
label_2aaff8:
    // 0x2aaff8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2aaff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2aaffc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ab000: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x2ab000u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_2ab004:
    // 0x2ab004: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ab004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ab008: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x2ab008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2ab00c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab010: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x2ab010u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_2ab014:
    // 0x2ab014: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ab014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ab018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ab01c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ab01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ab020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ab024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab034: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB034u;
            // 0x2ab038: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB03Cu;
    // 0x2ab03c: 0x0  nop
    ctx->pc = 0x2ab03cu;
    // NOP
    // 0x2ab040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ab040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ab044: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ab044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ab048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ab048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ab04c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ab04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ab050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab05c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab060: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab064: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ab064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab068: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2ab068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab06c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ab06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab070: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AB070u;
    {
        const bool branch_taken_0x2ab070 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AB074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB070u;
            // 0x2ab074: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab070) {
            ctx->pc = 0x2AB120u;
            goto label_2ab120;
        }
    }
    ctx->pc = 0x2AB078u;
    // 0x2ab078: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2ab078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ab07c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2ab07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ab080: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB080u;
    {
        const bool branch_taken_0x2ab080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab080) {
            ctx->pc = 0x2AB084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB080u;
            // 0x2ab084: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB090u;
            goto label_2ab090;
        }
    }
    ctx->pc = 0x2AB088u;
    // 0x2ab088: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ab088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ab08c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ab08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab090:
    // 0x2ab090: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ab090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ab094: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ab094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ab098: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2ab098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ab09c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ab09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab0a0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AB0A0u;
    {
        const bool branch_taken_0x2ab0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab0a0) {
            ctx->pc = 0x2AB0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0A0u;
            // 0x2ab0a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB0F8u;
            goto label_2ab0f8;
        }
    }
    ctx->pc = 0x2AB0A8u;
    // 0x2ab0a8: 0x8e340030  lw          $s4, 0x30($s1)
    ctx->pc = 0x2ab0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ab0ac: 0x659823  subu        $s3, $v1, $a1
    ctx->pc = 0x2ab0acu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab0b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0b4: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB0B4u;
    SET_GPR_U32(ctx, 31, 0x2AB0BCu);
    ctx->pc = 0x2AB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0B4u;
            // 0x2ab0b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0BCu; }
        if (ctx->pc != 0x2AB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0BCu; }
        if (ctx->pc != 0x2AB0BCu) { return; }
    }
    ctx->pc = 0x2AB0BCu;
label_2ab0bc:
    // 0x2ab0bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ab0c0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ab0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2ab0c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ab0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab0c8: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x2ab0c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ab0cc: 0x50200011  beql        $at, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AB0CCu;
    {
        const bool branch_taken_0x2ab0cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab0cc) {
            ctx->pc = 0x2AB0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0CCu;
            // 0x2ab0d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB114u;
            goto label_2ab114;
        }
    }
    ctx->pc = 0x2AB0D4u;
    // 0x2ab0d4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ab0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ab0d8: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ab0dc: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x2ab0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2ab0e0: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB0E0u;
    SET_GPR_U32(ctx, 31, 0x2AB0E8u);
    ctx->pc = 0x2AB0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0E0u;
            // 0x2ab0e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0E8u; }
        if (ctx->pc != 0x2AB0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0E8u; }
        if (ctx->pc != 0x2AB0E8u) { return; }
    }
    ctx->pc = 0x2AB0E8u;
label_2ab0e8:
    // 0x2ab0e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ab0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ab0ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ab0f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB0F0u;
    {
        const bool branch_taken_0x2ab0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0F0u;
            // 0x2ab0f4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0f0) {
            ctx->pc = 0x2AB110u;
            goto label_2ab110;
        }
    }
    ctx->pc = 0x2AB0F8u;
label_2ab0f8:
    // 0x2ab0f8: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB0F8u;
    SET_GPR_U32(ctx, 31, 0x2AB100u);
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB100u; }
        if (ctx->pc != 0x2AB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB100u; }
        if (ctx->pc != 0x2AB100u) { return; }
    }
    ctx->pc = 0x2AB100u;
label_2ab100:
    // 0x2ab100: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ab104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ab104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab108: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab10c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ab10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2ab110:
    // 0x2ab110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab114:
    // 0x2ab114: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2ab114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ab118: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab11c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2ab11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2ab120:
    // 0x2ab120: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2ab120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ab124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ab124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ab128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ab12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB13Cu;
            // 0x2ab140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB144u;
    // 0x2ab144: 0x0  nop
    ctx->pc = 0x2ab144u;
    // NOP
    // 0x2ab148: 0x0  nop
    ctx->pc = 0x2ab148u;
    // NOP
    // 0x2ab14c: 0x0  nop
    ctx->pc = 0x2ab14cu;
    // NOP
    // 0x2ab150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ab154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ab154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ab158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ab158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ab15c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab16c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab170: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ab170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab174: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ab174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab178: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab17c: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x2ab17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ab180: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab184: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x2ab184u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ab188: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ab188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab18c: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x2ab18cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab190: 0x5a60002c  blezl       $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AB190u;
    {
        const bool branch_taken_0x2ab190 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2ab190) {
            ctx->pc = 0x2AB194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB190u;
            // 0x2ab194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB244u;
            goto label_2ab244;
        }
    }
    ctx->pc = 0x2AB198u;
    // 0x2ab198: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x2ab198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ab19c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB19Cu;
    {
        const bool branch_taken_0x2ab19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab19c) {
            ctx->pc = 0x2AB1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB19Cu;
            // 0x2ab1a0: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB1ACu;
            goto label_2ab1ac;
        }
    }
    ctx->pc = 0x2AB1A4u;
    // 0x2ab1a4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2ab1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1a8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ab1ac:
    // 0x2ab1ac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2ab1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ab1b0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2ab1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ab1b4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2ab1b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ab1b8: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AB1B8u;
    {
        const bool branch_taken_0x2ab1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab1b8) {
            ctx->pc = 0x2AB1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1B8u;
            // 0x2ab1bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB210u;
            goto label_2ab210;
        }
    }
    ctx->pc = 0x2AB1C0u;
    // 0x2ab1c0: 0x649823  subu        $s3, $v1, $a0
    ctx->pc = 0x2ab1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab1c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1c8: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB1C8u;
    SET_GPR_U32(ctx, 31, 0x2AB1D0u);
    ctx->pc = 0x2AB1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1C8u;
            // 0x2ab1cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D0u; }
        if (ctx->pc != 0x2AB1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D0u; }
        if (ctx->pc != 0x2AB1D0u) { return; }
    }
    ctx->pc = 0x2AB1D0u;
label_2ab1d0:
    // 0x2ab1d0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ab1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ab1d4: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x2ab1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2ab1d8: 0x2138823  subu        $s1, $s0, $s3
    ctx->pc = 0x2ab1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2ab1dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ab1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1e0: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB1E0u;
    SET_GPR_U32(ctx, 31, 0x2AB1E8u);
    ctx->pc = 0x2AB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1E0u;
            // 0x2ab1e4: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1E8u; }
        if (ctx->pc != 0x2AB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1E8u; }
        if (ctx->pc != 0x2AB1E8u) { return; }
    }
    ctx->pc = 0x2AB1E8u;
label_2ab1e8:
    // 0x2ab1e8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ab1ec: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2ab1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ab1f0: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2ab1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2ab1f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ab1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ab1f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ab1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ab1fc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2AB1FCu;
    {
        const bool branch_taken_0x2ab1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab1fc) {
            ctx->pc = 0x2AB200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1FCu;
            // 0x2ab200: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB238u;
            goto label_2ab238;
        }
    }
    ctx->pc = 0x2AB204u;
    // 0x2ab204: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ab208: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AB208u;
    {
        const bool branch_taken_0x2ab208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB208u;
            // 0x2ab20c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab208) {
            ctx->pc = 0x2AB234u;
            goto label_2ab234;
        }
    }
    ctx->pc = 0x2AB210u;
label_2ab210:
    // 0x2ab210: 0xc04a508  jal         func_129420
    ctx->pc = 0x2AB210u;
    SET_GPR_U32(ctx, 31, 0x2AB218u);
    ctx->pc = 0x2AB214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB210u;
            // 0x2ab214: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB218u; }
        if (ctx->pc != 0x2AB218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB218u; }
        if (ctx->pc != 0x2AB218u) { return; }
    }
    ctx->pc = 0x2AB218u;
label_2ab218:
    // 0x2ab218: 0x56700004  bnel        $s3, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB218u;
    {
        const bool branch_taken_0x2ab218 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ab218) {
            ctx->pc = 0x2AB21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB218u;
            // 0x2ab21c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB22Cu;
            goto label_2ab22c;
        }
    }
    ctx->pc = 0x2AB220u;
    // 0x2ab220: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ab224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB224u;
    {
        const bool branch_taken_0x2ab224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB224u;
            // 0x2ab228: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab224) {
            ctx->pc = 0x2AB234u;
            goto label_2ab234;
        }
    }
    ctx->pc = 0x2AB22Cu;
label_2ab22c:
    // 0x2ab22c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ab22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ab230: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2ab230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2ab234:
    // 0x2ab234: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2ab234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2ab238:
    // 0x2ab238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ab238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab23c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ab23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ab240: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x2ab240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_2ab244:
    // 0x2ab244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ab244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ab248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab24c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab258: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB258u;
            // 0x2ab25c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB260u;
    // 0x2ab260: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab264: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x2ab264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ab268: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab26c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ab26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab270: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x2ab270u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ab274: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ab274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ab278: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ab278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab27c: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AB27Cu;
    {
        const bool branch_taken_0x2ab27c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ab27c) {
            ctx->pc = 0x2AB280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB27Cu;
            // 0x2ab280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB2BCu;
            goto label_2ab2bc;
        }
    }
    ctx->pc = 0x2AB284u;
    // 0x2ab284: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2ab284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab288: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2ab288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ab28c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2ab28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab290: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2ab290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ab294: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ab294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2ab298: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ab298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ab29c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB29Cu;
    {
        const bool branch_taken_0x2ab29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab29c) {
            ctx->pc = 0x2AB2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB29Cu;
            // 0x2ab2a0: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB2B0u;
            goto label_2ab2b0;
        }
    }
    ctx->pc = 0x2AB2A4u;
    // 0x2ab2a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ab2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ab2a8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2ab2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2ab2ac: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ab2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2ab2b0:
    // 0x2ab2b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab2b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ab2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ab2b8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2ab2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_2ab2bc:
    // 0x2ab2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB2C4u;
    // 0x2ab2c4: 0x0  nop
    ctx->pc = 0x2ab2c4u;
    // NOP
    // 0x2ab2c8: 0x0  nop
    ctx->pc = 0x2ab2c8u;
    // NOP
    // 0x2ab2cc: 0x0  nop
    ctx->pc = 0x2ab2ccu;
    // NOP
    // 0x2ab2d0: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x2ab2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ab2d4: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2ab2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ab2d8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2ab2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ab2dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ab2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab2e0: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x2ab2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ab2e4: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x2ab2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2ab2e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ab2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ab2ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ab2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab2f0: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x2ab2f0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ab2f4: 0x1012  mflo        $v0
    ctx->pc = 0x2ab2f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ab2f8: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2ab2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab2fc: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AB2FCu;
    {
        const bool branch_taken_0x2ab2fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AB300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB2FCu;
            // 0x2ab300: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2fc) {
            ctx->pc = 0x2AB330u;
            goto label_2ab330;
        }
    }
    ctx->pc = 0x2AB304u;
    // 0x2ab304: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2ab304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab308: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ab30c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ab30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ab310: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2ab310u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ab314: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB314u;
    {
        const bool branch_taken_0x2ab314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab314) {
            ctx->pc = 0x2AB318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB314u;
            // 0x2ab318: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB334u;
            goto label_2ab334;
        }
    }
    ctx->pc = 0x2AB31Cu;
    // 0x2ab31c: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x2ab31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ab320: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ab320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ab324: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2ab324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ab328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB328u;
    {
        const bool branch_taken_0x2ab328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab328) {
            ctx->pc = 0x2AB334u;
            goto label_2ab334;
        }
    }
    ctx->pc = 0x2AB330u;
label_2ab330:
    // 0x2ab330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ab330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab334:
    // 0x2ab334: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB33Cu;
    // 0x2ab33c: 0x0  nop
    ctx->pc = 0x2ab33cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC9F0
// Address: 0x2bc9f0 - 0x2bcb30
void sub_002BC9F0_0x2bc9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC9F0_0x2bc9f0");
#endif

    switch (ctx->pc) {
        case 0x2bca0cu: goto label_2bca0c;
        case 0x2bca2cu: goto label_2bca2c;
        case 0x2bca60u: goto label_2bca60;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcaf0u: goto label_2bcaf0;
        case 0x2bcafcu: goto label_2bcafc;
        case 0x2bcb14u: goto label_2bcb14;
        default: break;
    }

    ctx->pc = 0x2bc9f0u;

    // 0x2bc9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc9f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bc9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc9fc: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x2bc9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x2bca00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bca04: 0xc0af384  jal         func_2BCE10
    ctx->pc = 0x2BCA04u;
    SET_GPR_U32(ctx, 31, 0x2BCA0Cu);
    ctx->pc = 0x2BCA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA04u;
            // 0x2bca08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCE10u;
    if (runtime->hasFunction(0x2BCE10u)) {
        auto targetFn = runtime->lookupFunction(0x2BCE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA0Cu; }
        if (ctx->pc != 0x2BCA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCE10_0x2bce10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA0Cu; }
        if (ctx->pc != 0x2BCA0Cu) { return; }
    }
    ctx->pc = 0x2BCA0Cu;
label_2bca0c:
    // 0x2bca0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bca10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bca14: 0x24632030  addiu       $v1, $v1, 0x2030
    ctx->pc = 0x2bca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8240));
    // 0x2bca18: 0x24422068  addiu       $v0, $v0, 0x2068
    ctx->pc = 0x2bca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8296));
    // 0x2bca1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bca20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca24: 0xc0af380  jal         func_2BCE00
    ctx->pc = 0x2BCA24u;
    SET_GPR_U32(ctx, 31, 0x2BCA2Cu);
    ctx->pc = 0x2BCA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA24u;
            // 0x2bca28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCE00u;
    if (runtime->hasFunction(0x2BCE00u)) {
        auto targetFn = runtime->lookupFunction(0x2BCE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA2Cu; }
        if (ctx->pc != 0x2BCA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCE00_0x2bce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCA2Cu; }
        if (ctx->pc != 0x2BCA2Cu) { return; }
    }
    ctx->pc = 0x2BCA2Cu;
label_2bca2c:
    // 0x2bca2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bca30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bca34: 0x24421b80  addiu       $v0, $v0, 0x1B80
    ctx->pc = 0x2bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7040));
    // 0x2bca38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bca3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bca40: 0x24421bb8  addiu       $v0, $v0, 0x1BB8
    ctx->pc = 0x2bca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x2bca44: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bca44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bca48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bca48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bca50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bca50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bca54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA54u;
            // 0x2bca58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCA5Cu;
    // 0x2bca5c: 0x0  nop
    ctx->pc = 0x2bca5cu;
    // NOP
label_2bca60:
    // 0x2bca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bca64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bca68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bca6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bca70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BCA74u;
    {
        const bool branch_taken_0x2bca74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA74u;
            // 0x2bca78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca74) {
            ctx->pc = 0x2BCB14u;
            goto label_2bcb14;
        }
    }
    ctx->pc = 0x2BCA7Cu;
    // 0x2bca7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bca80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bca84: 0x24632030  addiu       $v1, $v1, 0x2030
    ctx->pc = 0x2bca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8240));
    // 0x2bca88: 0x24422068  addiu       $v0, $v0, 0x2068
    ctx->pc = 0x2bca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8296));
    // 0x2bca8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bca90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BCA90u;
    {
        const bool branch_taken_0x2bca90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCA90u;
            // 0x2bca94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca90) {
            ctx->pc = 0x2BCAFCu;
            goto label_2bcafc;
        }
    }
    ctx->pc = 0x2BCA98u;
    // 0x2bca98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bca9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bcaa0: 0x24631fe0  addiu       $v1, $v1, 0x1FE0
    ctx->pc = 0x2bcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8160));
    // 0x2bcaa4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bcaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bcaa8: 0x24422018  addiu       $v0, $v0, 0x2018
    ctx->pc = 0x2bcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
    // 0x2bcaac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bcab0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bcab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bcab4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bcab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bcab8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BCAB8u;
    SET_GPR_U32(ctx, 31, 0x2BCAC0u);
    ctx->pc = 0x2BCABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAB8u;
            // 0x2bcabc: 0x24a5cc00  addiu       $a1, $a1, -0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAC0u; }
        if (ctx->pc != 0x2BCAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAC0u; }
        if (ctx->pc != 0x2BCAC0u) { return; }
    }
    ctx->pc = 0x2BCAC0u;
label_2bcac0:
    // 0x2bcac0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bcac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bcac4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x2BCAC4u;
    SET_GPR_U32(ctx, 31, 0x2BCACCu);
    ctx->pc = 0x2BCAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAC4u;
            // 0x2bcac8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCACCu; }
        if (ctx->pc != 0x2BCACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCACCu; }
        if (ctx->pc != 0x2BCACCu) { return; }
    }
    ctx->pc = 0x2BCACCu;
label_2bcacc:
    // 0x2bcacc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bcaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bcad0: 0xc0af2e4  jal         func_2BCB90
    ctx->pc = 0x2BCAD0u;
    SET_GPR_U32(ctx, 31, 0x2BCAD8u);
    ctx->pc = 0x2BCAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAD0u;
            // 0x2bcad4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCB90u;
    if (runtime->hasFunction(0x2BCB90u)) {
        auto targetFn = runtime->lookupFunction(0x2BCB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAD8u; }
        if (ctx->pc != 0x2BCAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCB90_0x2bcb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAD8u; }
        if (ctx->pc != 0x2BCAD8u) { return; }
    }
    ctx->pc = 0x2BCAD8u;
label_2bcad8:
    // 0x2bcad8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bcadc: 0xc0af2e4  jal         func_2BCB90
    ctx->pc = 0x2BCADCu;
    SET_GPR_U32(ctx, 31, 0x2BCAE4u);
    ctx->pc = 0x2BCAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCADCu;
            // 0x2bcae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCB90u;
    if (runtime->hasFunction(0x2BCB90u)) {
        auto targetFn = runtime->lookupFunction(0x2BCB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAE4u; }
        if (ctx->pc != 0x2BCAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCB90_0x2bcb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAE4u; }
        if (ctx->pc != 0x2BCAE4u) { return; }
    }
    ctx->pc = 0x2BCAE4u;
label_2bcae4:
    // 0x2bcae4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bcae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bcae8: 0xc0af2cc  jal         func_2BCB30
    ctx->pc = 0x2BCAE8u;
    SET_GPR_U32(ctx, 31, 0x2BCAF0u);
    ctx->pc = 0x2BCAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAE8u;
            // 0x2bcaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCB30u;
    if (runtime->hasFunction(0x2BCB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BCB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAF0u; }
        if (ctx->pc != 0x2BCAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCB30_0x2bcb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAF0u; }
        if (ctx->pc != 0x2BCAF0u) { return; }
    }
    ctx->pc = 0x2BCAF0u;
label_2bcaf0:
    // 0x2bcaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaf4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BCAF4u;
    SET_GPR_U32(ctx, 31, 0x2BCAFCu);
    ctx->pc = 0x2BCAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCAF4u;
            // 0x2bcaf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAFCu; }
        if (ctx->pc != 0x2BCAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCAFCu; }
        if (ctx->pc != 0x2BCAFCu) { return; }
    }
    ctx->pc = 0x2BCAFCu;
label_2bcafc:
    // 0x2bcafc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bcafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bcb00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bcb00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bcb04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCB04u;
    {
        const bool branch_taken_0x2bcb04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcb04) {
            ctx->pc = 0x2BCB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB04u;
            // 0x2bcb08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB18u;
            goto label_2bcb18;
        }
    }
    ctx->pc = 0x2BCB0Cu;
    // 0x2bcb0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BCB0Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB14u);
    ctx->pc = 0x2BCB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB0Cu;
            // 0x2bcb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB14u; }
        if (ctx->pc != 0x2BCB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB14u; }
        if (ctx->pc != 0x2BCB14u) { return; }
    }
    ctx->pc = 0x2BCB14u;
label_2bcb14:
    // 0x2bcb14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bcb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb18:
    // 0x2bcb18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bcb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB24u;
            // 0x2bcb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCB2Cu;
    // 0x2bcb2c: 0x0  nop
    ctx->pc = 0x2bcb2cu;
    // NOP
}

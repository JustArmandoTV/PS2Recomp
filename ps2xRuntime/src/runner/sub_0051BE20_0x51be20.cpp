#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BE20
// Address: 0x51be20 - 0x51c060
void sub_0051BE20_0x51be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BE20_0x51be20");
#endif

    switch (ctx->pc) {
        case 0x51bea0u: goto label_51bea0;
        case 0x51beecu: goto label_51beec;
        case 0x51bef4u: goto label_51bef4;
        case 0x51bf48u: goto label_51bf48;
        case 0x51bf98u: goto label_51bf98;
        case 0x51bfe8u: goto label_51bfe8;
        case 0x51c040u: goto label_51c040;
        default: break;
    }

    ctx->pc = 0x51be20u;

    // 0x51be20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51be24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51be24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51be28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51be2c: 0x24635a38  addiu       $v1, $v1, 0x5A38
    ctx->pc = 0x51be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23096));
    // 0x51be30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51be34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51be38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51be38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51be3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51be3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51be40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51be40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51be44: 0xac5089d0  sw          $s0, -0x7630($v0)
    ctx->pc = 0x51be44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937040), GPR_U32(ctx, 16));
    // 0x51be48: 0x24635a28  addiu       $v1, $v1, 0x5A28
    ctx->pc = 0x51be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23080));
    // 0x51be4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51be50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51be50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51be54: 0x24425a18  addiu       $v0, $v0, 0x5A18
    ctx->pc = 0x51be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23064));
    // 0x51be58: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x51be58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x51be5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x51be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51be60: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x51be60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x51be64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51be64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51be68: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x51be68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x51be6c: 0x24425a08  addiu       $v0, $v0, 0x5A08
    ctx->pc = 0x51be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23048));
    // 0x51be70: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x51be70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x51be74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51be78: 0xa080003d  sb          $zero, 0x3D($a0)
    ctx->pc = 0x51be78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x51be7c: 0xa083003e  sb          $v1, 0x3E($a0)
    ctx->pc = 0x51be7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x51be80: 0xa083003f  sb          $v1, 0x3F($a0)
    ctx->pc = 0x51be80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 3));
    // 0x51be84: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x51be84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x51be88: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x51be88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x51be8c: 0xa0830066  sb          $v1, 0x66($a0)
    ctx->pc = 0x51be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 102), (uint8_t)GPR_U32(ctx, 3));
    // 0x51be90: 0xa0830067  sb          $v1, 0x67($a0)
    ctx->pc = 0x51be90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 103), (uint8_t)GPR_U32(ctx, 3));
    // 0x51be94: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x51be94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x51be98: 0xc13d7f0  jal         func_4F5FC0
    ctx->pc = 0x51BE98u;
    SET_GPR_U32(ctx, 31, 0x51BEA0u);
    ctx->pc = 0x51BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BE98u;
            // 0x51be9c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5FC0u;
    if (runtime->hasFunction(0x4F5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x4F5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEA0u; }
        if (ctx->pc != 0x51BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5FC0_0x4f5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEA0u; }
        if (ctx->pc != 0x51BEA0u) { return; }
    }
    ctx->pc = 0x51BEA0u;
label_51bea0:
    // 0x51bea0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51bea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x51bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51bea8: 0x244259f8  addiu       $v0, $v0, 0x59F8
    ctx->pc = 0x51bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23032));
    // 0x51beac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51beb0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x51beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x51beb4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x51beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x51beb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51bebc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x51bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x51bec0: 0xa200007b  sb          $zero, 0x7B($s0)
    ctx->pc = 0x51bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bec4: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x51bec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bec8: 0xa200007d  sb          $zero, 0x7D($s0)
    ctx->pc = 0x51bec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x51becc: 0xa203008d  sb          $v1, 0x8D($s0)
    ctx->pc = 0x51beccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 3));
    // 0x51bed0: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x51bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bed4: 0xa2000091  sb          $zero, 0x91($s0)
    ctx->pc = 0x51bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bed8: 0xa2000092  sb          $zero, 0x92($s0)
    ctx->pc = 0x51bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bedc: 0xa2000093  sb          $zero, 0x93($s0)
    ctx->pc = 0x51bedcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bee0: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x51bee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bee4: 0xc0b90cc  jal         func_2E4330
    ctx->pc = 0x51BEE4u;
    SET_GPR_U32(ctx, 31, 0x51BEECu);
    ctx->pc = 0x51BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BEE4u;
            // 0x51bee8: 0xa20200f0  sb          $v0, 0xF0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4330u;
    if (runtime->hasFunction(0x2E4330u)) {
        auto targetFn = runtime->lookupFunction(0x2E4330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEECu; }
        if (ctx->pc != 0x51BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4330_0x2e4330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEECu; }
        if (ctx->pc != 0x51BEECu) { return; }
    }
    ctx->pc = 0x51BEECu;
label_51beec:
    // 0x51beec: 0xc0b90b0  jal         func_2E42C0
    ctx->pc = 0x51BEECu;
    SET_GPR_U32(ctx, 31, 0x51BEF4u);
    ctx->pc = 0x51BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BEECu;
            // 0x51bef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E42C0u;
    if (runtime->hasFunction(0x2E42C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E42C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEF4u; }
        if (ctx->pc != 0x51BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E42C0_0x2e42c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BEF4u; }
        if (ctx->pc != 0x51BEF4u) { return; }
    }
    ctx->pc = 0x51BEF4u;
label_51bef4:
    // 0x51bef4: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x51bef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51befc: 0xa200008f  sb          $zero, 0x8F($s0)
    ctx->pc = 0x51befcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bf00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x51BF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF08u;
            // 0x51bf0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BF10u;
    // 0x51bf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bf14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bf20: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x51BF20u;
    {
        const bool branch_taken_0x51bf20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bf20) {
            ctx->pc = 0x51BF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF20u;
            // 0x51bf24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BF4Cu;
            goto label_51bf4c;
        }
    }
    ctx->pc = 0x51BF28u;
    // 0x51bf28: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51bf2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51bf30: 0x246359f8  addiu       $v1, $v1, 0x59F8
    ctx->pc = 0x51bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23032));
    // 0x51bf34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51bf34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51bf38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51BF38u;
    {
        const bool branch_taken_0x51bf38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x51BF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF38u;
            // 0x51bf3c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bf38) {
            ctx->pc = 0x51BF48u;
            goto label_51bf48;
        }
    }
    ctx->pc = 0x51BF40u;
    // 0x51bf40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51BF40u;
    SET_GPR_U32(ctx, 31, 0x51BF48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BF48u; }
        if (ctx->pc != 0x51BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BF48u; }
        if (ctx->pc != 0x51BF48u) { return; }
    }
    ctx->pc = 0x51BF48u;
label_51bf48:
    // 0x51bf48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51bf4c:
    // 0x51bf4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bf50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x51BF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF54u;
            // 0x51bf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BF5Cu;
    // 0x51bf5c: 0x0  nop
    ctx->pc = 0x51bf5cu;
    // NOP
    // 0x51bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bf64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bf6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bf70: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x51BF70u;
    {
        const bool branch_taken_0x51bf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bf70) {
            ctx->pc = 0x51BF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF70u;
            // 0x51bf74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BF9Cu;
            goto label_51bf9c;
        }
    }
    ctx->pc = 0x51BF78u;
    // 0x51bf78: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51bf7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51bf80: 0x24635a08  addiu       $v1, $v1, 0x5A08
    ctx->pc = 0x51bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23048));
    // 0x51bf84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51bf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51bf88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51BF88u;
    {
        const bool branch_taken_0x51bf88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x51BF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BF88u;
            // 0x51bf8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bf88) {
            ctx->pc = 0x51BF98u;
            goto label_51bf98;
        }
    }
    ctx->pc = 0x51BF90u;
    // 0x51bf90: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51BF90u;
    SET_GPR_U32(ctx, 31, 0x51BF98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BF98u; }
        if (ctx->pc != 0x51BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BF98u; }
        if (ctx->pc != 0x51BF98u) { return; }
    }
    ctx->pc = 0x51BF98u;
label_51bf98:
    // 0x51bf98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51bf9c:
    // 0x51bf9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bfa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x51BFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BFA4u;
            // 0x51bfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BFACu;
    // 0x51bfac: 0x0  nop
    ctx->pc = 0x51bfacu;
    // NOP
    // 0x51bfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bfb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bfbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bfc0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x51BFC0u;
    {
        const bool branch_taken_0x51bfc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bfc0) {
            ctx->pc = 0x51BFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BFC0u;
            // 0x51bfc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BFECu;
            goto label_51bfec;
        }
    }
    ctx->pc = 0x51BFC8u;
    // 0x51bfc8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51bfcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51bfd0: 0x24635a18  addiu       $v1, $v1, 0x5A18
    ctx->pc = 0x51bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23064));
    // 0x51bfd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51bfd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51bfd8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51BFD8u;
    {
        const bool branch_taken_0x51bfd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x51BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BFD8u;
            // 0x51bfdc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bfd8) {
            ctx->pc = 0x51BFE8u;
            goto label_51bfe8;
        }
    }
    ctx->pc = 0x51BFE0u;
    // 0x51bfe0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51BFE0u;
    SET_GPR_U32(ctx, 31, 0x51BFE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BFE8u; }
        if (ctx->pc != 0x51BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BFE8u; }
        if (ctx->pc != 0x51BFE8u) { return; }
    }
    ctx->pc = 0x51BFE8u;
label_51bfe8:
    // 0x51bfe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51bfec:
    // 0x51bfec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bff4: 0x3e00008  jr          $ra
    ctx->pc = 0x51BFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BFF4u;
            // 0x51bff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BFFCu;
    // 0x51bffc: 0x0  nop
    ctx->pc = 0x51bffcu;
    // NOP
    // 0x51c000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c010: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C010u;
    {
        const bool branch_taken_0x51c010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c010) {
            ctx->pc = 0x51C014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C010u;
            // 0x51c014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C044u;
            goto label_51c044;
        }
    }
    ctx->pc = 0x51C018u;
    // 0x51c018: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c01c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c020: 0x24425a38  addiu       $v0, $v0, 0x5A38
    ctx->pc = 0x51c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23096));
    // 0x51c024: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c024u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c02c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51c030: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C030u;
    {
        const bool branch_taken_0x51c030 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C030u;
            // 0x51c034: 0xac4089d0  sw          $zero, -0x7630($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c030) {
            ctx->pc = 0x51C040u;
            goto label_51c040;
        }
    }
    ctx->pc = 0x51C038u;
    // 0x51c038: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C038u;
    SET_GPR_U32(ctx, 31, 0x51C040u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C040u; }
        if (ctx->pc != 0x51C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C040u; }
        if (ctx->pc != 0x51C040u) { return; }
    }
    ctx->pc = 0x51C040u;
label_51c040:
    // 0x51c040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c044:
    // 0x51c044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c04c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C04Cu;
            // 0x51c050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C054u;
    // 0x51c054: 0x0  nop
    ctx->pc = 0x51c054u;
    // NOP
    // 0x51c058: 0x0  nop
    ctx->pc = 0x51c058u;
    // NOP
    // 0x51c05c: 0x0  nop
    ctx->pc = 0x51c05cu;
    // NOP
}

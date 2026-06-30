#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005239E0
// Address: 0x5239e0 - 0x523b80
void sub_005239E0_0x5239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005239E0_0x5239e0");
#endif

    switch (ctx->pc) {
        case 0x5239fcu: goto label_5239fc;
        case 0x523a1cu: goto label_523a1c;
        case 0x523a68u: goto label_523a68;
        case 0x523a8cu: goto label_523a8c;
        case 0x523ab0u: goto label_523ab0;
        case 0x523b10u: goto label_523b10;
        case 0x523b1cu: goto label_523b1c;
        case 0x523b28u: goto label_523b28;
        case 0x523b34u: goto label_523b34;
        case 0x523b40u: goto label_523b40;
        case 0x523b4cu: goto label_523b4c;
        case 0x523b64u: goto label_523b64;
        default: break;
    }

    ctx->pc = 0x5239e0u;

    // 0x5239e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5239e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5239e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x5239e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5239e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5239ec: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x5239ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x5239f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5239f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5239f4: 0xc148f18  jal         func_523C60
    ctx->pc = 0x5239F4u;
    SET_GPR_U32(ctx, 31, 0x5239FCu);
    ctx->pc = 0x5239F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5239F4u;
            // 0x5239f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523C60u;
    if (runtime->hasFunction(0x523C60u)) {
        auto targetFn = runtime->lookupFunction(0x523C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5239FCu; }
        if (ctx->pc != 0x5239FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523C60_0x523c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5239FCu; }
        if (ctx->pc != 0x5239FCu) { return; }
    }
    ctx->pc = 0x5239FCu;
label_5239fc:
    // 0x5239fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5239fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x523a00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523a04: 0x246361b0  addiu       $v1, $v1, 0x61B0
    ctx->pc = 0x523a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
    // 0x523a08: 0x244261e8  addiu       $v0, $v0, 0x61E8
    ctx->pc = 0x523a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25064));
    // 0x523a0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x523a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x523a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x523a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523a14: 0xc148f14  jal         func_523C50
    ctx->pc = 0x523A14u;
    SET_GPR_U32(ctx, 31, 0x523A1Cu);
    ctx->pc = 0x523A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523A14u;
            // 0x523a18: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523C50u;
    if (runtime->hasFunction(0x523C50u)) {
        auto targetFn = runtime->lookupFunction(0x523C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A1Cu; }
        if (ctx->pc != 0x523A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523C50_0x523c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A1Cu; }
        if (ctx->pc != 0x523A1Cu) { return; }
    }
    ctx->pc = 0x523A1Cu;
label_523a1c:
    // 0x523a1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x523a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x523a20: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x523a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x523a24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523a28: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x523a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x523a2c: 0x24426100  addiu       $v0, $v0, 0x6100
    ctx->pc = 0x523a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
    // 0x523a30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x523a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x523a34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523a38: 0x24426138  addiu       $v0, $v0, 0x6138
    ctx->pc = 0x523a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24888));
    // 0x523a3c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x523a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x523a40: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x523a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x523a44: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x523a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x523a48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x523a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x523a4c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x523a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x523a50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x523a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x523a54: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x523a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x523a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x523a5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x523a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x523a60: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x523A60u;
    SET_GPR_U32(ctx, 31, 0x523A68u);
    ctx->pc = 0x523A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523A60u;
            // 0x523a64: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A68u; }
        if (ctx->pc != 0x523A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A68u; }
        if (ctx->pc != 0x523A68u) { return; }
    }
    ctx->pc = 0x523A68u;
label_523a68:
    // 0x523a68: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x523a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x523a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x523a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523a70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x523A70u;
    {
        const bool branch_taken_0x523a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x523A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523A70u;
            // 0x523a74: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523a70) {
            ctx->pc = 0x523A90u;
            goto label_523a90;
        }
    }
    ctx->pc = 0x523A78u;
    // 0x523a78: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x523a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x523a7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x523a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x523a80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x523a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x523a84: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x523A84u;
    SET_GPR_U32(ctx, 31, 0x523A8Cu);
    ctx->pc = 0x523A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523A84u;
            // 0x523a88: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A8Cu; }
        if (ctx->pc != 0x523A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523A8Cu; }
        if (ctx->pc != 0x523A8Cu) { return; }
    }
    ctx->pc = 0x523A8Cu;
label_523a8c:
    // 0x523a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x523a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_523a90:
    // 0x523a90: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x523a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x523a94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x523a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x523aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x523AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523AA0u;
            // 0x523aa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523AA8u;
    // 0x523aa8: 0x0  nop
    ctx->pc = 0x523aa8u;
    // NOP
    // 0x523aac: 0x0  nop
    ctx->pc = 0x523aacu;
    // NOP
label_523ab0:
    // 0x523ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x523ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x523ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x523ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x523ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x523abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x523ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x523ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523ac4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x523AC4u;
    {
        const bool branch_taken_0x523ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x523AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523AC4u;
            // 0x523ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523ac4) {
            ctx->pc = 0x523B64u;
            goto label_523b64;
        }
    }
    ctx->pc = 0x523ACCu;
    // 0x523acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x523ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523ad4: 0x246361b0  addiu       $v1, $v1, 0x61B0
    ctx->pc = 0x523ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
    // 0x523ad8: 0x244261e8  addiu       $v0, $v0, 0x61E8
    ctx->pc = 0x523ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25064));
    // 0x523adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x523adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x523ae0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x523AE0u;
    {
        const bool branch_taken_0x523ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x523AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523AE0u;
            // 0x523ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523ae0) {
            ctx->pc = 0x523B4Cu;
            goto label_523b4c;
        }
    }
    ctx->pc = 0x523AE8u;
    // 0x523ae8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x523ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x523aec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523af0: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x523af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x523af4: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x523af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x523af8: 0x24426198  addiu       $v0, $v0, 0x6198
    ctx->pc = 0x523af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24984));
    // 0x523afc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x523afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x523b00: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x523b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x523b04: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x523b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x523b08: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x523B08u;
    SET_GPR_U32(ctx, 31, 0x523B10u);
    ctx->pc = 0x523B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B08u;
            // 0x523b0c: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B10u; }
        if (ctx->pc != 0x523B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B10u; }
        if (ctx->pc != 0x523B10u) { return; }
    }
    ctx->pc = 0x523B10u;
label_523b10:
    // 0x523b10: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x523b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x523b14: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x523B14u;
    SET_GPR_U32(ctx, 31, 0x523B1Cu);
    ctx->pc = 0x523B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B14u;
            // 0x523b18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B1Cu; }
        if (ctx->pc != 0x523B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B1Cu; }
        if (ctx->pc != 0x523B1Cu) { return; }
    }
    ctx->pc = 0x523B1Cu;
label_523b1c:
    // 0x523b1c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x523b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x523b20: 0xc148ef8  jal         func_523BE0
    ctx->pc = 0x523B20u;
    SET_GPR_U32(ctx, 31, 0x523B28u);
    ctx->pc = 0x523B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B20u;
            // 0x523b24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523BE0u;
    if (runtime->hasFunction(0x523BE0u)) {
        auto targetFn = runtime->lookupFunction(0x523BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B28u; }
        if (ctx->pc != 0x523B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523BE0_0x523be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B28u; }
        if (ctx->pc != 0x523B28u) { return; }
    }
    ctx->pc = 0x523B28u;
label_523b28:
    // 0x523b28: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x523b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x523b2c: 0xc148ef8  jal         func_523BE0
    ctx->pc = 0x523B2Cu;
    SET_GPR_U32(ctx, 31, 0x523B34u);
    ctx->pc = 0x523B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B2Cu;
            // 0x523b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523BE0u;
    if (runtime->hasFunction(0x523BE0u)) {
        auto targetFn = runtime->lookupFunction(0x523BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B34u; }
        if (ctx->pc != 0x523B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523BE0_0x523be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B34u; }
        if (ctx->pc != 0x523B34u) { return; }
    }
    ctx->pc = 0x523B34u;
label_523b34:
    // 0x523b34: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x523b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x523b38: 0xc148ee0  jal         func_523B80
    ctx->pc = 0x523B38u;
    SET_GPR_U32(ctx, 31, 0x523B40u);
    ctx->pc = 0x523B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B38u;
            // 0x523b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523B80u;
    if (runtime->hasFunction(0x523B80u)) {
        auto targetFn = runtime->lookupFunction(0x523B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B40u; }
        if (ctx->pc != 0x523B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523B80_0x523b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B40u; }
        if (ctx->pc != 0x523B40u) { return; }
    }
    ctx->pc = 0x523B40u;
label_523b40:
    // 0x523b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x523b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523b44: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x523B44u;
    SET_GPR_U32(ctx, 31, 0x523B4Cu);
    ctx->pc = 0x523B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B44u;
            // 0x523b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B4Cu; }
        if (ctx->pc != 0x523B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B4Cu; }
        if (ctx->pc != 0x523B4Cu) { return; }
    }
    ctx->pc = 0x523B4Cu;
label_523b4c:
    // 0x523b4c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x523b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x523b50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x523b50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x523b54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x523B54u;
    {
        const bool branch_taken_0x523b54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x523b54) {
            ctx->pc = 0x523B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523B54u;
            // 0x523b58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523B68u;
            goto label_523b68;
        }
    }
    ctx->pc = 0x523B5Cu;
    // 0x523b5c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x523B5Cu;
    SET_GPR_U32(ctx, 31, 0x523B64u);
    ctx->pc = 0x523B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523B5Cu;
            // 0x523b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B64u; }
        if (ctx->pc != 0x523B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523B64u; }
        if (ctx->pc != 0x523B64u) { return; }
    }
    ctx->pc = 0x523B64u;
label_523b64:
    // 0x523b64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_523b68:
    // 0x523b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x523b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x523b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x523b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x523b74: 0x3e00008  jr          $ra
    ctx->pc = 0x523B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523B74u;
            // 0x523b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523B7Cu;
    // 0x523b7c: 0x0  nop
    ctx->pc = 0x523b7cu;
    // NOP
}

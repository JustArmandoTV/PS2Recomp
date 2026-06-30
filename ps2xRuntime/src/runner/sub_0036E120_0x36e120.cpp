#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036E120
// Address: 0x36e120 - 0x36e2c0
void sub_0036E120_0x36e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E120_0x36e120");
#endif

    switch (ctx->pc) {
        case 0x36e13cu: goto label_36e13c;
        case 0x36e15cu: goto label_36e15c;
        case 0x36e1a0u: goto label_36e1a0;
        case 0x36e1bcu: goto label_36e1bc;
        case 0x36e1f0u: goto label_36e1f0;
        case 0x36e250u: goto label_36e250;
        case 0x36e25cu: goto label_36e25c;
        case 0x36e268u: goto label_36e268;
        case 0x36e274u: goto label_36e274;
        case 0x36e280u: goto label_36e280;
        case 0x36e28cu: goto label_36e28c;
        case 0x36e2a4u: goto label_36e2a4;
        default: break;
    }

    ctx->pc = 0x36e120u;

    // 0x36e120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e124: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36e124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36e128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e12c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x36e12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x36e130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e134: 0xc0db8e8  jal         func_36E3A0
    ctx->pc = 0x36E134u;
    SET_GPR_U32(ctx, 31, 0x36E13Cu);
    ctx->pc = 0x36E138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E134u;
            // 0x36e138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E3A0u;
    if (runtime->hasFunction(0x36E3A0u)) {
        auto targetFn = runtime->lookupFunction(0x36E3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E13Cu; }
        if (ctx->pc != 0x36E13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036E3A0_0x36e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E13Cu; }
        if (ctx->pc != 0x36E13Cu) { return; }
    }
    ctx->pc = 0x36E13Cu;
label_36e13c:
    // 0x36e13c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36e140: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e144: 0x24636c10  addiu       $v1, $v1, 0x6C10
    ctx->pc = 0x36e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27664));
    // 0x36e148: 0x24426c48  addiu       $v0, $v0, 0x6C48
    ctx->pc = 0x36e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27720));
    // 0x36e14c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36e150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e154: 0xc0db8e4  jal         func_36E390
    ctx->pc = 0x36E154u;
    SET_GPR_U32(ctx, 31, 0x36E15Cu);
    ctx->pc = 0x36E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E154u;
            // 0x36e158: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E390u;
    if (runtime->hasFunction(0x36E390u)) {
        auto targetFn = runtime->lookupFunction(0x36E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E15Cu; }
        if (ctx->pc != 0x36E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036E390_0x36e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E15Cu; }
        if (ctx->pc != 0x36E15Cu) { return; }
    }
    ctx->pc = 0x36E15Cu;
label_36e15c:
    // 0x36e15c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36e160: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36e160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36e164: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e168: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x36e168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x36e16c: 0x24426b60  addiu       $v0, $v0, 0x6B60
    ctx->pc = 0x36e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27488));
    // 0x36e170: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x36e170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x36e174: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36e174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36e178: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e17c: 0x24426b98  addiu       $v0, $v0, 0x6B98
    ctx->pc = 0x36e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27544));
    // 0x36e180: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x36e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x36e184: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x36e188: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x36e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x36e18c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x36e190: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x36e190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x36e194: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x36e194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x36e198: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x36E198u;
    SET_GPR_U32(ctx, 31, 0x36E1A0u);
    ctx->pc = 0x36E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E198u;
            // 0x36e19c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E1A0u; }
        if (ctx->pc != 0x36E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E1A0u; }
        if (ctx->pc != 0x36E1A0u) { return; }
    }
    ctx->pc = 0x36E1A0u;
label_36e1a0:
    // 0x36e1a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x36e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x36e1a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E1A8u;
    {
        const bool branch_taken_0x36e1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E1A8u;
            // 0x36e1ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e1a8) {
            ctx->pc = 0x36E1C0u;
            goto label_36e1c0;
        }
    }
    ctx->pc = 0x36E1B0u;
    // 0x36e1b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36e1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e1b4: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x36E1B4u;
    SET_GPR_U32(ctx, 31, 0x36E1BCu);
    ctx->pc = 0x36E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E1B4u;
            // 0x36e1b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E1BCu; }
        if (ctx->pc != 0x36E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E1BCu; }
        if (ctx->pc != 0x36E1BCu) { return; }
    }
    ctx->pc = 0x36E1BCu;
label_36e1bc:
    // 0x36e1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36e1c0:
    // 0x36e1c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x36e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x36e1c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x36e1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x36e1cc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x36e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x36e1d0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x36e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x36e1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E1DCu;
            // 0x36e1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E1E4u;
    // 0x36e1e4: 0x0  nop
    ctx->pc = 0x36e1e4u;
    // NOP
    // 0x36e1e8: 0x0  nop
    ctx->pc = 0x36e1e8u;
    // NOP
    // 0x36e1ec: 0x0  nop
    ctx->pc = 0x36e1ecu;
    // NOP
label_36e1f0:
    // 0x36e1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36e1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e204: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x36E204u;
    {
        const bool branch_taken_0x36e204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E204u;
            // 0x36e208: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e204) {
            ctx->pc = 0x36E2A4u;
            goto label_36e2a4;
        }
    }
    ctx->pc = 0x36E20Cu;
    // 0x36e20c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36e210: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e214: 0x24636c10  addiu       $v1, $v1, 0x6C10
    ctx->pc = 0x36e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27664));
    // 0x36e218: 0x24426c48  addiu       $v0, $v0, 0x6C48
    ctx->pc = 0x36e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27720));
    // 0x36e21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36e220: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36E220u;
    {
        const bool branch_taken_0x36e220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E220u;
            // 0x36e224: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e220) {
            ctx->pc = 0x36E28Cu;
            goto label_36e28c;
        }
    }
    ctx->pc = 0x36E228u;
    // 0x36e228: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36e228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36e22c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e230: 0x24636bc0  addiu       $v1, $v1, 0x6BC0
    ctx->pc = 0x36e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27584));
    // 0x36e234: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36e234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x36e238: 0x24426bf8  addiu       $v0, $v0, 0x6BF8
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
    // 0x36e23c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36e240: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x36e240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x36e244: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x36e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x36e248: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x36E248u;
    SET_GPR_U32(ctx, 31, 0x36E250u);
    ctx->pc = 0x36E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E248u;
            // 0x36e24c: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E250u; }
        if (ctx->pc != 0x36E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E250u; }
        if (ctx->pc != 0x36E250u) { return; }
    }
    ctx->pc = 0x36E250u;
label_36e250:
    // 0x36e250: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x36e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x36e254: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x36E254u;
    SET_GPR_U32(ctx, 31, 0x36E25Cu);
    ctx->pc = 0x36E258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E254u;
            // 0x36e258: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E25Cu; }
        if (ctx->pc != 0x36E25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E25Cu; }
        if (ctx->pc != 0x36E25Cu) { return; }
    }
    ctx->pc = 0x36E25Cu;
label_36e25c:
    // 0x36e25c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x36e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x36e260: 0xc0db8c8  jal         func_36E320
    ctx->pc = 0x36E260u;
    SET_GPR_U32(ctx, 31, 0x36E268u);
    ctx->pc = 0x36E264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E260u;
            // 0x36e264: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E320u;
    if (runtime->hasFunction(0x36E320u)) {
        auto targetFn = runtime->lookupFunction(0x36E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E268u; }
        if (ctx->pc != 0x36E268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036E320_0x36e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E268u; }
        if (ctx->pc != 0x36E268u) { return; }
    }
    ctx->pc = 0x36E268u;
label_36e268:
    // 0x36e268: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x36e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x36e26c: 0xc0db8c8  jal         func_36E320
    ctx->pc = 0x36E26Cu;
    SET_GPR_U32(ctx, 31, 0x36E274u);
    ctx->pc = 0x36E270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E26Cu;
            // 0x36e270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E320u;
    if (runtime->hasFunction(0x36E320u)) {
        auto targetFn = runtime->lookupFunction(0x36E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E274u; }
        if (ctx->pc != 0x36E274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036E320_0x36e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E274u; }
        if (ctx->pc != 0x36E274u) { return; }
    }
    ctx->pc = 0x36E274u;
label_36e274:
    // 0x36e274: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x36e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x36e278: 0xc0db8b0  jal         func_36E2C0
    ctx->pc = 0x36E278u;
    SET_GPR_U32(ctx, 31, 0x36E280u);
    ctx->pc = 0x36E27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E278u;
            // 0x36e27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36E2C0u;
    if (runtime->hasFunction(0x36E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x36E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E280u; }
        if (ctx->pc != 0x36E280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036E2C0_0x36e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E280u; }
        if (ctx->pc != 0x36E280u) { return; }
    }
    ctx->pc = 0x36E280u;
label_36e280:
    // 0x36e280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e284: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x36E284u;
    SET_GPR_U32(ctx, 31, 0x36E28Cu);
    ctx->pc = 0x36E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E284u;
            // 0x36e288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E28Cu; }
        if (ctx->pc != 0x36E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E28Cu; }
        if (ctx->pc != 0x36E28Cu) { return; }
    }
    ctx->pc = 0x36E28Cu;
label_36e28c:
    // 0x36e28c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x36e290: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36e290u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36e294: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E294u;
    {
        const bool branch_taken_0x36e294 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36e294) {
            ctx->pc = 0x36E298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E294u;
            // 0x36e298: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E2A8u;
            goto label_36e2a8;
        }
    }
    ctx->pc = 0x36E29Cu;
    // 0x36e29c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36E29Cu;
    SET_GPR_U32(ctx, 31, 0x36E2A4u);
    ctx->pc = 0x36E2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E29Cu;
            // 0x36e2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E2A4u; }
        if (ctx->pc != 0x36E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E2A4u; }
        if (ctx->pc != 0x36E2A4u) { return; }
    }
    ctx->pc = 0x36E2A4u;
label_36e2a4:
    // 0x36e2a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36e2a8:
    // 0x36e2a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E2B4u;
            // 0x36e2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E2BCu;
    // 0x36e2bc: 0x0  nop
    ctx->pc = 0x36e2bcu;
    // NOP
}

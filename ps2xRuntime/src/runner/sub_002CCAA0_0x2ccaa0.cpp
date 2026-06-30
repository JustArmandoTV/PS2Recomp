#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CCAA0
// Address: 0x2ccaa0 - 0x2ccde0
void sub_002CCAA0_0x2ccaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCAA0_0x2ccaa0");
#endif

    switch (ctx->pc) {
        case 0x2ccad0u: goto label_2ccad0;
        case 0x2ccaf0u: goto label_2ccaf0;
        case 0x2ccb4cu: goto label_2ccb4c;
        case 0x2ccb6cu: goto label_2ccb6c;
        case 0x2ccb8cu: goto label_2ccb8c;
        case 0x2ccc00u: goto label_2ccc00;
        case 0x2ccc24u: goto label_2ccc24;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc68u: goto label_2ccc68;
        case 0x2ccc98u: goto label_2ccc98;
        case 0x2ccca4u: goto label_2ccca4;
        case 0x2ccd10u: goto label_2ccd10;
        case 0x2ccd70u: goto label_2ccd70;
        case 0x2ccd7cu: goto label_2ccd7c;
        case 0x2ccd88u: goto label_2ccd88;
        case 0x2ccd94u: goto label_2ccd94;
        case 0x2ccda0u: goto label_2ccda0;
        case 0x2ccdacu: goto label_2ccdac;
        case 0x2ccdc4u: goto label_2ccdc4;
        default: break;
    }

    ctx->pc = 0x2ccaa0u;

    // 0x2ccaa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ccaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ccaa4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ccaa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ccaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ccaac: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2ccaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2ccab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ccab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ccab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ccab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ccab8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ccab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ccabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ccac0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ccac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccac8: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2CCAC8u;
    SET_GPR_U32(ctx, 31, 0x2CCAD0u);
    ctx->pc = 0x2CCACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCAC8u;
            // 0x2ccacc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (runtime->hasFunction(0x2CD470u)) {
        auto targetFn = runtime->lookupFunction(0x2CD470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAD0u; }
        if (ctx->pc != 0x2CCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD470_0x2cd470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAD0u; }
        if (ctx->pc != 0x2CCAD0u) { return; }
    }
    ctx->pc = 0x2CCAD0u;
label_2ccad0:
    // 0x2ccad0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ccad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ccad4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ccad8: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x2ccad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x2ccadc: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2ccadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x2ccae0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ccae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ccae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ccae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccae8: 0xc0b3518  jal         func_2CD460
    ctx->pc = 0x2CCAE8u;
    SET_GPR_U32(ctx, 31, 0x2CCAF0u);
    ctx->pc = 0x2CCAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCAE8u;
            // 0x2ccaec: 0xae820064  sw          $v0, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD460u;
    if (runtime->hasFunction(0x2CD460u)) {
        auto targetFn = runtime->lookupFunction(0x2CD460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAF0u; }
        if (ctx->pc != 0x2CCAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD460_0x2cd460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAF0u; }
        if (ctx->pc != 0x2CCAF0u) { return; }
    }
    ctx->pc = 0x2CCAF0u;
label_2ccaf0:
    // 0x2ccaf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ccaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ccaf4: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x2ccaf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x2ccaf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ccaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ccafc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ccb00: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x2ccb00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2ccb04: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ccb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ccb08: 0x2529c4f0  addiu       $t1, $t1, -0x3B10
    ctx->pc = 0x2ccb08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952176));
    // 0x2ccb0c: 0x2463ff50  addiu       $v1, $v1, -0xB0
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967120));
    // 0x2ccb10: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x2ccb14: 0x24a5d390  addiu       $a1, $a1, -0x2C70
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    // 0x2ccb18: 0x8cca0968  lw          $t2, 0x968($a2)
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2ccb1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ccb20: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x2ccb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x2ccb24: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2ccb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ccb28: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ccb2c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2ccb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2ccb30: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2ccb30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2ccb34: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x2ccb34u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ccb38: 0x24c6d2b0  addiu       $a2, $a2, -0x2D50
    ctx->pc = 0x2ccb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955696));
    // 0x2ccb3c: 0xa2890090  sb          $t1, 0x90($s4)
    ctx->pc = 0x2ccb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 144), (uint8_t)GPR_U32(ctx, 9));
    // 0x2ccb40: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ccb40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ccb44: 0xc040804  jal         func_102010
    ctx->pc = 0x2CCB44u;
    SET_GPR_U32(ctx, 31, 0x2CCB4Cu);
    ctx->pc = 0x2CCB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB44u;
            // 0x2ccb48: 0xae820064  sw          $v0, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB4Cu; }
        if (ctx->pc != 0x2CCB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB4Cu; }
        if (ctx->pc != 0x2CCB4Cu) { return; }
    }
    ctx->pc = 0x2CCB4Cu;
label_2ccb4c:
    // 0x2ccb4c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ccb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ccb50: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2ccb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2ccb54: 0x268438a0  addiu       $a0, $s4, 0x38A0
    ctx->pc = 0x2ccb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14496));
    // 0x2ccb58: 0x24a5d180  addiu       $a1, $a1, -0x2E80
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    // 0x2ccb5c: 0x24c6d100  addiu       $a2, $a2, -0x2F00
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955264));
    // 0x2ccb60: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2ccb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ccb64: 0xc040804  jal         func_102010
    ctx->pc = 0x2CCB64u;
    SET_GPR_U32(ctx, 31, 0x2CCB6Cu);
    ctx->pc = 0x2CCB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB64u;
            // 0x2ccb68: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB6Cu; }
        if (ctx->pc != 0x2CCB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB6Cu; }
        if (ctx->pc != 0x2CCB6Cu) { return; }
    }
    ctx->pc = 0x2CCB6Cu;
label_2ccb6c:
    // 0x2ccb6c: 0xae806aa0  sw          $zero, 0x6AA0($s4)
    ctx->pc = 0x2ccb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27296), GPR_U32(ctx, 0));
    // 0x2ccb70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ccb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ccb74: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x2ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x2ccb78: 0x26846aa4  addiu       $a0, $s4, 0x6AA4
    ctx->pc = 0x2ccb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27300));
    // 0x2ccb7c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2ccb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2ccb80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ccb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ccb84: 0xc058300  jal         func_160C00
    ctx->pc = 0x2CCB84u;
    SET_GPR_U32(ctx, 31, 0x2CCB8Cu);
    ctx->pc = 0x2CCB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB84u;
            // 0x2ccb88: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB8Cu; }
        if (ctx->pc != 0x2CCB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB8Cu; }
        if (ctx->pc != 0x2CCB8Cu) { return; }
    }
    ctx->pc = 0x2CCB8Cu;
label_2ccb8c:
    // 0x2ccb8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ccb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ccb90: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x2ccb90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
    // 0x2ccb94: 0x8c4689c8  lw          $a2, -0x7638($v0)
    ctx->pc = 0x2ccb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x2ccb98: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x2ccb9c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ccb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ccba0: 0x25084490  addiu       $t0, $t0, 0x4490
    ctx->pc = 0x2ccba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17552));
    // 0x2ccba4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ccba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ccba8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccbac: 0x24c90004  addiu       $t1, $a2, 0x4
    ctx->pc = 0x2ccbacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ccbb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ccbb4: 0xae896ab8  sw          $t1, 0x6AB8($s4)
    ctx->pc = 0x2ccbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27320), GPR_U32(ctx, 9));
    // 0x2ccbb8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2ccbbc: 0xae806abc  sw          $zero, 0x6ABC($s4)
    ctx->pc = 0x2ccbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27324), GPR_U32(ctx, 0));
    // 0x2ccbc0: 0xae806ac0  sw          $zero, 0x6AC0($s4)
    ctx->pc = 0x2ccbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27328), GPR_U32(ctx, 0));
    // 0x2ccbc4: 0xae806ac4  sw          $zero, 0x6AC4($s4)
    ctx->pc = 0x2ccbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27332), GPR_U32(ctx, 0));
    // 0x2ccbc8: 0x8ce789c8  lw          $a3, -0x7638($a3)
    ctx->pc = 0x2ccbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937032)));
    // 0x2ccbcc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ccbd0: 0xae876ac8  sw          $a3, 0x6AC8($s4)
    ctx->pc = 0x2ccbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27336), GPR_U32(ctx, 7));
    // 0x2ccbd4: 0xae806acc  sw          $zero, 0x6ACC($s4)
    ctx->pc = 0x2ccbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27340), GPR_U32(ctx, 0));
    // 0x2ccbd8: 0xae806ad0  sw          $zero, 0x6AD0($s4)
    ctx->pc = 0x2ccbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27344), GPR_U32(ctx, 0));
    // 0x2ccbdc: 0xae806ad4  sw          $zero, 0x6AD4($s4)
    ctx->pc = 0x2ccbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27348), GPR_U32(ctx, 0));
    // 0x2ccbe0: 0x8c870e80  lw          $a3, 0xE80($a0)
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
    // 0x2ccbe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2ccbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2ccbe8: 0x8ce20968  lw          $v0, 0x968($a3)
    ctx->pc = 0x2ccbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
    // 0x2ccbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ccbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ccbf0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ccbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ccbf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ccbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccbf8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2CCBF8u;
    SET_GPR_U32(ctx, 31, 0x2CCC00u);
    ctx->pc = 0x2CCBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCBF8u;
            // 0x2ccbfc: 0xe4604008  swc1        $f0, 0x4008($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC00u; }
        if (ctx->pc != 0x2CCC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC00u; }
        if (ctx->pc != 0x2CCC00u) { return; }
    }
    ctx->pc = 0x2CCC00u;
label_2ccc00:
    // 0x2ccc00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ccc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccc04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCC08u;
    {
        const bool branch_taken_0x2ccc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC08u;
            // 0x2ccc0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc08) {
            ctx->pc = 0x2CCC28u;
            goto label_2ccc28;
        }
    }
    ctx->pc = 0x2CCC10u;
    // 0x2ccc10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2ccc14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ccc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ccc18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ccc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ccc1c: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2CCC1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC24u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC24u; }
        if (ctx->pc != 0x2CCC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC24u; }
        if (ctx->pc != 0x2CCC24u) { return; }
    }
    ctx->pc = 0x2CCC24u;
label_2ccc24:
    // 0x2ccc24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc28:
    // 0x2ccc28: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x2ccc28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x2ccc2c: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x2ccc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
    // 0x2ccc30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ccc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc34: 0x263144e0  addiu       $s1, $s1, 0x44E0
    ctx->pc = 0x2ccc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17632));
    // 0x2ccc38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ccc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc3c:
    // 0x2ccc3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ccc40: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ccc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccc44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2ccc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2ccc48: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2CCC48u;
    SET_GPR_U32(ctx, 31, 0x2CCC50u);
    ctx->pc = 0x2CCC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC48u;
            // 0x2ccc4c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC50u; }
        if (ctx->pc != 0x2CCC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC50u; }
        if (ctx->pc != 0x2CCC50u) { return; }
    }
    ctx->pc = 0x2CCC50u;
label_2ccc50:
    // 0x2ccc50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCC58u;
    {
        const bool branch_taken_0x2ccc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC58u;
            // 0x2ccc5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc58) {
            ctx->pc = 0x2CCC70u;
            goto label_2ccc70;
        }
    }
    ctx->pc = 0x2CCC60u;
    // 0x2ccc60: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2CCC60u;
    SET_GPR_U32(ctx, 31, 0x2CCC68u);
    ctx->pc = 0x2CCC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC60u;
            // 0x2ccc64: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC68u; }
        if (ctx->pc != 0x2CCC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC68u; }
        if (ctx->pc != 0x2CCC68u) { return; }
    }
    ctx->pc = 0x2CCC68u;
label_2ccc68:
    // 0x2ccc68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc6c: 0x0  nop
    ctx->pc = 0x2ccc6cu;
    // NOP
label_2ccc70:
    // 0x2ccc70: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x2ccc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2ccc74: 0xac446ad8  sw          $a0, 0x6AD8($v0)
    ctx->pc = 0x2ccc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27352), GPR_U32(ctx, 4));
    // 0x2ccc78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ccc7c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2ccc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ccc80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ccc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2ccc84: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CCC84u;
    {
        const bool branch_taken_0x2ccc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC84u;
            // 0x2ccc88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc84) {
            ctx->pc = 0x2CCC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ccc3c;
        }
    }
    ctx->pc = 0x2CCC8Cu;
    // 0x2ccc8c: 0x26846ac8  addiu       $a0, $s4, 0x6AC8
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27336));
    // 0x2ccc90: 0xc0b4a84  jal         func_2D2A10
    ctx->pc = 0x2CCC90u;
    SET_GPR_U32(ctx, 31, 0x2CCC98u);
    ctx->pc = 0x2CCC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC90u;
            // 0x2ccc94: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A10u;
    if (runtime->hasFunction(0x2D2A10u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC98u; }
        if (ctx->pc != 0x2CCC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A10_0x2d2a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC98u; }
        if (ctx->pc != 0x2CCC98u) { return; }
    }
    ctx->pc = 0x2CCC98u;
label_2ccc98:
    // 0x2ccc98: 0x26846ab8  addiu       $a0, $s4, 0x6AB8
    ctx->pc = 0x2ccc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27320));
    // 0x2ccc9c: 0xc0b4a18  jal         func_2D2860
    ctx->pc = 0x2CCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCCA4u);
    ctx->pc = 0x2CCCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC9Cu;
            // 0x2ccca0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCA4u; }
        if (ctx->pc != 0x2CCCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCA4u; }
        if (ctx->pc != 0x2CCCA4u) { return; }
    }
    ctx->pc = 0x2CCCA4u;
label_2ccca4:
    // 0x2ccca4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ccca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ccca8: 0x26630100  addiu       $v1, $s3, 0x100
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x2cccac: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
    // 0x2cccb0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2cccb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cccb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCCB4u;
    {
        const bool branch_taken_0x2cccb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cccb4) {
            ctx->pc = 0x2CCCC4u;
            goto label_2cccc4;
        }
    }
    ctx->pc = 0x2CCCBCu;
    // 0x2cccbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2cccc0: 0xac43e3c8  sw          $v1, -0x1C38($v0)
    ctx->pc = 0x2cccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 3));
label_2cccc4:
    // 0x2cccc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2cccc8: 0x26630100  addiu       $v1, $s3, 0x100
    ctx->pc = 0x2cccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x2ccccc: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x2cccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
    // 0x2cccd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2cccd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cccd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCCD4u;
    {
        const bool branch_taken_0x2cccd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cccd4) {
            ctx->pc = 0x2CCCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCCD4u;
            // 0x2cccd8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCCE8u;
            goto label_2ccce8;
        }
    }
    ctx->pc = 0x2CCCDCu;
    // 0x2cccdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ccce0: 0xac43e3d0  sw          $v1, -0x1C30($v0)
    ctx->pc = 0x2ccce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 3));
    // 0x2ccce4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ccce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ccce8:
    // 0x2ccce8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ccce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cccec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cccecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cccf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cccf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cccf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cccf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cccf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cccfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cccfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccd00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD00u;
            // 0x2ccd04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCD08u;
    // 0x2ccd08: 0x0  nop
    ctx->pc = 0x2ccd08u;
    // NOP
    // 0x2ccd0c: 0x0  nop
    ctx->pc = 0x2ccd0cu;
    // NOP
label_2ccd10:
    // 0x2ccd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ccd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ccd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ccd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ccd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccd20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ccd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CCD24u;
    {
        const bool branch_taken_0x2ccd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD24u;
            // 0x2ccd28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd24) {
            ctx->pc = 0x2CCDC4u;
            goto label_2ccdc4;
        }
    }
    ctx->pc = 0x2CCD2Cu;
    // 0x2ccd2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ccd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ccd30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ccd34: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x2ccd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x2ccd38: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2ccd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x2ccd3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ccd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ccd40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CCD40u;
    {
        const bool branch_taken_0x2ccd40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD40u;
            // 0x2ccd44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd40) {
            ctx->pc = 0x2CCDACu;
            goto label_2ccdac;
        }
    }
    ctx->pc = 0x2CCD48u;
    // 0x2ccd48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ccd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ccd4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ccd50: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2ccd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2ccd54: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ccd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ccd58: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x2ccd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x2ccd5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ccd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ccd60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ccd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2ccd64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ccd68: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CCD68u;
    SET_GPR_U32(ctx, 31, 0x2CCD70u);
    ctx->pc = 0x2CCD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD68u;
            // 0x2ccd6c: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD70u; }
        if (ctx->pc != 0x2CCD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD70u; }
        if (ctx->pc != 0x2CCD70u) { return; }
    }
    ctx->pc = 0x2CCD70u;
label_2ccd70:
    // 0x2ccd70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2ccd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2ccd74: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2CCD74u;
    SET_GPR_U32(ctx, 31, 0x2CCD7Cu);
    ctx->pc = 0x2CCD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD74u;
            // 0x2ccd78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD7Cu; }
        if (ctx->pc != 0x2CCD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD7Cu; }
        if (ctx->pc != 0x2CCD7Cu) { return; }
    }
    ctx->pc = 0x2CCD7Cu;
label_2ccd7c:
    // 0x2ccd7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2ccd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ccd80: 0xc0b3390  jal         func_2CCE40
    ctx->pc = 0x2CCD80u;
    SET_GPR_U32(ctx, 31, 0x2CCD88u);
    ctx->pc = 0x2CCD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD80u;
            // 0x2ccd84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE40u;
    if (runtime->hasFunction(0x2CCE40u)) {
        auto targetFn = runtime->lookupFunction(0x2CCE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD88u; }
        if (ctx->pc != 0x2CCD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CCE40_0x2cce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD88u; }
        if (ctx->pc != 0x2CCD88u) { return; }
    }
    ctx->pc = 0x2CCD88u;
label_2ccd88:
    // 0x2ccd88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2ccd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2ccd8c: 0xc0b3390  jal         func_2CCE40
    ctx->pc = 0x2CCD8Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD94u);
    ctx->pc = 0x2CCD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD8Cu;
            // 0x2ccd90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE40u;
    if (runtime->hasFunction(0x2CCE40u)) {
        auto targetFn = runtime->lookupFunction(0x2CCE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD94u; }
        if (ctx->pc != 0x2CCD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CCE40_0x2cce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD94u; }
        if (ctx->pc != 0x2CCD94u) { return; }
    }
    ctx->pc = 0x2CCD94u;
label_2ccd94:
    // 0x2ccd94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2ccd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2ccd98: 0xc0b3378  jal         func_2CCDE0
    ctx->pc = 0x2CCD98u;
    SET_GPR_U32(ctx, 31, 0x2CCDA0u);
    ctx->pc = 0x2CCD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD98u;
            // 0x2ccd9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDE0u;
    if (runtime->hasFunction(0x2CCDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDA0u; }
        if (ctx->pc != 0x2CCDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CCDE0_0x2ccde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDA0u; }
        if (ctx->pc != 0x2CCDA0u) { return; }
    }
    ctx->pc = 0x2CCDA0u;
label_2ccda0:
    // 0x2ccda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccda4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CCDA4u;
    SET_GPR_U32(ctx, 31, 0x2CCDACu);
    ctx->pc = 0x2CCDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDA4u;
            // 0x2ccda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDACu; }
        if (ctx->pc != 0x2CCDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDACu; }
        if (ctx->pc != 0x2CCDACu) { return; }
    }
    ctx->pc = 0x2CCDACu;
label_2ccdac:
    // 0x2ccdac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ccdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ccdb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ccdb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ccdb4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCDB4u;
    {
        const bool branch_taken_0x2ccdb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ccdb4) {
            ctx->pc = 0x2CCDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDB4u;
            // 0x2ccdb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCDC8u;
            goto label_2ccdc8;
        }
    }
    ctx->pc = 0x2CCDBCu;
    // 0x2ccdbc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CCDBCu;
    SET_GPR_U32(ctx, 31, 0x2CCDC4u);
    ctx->pc = 0x2CCDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDBCu;
            // 0x2ccdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDC4u; }
        if (ctx->pc != 0x2CCDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDC4u; }
        if (ctx->pc != 0x2CCDC4u) { return; }
    }
    ctx->pc = 0x2CCDC4u;
label_2ccdc4:
    // 0x2ccdc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ccdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ccdc8:
    // 0x2ccdc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ccdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccdcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccdd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCDD4u;
            // 0x2ccdd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCDDCu;
    // 0x2ccddc: 0x0  nop
    ctx->pc = 0x2ccddcu;
    // NOP
}

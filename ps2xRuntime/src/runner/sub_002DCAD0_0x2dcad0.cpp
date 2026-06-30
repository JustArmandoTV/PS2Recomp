#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCAD0
// Address: 0x2dcad0 - 0x2dcbf0
void sub_002DCAD0_0x2dcad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCAD0_0x2dcad0");
#endif

    switch (ctx->pc) {
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcad4u: goto label_2dcad4;
        case 0x2dcad8u: goto label_2dcad8;
        case 0x2dcadcu: goto label_2dcadc;
        case 0x2dcae0u: goto label_2dcae0;
        case 0x2dcae4u: goto label_2dcae4;
        case 0x2dcae8u: goto label_2dcae8;
        case 0x2dcaecu: goto label_2dcaec;
        case 0x2dcaf0u: goto label_2dcaf0;
        case 0x2dcaf4u: goto label_2dcaf4;
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcafcu: goto label_2dcafc;
        case 0x2dcb00u: goto label_2dcb00;
        case 0x2dcb04u: goto label_2dcb04;
        case 0x2dcb08u: goto label_2dcb08;
        case 0x2dcb0cu: goto label_2dcb0c;
        case 0x2dcb10u: goto label_2dcb10;
        case 0x2dcb14u: goto label_2dcb14;
        case 0x2dcb18u: goto label_2dcb18;
        case 0x2dcb1cu: goto label_2dcb1c;
        case 0x2dcb20u: goto label_2dcb20;
        case 0x2dcb24u: goto label_2dcb24;
        case 0x2dcb28u: goto label_2dcb28;
        case 0x2dcb2cu: goto label_2dcb2c;
        case 0x2dcb30u: goto label_2dcb30;
        case 0x2dcb34u: goto label_2dcb34;
        case 0x2dcb38u: goto label_2dcb38;
        case 0x2dcb3cu: goto label_2dcb3c;
        case 0x2dcb40u: goto label_2dcb40;
        case 0x2dcb44u: goto label_2dcb44;
        case 0x2dcb48u: goto label_2dcb48;
        case 0x2dcb4cu: goto label_2dcb4c;
        case 0x2dcb50u: goto label_2dcb50;
        case 0x2dcb54u: goto label_2dcb54;
        case 0x2dcb58u: goto label_2dcb58;
        case 0x2dcb5cu: goto label_2dcb5c;
        case 0x2dcb60u: goto label_2dcb60;
        case 0x2dcb64u: goto label_2dcb64;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb6cu: goto label_2dcb6c;
        case 0x2dcb70u: goto label_2dcb70;
        case 0x2dcb74u: goto label_2dcb74;
        case 0x2dcb78u: goto label_2dcb78;
        case 0x2dcb7cu: goto label_2dcb7c;
        case 0x2dcb80u: goto label_2dcb80;
        case 0x2dcb84u: goto label_2dcb84;
        case 0x2dcb88u: goto label_2dcb88;
        case 0x2dcb8cu: goto label_2dcb8c;
        case 0x2dcb90u: goto label_2dcb90;
        case 0x2dcb94u: goto label_2dcb94;
        case 0x2dcb98u: goto label_2dcb98;
        case 0x2dcb9cu: goto label_2dcb9c;
        case 0x2dcba0u: goto label_2dcba0;
        case 0x2dcba4u: goto label_2dcba4;
        case 0x2dcba8u: goto label_2dcba8;
        case 0x2dcbacu: goto label_2dcbac;
        case 0x2dcbb0u: goto label_2dcbb0;
        case 0x2dcbb4u: goto label_2dcbb4;
        case 0x2dcbb8u: goto label_2dcbb8;
        case 0x2dcbbcu: goto label_2dcbbc;
        case 0x2dcbc0u: goto label_2dcbc0;
        case 0x2dcbc4u: goto label_2dcbc4;
        case 0x2dcbc8u: goto label_2dcbc8;
        case 0x2dcbccu: goto label_2dcbcc;
        case 0x2dcbd0u: goto label_2dcbd0;
        case 0x2dcbd4u: goto label_2dcbd4;
        case 0x2dcbd8u: goto label_2dcbd8;
        case 0x2dcbdcu: goto label_2dcbdc;
        case 0x2dcbe0u: goto label_2dcbe0;
        case 0x2dcbe4u: goto label_2dcbe4;
        case 0x2dcbe8u: goto label_2dcbe8;
        case 0x2dcbecu: goto label_2dcbec;
        default: break;
    }

    ctx->pc = 0x2dcad0u;

label_2dcad0:
    // 0x2dcad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dcad4:
    // 0x2dcad4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2dcad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2dcad8:
    // 0x2dcad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dcadc:
    // 0x2dcadc: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x2dcadcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2dcae0:
    // 0x2dcae0: 0x8c480ea4  lw          $t0, 0xEA4($v0)
    ctx->pc = 0x2dcae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2dcae4:
    // 0x2dcae4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dcae8:
    // 0x2dcae8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2dcaec:
    // 0x2dcaec: 0x8d04012c  lw          $a0, 0x12C($t0)
    ctx->pc = 0x2dcaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 300)));
label_2dcaf0:
    // 0x2dcaf0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2dcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2dcaf4:
    // 0x2dcaf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dcaf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcaf8:
    // 0x2dcaf8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2dcaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2dcafc:
    // 0x2dcafc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dcb00:
    // 0x2dcb00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2dcb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2dcb04:
    // 0x2dcb04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dcb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dcb08:
    // 0x2dcb08: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x2dcb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcb0c:
    // 0x2dcb0c: 0x246701f0  addiu       $a3, $v1, 0x1F0
    ctx->pc = 0x2dcb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
label_2dcb10:
    // 0x2dcb10: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2dcb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2dcb14:
    // 0x2dcb14: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x2dcb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcb18:
    // 0x2dcb18: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2dcb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2dcb1c:
    // 0x2dcb1c: 0xc46001ac  lwc1        $f0, 0x1AC($v1)
    ctx->pc = 0x2dcb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcb20:
    // 0x2dcb20: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2dcb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2dcb24:
    // 0x2dcb24: 0xc0c614c  jal         func_318530
label_2dcb28:
    if (ctx->pc == 0x2DCB28u) {
        ctx->pc = 0x2DCB28u;
            // 0x2dcb28: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2DCB2Cu;
        goto label_2dcb2c;
    }
    ctx->pc = 0x2DCB24u;
    SET_GPR_U32(ctx, 31, 0x2DCB2Cu);
    ctx->pc = 0x2DCB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB24u;
            // 0x2dcb28: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB2Cu; }
        if (ctx->pc != 0x2DCB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB2Cu; }
        if (ctx->pc != 0x2DCB2Cu) { return; }
    }
    ctx->pc = 0x2DCB2Cu;
label_2dcb2c:
    // 0x2dcb2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcb30:
    // 0x2dcb30: 0x3e00008  jr          $ra
label_2dcb34:
    if (ctx->pc == 0x2DCB34u) {
        ctx->pc = 0x2DCB34u;
            // 0x2dcb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DCB38u;
        goto label_2dcb38;
    }
    ctx->pc = 0x2DCB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB30u;
            // 0x2dcb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCB38u;
label_2dcb38:
    // 0x2dcb38: 0x0  nop
    ctx->pc = 0x2dcb38u;
    // NOP
label_2dcb3c:
    // 0x2dcb3c: 0x0  nop
    ctx->pc = 0x2dcb3cu;
    // NOP
label_2dcb40:
    // 0x2dcb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dcb44:
    // 0x2dcb44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dcb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2dcb48:
    // 0x2dcb48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dcb4c:
    // 0x2dcb4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2dcb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2dcb50:
    // 0x2dcb50: 0x8c860150  lw          $a2, 0x150($a0)
    ctx->pc = 0x2dcb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2dcb54:
    // 0x2dcb54: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2dcb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_2dcb58:
    // 0x2dcb58: 0x8c4989f0  lw          $t1, -0x7610($v0)
    ctx->pc = 0x2dcb58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_2dcb5c:
    // 0x2dcb5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dcb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2dcb60:
    // 0x2dcb60: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x2dcb60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2dcb64:
    // 0x2dcb64: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x2dcb64u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_2dcb68:
    // 0x2dcb68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dcb6c:
    // 0x2dcb6c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2dcb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_2dcb70:
    // 0x2dcb70: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x2dcb70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_2dcb74:
    // 0x2dcb74: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2dcb74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2dcb78:
    // 0x2dcb78: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2dcb78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_2dcb7c:
    // 0x2dcb7c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2dcb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2dcb80:
    // 0x2dcb80: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2dcb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2dcb84:
    // 0x2dcb84: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x2dcb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_2dcb88:
    // 0x2dcb88: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x2dcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
label_2dcb8c:
    // 0x2dcb8c: 0x93a8001c  lbu         $t0, 0x1C($sp)
    ctx->pc = 0x2dcb8cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
label_2dcb90:
    // 0x2dcb90: 0x93a7001d  lbu         $a3, 0x1D($sp)
    ctx->pc = 0x2dcb90u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
label_2dcb94:
    // 0x2dcb94: 0x93a6001e  lbu         $a2, 0x1E($sp)
    ctx->pc = 0x2dcb94u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
label_2dcb98:
    // 0x2dcb98: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x2dcb98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_2dcb9c:
    // 0x2dcb9c: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x2dcb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_2dcba0:
    // 0x2dcba0: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x2dcba0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_2dcba4:
    // 0x2dcba4: 0x93a6001f  lbu         $a2, 0x1F($sp)
    ctx->pc = 0x2dcba4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
label_2dcba8:
    // 0x2dcba8: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x2dcba8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_2dcbac:
    // 0x2dcbac: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x2dcbacu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_2dcbb0:
    // 0x2dcbb0: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x2dcbb0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_2dcbb4:
    // 0x2dcbb4: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x2dcbb4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_2dcbb8:
    // 0x2dcbb8: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x2dcbb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_2dcbbc:
    // 0x2dcbbc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2dcbbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_2dcbc0:
    // 0x2dcbc0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2dcbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_2dcbc4:
    // 0x2dcbc4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2dcbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2dcbc8:
    // 0x2dcbc8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2dcbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_2dcbcc:
    // 0x2dcbcc: 0xfc65ec90  sd          $a1, -0x1370($v1)
    ctx->pc = 0x2dcbccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 5));
label_2dcbd0:
    // 0x2dcbd0: 0xfc45ee00  sd          $a1, -0x1200($v0)
    ctx->pc = 0x2dcbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 5));
label_2dcbd4:
    // 0x2dcbd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dcbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dcbd8:
    // 0x2dcbd8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2dcbd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2dcbdc:
    // 0x2dcbdc: 0x320f809  jalr        $t9
label_2dcbe0:
    if (ctx->pc == 0x2DCBE0u) {
        ctx->pc = 0x2DCBE4u;
        goto label_2dcbe4;
    }
    ctx->pc = 0x2DCBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCBE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DCBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBE4u; }
            if (ctx->pc != 0x2DCBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DCBE4u;
label_2dcbe4:
    // 0x2dcbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcbe8:
    // 0x2dcbe8: 0x3e00008  jr          $ra
label_2dcbec:
    if (ctx->pc == 0x2DCBECu) {
        ctx->pc = 0x2DCBECu;
            // 0x2dcbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DCBF0u;
        goto label_fallthrough_0x2dcbe8;
    }
    ctx->pc = 0x2DCBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBE8u;
            // 0x2dcbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dcbe8:
    ctx->pc = 0x2DCBF0u;
}

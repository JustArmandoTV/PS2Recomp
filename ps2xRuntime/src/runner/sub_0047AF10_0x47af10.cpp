#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047AF10
// Address: 0x47af10 - 0x47b190
void sub_0047AF10_0x47af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AF10_0x47af10");
#endif

    switch (ctx->pc) {
        case 0x47af10u: goto label_47af10;
        case 0x47af14u: goto label_47af14;
        case 0x47af18u: goto label_47af18;
        case 0x47af1cu: goto label_47af1c;
        case 0x47af20u: goto label_47af20;
        case 0x47af24u: goto label_47af24;
        case 0x47af28u: goto label_47af28;
        case 0x47af2cu: goto label_47af2c;
        case 0x47af30u: goto label_47af30;
        case 0x47af34u: goto label_47af34;
        case 0x47af38u: goto label_47af38;
        case 0x47af3cu: goto label_47af3c;
        case 0x47af40u: goto label_47af40;
        case 0x47af44u: goto label_47af44;
        case 0x47af48u: goto label_47af48;
        case 0x47af4cu: goto label_47af4c;
        case 0x47af50u: goto label_47af50;
        case 0x47af54u: goto label_47af54;
        case 0x47af58u: goto label_47af58;
        case 0x47af5cu: goto label_47af5c;
        case 0x47af60u: goto label_47af60;
        case 0x47af64u: goto label_47af64;
        case 0x47af68u: goto label_47af68;
        case 0x47af6cu: goto label_47af6c;
        case 0x47af70u: goto label_47af70;
        case 0x47af74u: goto label_47af74;
        case 0x47af78u: goto label_47af78;
        case 0x47af7cu: goto label_47af7c;
        case 0x47af80u: goto label_47af80;
        case 0x47af84u: goto label_47af84;
        case 0x47af88u: goto label_47af88;
        case 0x47af8cu: goto label_47af8c;
        case 0x47af90u: goto label_47af90;
        case 0x47af94u: goto label_47af94;
        case 0x47af98u: goto label_47af98;
        case 0x47af9cu: goto label_47af9c;
        case 0x47afa0u: goto label_47afa0;
        case 0x47afa4u: goto label_47afa4;
        case 0x47afa8u: goto label_47afa8;
        case 0x47afacu: goto label_47afac;
        case 0x47afb0u: goto label_47afb0;
        case 0x47afb4u: goto label_47afb4;
        case 0x47afb8u: goto label_47afb8;
        case 0x47afbcu: goto label_47afbc;
        case 0x47afc0u: goto label_47afc0;
        case 0x47afc4u: goto label_47afc4;
        case 0x47afc8u: goto label_47afc8;
        case 0x47afccu: goto label_47afcc;
        case 0x47afd0u: goto label_47afd0;
        case 0x47afd4u: goto label_47afd4;
        case 0x47afd8u: goto label_47afd8;
        case 0x47afdcu: goto label_47afdc;
        case 0x47afe0u: goto label_47afe0;
        case 0x47afe4u: goto label_47afe4;
        case 0x47afe8u: goto label_47afe8;
        case 0x47afecu: goto label_47afec;
        case 0x47aff0u: goto label_47aff0;
        case 0x47aff4u: goto label_47aff4;
        case 0x47aff8u: goto label_47aff8;
        case 0x47affcu: goto label_47affc;
        case 0x47b000u: goto label_47b000;
        case 0x47b004u: goto label_47b004;
        case 0x47b008u: goto label_47b008;
        case 0x47b00cu: goto label_47b00c;
        case 0x47b010u: goto label_47b010;
        case 0x47b014u: goto label_47b014;
        case 0x47b018u: goto label_47b018;
        case 0x47b01cu: goto label_47b01c;
        case 0x47b020u: goto label_47b020;
        case 0x47b024u: goto label_47b024;
        case 0x47b028u: goto label_47b028;
        case 0x47b02cu: goto label_47b02c;
        case 0x47b030u: goto label_47b030;
        case 0x47b034u: goto label_47b034;
        case 0x47b038u: goto label_47b038;
        case 0x47b03cu: goto label_47b03c;
        case 0x47b040u: goto label_47b040;
        case 0x47b044u: goto label_47b044;
        case 0x47b048u: goto label_47b048;
        case 0x47b04cu: goto label_47b04c;
        case 0x47b050u: goto label_47b050;
        case 0x47b054u: goto label_47b054;
        case 0x47b058u: goto label_47b058;
        case 0x47b05cu: goto label_47b05c;
        case 0x47b060u: goto label_47b060;
        case 0x47b064u: goto label_47b064;
        case 0x47b068u: goto label_47b068;
        case 0x47b06cu: goto label_47b06c;
        case 0x47b070u: goto label_47b070;
        case 0x47b074u: goto label_47b074;
        case 0x47b078u: goto label_47b078;
        case 0x47b07cu: goto label_47b07c;
        case 0x47b080u: goto label_47b080;
        case 0x47b084u: goto label_47b084;
        case 0x47b088u: goto label_47b088;
        case 0x47b08cu: goto label_47b08c;
        case 0x47b090u: goto label_47b090;
        case 0x47b094u: goto label_47b094;
        case 0x47b098u: goto label_47b098;
        case 0x47b09cu: goto label_47b09c;
        case 0x47b0a0u: goto label_47b0a0;
        case 0x47b0a4u: goto label_47b0a4;
        case 0x47b0a8u: goto label_47b0a8;
        case 0x47b0acu: goto label_47b0ac;
        case 0x47b0b0u: goto label_47b0b0;
        case 0x47b0b4u: goto label_47b0b4;
        case 0x47b0b8u: goto label_47b0b8;
        case 0x47b0bcu: goto label_47b0bc;
        case 0x47b0c0u: goto label_47b0c0;
        case 0x47b0c4u: goto label_47b0c4;
        case 0x47b0c8u: goto label_47b0c8;
        case 0x47b0ccu: goto label_47b0cc;
        case 0x47b0d0u: goto label_47b0d0;
        case 0x47b0d4u: goto label_47b0d4;
        case 0x47b0d8u: goto label_47b0d8;
        case 0x47b0dcu: goto label_47b0dc;
        case 0x47b0e0u: goto label_47b0e0;
        case 0x47b0e4u: goto label_47b0e4;
        case 0x47b0e8u: goto label_47b0e8;
        case 0x47b0ecu: goto label_47b0ec;
        case 0x47b0f0u: goto label_47b0f0;
        case 0x47b0f4u: goto label_47b0f4;
        case 0x47b0f8u: goto label_47b0f8;
        case 0x47b0fcu: goto label_47b0fc;
        case 0x47b100u: goto label_47b100;
        case 0x47b104u: goto label_47b104;
        case 0x47b108u: goto label_47b108;
        case 0x47b10cu: goto label_47b10c;
        case 0x47b110u: goto label_47b110;
        case 0x47b114u: goto label_47b114;
        case 0x47b118u: goto label_47b118;
        case 0x47b11cu: goto label_47b11c;
        case 0x47b120u: goto label_47b120;
        case 0x47b124u: goto label_47b124;
        case 0x47b128u: goto label_47b128;
        case 0x47b12cu: goto label_47b12c;
        case 0x47b130u: goto label_47b130;
        case 0x47b134u: goto label_47b134;
        case 0x47b138u: goto label_47b138;
        case 0x47b13cu: goto label_47b13c;
        case 0x47b140u: goto label_47b140;
        case 0x47b144u: goto label_47b144;
        case 0x47b148u: goto label_47b148;
        case 0x47b14cu: goto label_47b14c;
        case 0x47b150u: goto label_47b150;
        case 0x47b154u: goto label_47b154;
        case 0x47b158u: goto label_47b158;
        case 0x47b15cu: goto label_47b15c;
        case 0x47b160u: goto label_47b160;
        case 0x47b164u: goto label_47b164;
        case 0x47b168u: goto label_47b168;
        case 0x47b16cu: goto label_47b16c;
        case 0x47b170u: goto label_47b170;
        case 0x47b174u: goto label_47b174;
        case 0x47b178u: goto label_47b178;
        case 0x47b17cu: goto label_47b17c;
        case 0x47b180u: goto label_47b180;
        case 0x47b184u: goto label_47b184;
        case 0x47b188u: goto label_47b188;
        case 0x47b18cu: goto label_47b18c;
        default: break;
    }

    ctx->pc = 0x47af10u;

label_47af10:
    // 0x47af10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47af14:
    // 0x47af14: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x47af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_47af18:
    // 0x47af18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47af1c:
    // 0x47af1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47af20:
    // 0x47af20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47af24:
    // 0x47af24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47af24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47af28:
    // 0x47af28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47af2c:
    // 0x47af2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x47af2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47af30:
    // 0x47af30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47af30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47af34:
    // 0x47af34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x47af34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47af38:
    // 0x47af38: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x47af38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_47af3c:
    // 0x47af3c: 0x3445af28  ori         $a1, $v0, 0xAF28
    ctx->pc = 0x47af3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44840);
label_47af40:
    // 0x47af40: 0xc0ee760  jal         func_3B9D80
label_47af44:
    if (ctx->pc == 0x47AF44u) {
        ctx->pc = 0x47AF44u;
            // 0x47af44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AF48u;
        goto label_47af48;
    }
    ctx->pc = 0x47AF40u;
    SET_GPR_U32(ctx, 31, 0x47AF48u);
    ctx->pc = 0x47AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AF40u;
            // 0x47af44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AF48u; }
        if (ctx->pc != 0x47AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AF48u; }
        if (ctx->pc != 0x47AF48u) { return; }
    }
    ctx->pc = 0x47AF48u;
label_47af48:
    // 0x47af48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47af4c:
    // 0x47af4c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x47af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_47af50:
    // 0x47af50: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x47af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
label_47af54:
    // 0x47af54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47af54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47af58:
    // 0x47af58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47af58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_47af5c:
    // 0x47af5c: 0xae51005c  sw          $s1, 0x5C($s2)
    ctx->pc = 0x47af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 17));
label_47af60:
    // 0x47af60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47af64:
    // 0x47af64: 0xae500060  sw          $s0, 0x60($s2)
    ctx->pc = 0x47af64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
label_47af68:
    // 0x47af68: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x47af68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_47af6c:
    // 0x47af6c: 0xe6540068  swc1        $f20, 0x68($s2)
    ctx->pc = 0x47af6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_47af70:
    // 0x47af70: 0xa2400070  sb          $zero, 0x70($s2)
    ctx->pc = 0x47af70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 0));
label_47af74:
    // 0x47af74: 0xa2400071  sb          $zero, 0x71($s2)
    ctx->pc = 0x47af74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
label_47af78:
    // 0x47af78: 0xa6400072  sh          $zero, 0x72($s2)
    ctx->pc = 0x47af78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 114), (uint16_t)GPR_U32(ctx, 0));
label_47af7c:
    // 0x47af7c: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x47af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_47af80:
    // 0x47af80: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x47af80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_47af84:
    // 0x47af84: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x47af84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_47af88:
    // 0x47af88: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x47af88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_47af8c:
    // 0x47af8c: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x47af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_47af90:
    // 0x47af90: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x47af90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
label_47af94:
    // 0x47af94: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x47af94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_47af98:
    // 0x47af98: 0x8c637610  lw          $v1, 0x7610($v1)
    ctx->pc = 0x47af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30224)));
label_47af9c:
    // 0x47af9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x47af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47afa0:
    // 0x47afa0: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x47afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_47afa4:
    // 0x47afa4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47afa8:
    // 0x47afa8: 0x8c440780  lw          $a0, 0x780($v0)
    ctx->pc = 0x47afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_47afac:
    // 0x47afac: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x47afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_47afb0:
    // 0x47afb0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x47afb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_47afb4:
    // 0x47afb4: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_47afb8:
    if (ctx->pc == 0x47AFB8u) {
        ctx->pc = 0x47AFB8u;
            // 0x47afb8: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x47AFBCu;
        goto label_47afbc;
    }
    ctx->pc = 0x47AFB4u;
    {
        const bool branch_taken_0x47afb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47afb4) {
            ctx->pc = 0x47AFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AFB4u;
            // 0x47afb8: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AFCCu;
            goto label_47afcc;
        }
    }
    ctx->pc = 0x47AFBCu;
label_47afbc:
    // 0x47afbc: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x47afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_47afc0:
    // 0x47afc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x47afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_47afc4:
    // 0x47afc4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x47afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_47afc8:
    // 0x47afc8: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x47afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_47afcc:
    // 0x47afcc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x47afccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_47afd0:
    // 0x47afd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_47afd4:
    if (ctx->pc == 0x47AFD4u) {
        ctx->pc = 0x47AFD8u;
        goto label_47afd8;
    }
    ctx->pc = 0x47AFD0u;
    {
        const bool branch_taken_0x47afd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47afd0) {
            ctx->pc = 0x47AFF4u;
            goto label_47aff4;
        }
    }
    ctx->pc = 0x47AFD8u;
label_47afd8:
    // 0x47afd8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47afd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47afdc:
    // 0x47afdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47afe0:
    // 0x47afe0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47afe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47afe4:
    // 0x47afe4: 0x320f809  jalr        $t9
label_47afe8:
    if (ctx->pc == 0x47AFE8u) {
        ctx->pc = 0x47AFE8u;
            // 0x47afe8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x47AFECu;
        goto label_47afec;
    }
    ctx->pc = 0x47AFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AFECu);
        ctx->pc = 0x47AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AFE4u;
            // 0x47afe8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AFECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AFECu; }
            if (ctx->pc != 0x47AFECu) { return; }
        }
        }
    }
    ctx->pc = 0x47AFECu;
label_47afec:
    // 0x47afec: 0x10000012  b           . + 4 + (0x12 << 2)
label_47aff0:
    if (ctx->pc == 0x47AFF0u) {
        ctx->pc = 0x47AFF0u;
            // 0x47aff0: 0xc6410068  lwc1        $f1, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47AFF4u;
        goto label_47aff4;
    }
    ctx->pc = 0x47AFECu;
    {
        const bool branch_taken_0x47afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AFECu;
            // 0x47aff0: 0xc6410068  lwc1        $f1, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47afec) {
            ctx->pc = 0x47B038u;
            goto label_47b038;
        }
    }
    ctx->pc = 0x47AFF4u;
label_47aff4:
    // 0x47aff4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47aff8:
    // 0x47aff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47affc:
    // 0x47affc: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x47affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_47b000:
    // 0x47b000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47b004:
    // 0x47b004: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47b008:
    // 0x47b008: 0x806211ab  lb          $v0, 0x11AB($v1)
    ctx->pc = 0x47b008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4523)));
label_47b00c:
    // 0x47b00c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x47b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_47b010:
    // 0x47b010: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x47b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_47b014:
    // 0x47b014: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x47b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_47b018:
    // 0x47b018: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47b01c:
    if (ctx->pc == 0x47B01Cu) {
        ctx->pc = 0x47B020u;
        goto label_47b020;
    }
    ctx->pc = 0x47B018u;
    {
        const bool branch_taken_0x47b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b018) {
            ctx->pc = 0x47B034u;
            goto label_47b034;
        }
    }
    ctx->pc = 0x47B020u;
label_47b020:
    // 0x47b020: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47b020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47b024:
    // 0x47b024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47b028:
    // 0x47b028: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47b028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47b02c:
    // 0x47b02c: 0x320f809  jalr        $t9
label_47b030:
    if (ctx->pc == 0x47B030u) {
        ctx->pc = 0x47B030u;
            // 0x47b030: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x47B034u;
        goto label_47b034;
    }
    ctx->pc = 0x47B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B034u);
        ctx->pc = 0x47B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B02Cu;
            // 0x47b030: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B034u; }
            if (ctx->pc != 0x47B034u) { return; }
        }
        }
    }
    ctx->pc = 0x47B034u;
label_47b034:
    // 0x47b034: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x47b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47b038:
    // 0x47b038: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47b03c:
    // 0x47b03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b040:
    // 0x47b040: 0x0  nop
    ctx->pc = 0x47b040u;
    // NOP
label_47b044:
    // 0x47b044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47b044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47b048:
    // 0x47b048: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_47b04c:
    if (ctx->pc == 0x47B04Cu) {
        ctx->pc = 0x47B04Cu;
            // 0x47b04c: 0x3c024479  lui         $v0, 0x4479 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
        ctx->pc = 0x47B050u;
        goto label_47b050;
    }
    ctx->pc = 0x47B048u;
    {
        const bool branch_taken_0x47b048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47b048) {
            ctx->pc = 0x47B04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B048u;
            // 0x47b04c: 0x3c024479  lui         $v0, 0x4479 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B068u;
            goto label_47b068;
        }
    }
    ctx->pc = 0x47B050u;
label_47b050:
    // 0x47b050: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47b050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47b054:
    // 0x47b054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47b058:
    // 0x47b058: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47b058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47b05c:
    // 0x47b05c: 0x320f809  jalr        $t9
label_47b060:
    if (ctx->pc == 0x47B060u) {
        ctx->pc = 0x47B060u;
            // 0x47b060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B064u;
        goto label_47b064;
    }
    ctx->pc = 0x47B05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B064u);
        ctx->pc = 0x47B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B05Cu;
            // 0x47b060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B064u; }
            if (ctx->pc != 0x47B064u) { return; }
        }
        }
    }
    ctx->pc = 0x47B064u;
label_47b064:
    // 0x47b064: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x47b064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
label_47b068:
    // 0x47b068: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x47b068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_47b06c:
    // 0x47b06c: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x47b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47b070:
    // 0x47b070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47b070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b074:
    // 0x47b074: 0x0  nop
    ctx->pc = 0x47b074u;
    // NOP
label_47b078:
    // 0x47b078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47b078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47b07c:
    // 0x47b07c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_47b080:
    if (ctx->pc == 0x47B080u) {
        ctx->pc = 0x47B080u;
            // 0x47b080: 0x92430010  lbu         $v1, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x47B084u;
        goto label_47b084;
    }
    ctx->pc = 0x47B07Cu;
    {
        const bool branch_taken_0x47b07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47b07c) {
            ctx->pc = 0x47B080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B07Cu;
            // 0x47b080: 0x92430010  lbu         $v1, 0x10($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B08Cu;
            goto label_47b08c;
        }
    }
    ctx->pc = 0x47B084u;
label_47b084:
    // 0x47b084: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x47b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_47b088:
    // 0x47b088: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x47b088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_47b08c:
    // 0x47b08c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x47b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_47b090:
    // 0x47b090: 0x50620035  beql        $v1, $v0, . + 4 + (0x35 << 2)
label_47b094:
    if (ctx->pc == 0x47B094u) {
        ctx->pc = 0x47B094u;
            // 0x47b094: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B098u;
        goto label_47b098;
    }
    ctx->pc = 0x47B090u;
    {
        const bool branch_taken_0x47b090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47b090) {
            ctx->pc = 0x47B094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B090u;
            // 0x47b094: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B168u;
            goto label_47b168;
        }
    }
    ctx->pc = 0x47B098u;
label_47b098:
    // 0x47b098: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_47b09c:
    if (ctx->pc == 0x47B09Cu) {
        ctx->pc = 0x47B0A0u;
        goto label_47b0a0;
    }
    ctx->pc = 0x47B098u;
    {
        const bool branch_taken_0x47b098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b098) {
            ctx->pc = 0x47B164u;
            goto label_47b164;
        }
    }
    ctx->pc = 0x47B0A0u;
label_47b0a0:
    // 0x47b0a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47b0a4:
    // 0x47b0a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47b0a8:
    // 0x47b0a8: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x47b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47b0ac:
    // 0x47b0ac: 0x24637620  addiu       $v1, $v1, 0x7620
    ctx->pc = 0x47b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30240));
label_47b0b0:
    // 0x47b0b0: 0x8c507610  lw          $s0, 0x7610($v0)
    ctx->pc = 0x47b0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30224)));
label_47b0b4:
    // 0x47b0b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x47b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_47b0b8:
    // 0x47b0b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x47b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_47b0bc:
    // 0x47b0bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47b0c0:
    // 0x47b0c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47b0c4:
    // 0x47b0c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47b0c8:
    // 0x47b0c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47b0cc:
    // 0x47b0cc: 0xc040180  jal         func_100600
label_47b0d0:
    if (ctx->pc == 0x47B0D0u) {
        ctx->pc = 0x47B0D0u;
            // 0x47b0d0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x47B0D4u;
        goto label_47b0d4;
    }
    ctx->pc = 0x47B0CCu;
    SET_GPR_U32(ctx, 31, 0x47B0D4u);
    ctx->pc = 0x47B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B0CCu;
            // 0x47b0d0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B0D4u; }
        if (ctx->pc != 0x47B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B0D4u; }
        if (ctx->pc != 0x47B0D4u) { return; }
    }
    ctx->pc = 0x47B0D4u;
label_47b0d4:
    // 0x47b0d4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_47b0d8:
    if (ctx->pc == 0x47B0D8u) {
        ctx->pc = 0x47B0D8u;
            // 0x47b0d8: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x47B0DCu;
        goto label_47b0dc;
    }
    ctx->pc = 0x47B0D4u;
    {
        const bool branch_taken_0x47b0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b0d4) {
            ctx->pc = 0x47B0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B0D4u;
            // 0x47b0d8: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B108u;
            goto label_47b108;
        }
    }
    ctx->pc = 0x47B0DCu;
label_47b0dc:
    // 0x47b0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b0e0:
    // 0x47b0e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x47b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47b0e4:
    // 0x47b0e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47b0e8:
    // 0x47b0e8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x47b0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47b0ec:
    // 0x47b0ec: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x47b0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_47b0f0:
    // 0x47b0f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47b0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47b0f4:
    // 0x47b0f4: 0x2647007c  addiu       $a3, $s2, 0x7C
    ctx->pc = 0x47b0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_47b0f8:
    // 0x47b0f8: 0x2628001c  addiu       $t0, $s1, 0x1C
    ctx->pc = 0x47b0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_47b0fc:
    // 0x47b0fc: 0xc1109e0  jal         func_442780
label_47b100:
    if (ctx->pc == 0x47B100u) {
        ctx->pc = 0x47B100u;
            // 0x47b100: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x47B104u;
        goto label_47b104;
    }
    ctx->pc = 0x47B0FCu;
    SET_GPR_U32(ctx, 31, 0x47B104u);
    ctx->pc = 0x47B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B0FCu;
            // 0x47b100: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B104u; }
        if (ctx->pc != 0x47B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B104u; }
        if (ctx->pc != 0x47B104u) { return; }
    }
    ctx->pc = 0x47B104u;
label_47b104:
    // 0x47b104: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x47b104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_47b108:
    // 0x47b108: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x47b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_47b10c:
    // 0x47b10c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x47b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_47b110:
    // 0x47b110: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x47b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b114:
    // 0x47b114: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x47b114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_47b118:
    // 0x47b118: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x47b118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_47b11c:
    // 0x47b11c: 0xc040180  jal         func_100600
label_47b120:
    if (ctx->pc == 0x47B120u) {
        ctx->pc = 0x47B120u;
            // 0x47b120: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->pc = 0x47B124u;
        goto label_47b124;
    }
    ctx->pc = 0x47B11Cu;
    SET_GPR_U32(ctx, 31, 0x47B124u);
    ctx->pc = 0x47B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B11Cu;
            // 0x47b120: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B124u; }
        if (ctx->pc != 0x47B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B124u; }
        if (ctx->pc != 0x47B124u) { return; }
    }
    ctx->pc = 0x47B124u;
label_47b124:
    // 0x47b124: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_47b128:
    if (ctx->pc == 0x47B128u) {
        ctx->pc = 0x47B128u;
            // 0x47b128: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x47B12Cu;
        goto label_47b12c;
    }
    ctx->pc = 0x47B124u;
    {
        const bool branch_taken_0x47b124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b124) {
            ctx->pc = 0x47B128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B124u;
            // 0x47b128: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B158u;
            goto label_47b158;
        }
    }
    ctx->pc = 0x47B12Cu;
label_47b12c:
    // 0x47b12c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47b12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b130:
    // 0x47b130: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x47b130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47b134:
    // 0x47b134: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47b138:
    // 0x47b138: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x47b138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47b13c:
    // 0x47b13c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x47b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47b140:
    // 0x47b140: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x47b140u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_47b144:
    // 0x47b144: 0x26470080  addiu       $a3, $s2, 0x80
    ctx->pc = 0x47b144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_47b148:
    // 0x47b148: 0x2628001c  addiu       $t0, $s1, 0x1C
    ctx->pc = 0x47b148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_47b14c:
    // 0x47b14c: 0xc1109e0  jal         func_442780
label_47b150:
    if (ctx->pc == 0x47B150u) {
        ctx->pc = 0x47B150u;
            // 0x47b150: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x47B154u;
        goto label_47b154;
    }
    ctx->pc = 0x47B14Cu;
    SET_GPR_U32(ctx, 31, 0x47B154u);
    ctx->pc = 0x47B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B14Cu;
            // 0x47b150: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B154u; }
        if (ctx->pc != 0x47B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B154u; }
        if (ctx->pc != 0x47B154u) { return; }
    }
    ctx->pc = 0x47B154u;
label_47b154:
    // 0x47b154: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x47b154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_47b158:
    // 0x47b158: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x47b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_47b15c:
    // 0x47b15c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x47b15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_47b160:
    // 0x47b160: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x47b160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_47b164:
    // 0x47b164: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x47b164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47b168:
    // 0x47b168: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47b16c:
    // 0x47b16c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47b16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b170:
    // 0x47b170: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47b174:
    // 0x47b174: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47b174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b178:
    // 0x47b178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47b178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b17c:
    // 0x47b17c: 0x3e00008  jr          $ra
label_47b180:
    if (ctx->pc == 0x47B180u) {
        ctx->pc = 0x47B180u;
            // 0x47b180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47B184u;
        goto label_47b184;
    }
    ctx->pc = 0x47B17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B17Cu;
            // 0x47b180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B184u;
label_47b184:
    // 0x47b184: 0x0  nop
    ctx->pc = 0x47b184u;
    // NOP
label_47b188:
    // 0x47b188: 0x0  nop
    ctx->pc = 0x47b188u;
    // NOP
label_47b18c:
    // 0x47b18c: 0x0  nop
    ctx->pc = 0x47b18cu;
    // NOP
}

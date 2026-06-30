#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A8A40
// Address: 0x4a8a40 - 0x4a8ca0
void sub_004A8A40_0x4a8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8A40_0x4a8a40");
#endif

    switch (ctx->pc) {
        case 0x4a8a40u: goto label_4a8a40;
        case 0x4a8a44u: goto label_4a8a44;
        case 0x4a8a48u: goto label_4a8a48;
        case 0x4a8a4cu: goto label_4a8a4c;
        case 0x4a8a50u: goto label_4a8a50;
        case 0x4a8a54u: goto label_4a8a54;
        case 0x4a8a58u: goto label_4a8a58;
        case 0x4a8a5cu: goto label_4a8a5c;
        case 0x4a8a60u: goto label_4a8a60;
        case 0x4a8a64u: goto label_4a8a64;
        case 0x4a8a68u: goto label_4a8a68;
        case 0x4a8a6cu: goto label_4a8a6c;
        case 0x4a8a70u: goto label_4a8a70;
        case 0x4a8a74u: goto label_4a8a74;
        case 0x4a8a78u: goto label_4a8a78;
        case 0x4a8a7cu: goto label_4a8a7c;
        case 0x4a8a80u: goto label_4a8a80;
        case 0x4a8a84u: goto label_4a8a84;
        case 0x4a8a88u: goto label_4a8a88;
        case 0x4a8a8cu: goto label_4a8a8c;
        case 0x4a8a90u: goto label_4a8a90;
        case 0x4a8a94u: goto label_4a8a94;
        case 0x4a8a98u: goto label_4a8a98;
        case 0x4a8a9cu: goto label_4a8a9c;
        case 0x4a8aa0u: goto label_4a8aa0;
        case 0x4a8aa4u: goto label_4a8aa4;
        case 0x4a8aa8u: goto label_4a8aa8;
        case 0x4a8aacu: goto label_4a8aac;
        case 0x4a8ab0u: goto label_4a8ab0;
        case 0x4a8ab4u: goto label_4a8ab4;
        case 0x4a8ab8u: goto label_4a8ab8;
        case 0x4a8abcu: goto label_4a8abc;
        case 0x4a8ac0u: goto label_4a8ac0;
        case 0x4a8ac4u: goto label_4a8ac4;
        case 0x4a8ac8u: goto label_4a8ac8;
        case 0x4a8accu: goto label_4a8acc;
        case 0x4a8ad0u: goto label_4a8ad0;
        case 0x4a8ad4u: goto label_4a8ad4;
        case 0x4a8ad8u: goto label_4a8ad8;
        case 0x4a8adcu: goto label_4a8adc;
        case 0x4a8ae0u: goto label_4a8ae0;
        case 0x4a8ae4u: goto label_4a8ae4;
        case 0x4a8ae8u: goto label_4a8ae8;
        case 0x4a8aecu: goto label_4a8aec;
        case 0x4a8af0u: goto label_4a8af0;
        case 0x4a8af4u: goto label_4a8af4;
        case 0x4a8af8u: goto label_4a8af8;
        case 0x4a8afcu: goto label_4a8afc;
        case 0x4a8b00u: goto label_4a8b00;
        case 0x4a8b04u: goto label_4a8b04;
        case 0x4a8b08u: goto label_4a8b08;
        case 0x4a8b0cu: goto label_4a8b0c;
        case 0x4a8b10u: goto label_4a8b10;
        case 0x4a8b14u: goto label_4a8b14;
        case 0x4a8b18u: goto label_4a8b18;
        case 0x4a8b1cu: goto label_4a8b1c;
        case 0x4a8b20u: goto label_4a8b20;
        case 0x4a8b24u: goto label_4a8b24;
        case 0x4a8b28u: goto label_4a8b28;
        case 0x4a8b2cu: goto label_4a8b2c;
        case 0x4a8b30u: goto label_4a8b30;
        case 0x4a8b34u: goto label_4a8b34;
        case 0x4a8b38u: goto label_4a8b38;
        case 0x4a8b3cu: goto label_4a8b3c;
        case 0x4a8b40u: goto label_4a8b40;
        case 0x4a8b44u: goto label_4a8b44;
        case 0x4a8b48u: goto label_4a8b48;
        case 0x4a8b4cu: goto label_4a8b4c;
        case 0x4a8b50u: goto label_4a8b50;
        case 0x4a8b54u: goto label_4a8b54;
        case 0x4a8b58u: goto label_4a8b58;
        case 0x4a8b5cu: goto label_4a8b5c;
        case 0x4a8b60u: goto label_4a8b60;
        case 0x4a8b64u: goto label_4a8b64;
        case 0x4a8b68u: goto label_4a8b68;
        case 0x4a8b6cu: goto label_4a8b6c;
        case 0x4a8b70u: goto label_4a8b70;
        case 0x4a8b74u: goto label_4a8b74;
        case 0x4a8b78u: goto label_4a8b78;
        case 0x4a8b7cu: goto label_4a8b7c;
        case 0x4a8b80u: goto label_4a8b80;
        case 0x4a8b84u: goto label_4a8b84;
        case 0x4a8b88u: goto label_4a8b88;
        case 0x4a8b8cu: goto label_4a8b8c;
        case 0x4a8b90u: goto label_4a8b90;
        case 0x4a8b94u: goto label_4a8b94;
        case 0x4a8b98u: goto label_4a8b98;
        case 0x4a8b9cu: goto label_4a8b9c;
        case 0x4a8ba0u: goto label_4a8ba0;
        case 0x4a8ba4u: goto label_4a8ba4;
        case 0x4a8ba8u: goto label_4a8ba8;
        case 0x4a8bacu: goto label_4a8bac;
        case 0x4a8bb0u: goto label_4a8bb0;
        case 0x4a8bb4u: goto label_4a8bb4;
        case 0x4a8bb8u: goto label_4a8bb8;
        case 0x4a8bbcu: goto label_4a8bbc;
        case 0x4a8bc0u: goto label_4a8bc0;
        case 0x4a8bc4u: goto label_4a8bc4;
        case 0x4a8bc8u: goto label_4a8bc8;
        case 0x4a8bccu: goto label_4a8bcc;
        case 0x4a8bd0u: goto label_4a8bd0;
        case 0x4a8bd4u: goto label_4a8bd4;
        case 0x4a8bd8u: goto label_4a8bd8;
        case 0x4a8bdcu: goto label_4a8bdc;
        case 0x4a8be0u: goto label_4a8be0;
        case 0x4a8be4u: goto label_4a8be4;
        case 0x4a8be8u: goto label_4a8be8;
        case 0x4a8becu: goto label_4a8bec;
        case 0x4a8bf0u: goto label_4a8bf0;
        case 0x4a8bf4u: goto label_4a8bf4;
        case 0x4a8bf8u: goto label_4a8bf8;
        case 0x4a8bfcu: goto label_4a8bfc;
        case 0x4a8c00u: goto label_4a8c00;
        case 0x4a8c04u: goto label_4a8c04;
        case 0x4a8c08u: goto label_4a8c08;
        case 0x4a8c0cu: goto label_4a8c0c;
        case 0x4a8c10u: goto label_4a8c10;
        case 0x4a8c14u: goto label_4a8c14;
        case 0x4a8c18u: goto label_4a8c18;
        case 0x4a8c1cu: goto label_4a8c1c;
        case 0x4a8c20u: goto label_4a8c20;
        case 0x4a8c24u: goto label_4a8c24;
        case 0x4a8c28u: goto label_4a8c28;
        case 0x4a8c2cu: goto label_4a8c2c;
        case 0x4a8c30u: goto label_4a8c30;
        case 0x4a8c34u: goto label_4a8c34;
        case 0x4a8c38u: goto label_4a8c38;
        case 0x4a8c3cu: goto label_4a8c3c;
        case 0x4a8c40u: goto label_4a8c40;
        case 0x4a8c44u: goto label_4a8c44;
        case 0x4a8c48u: goto label_4a8c48;
        case 0x4a8c4cu: goto label_4a8c4c;
        case 0x4a8c50u: goto label_4a8c50;
        case 0x4a8c54u: goto label_4a8c54;
        case 0x4a8c58u: goto label_4a8c58;
        case 0x4a8c5cu: goto label_4a8c5c;
        case 0x4a8c60u: goto label_4a8c60;
        case 0x4a8c64u: goto label_4a8c64;
        case 0x4a8c68u: goto label_4a8c68;
        case 0x4a8c6cu: goto label_4a8c6c;
        case 0x4a8c70u: goto label_4a8c70;
        case 0x4a8c74u: goto label_4a8c74;
        case 0x4a8c78u: goto label_4a8c78;
        case 0x4a8c7cu: goto label_4a8c7c;
        case 0x4a8c80u: goto label_4a8c80;
        case 0x4a8c84u: goto label_4a8c84;
        case 0x4a8c88u: goto label_4a8c88;
        case 0x4a8c8cu: goto label_4a8c8c;
        case 0x4a8c90u: goto label_4a8c90;
        case 0x4a8c94u: goto label_4a8c94;
        case 0x4a8c98u: goto label_4a8c98;
        case 0x4a8c9cu: goto label_4a8c9c;
        default: break;
    }

    ctx->pc = 0x4a8a40u;

label_4a8a40:
    // 0x4a8a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a8a44:
    // 0x4a8a44: 0x3c0400ba  lui         $a0, 0xBA
    ctx->pc = 0x4a8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)186 << 16));
label_4a8a48:
    // 0x4a8a48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a8a4c:
    // 0x4a8a4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a8a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a8a50:
    // 0x4a8a50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a8a54:
    // 0x4a8a54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8a58:
    // 0x4a8a58: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x4a8a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a8a5c:
    // 0x4a8a5c: 0x248475d0  addiu       $a0, $a0, 0x75D0
    ctx->pc = 0x4a8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30160));
label_4a8a60:
    // 0x4a8a60: 0x3c0500b8  lui         $a1, 0xB8
    ctx->pc = 0x4a8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)184 << 16));
label_4a8a64:
    // 0x4a8a64: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x4a8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_4a8a68:
    // 0x4a8a68: 0x346831e4  ori         $t0, $v1, 0x31E4
    ctx->pc = 0x4a8a68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12772);
label_4a8a6c:
    // 0x4a8a6c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a8a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a8a70:
    // 0x4a8a70: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x4a8a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_4a8a74:
    // 0x4a8a74: 0x3c0a00b6  lui         $t2, 0xB6
    ctx->pc = 0x4a8a74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)182 << 16));
label_4a8a78:
    // 0x4a8a78: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x4a8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_4a8a7c:
    // 0x4a8a7c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x4a8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_4a8a80:
    // 0x4a8a80: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x4a8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_4a8a84:
    // 0x4a8a84: 0x240246e0  addiu       $v0, $zero, 0x46E0
    ctx->pc = 0x4a8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18144));
label_4a8a88:
    // 0x4a8a88: 0xffa80018  sd          $t0, 0x18($sp)
    ctx->pc = 0x4a8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
label_4a8a8c:
    // 0x4a8a8c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4a8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a8a90:
    // 0x4a8a90: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x4a8a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_4a8a94:
    // 0x4a8a94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a8a98:
    // 0x4a8a98: 0x24e77c40  addiu       $a3, $a3, 0x7C40
    ctx->pc = 0x4a8a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31808));
label_4a8a9c:
    // 0x4a8a9c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4a8a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a8aa0:
    // 0x4a8aa0: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x4a8aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_4a8aa4:
    // 0x4a8aa4: 0x254a11f0  addiu       $t2, $t2, 0x11F0
    ctx->pc = 0x4a8aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4592));
label_4a8aa8:
    // 0x4a8aa8: 0xc0745ac  jal         func_1D16B0
label_4a8aac:
    if (ctx->pc == 0x4A8AACu) {
        ctx->pc = 0x4A8AACu;
            // 0x4a8aac: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AB0u;
        goto label_4a8ab0;
    }
    ctx->pc = 0x4A8AA8u;
    SET_GPR_U32(ctx, 31, 0x4A8AB0u);
    ctx->pc = 0x4A8AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8AA8u;
            // 0x4a8aac: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D16B0u;
    if (runtime->hasFunction(0x1D16B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D16B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AB0u; }
        if (ctx->pc != 0x4A8AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D16B0_0x1d16b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AB0u; }
        if (ctx->pc != 0x4A8AB0u) { return; }
    }
    ctx->pc = 0x4A8AB0u;
label_4a8ab0:
    // 0x4a8ab0: 0xa60002fc  sh          $zero, 0x2FC($s0)
    ctx->pc = 0x4a8ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 764), (uint16_t)GPR_U32(ctx, 0));
label_4a8ab4:
    // 0x4a8ab4: 0xa60002fe  sh          $zero, 0x2FE($s0)
    ctx->pc = 0x4a8ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 0));
label_4a8ab8:
    // 0x4a8ab8: 0xa6000304  sh          $zero, 0x304($s0)
    ctx->pc = 0x4a8ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 0));
label_4a8abc:
    // 0x4a8abc: 0xa6000306  sh          $zero, 0x306($s0)
    ctx->pc = 0x4a8abcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 0));
label_4a8ac0:
    // 0x4a8ac0: 0x860502fc  lh          $a1, 0x2FC($s0)
    ctx->pc = 0x4a8ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 764)));
label_4a8ac4:
    // 0x4a8ac4: 0xa6050308  sh          $a1, 0x308($s0)
    ctx->pc = 0x4a8ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 776), (uint16_t)GPR_U32(ctx, 5));
label_4a8ac8:
    // 0x4a8ac8: 0xc05d006  jal         func_174018
label_4a8acc:
    if (ctx->pc == 0x4A8ACCu) {
        ctx->pc = 0x4A8ACCu;
            // 0x4a8acc: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x4A8AD0u;
        goto label_4a8ad0;
    }
    ctx->pc = 0x4A8AC8u;
    SET_GPR_U32(ctx, 31, 0x4A8AD0u);
    ctx->pc = 0x4A8ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8AC8u;
            // 0x4a8acc: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AD0u; }
        if (ctx->pc != 0x4A8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AD0u; }
        if (ctx->pc != 0x4A8AD0u) { return; }
    }
    ctx->pc = 0x4A8AD0u;
label_4a8ad0:
    // 0x4a8ad0: 0x860502fe  lh          $a1, 0x2FE($s0)
    ctx->pc = 0x4a8ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_4a8ad4:
    // 0x4a8ad4: 0xa605030a  sh          $a1, 0x30A($s0)
    ctx->pc = 0x4a8ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 778), (uint16_t)GPR_U32(ctx, 5));
label_4a8ad8:
    // 0x4a8ad8: 0xc05d006  jal         func_174018
label_4a8adc:
    if (ctx->pc == 0x4A8ADCu) {
        ctx->pc = 0x4A8ADCu;
            // 0x4a8adc: 0x8e04018c  lw          $a0, 0x18C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
        ctx->pc = 0x4A8AE0u;
        goto label_4a8ae0;
    }
    ctx->pc = 0x4A8AD8u;
    SET_GPR_U32(ctx, 31, 0x4A8AE0u);
    ctx->pc = 0x4A8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8AD8u;
            // 0x4a8adc: 0x8e04018c  lw          $a0, 0x18C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AE0u; }
        if (ctx->pc != 0x4A8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AE0u; }
        if (ctx->pc != 0x4A8AE0u) { return; }
    }
    ctx->pc = 0x4A8AE0u;
label_4a8ae0:
    // 0x4a8ae0: 0x86050304  lh          $a1, 0x304($s0)
    ctx->pc = 0x4a8ae0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
label_4a8ae4:
    // 0x4a8ae4: 0xa6050310  sh          $a1, 0x310($s0)
    ctx->pc = 0x4a8ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 784), (uint16_t)GPR_U32(ctx, 5));
label_4a8ae8:
    // 0x4a8ae8: 0xc05d006  jal         func_174018
label_4a8aec:
    if (ctx->pc == 0x4A8AECu) {
        ctx->pc = 0x4A8AECu;
            // 0x4a8aec: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->pc = 0x4A8AF0u;
        goto label_4a8af0;
    }
    ctx->pc = 0x4A8AE8u;
    SET_GPR_U32(ctx, 31, 0x4A8AF0u);
    ctx->pc = 0x4A8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8AE8u;
            // 0x4a8aec: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AF0u; }
        if (ctx->pc != 0x4A8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8AF0u; }
        if (ctx->pc != 0x4A8AF0u) { return; }
    }
    ctx->pc = 0x4A8AF0u;
label_4a8af0:
    // 0x4a8af0: 0x86050306  lh          $a1, 0x306($s0)
    ctx->pc = 0x4a8af0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 774)));
label_4a8af4:
    // 0x4a8af4: 0xa6050312  sh          $a1, 0x312($s0)
    ctx->pc = 0x4a8af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 786), (uint16_t)GPR_U32(ctx, 5));
label_4a8af8:
    // 0x4a8af8: 0xc05d006  jal         func_174018
label_4a8afc:
    if (ctx->pc == 0x4A8AFCu) {
        ctx->pc = 0x4A8AFCu;
            // 0x4a8afc: 0x8e04019c  lw          $a0, 0x19C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
        ctx->pc = 0x4A8B00u;
        goto label_4a8b00;
    }
    ctx->pc = 0x4A8AF8u;
    SET_GPR_U32(ctx, 31, 0x4A8B00u);
    ctx->pc = 0x4A8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8AF8u;
            // 0x4a8afc: 0x8e04019c  lw          $a0, 0x19C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B00u; }
        if (ctx->pc != 0x4A8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B00u; }
        if (ctx->pc != 0x4A8B00u) { return; }
    }
    ctx->pc = 0x4A8B00u;
label_4a8b00:
    // 0x4a8b00: 0x2402058a  addiu       $v0, $zero, 0x58A
    ctx->pc = 0x4a8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1418));
label_4a8b04:
    // 0x4a8b04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a8b08:
    // 0x4a8b08: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4a8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4a8b0c:
    // 0x4a8b0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a8b10:
    // 0x4a8b10: 0x3c0200ba  lui         $v0, 0xBA
    ctx->pc = 0x4a8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)186 << 16));
label_4a8b14:
    // 0x4a8b14: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x4a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_4a8b18:
    // 0x4a8b18: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x4a8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
label_4a8b1c:
    // 0x4a8b1c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x4a8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_4a8b20:
    // 0x4a8b20: 0xc070a3a  jal         func_1C28E8
label_4a8b24:
    if (ctx->pc == 0x4A8B24u) {
        ctx->pc = 0x4A8B24u;
            // 0x4a8b24: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x4A8B28u;
        goto label_4a8b28;
    }
    ctx->pc = 0x4A8B20u;
    SET_GPR_U32(ctx, 31, 0x4A8B28u);
    ctx->pc = 0x4A8B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B20u;
            // 0x4a8b24: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C28E8u;
    if (runtime->hasFunction(0x1C28E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C28E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B28u; }
        if (ctx->pc != 0x4A8B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C28E8_0x1c28e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B28u; }
        if (ctx->pc != 0x4A8B28u) { return; }
    }
    ctx->pc = 0x4A8B28u;
label_4a8b28:
    // 0x4a8b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a8b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b2c:
    // 0x4a8b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a8b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b30:
    // 0x4a8b30: 0xc07140a  jal         func_1C5028
label_4a8b34:
    if (ctx->pc == 0x4A8B34u) {
        ctx->pc = 0x4A8B34u;
            // 0x4a8b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A8B38u;
        goto label_4a8b38;
    }
    ctx->pc = 0x4A8B30u;
    SET_GPR_U32(ctx, 31, 0x4A8B38u);
    ctx->pc = 0x4A8B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B30u;
            // 0x4a8b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5028u;
    if (runtime->hasFunction(0x1C5028u)) {
        auto targetFn = runtime->lookupFunction(0x1C5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B38u; }
        if (ctx->pc != 0x4A8B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5028_0x1c5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B38u; }
        if (ctx->pc != 0x4A8B38u) { return; }
    }
    ctx->pc = 0x4A8B38u;
label_4a8b38:
    // 0x4a8b38: 0xc05a066  jal         func_168198
label_4a8b3c:
    if (ctx->pc == 0x4A8B3Cu) {
        ctx->pc = 0x4A8B3Cu;
            // 0x4a8b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B40u;
        goto label_4a8b40;
    }
    ctx->pc = 0x4A8B38u;
    SET_GPR_U32(ctx, 31, 0x4A8B40u);
    ctx->pc = 0x4A8B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B38u;
            // 0x4a8b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168198u;
    if (runtime->hasFunction(0x168198u)) {
        auto targetFn = runtime->lookupFunction(0x168198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B40u; }
        if (ctx->pc != 0x4A8B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168198_0x168198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B40u; }
        if (ctx->pc != 0x4A8B40u) { return; }
    }
    ctx->pc = 0x4A8B40u;
label_4a8b40:
    // 0x4a8b40: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8b44:
    // 0x4a8b44: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a8b48:
    // 0x4a8b48: 0x24845220  addiu       $a0, $a0, 0x5220
    ctx->pc = 0x4a8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
label_4a8b4c:
    // 0x4a8b4c: 0x24a55228  addiu       $a1, $a1, 0x5228
    ctx->pc = 0x4a8b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
label_4a8b50:
    // 0x4a8b50: 0xc05a08e  jal         func_168238
label_4a8b54:
    if (ctx->pc == 0x4A8B54u) {
        ctx->pc = 0x4A8B54u;
            // 0x4a8b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B58u;
        goto label_4a8b58;
    }
    ctx->pc = 0x4A8B50u;
    SET_GPR_U32(ctx, 31, 0x4A8B58u);
    ctx->pc = 0x4A8B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B50u;
            // 0x4a8b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168238u;
    if (runtime->hasFunction(0x168238u)) {
        auto targetFn = runtime->lookupFunction(0x168238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B58u; }
        if (ctx->pc != 0x4A8B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168238_0x168238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B58u; }
        if (ctx->pc != 0x4A8B58u) { return; }
    }
    ctx->pc = 0x4A8B58u;
label_4a8b58:
    // 0x4a8b58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4a8b5c:
    if (ctx->pc == 0x4A8B5Cu) {
        ctx->pc = 0x4A8B60u;
        goto label_4a8b60;
    }
    ctx->pc = 0x4A8B58u;
    {
        const bool branch_taken_0x4a8b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8b58) {
            ctx->pc = 0x4A8B40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a8b40;
        }
    }
    ctx->pc = 0x4A8B60u;
label_4a8b60:
    // 0x4a8b60: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8b64:
    // 0x4a8b64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a8b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a8b68:
    // 0x4a8b68: 0x24845238  addiu       $a0, $a0, 0x5238
    ctx->pc = 0x4a8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21048));
label_4a8b6c:
    // 0x4a8b6c: 0x24a55240  addiu       $a1, $a1, 0x5240
    ctx->pc = 0x4a8b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
label_4a8b70:
    // 0x4a8b70: 0xc05a08e  jal         func_168238
label_4a8b74:
    if (ctx->pc == 0x4A8B74u) {
        ctx->pc = 0x4A8B74u;
            // 0x4a8b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B78u;
        goto label_4a8b78;
    }
    ctx->pc = 0x4A8B70u;
    SET_GPR_U32(ctx, 31, 0x4A8B78u);
    ctx->pc = 0x4A8B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B70u;
            // 0x4a8b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168238u;
    if (runtime->hasFunction(0x168238u)) {
        auto targetFn = runtime->lookupFunction(0x168238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B78u; }
        if (ctx->pc != 0x4A8B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168238_0x168238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B78u; }
        if (ctx->pc != 0x4A8B78u) { return; }
    }
    ctx->pc = 0x4A8B78u;
label_4a8b78:
    // 0x4a8b78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4a8b7c:
    if (ctx->pc == 0x4A8B7Cu) {
        ctx->pc = 0x4A8B80u;
        goto label_4a8b80;
    }
    ctx->pc = 0x4A8B78u;
    {
        const bool branch_taken_0x4a8b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8b78) {
            ctx->pc = 0x4A8B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a8b60;
        }
    }
    ctx->pc = 0x4A8B80u;
label_4a8b80:
    // 0x4a8b80: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8b84:
    // 0x4a8b84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a8b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a8b88:
    // 0x4a8b88: 0x24845250  addiu       $a0, $a0, 0x5250
    ctx->pc = 0x4a8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21072));
label_4a8b8c:
    // 0x4a8b8c: 0x24a55258  addiu       $a1, $a1, 0x5258
    ctx->pc = 0x4a8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21080));
label_4a8b90:
    // 0x4a8b90: 0xc05a08e  jal         func_168238
label_4a8b94:
    if (ctx->pc == 0x4A8B94u) {
        ctx->pc = 0x4A8B94u;
            // 0x4a8b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B98u;
        goto label_4a8b98;
    }
    ctx->pc = 0x4A8B90u;
    SET_GPR_U32(ctx, 31, 0x4A8B98u);
    ctx->pc = 0x4A8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8B90u;
            // 0x4a8b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168238u;
    if (runtime->hasFunction(0x168238u)) {
        auto targetFn = runtime->lookupFunction(0x168238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B98u; }
        if (ctx->pc != 0x4A8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168238_0x168238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8B98u; }
        if (ctx->pc != 0x4A8B98u) { return; }
    }
    ctx->pc = 0x4A8B98u;
label_4a8b98:
    // 0x4a8b98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4a8b9c:
    if (ctx->pc == 0x4A8B9Cu) {
        ctx->pc = 0x4A8BA0u;
        goto label_4a8ba0;
    }
    ctx->pc = 0x4A8B98u;
    {
        const bool branch_taken_0x4a8b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8b98) {
            ctx->pc = 0x4A8B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a8b80;
        }
    }
    ctx->pc = 0x4A8BA0u;
label_4a8ba0:
    // 0x4a8ba0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8ba4:
    // 0x4a8ba4: 0xc05a11c  jal         func_168470
label_4a8ba8:
    if (ctx->pc == 0x4A8BA8u) {
        ctx->pc = 0x4A8BA8u;
            // 0x4a8ba8: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
        ctx->pc = 0x4A8BACu;
        goto label_4a8bac;
    }
    ctx->pc = 0x4A8BA4u;
    SET_GPR_U32(ctx, 31, 0x4A8BACu);
    ctx->pc = 0x4A8BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8BA4u;
            // 0x4a8ba8: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168470u;
    if (runtime->hasFunction(0x168470u)) {
        auto targetFn = runtime->lookupFunction(0x168470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BACu; }
        if (ctx->pc != 0x4A8BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168470_0x168470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BACu; }
        if (ctx->pc != 0x4A8BACu) { return; }
    }
    ctx->pc = 0x4A8BACu;
label_4a8bac:
    // 0x4a8bac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8bb0:
    // 0x4a8bb0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4a8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_4a8bb4:
    // 0x4a8bb4: 0x24845220  addiu       $a0, $a0, 0x5220
    ctx->pc = 0x4a8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
label_4a8bb8:
    // 0x4a8bb8: 0xc0706f4  jal         func_1C1BD0
label_4a8bbc:
    if (ctx->pc == 0x4A8BBCu) {
        ctx->pc = 0x4A8BBCu;
            // 0x4a8bbc: 0x24a540f0  addiu       $a1, $a1, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16624));
        ctx->pc = 0x4A8BC0u;
        goto label_4a8bc0;
    }
    ctx->pc = 0x4A8BB8u;
    SET_GPR_U32(ctx, 31, 0x4A8BC0u);
    ctx->pc = 0x4A8BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8BB8u;
            // 0x4a8bbc: 0x24a540f0  addiu       $a1, $a1, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BD0u;
    if (runtime->hasFunction(0x1C1BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1C1BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BC0u; }
        if (ctx->pc != 0x4A8BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1BD0_0x1c1bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BC0u; }
        if (ctx->pc != 0x4A8BC0u) { return; }
    }
    ctx->pc = 0x4A8BC0u;
label_4a8bc0:
    // 0x4a8bc0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8bc4:
    // 0x4a8bc4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x4a8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_4a8bc8:
    // 0x4a8bc8: 0x24845238  addiu       $a0, $a0, 0x5238
    ctx->pc = 0x4a8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21048));
label_4a8bcc:
    // 0x4a8bcc: 0xc0706f4  jal         func_1C1BD0
label_4a8bd0:
    if (ctx->pc == 0x4A8BD0u) {
        ctx->pc = 0x4A8BD0u;
            // 0x4a8bd0: 0x24a54af0  addiu       $a1, $a1, 0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
        ctx->pc = 0x4A8BD4u;
        goto label_4a8bd4;
    }
    ctx->pc = 0x4A8BCCu;
    SET_GPR_U32(ctx, 31, 0x4A8BD4u);
    ctx->pc = 0x4A8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8BCCu;
            // 0x4a8bd0: 0x24a54af0  addiu       $a1, $a1, 0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BD0u;
    if (runtime->hasFunction(0x1C1BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1C1BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BD4u; }
        if (ctx->pc != 0x4A8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1BD0_0x1c1bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BD4u; }
        if (ctx->pc != 0x4A8BD4u) { return; }
    }
    ctx->pc = 0x4A8BD4u;
label_4a8bd4:
    // 0x4a8bd4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8bd8:
    // 0x4a8bd8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4a8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4a8bdc:
    // 0x4a8bdc: 0x24845250  addiu       $a0, $a0, 0x5250
    ctx->pc = 0x4a8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21072));
label_4a8be0:
    // 0x4a8be0: 0xc0706f4  jal         func_1C1BD0
label_4a8be4:
    if (ctx->pc == 0x4A8BE4u) {
        ctx->pc = 0x4A8BE4u;
            // 0x4a8be4: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
        ctx->pc = 0x4A8BE8u;
        goto label_4a8be8;
    }
    ctx->pc = 0x4A8BE0u;
    SET_GPR_U32(ctx, 31, 0x4A8BE8u);
    ctx->pc = 0x4A8BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8BE0u;
            // 0x4a8be4: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BD0u;
    if (runtime->hasFunction(0x1C1BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1C1BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BE8u; }
        if (ctx->pc != 0x4A8BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1BD0_0x1c1bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8BE8u; }
        if (ctx->pc != 0x4A8BE8u) { return; }
    }
    ctx->pc = 0x4A8BE8u;
label_4a8be8:
    // 0x4a8be8: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4a8be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a8bec:
    // 0x4a8bec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a8becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a8bf0:
    // 0x4a8bf0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4a8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4a8bf4:
    // 0x4a8bf4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4a8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a8bf8:
    // 0x4a8bf8: 0x24a55268  addiu       $a1, $a1, 0x5268
    ctx->pc = 0x4a8bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21096));
label_4a8bfc:
    // 0x4a8bfc: 0x24060540  addiu       $a2, $zero, 0x540
    ctx->pc = 0x4a8bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
label_4a8c00:
    // 0x4a8c00: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a8c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a8c04:
    // 0x4a8c04: 0x320f809  jalr        $t9
label_4a8c08:
    if (ctx->pc == 0x4A8C08u) {
        ctx->pc = 0x4A8C08u;
            // 0x4a8c08: 0x34471a00  ori         $a3, $v0, 0x1A00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6656);
        ctx->pc = 0x4A8C0Cu;
        goto label_4a8c0c;
    }
    ctx->pc = 0x4A8C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8C0Cu);
        ctx->pc = 0x4A8C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C04u;
            // 0x4a8c08: 0x34471a00  ori         $a3, $v0, 0x1A00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6656);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C0Cu; }
            if (ctx->pc != 0x4A8C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A8C0Cu;
label_4a8c0c:
    // 0x4a8c0c: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4a8c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a8c10:
    // 0x4a8c10: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a8c14:
    // 0x4a8c14: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x4a8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_4a8c18:
    // 0x4a8c18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4a8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a8c1c:
    // 0x4a8c1c: 0x24a55278  addiu       $a1, $a1, 0x5278
    ctx->pc = 0x4a8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21112));
label_4a8c20:
    // 0x4a8c20: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x4a8c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_4a8c24:
    // 0x4a8c24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a8c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a8c28:
    // 0x4a8c28: 0x320f809  jalr        $t9
label_4a8c2c:
    if (ctx->pc == 0x4A8C2Cu) {
        ctx->pc = 0x4A8C2Cu;
            // 0x4a8c2c: 0x34471900  ori         $a3, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6400);
        ctx->pc = 0x4A8C30u;
        goto label_4a8c30;
    }
    ctx->pc = 0x4A8C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8C30u);
        ctx->pc = 0x4A8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C28u;
            // 0x4a8c2c: 0x34471900  ori         $a3, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6400);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C30u; }
            if (ctx->pc != 0x4A8C30u) { return; }
        }
        }
    }
    ctx->pc = 0x4A8C30u;
label_4a8c30:
    // 0x4a8c30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8c34:
    // 0x4a8c34: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a8c38:
    // 0x4a8c38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a8c3c:
    // 0x4a8c3c: 0x24635170  addiu       $v1, $v1, 0x5170
    ctx->pc = 0x4a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20848));
label_4a8c40:
    // 0x4a8c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c44:
    // 0x4a8c44: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x4a8c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a8c48:
    // 0x4a8c48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4a8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4a8c4c:
    // 0x4a8c4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a8c50:
    // 0x4a8c50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8c54:
    // 0x4a8c54: 0xc0732d4  jal         func_1CCB50
label_4a8c58:
    if (ctx->pc == 0x4A8C58u) {
        ctx->pc = 0x4A8C58u;
            // 0x4a8c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C5Cu;
        goto label_4a8c5c;
    }
    ctx->pc = 0x4A8C54u;
    SET_GPR_U32(ctx, 31, 0x4A8C5Cu);
    ctx->pc = 0x4A8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C54u;
            // 0x4a8c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C5Cu; }
        if (ctx->pc != 0x4A8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C5Cu; }
        if (ctx->pc != 0x4A8C5Cu) { return; }
    }
    ctx->pc = 0x4A8C5Cu;
label_4a8c5c:
    // 0x4a8c5c: 0x2002026  xor         $a0, $s0, $zero
    ctx->pc = 0x4a8c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
label_4a8c60:
    // 0x4a8c60: 0xc05d716  jal         func_175C58
label_4a8c64:
    if (ctx->pc == 0x4A8C64u) {
        ctx->pc = 0x4A8C64u;
            // 0x4a8c64: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4A8C68u;
        goto label_4a8c68;
    }
    ctx->pc = 0x4A8C60u;
    SET_GPR_U32(ctx, 31, 0x4A8C68u);
    ctx->pc = 0x4A8C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C60u;
            // 0x4a8c64: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C58u;
    if (runtime->hasFunction(0x175C58u)) {
        auto targetFn = runtime->lookupFunction(0x175C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C68u; }
        if (ctx->pc != 0x4A8C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C58_0x175c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C68u; }
        if (ctx->pc != 0x4A8C68u) { return; }
    }
    ctx->pc = 0x4A8C68u;
label_4a8c68:
    // 0x4a8c68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8c6c:
    // 0x4a8c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c70:
    // 0x4a8c70: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a8c74:
    // 0x4a8c74: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4a8c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a8c78:
    // 0x4a8c78: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4a8c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4a8c7c:
    // 0x4a8c7c: 0x320f809  jalr        $t9
label_4a8c80:
    if (ctx->pc == 0x4A8C80u) {
        ctx->pc = 0x4A8C80u;
            // 0x4a8c80: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A8C84u;
        goto label_4a8c84;
    }
    ctx->pc = 0x4A8C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8C84u);
        ctx->pc = 0x4A8C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C7Cu;
            // 0x4a8c80: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8C84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8C84u; }
            if (ctx->pc != 0x4A8C84u) { return; }
        }
        }
    }
    ctx->pc = 0x4A8C84u;
label_4a8c84:
    // 0x4a8c84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a8c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8c88:
    // 0x4a8c88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a8c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8c8c:
    // 0x4a8c8c: 0x3e00008  jr          $ra
label_4a8c90:
    if (ctx->pc == 0x4A8C90u) {
        ctx->pc = 0x4A8C90u;
            // 0x4a8c90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4A8C94u;
        goto label_4a8c94;
    }
    ctx->pc = 0x4A8C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8C8Cu;
            // 0x4a8c90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8C94u;
label_4a8c94:
    // 0x4a8c94: 0x0  nop
    ctx->pc = 0x4a8c94u;
    // NOP
label_4a8c98:
    // 0x4a8c98: 0x0  nop
    ctx->pc = 0x4a8c98u;
    // NOP
label_4a8c9c:
    // 0x4a8c9c: 0x0  nop
    ctx->pc = 0x4a8c9cu;
    // NOP
}

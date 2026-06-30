#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F7AB0
// Address: 0x3f7ab0 - 0x3f7bd0
void sub_003F7AB0_0x3f7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7AB0_0x3f7ab0");
#endif

    switch (ctx->pc) {
        case 0x3f7ab0u: goto label_3f7ab0;
        case 0x3f7ab4u: goto label_3f7ab4;
        case 0x3f7ab8u: goto label_3f7ab8;
        case 0x3f7abcu: goto label_3f7abc;
        case 0x3f7ac0u: goto label_3f7ac0;
        case 0x3f7ac4u: goto label_3f7ac4;
        case 0x3f7ac8u: goto label_3f7ac8;
        case 0x3f7accu: goto label_3f7acc;
        case 0x3f7ad0u: goto label_3f7ad0;
        case 0x3f7ad4u: goto label_3f7ad4;
        case 0x3f7ad8u: goto label_3f7ad8;
        case 0x3f7adcu: goto label_3f7adc;
        case 0x3f7ae0u: goto label_3f7ae0;
        case 0x3f7ae4u: goto label_3f7ae4;
        case 0x3f7ae8u: goto label_3f7ae8;
        case 0x3f7aecu: goto label_3f7aec;
        case 0x3f7af0u: goto label_3f7af0;
        case 0x3f7af4u: goto label_3f7af4;
        case 0x3f7af8u: goto label_3f7af8;
        case 0x3f7afcu: goto label_3f7afc;
        case 0x3f7b00u: goto label_3f7b00;
        case 0x3f7b04u: goto label_3f7b04;
        case 0x3f7b08u: goto label_3f7b08;
        case 0x3f7b0cu: goto label_3f7b0c;
        case 0x3f7b10u: goto label_3f7b10;
        case 0x3f7b14u: goto label_3f7b14;
        case 0x3f7b18u: goto label_3f7b18;
        case 0x3f7b1cu: goto label_3f7b1c;
        case 0x3f7b20u: goto label_3f7b20;
        case 0x3f7b24u: goto label_3f7b24;
        case 0x3f7b28u: goto label_3f7b28;
        case 0x3f7b2cu: goto label_3f7b2c;
        case 0x3f7b30u: goto label_3f7b30;
        case 0x3f7b34u: goto label_3f7b34;
        case 0x3f7b38u: goto label_3f7b38;
        case 0x3f7b3cu: goto label_3f7b3c;
        case 0x3f7b40u: goto label_3f7b40;
        case 0x3f7b44u: goto label_3f7b44;
        case 0x3f7b48u: goto label_3f7b48;
        case 0x3f7b4cu: goto label_3f7b4c;
        case 0x3f7b50u: goto label_3f7b50;
        case 0x3f7b54u: goto label_3f7b54;
        case 0x3f7b58u: goto label_3f7b58;
        case 0x3f7b5cu: goto label_3f7b5c;
        case 0x3f7b60u: goto label_3f7b60;
        case 0x3f7b64u: goto label_3f7b64;
        case 0x3f7b68u: goto label_3f7b68;
        case 0x3f7b6cu: goto label_3f7b6c;
        case 0x3f7b70u: goto label_3f7b70;
        case 0x3f7b74u: goto label_3f7b74;
        case 0x3f7b78u: goto label_3f7b78;
        case 0x3f7b7cu: goto label_3f7b7c;
        case 0x3f7b80u: goto label_3f7b80;
        case 0x3f7b84u: goto label_3f7b84;
        case 0x3f7b88u: goto label_3f7b88;
        case 0x3f7b8cu: goto label_3f7b8c;
        case 0x3f7b90u: goto label_3f7b90;
        case 0x3f7b94u: goto label_3f7b94;
        case 0x3f7b98u: goto label_3f7b98;
        case 0x3f7b9cu: goto label_3f7b9c;
        case 0x3f7ba0u: goto label_3f7ba0;
        case 0x3f7ba4u: goto label_3f7ba4;
        case 0x3f7ba8u: goto label_3f7ba8;
        case 0x3f7bacu: goto label_3f7bac;
        case 0x3f7bb0u: goto label_3f7bb0;
        case 0x3f7bb4u: goto label_3f7bb4;
        case 0x3f7bb8u: goto label_3f7bb8;
        case 0x3f7bbcu: goto label_3f7bbc;
        case 0x3f7bc0u: goto label_3f7bc0;
        case 0x3f7bc4u: goto label_3f7bc4;
        case 0x3f7bc8u: goto label_3f7bc8;
        case 0x3f7bccu: goto label_3f7bcc;
        default: break;
    }

    ctx->pc = 0x3f7ab0u;

label_3f7ab0:
    // 0x3f7ab0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f7ab4:
    // 0x3f7ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f7ab8:
    // 0x3f7ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f7ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f7abc:
    // 0x3f7abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f7abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f7ac0:
    // 0x3f7ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f7ac4:
    // 0x3f7ac4: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x3f7ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f7ac8:
    // 0x3f7ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7acc:
    // 0x3f7acc: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3f7accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3f7ad0:
    // 0x3f7ad0: 0xc04cc04  jal         func_133010
label_3f7ad4:
    if (ctx->pc == 0x3F7AD4u) {
        ctx->pc = 0x3F7AD4u;
            // 0x3f7ad4: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3F7AD8u;
        goto label_3f7ad8;
    }
    ctx->pc = 0x3F7AD0u;
    SET_GPR_U32(ctx, 31, 0x3F7AD8u);
    ctx->pc = 0x3F7AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7AD0u;
            // 0x3f7ad4: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7AD8u; }
        if (ctx->pc != 0x3F7AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7AD8u; }
        if (ctx->pc != 0x3F7AD8u) { return; }
    }
    ctx->pc = 0x3F7AD8u;
label_3f7ad8:
    // 0x3f7ad8: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x3f7ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3f7adc:
    // 0x3f7adc: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x3f7adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7ae0:
    // 0x3f7ae0: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x3f7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7ae4:
    // 0x3f7ae4: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x3f7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7ae8:
    // 0x3f7ae8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3f7ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3f7aec:
    // 0x3f7aec: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3f7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3f7af0:
    // 0x3f7af0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3f7af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3f7af4:
    // 0x3f7af4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3f7af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3f7af8:
    // 0x3f7af8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f7afc:
    // 0x3f7afc: 0xc0a5444  jal         func_295110
label_3f7b00:
    if (ctx->pc == 0x3F7B00u) {
        ctx->pc = 0x3F7B00u;
            // 0x3f7b00: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F7B04u;
        goto label_3f7b04;
    }
    ctx->pc = 0x3F7AFCu;
    SET_GPR_U32(ctx, 31, 0x3F7B04u);
    ctx->pc = 0x3F7B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7AFCu;
            // 0x3f7b00: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B04u; }
        if (ctx->pc != 0x3F7B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B04u; }
        if (ctx->pc != 0x3F7B04u) { return; }
    }
    ctx->pc = 0x3F7B04u;
label_3f7b04:
    // 0x3f7b04: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f7b08:
    // 0x3f7b08: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f7b0c:
    // 0x3f7b0c: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f7b10:
    // 0x3f7b10: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f7b14:
    // 0x3f7b14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b18:
    // 0x3f7b18: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f7b1c:
    // 0x3f7b1c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f7b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f7b20:
    // 0x3f7b20: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7b24:
    // 0x3f7b24: 0x320f809  jalr        $t9
label_3f7b28:
    if (ctx->pc == 0x3F7B28u) {
        ctx->pc = 0x3F7B28u;
            // 0x3f7b28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F7B2Cu;
        goto label_3f7b2c;
    }
    ctx->pc = 0x3F7B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7B2Cu);
        ctx->pc = 0x3F7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7B24u;
            // 0x3f7b28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B2Cu; }
            if (ctx->pc != 0x3F7B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F7B2Cu;
label_3f7b2c:
    // 0x3f7b2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b30:
    // 0x3f7b30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f7b34:
    // 0x3f7b34: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f7b38:
    // 0x3f7b38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b3c:
    // 0x3f7b3c: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f7b40:
    // 0x3f7b40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b44:
    // 0x3f7b44: 0xc04ccf4  jal         func_1333D0
label_3f7b48:
    if (ctx->pc == 0x3F7B48u) {
        ctx->pc = 0x3F7B48u;
            // 0x3f7b48: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7B4Cu;
        goto label_3f7b4c;
    }
    ctx->pc = 0x3F7B44u;
    SET_GPR_U32(ctx, 31, 0x3F7B4Cu);
    ctx->pc = 0x3F7B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7B44u;
            // 0x3f7b48: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B4Cu; }
        if (ctx->pc != 0x3F7B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B4Cu; }
        if (ctx->pc != 0x3F7B4Cu) { return; }
    }
    ctx->pc = 0x3F7B4Cu;
label_3f7b4c:
    // 0x3f7b4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b50:
    // 0x3f7b50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f7b54:
    // 0x3f7b54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f7b58:
    // 0x3f7b58: 0xc04cca0  jal         func_133280
label_3f7b5c:
    if (ctx->pc == 0x3F7B5Cu) {
        ctx->pc = 0x3F7B5Cu;
            // 0x3f7b5c: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7B60u;
        goto label_3f7b60;
    }
    ctx->pc = 0x3F7B58u;
    SET_GPR_U32(ctx, 31, 0x3F7B60u);
    ctx->pc = 0x3F7B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7B58u;
            // 0x3f7b5c: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B60u; }
        if (ctx->pc != 0x3F7B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B60u; }
        if (ctx->pc != 0x3F7B60u) { return; }
    }
    ctx->pc = 0x3F7B60u;
label_3f7b60:
    // 0x3f7b60: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f7b64:
    // 0x3f7b64: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f7b68:
    // 0x3f7b68: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3f7b6c:
    // 0x3f7b6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b70:
    // 0x3f7b70: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f7b74:
    // 0x3f7b74: 0xc04cca0  jal         func_133280
label_3f7b78:
    if (ctx->pc == 0x3F7B78u) {
        ctx->pc = 0x3F7B78u;
            // 0x3f7b78: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7B7Cu;
        goto label_3f7b7c;
    }
    ctx->pc = 0x3F7B74u;
    SET_GPR_U32(ctx, 31, 0x3F7B7Cu);
    ctx->pc = 0x3F7B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7B74u;
            // 0x3f7b78: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B7Cu; }
        if (ctx->pc != 0x3F7B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7B7Cu; }
        if (ctx->pc != 0x3F7B7Cu) { return; }
    }
    ctx->pc = 0x3F7B7Cu;
label_3f7b7c:
    // 0x3f7b7c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7b80:
    // 0x3f7b80: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3f7b84:
    // 0x3f7b84: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x3f7b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3f7b88:
    // 0x3f7b88: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x3f7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
label_3f7b8c:
    // 0x3f7b8c: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3f7b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7b90:
    // 0x3f7b90: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x3f7b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_3f7b94:
    // 0x3f7b94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7b98:
    // 0x3f7b98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f7b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7b9c:
    // 0x3f7b9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f7b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f7ba0:
    // 0x3f7ba0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3f7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3f7ba4:
    // 0x3f7ba4: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f7ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f7ba8:
    // 0x3f7ba8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7bac:
    // 0x3f7bac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7bb0:
    // 0x3f7bb0: 0xc0767f0  jal         func_1D9FC0
label_3f7bb4:
    if (ctx->pc == 0x3F7BB4u) {
        ctx->pc = 0x3F7BB4u;
            // 0x3f7bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7BB8u;
        goto label_3f7bb8;
    }
    ctx->pc = 0x3F7BB0u;
    SET_GPR_U32(ctx, 31, 0x3F7BB8u);
    ctx->pc = 0x3F7BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7BB0u;
            // 0x3f7bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7BB8u; }
        if (ctx->pc != 0x3F7BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7BB8u; }
        if (ctx->pc != 0x3F7BB8u) { return; }
    }
    ctx->pc = 0x3F7BB8u;
label_3f7bb8:
    // 0x3f7bb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f7bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7bbc:
    // 0x3f7bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f7bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7bc0:
    // 0x3f7bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f7bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7bc4:
    // 0x3f7bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f7bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7bc8:
    // 0x3f7bc8: 0x3e00008  jr          $ra
label_3f7bcc:
    if (ctx->pc == 0x3F7BCCu) {
        ctx->pc = 0x3F7BCCu;
            // 0x3f7bcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F7BD0u;
        goto label_fallthrough_0x3f7bc8;
    }
    ctx->pc = 0x3F7BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7BC8u;
            // 0x3f7bcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f7bc8:
    ctx->pc = 0x3F7BD0u;
}

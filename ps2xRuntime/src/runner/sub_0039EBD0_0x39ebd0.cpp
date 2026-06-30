#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039EBD0
// Address: 0x39ebd0 - 0x39ede0
void sub_0039EBD0_0x39ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EBD0_0x39ebd0");
#endif

    switch (ctx->pc) {
        case 0x39ebd0u: goto label_39ebd0;
        case 0x39ebd4u: goto label_39ebd4;
        case 0x39ebd8u: goto label_39ebd8;
        case 0x39ebdcu: goto label_39ebdc;
        case 0x39ebe0u: goto label_39ebe0;
        case 0x39ebe4u: goto label_39ebe4;
        case 0x39ebe8u: goto label_39ebe8;
        case 0x39ebecu: goto label_39ebec;
        case 0x39ebf0u: goto label_39ebf0;
        case 0x39ebf4u: goto label_39ebf4;
        case 0x39ebf8u: goto label_39ebf8;
        case 0x39ebfcu: goto label_39ebfc;
        case 0x39ec00u: goto label_39ec00;
        case 0x39ec04u: goto label_39ec04;
        case 0x39ec08u: goto label_39ec08;
        case 0x39ec0cu: goto label_39ec0c;
        case 0x39ec10u: goto label_39ec10;
        case 0x39ec14u: goto label_39ec14;
        case 0x39ec18u: goto label_39ec18;
        case 0x39ec1cu: goto label_39ec1c;
        case 0x39ec20u: goto label_39ec20;
        case 0x39ec24u: goto label_39ec24;
        case 0x39ec28u: goto label_39ec28;
        case 0x39ec2cu: goto label_39ec2c;
        case 0x39ec30u: goto label_39ec30;
        case 0x39ec34u: goto label_39ec34;
        case 0x39ec38u: goto label_39ec38;
        case 0x39ec3cu: goto label_39ec3c;
        case 0x39ec40u: goto label_39ec40;
        case 0x39ec44u: goto label_39ec44;
        case 0x39ec48u: goto label_39ec48;
        case 0x39ec4cu: goto label_39ec4c;
        case 0x39ec50u: goto label_39ec50;
        case 0x39ec54u: goto label_39ec54;
        case 0x39ec58u: goto label_39ec58;
        case 0x39ec5cu: goto label_39ec5c;
        case 0x39ec60u: goto label_39ec60;
        case 0x39ec64u: goto label_39ec64;
        case 0x39ec68u: goto label_39ec68;
        case 0x39ec6cu: goto label_39ec6c;
        case 0x39ec70u: goto label_39ec70;
        case 0x39ec74u: goto label_39ec74;
        case 0x39ec78u: goto label_39ec78;
        case 0x39ec7cu: goto label_39ec7c;
        case 0x39ec80u: goto label_39ec80;
        case 0x39ec84u: goto label_39ec84;
        case 0x39ec88u: goto label_39ec88;
        case 0x39ec8cu: goto label_39ec8c;
        case 0x39ec90u: goto label_39ec90;
        case 0x39ec94u: goto label_39ec94;
        case 0x39ec98u: goto label_39ec98;
        case 0x39ec9cu: goto label_39ec9c;
        case 0x39eca0u: goto label_39eca0;
        case 0x39eca4u: goto label_39eca4;
        case 0x39eca8u: goto label_39eca8;
        case 0x39ecacu: goto label_39ecac;
        case 0x39ecb0u: goto label_39ecb0;
        case 0x39ecb4u: goto label_39ecb4;
        case 0x39ecb8u: goto label_39ecb8;
        case 0x39ecbcu: goto label_39ecbc;
        case 0x39ecc0u: goto label_39ecc0;
        case 0x39ecc4u: goto label_39ecc4;
        case 0x39ecc8u: goto label_39ecc8;
        case 0x39ecccu: goto label_39eccc;
        case 0x39ecd0u: goto label_39ecd0;
        case 0x39ecd4u: goto label_39ecd4;
        case 0x39ecd8u: goto label_39ecd8;
        case 0x39ecdcu: goto label_39ecdc;
        case 0x39ece0u: goto label_39ece0;
        case 0x39ece4u: goto label_39ece4;
        case 0x39ece8u: goto label_39ece8;
        case 0x39ececu: goto label_39ecec;
        case 0x39ecf0u: goto label_39ecf0;
        case 0x39ecf4u: goto label_39ecf4;
        case 0x39ecf8u: goto label_39ecf8;
        case 0x39ecfcu: goto label_39ecfc;
        case 0x39ed00u: goto label_39ed00;
        case 0x39ed04u: goto label_39ed04;
        case 0x39ed08u: goto label_39ed08;
        case 0x39ed0cu: goto label_39ed0c;
        case 0x39ed10u: goto label_39ed10;
        case 0x39ed14u: goto label_39ed14;
        case 0x39ed18u: goto label_39ed18;
        case 0x39ed1cu: goto label_39ed1c;
        case 0x39ed20u: goto label_39ed20;
        case 0x39ed24u: goto label_39ed24;
        case 0x39ed28u: goto label_39ed28;
        case 0x39ed2cu: goto label_39ed2c;
        case 0x39ed30u: goto label_39ed30;
        case 0x39ed34u: goto label_39ed34;
        case 0x39ed38u: goto label_39ed38;
        case 0x39ed3cu: goto label_39ed3c;
        case 0x39ed40u: goto label_39ed40;
        case 0x39ed44u: goto label_39ed44;
        case 0x39ed48u: goto label_39ed48;
        case 0x39ed4cu: goto label_39ed4c;
        case 0x39ed50u: goto label_39ed50;
        case 0x39ed54u: goto label_39ed54;
        case 0x39ed58u: goto label_39ed58;
        case 0x39ed5cu: goto label_39ed5c;
        case 0x39ed60u: goto label_39ed60;
        case 0x39ed64u: goto label_39ed64;
        case 0x39ed68u: goto label_39ed68;
        case 0x39ed6cu: goto label_39ed6c;
        case 0x39ed70u: goto label_39ed70;
        case 0x39ed74u: goto label_39ed74;
        case 0x39ed78u: goto label_39ed78;
        case 0x39ed7cu: goto label_39ed7c;
        case 0x39ed80u: goto label_39ed80;
        case 0x39ed84u: goto label_39ed84;
        case 0x39ed88u: goto label_39ed88;
        case 0x39ed8cu: goto label_39ed8c;
        case 0x39ed90u: goto label_39ed90;
        case 0x39ed94u: goto label_39ed94;
        case 0x39ed98u: goto label_39ed98;
        case 0x39ed9cu: goto label_39ed9c;
        case 0x39eda0u: goto label_39eda0;
        case 0x39eda4u: goto label_39eda4;
        case 0x39eda8u: goto label_39eda8;
        case 0x39edacu: goto label_39edac;
        case 0x39edb0u: goto label_39edb0;
        case 0x39edb4u: goto label_39edb4;
        case 0x39edb8u: goto label_39edb8;
        case 0x39edbcu: goto label_39edbc;
        case 0x39edc0u: goto label_39edc0;
        case 0x39edc4u: goto label_39edc4;
        case 0x39edc8u: goto label_39edc8;
        case 0x39edccu: goto label_39edcc;
        case 0x39edd0u: goto label_39edd0;
        case 0x39edd4u: goto label_39edd4;
        case 0x39edd8u: goto label_39edd8;
        case 0x39eddcu: goto label_39eddc;
        default: break;
    }

    ctx->pc = 0x39ebd0u;

label_39ebd0:
    // 0x39ebd0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39ebd4:
    // 0x39ebd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39ebd8:
    // 0x39ebd8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x39ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39ebdc:
    // 0x39ebdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39ebe0:
    // 0x39ebe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39ebe4:
    // 0x39ebe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ebe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ebe8:
    // 0x39ebe8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39ebe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39ebec:
    // 0x39ebec: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x39ebecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39ebf0:
    // 0x39ebf0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x39ebf0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_39ebf4:
    // 0x39ebf4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39ebf8:
    // 0x39ebf8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x39ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39ebfc:
    // 0x39ebfc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x39ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ec00:
    // 0x39ec00: 0xc089688  jal         func_225A20
label_39ec04:
    if (ctx->pc == 0x39EC04u) {
        ctx->pc = 0x39EC04u;
            // 0x39ec04: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x39EC08u;
        goto label_39ec08;
    }
    ctx->pc = 0x39EC00u;
    SET_GPR_U32(ctx, 31, 0x39EC08u);
    ctx->pc = 0x39EC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EC00u;
            // 0x39ec04: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC08u; }
        if (ctx->pc != 0x39EC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC08u; }
        if (ctx->pc != 0x39EC08u) { return; }
    }
    ctx->pc = 0x39EC08u;
label_39ec08:
    // 0x39ec08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39ec0c:
    // 0x39ec0c: 0xc0a3828  jal         func_28E0A0
label_39ec10:
    if (ctx->pc == 0x39EC10u) {
        ctx->pc = 0x39EC10u;
            // 0x39ec10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39EC14u;
        goto label_39ec14;
    }
    ctx->pc = 0x39EC0Cu;
    SET_GPR_U32(ctx, 31, 0x39EC14u);
    ctx->pc = 0x39EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EC0Cu;
            // 0x39ec10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC14u; }
        if (ctx->pc != 0x39EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC14u; }
        if (ctx->pc != 0x39EC14u) { return; }
    }
    ctx->pc = 0x39EC14u;
label_39ec14:
    // 0x39ec14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x39ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ec18:
    // 0x39ec18: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x39ec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_39ec1c:
    // 0x39ec1c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x39ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ec20:
    // 0x39ec20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39ec24:
    // 0x39ec24: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x39ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ec28:
    // 0x39ec28: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x39ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39ec2c:
    // 0x39ec2c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x39ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_39ec30:
    // 0x39ec30: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x39ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ec34:
    // 0x39ec34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39ec34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39ec38:
    // 0x39ec38: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x39ec38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_39ec3c:
    // 0x39ec3c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x39ec3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_39ec40:
    // 0x39ec40: 0xc04c8f0  jal         func_1323C0
label_39ec44:
    if (ctx->pc == 0x39EC44u) {
        ctx->pc = 0x39EC44u;
            // 0x39ec44: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x39EC48u;
        goto label_39ec48;
    }
    ctx->pc = 0x39EC40u;
    SET_GPR_U32(ctx, 31, 0x39EC48u);
    ctx->pc = 0x39EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EC40u;
            // 0x39ec44: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC48u; }
        if (ctx->pc != 0x39EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC48u; }
        if (ctx->pc != 0x39EC48u) { return; }
    }
    ctx->pc = 0x39EC48u;
label_39ec48:
    // 0x39ec48: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x39ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ec4c:
    // 0x39ec4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39ec50:
    // 0x39ec50: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x39ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ec54:
    // 0x39ec54: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x39ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ec58:
    // 0x39ec58: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x39ec58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_39ec5c:
    // 0x39ec5c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x39ec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_39ec60:
    // 0x39ec60: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x39ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ec64:
    // 0x39ec64: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x39ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ec68:
    // 0x39ec68: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x39ec68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_39ec6c:
    // 0x39ec6c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x39ec6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_39ec70:
    // 0x39ec70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x39ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_39ec74:
    // 0x39ec74: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x39ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ec78:
    // 0x39ec78: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x39ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ec7c:
    // 0x39ec7c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x39ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ec80:
    // 0x39ec80: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x39ec80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_39ec84:
    // 0x39ec84: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x39ec84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_39ec88:
    // 0x39ec88: 0xc0d8a80  jal         func_362A00
label_39ec8c:
    if (ctx->pc == 0x39EC8Cu) {
        ctx->pc = 0x39EC8Cu;
            // 0x39ec8c: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x39EC90u;
        goto label_39ec90;
    }
    ctx->pc = 0x39EC88u;
    SET_GPR_U32(ctx, 31, 0x39EC90u);
    ctx->pc = 0x39EC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EC88u;
            // 0x39ec8c: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC90u; }
        if (ctx->pc != 0x39EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC90u; }
        if (ctx->pc != 0x39EC90u) { return; }
    }
    ctx->pc = 0x39EC90u;
label_39ec90:
    // 0x39ec90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39ec90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ec94:
    // 0x39ec94: 0xc0d8a80  jal         func_362A00
label_39ec98:
    if (ctx->pc == 0x39EC98u) {
        ctx->pc = 0x39EC98u;
            // 0x39ec98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39EC9Cu;
        goto label_39ec9c;
    }
    ctx->pc = 0x39EC94u;
    SET_GPR_U32(ctx, 31, 0x39EC9Cu);
    ctx->pc = 0x39EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EC94u;
            // 0x39ec98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC9Cu; }
        if (ctx->pc != 0x39EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EC9Cu; }
        if (ctx->pc != 0x39EC9Cu) { return; }
    }
    ctx->pc = 0x39EC9Cu;
label_39ec9c:
    // 0x39ec9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39eca0:
    // 0x39eca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39eca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39eca4:
    // 0x39eca4: 0xc0d8a6c  jal         func_3629B0
label_39eca8:
    if (ctx->pc == 0x39ECA8u) {
        ctx->pc = 0x39ECA8u;
            // 0x39eca8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39ECACu;
        goto label_39ecac;
    }
    ctx->pc = 0x39ECA4u;
    SET_GPR_U32(ctx, 31, 0x39ECACu);
    ctx->pc = 0x39ECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECA4u;
            // 0x39eca8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECACu; }
        if (ctx->pc != 0x39ECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECACu; }
        if (ctx->pc != 0x39ECACu) { return; }
    }
    ctx->pc = 0x39ECACu;
label_39ecac:
    // 0x39ecac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x39ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39ecb0:
    // 0x39ecb0: 0xc0b6e90  jal         func_2DBA40
label_39ecb4:
    if (ctx->pc == 0x39ECB4u) {
        ctx->pc = 0x39ECB4u;
            // 0x39ecb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39ECB8u;
        goto label_39ecb8;
    }
    ctx->pc = 0x39ECB0u;
    SET_GPR_U32(ctx, 31, 0x39ECB8u);
    ctx->pc = 0x39ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECB0u;
            // 0x39ecb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECB8u; }
        if (ctx->pc != 0x39ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECB8u; }
        if (ctx->pc != 0x39ECB8u) { return; }
    }
    ctx->pc = 0x39ECB8u;
label_39ecb8:
    // 0x39ecb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39ecb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39ecbc:
    // 0x39ecbc: 0xc0d8a80  jal         func_362A00
label_39ecc0:
    if (ctx->pc == 0x39ECC0u) {
        ctx->pc = 0x39ECC0u;
            // 0x39ecc0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39ECC4u;
        goto label_39ecc4;
    }
    ctx->pc = 0x39ECBCu;
    SET_GPR_U32(ctx, 31, 0x39ECC4u);
    ctx->pc = 0x39ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECBCu;
            // 0x39ecc0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECC4u; }
        if (ctx->pc != 0x39ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECC4u; }
        if (ctx->pc != 0x39ECC4u) { return; }
    }
    ctx->pc = 0x39ECC4u;
label_39ecc4:
    // 0x39ecc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39ecc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39ecc8:
    // 0x39ecc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39eccc:
    // 0x39eccc: 0xc0d8a54  jal         func_362950
label_39ecd0:
    if (ctx->pc == 0x39ECD0u) {
        ctx->pc = 0x39ECD0u;
            // 0x39ecd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39ECD4u;
        goto label_39ecd4;
    }
    ctx->pc = 0x39ECCCu;
    SET_GPR_U32(ctx, 31, 0x39ECD4u);
    ctx->pc = 0x39ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECCCu;
            // 0x39ecd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECD4u; }
        if (ctx->pc != 0x39ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECD4u; }
        if (ctx->pc != 0x39ECD4u) { return; }
    }
    ctx->pc = 0x39ECD4u;
label_39ecd4:
    // 0x39ecd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39ecd8:
    // 0x39ecd8: 0xc0b6e90  jal         func_2DBA40
label_39ecdc:
    if (ctx->pc == 0x39ECDCu) {
        ctx->pc = 0x39ECDCu;
            // 0x39ecdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39ECE0u;
        goto label_39ece0;
    }
    ctx->pc = 0x39ECD8u;
    SET_GPR_U32(ctx, 31, 0x39ECE0u);
    ctx->pc = 0x39ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECD8u;
            // 0x39ecdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECE0u; }
        if (ctx->pc != 0x39ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECE0u; }
        if (ctx->pc != 0x39ECE0u) { return; }
    }
    ctx->pc = 0x39ECE0u;
label_39ece0:
    // 0x39ece0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39ece0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39ece4:
    // 0x39ece4: 0xc0d8a80  jal         func_362A00
label_39ece8:
    if (ctx->pc == 0x39ECE8u) {
        ctx->pc = 0x39ECE8u;
            // 0x39ece8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39ECECu;
        goto label_39ecec;
    }
    ctx->pc = 0x39ECE4u;
    SET_GPR_U32(ctx, 31, 0x39ECECu);
    ctx->pc = 0x39ECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECE4u;
            // 0x39ece8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECECu; }
        if (ctx->pc != 0x39ECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECECu; }
        if (ctx->pc != 0x39ECECu) { return; }
    }
    ctx->pc = 0x39ECECu;
label_39ecec:
    // 0x39ecec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39ececu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39ecf0:
    // 0x39ecf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39ecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ecf4:
    // 0x39ecf4: 0xc0d8a3c  jal         func_3628F0
label_39ecf8:
    if (ctx->pc == 0x39ECF8u) {
        ctx->pc = 0x39ECF8u;
            // 0x39ecf8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39ECFCu;
        goto label_39ecfc;
    }
    ctx->pc = 0x39ECF4u;
    SET_GPR_U32(ctx, 31, 0x39ECFCu);
    ctx->pc = 0x39ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ECF4u;
            // 0x39ecf8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECFCu; }
        if (ctx->pc != 0x39ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ECFCu; }
        if (ctx->pc != 0x39ECFCu) { return; }
    }
    ctx->pc = 0x39ECFCu;
label_39ecfc:
    // 0x39ecfc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39ed00:
    // 0x39ed00: 0xc0b6e00  jal         func_2DB800
label_39ed04:
    if (ctx->pc == 0x39ED04u) {
        ctx->pc = 0x39ED04u;
            // 0x39ed04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39ED08u;
        goto label_39ed08;
    }
    ctx->pc = 0x39ED00u;
    SET_GPR_U32(ctx, 31, 0x39ED08u);
    ctx->pc = 0x39ED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED00u;
            // 0x39ed04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED08u; }
        if (ctx->pc != 0x39ED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED08u; }
        if (ctx->pc != 0x39ED08u) { return; }
    }
    ctx->pc = 0x39ED08u;
label_39ed08:
    // 0x39ed08: 0xc0d8a80  jal         func_362A00
label_39ed0c:
    if (ctx->pc == 0x39ED0Cu) {
        ctx->pc = 0x39ED0Cu;
            // 0x39ed0c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39ED10u;
        goto label_39ed10;
    }
    ctx->pc = 0x39ED08u;
    SET_GPR_U32(ctx, 31, 0x39ED10u);
    ctx->pc = 0x39ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED08u;
            // 0x39ed0c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED10u; }
        if (ctx->pc != 0x39ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED10u; }
        if (ctx->pc != 0x39ED10u) { return; }
    }
    ctx->pc = 0x39ED10u;
label_39ed10:
    // 0x39ed10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39ed10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ed14:
    // 0x39ed14: 0xc0d8a80  jal         func_362A00
label_39ed18:
    if (ctx->pc == 0x39ED18u) {
        ctx->pc = 0x39ED18u;
            // 0x39ed18: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39ED1Cu;
        goto label_39ed1c;
    }
    ctx->pc = 0x39ED14u;
    SET_GPR_U32(ctx, 31, 0x39ED1Cu);
    ctx->pc = 0x39ED18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED14u;
            // 0x39ed18: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED1Cu; }
        if (ctx->pc != 0x39ED1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED1Cu; }
        if (ctx->pc != 0x39ED1Cu) { return; }
    }
    ctx->pc = 0x39ED1Cu;
label_39ed1c:
    // 0x39ed1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ed20:
    // 0x39ed20: 0xc0d8a2c  jal         func_3628B0
label_39ed24:
    if (ctx->pc == 0x39ED24u) {
        ctx->pc = 0x39ED24u;
            // 0x39ed24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39ED28u;
        goto label_39ed28;
    }
    ctx->pc = 0x39ED20u;
    SET_GPR_U32(ctx, 31, 0x39ED28u);
    ctx->pc = 0x39ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED20u;
            // 0x39ed24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED28u; }
        if (ctx->pc != 0x39ED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED28u; }
        if (ctx->pc != 0x39ED28u) { return; }
    }
    ctx->pc = 0x39ED28u;
label_39ed28:
    // 0x39ed28: 0xc0d8a24  jal         func_362890
label_39ed2c:
    if (ctx->pc == 0x39ED2Cu) {
        ctx->pc = 0x39ED2Cu;
            // 0x39ed2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x39ED30u;
        goto label_39ed30;
    }
    ctx->pc = 0x39ED28u;
    SET_GPR_U32(ctx, 31, 0x39ED30u);
    ctx->pc = 0x39ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED28u;
            // 0x39ed2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED30u; }
        if (ctx->pc != 0x39ED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED30u; }
        if (ctx->pc != 0x39ED30u) { return; }
    }
    ctx->pc = 0x39ED30u;
label_39ed30:
    // 0x39ed30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39ed34:
    if (ctx->pc == 0x39ED34u) {
        ctx->pc = 0x39ED38u;
        goto label_39ed38;
    }
    ctx->pc = 0x39ED30u;
    {
        const bool branch_taken_0x39ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ed30) {
            ctx->pc = 0x39ED44u;
            goto label_39ed44;
        }
    }
    ctx->pc = 0x39ED38u;
label_39ed38:
    // 0x39ed38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39ed3c:
    // 0x39ed3c: 0xc0d8a14  jal         func_362850
label_39ed40:
    if (ctx->pc == 0x39ED40u) {
        ctx->pc = 0x39ED40u;
            // 0x39ed40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39ED44u;
        goto label_39ed44;
    }
    ctx->pc = 0x39ED3Cu;
    SET_GPR_U32(ctx, 31, 0x39ED44u);
    ctx->pc = 0x39ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED3Cu;
            // 0x39ed40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED44u; }
        if (ctx->pc != 0x39ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED44u; }
        if (ctx->pc != 0x39ED44u) { return; }
    }
    ctx->pc = 0x39ED44u;
label_39ed44:
    // 0x39ed44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ed48:
    // 0x39ed48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ed4c:
    // 0x39ed4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39ed50:
    // 0x39ed50: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x39ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39ed54:
    // 0x39ed54: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x39ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ed58:
    // 0x39ed58: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x39ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ed5c:
    // 0x39ed5c: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x39ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39ed60:
    // 0x39ed60: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x39ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ed64:
    // 0x39ed64: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x39ed64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_39ed68:
    // 0x39ed68: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x39ed68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_39ed6c:
    // 0x39ed6c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x39ed6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_39ed70:
    // 0x39ed70: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39ed70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39ed74:
    // 0x39ed74: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x39ed74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39ed78:
    // 0x39ed78: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x39ed78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39ed7c:
    // 0x39ed7c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x39ed7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39ed80:
    // 0x39ed80: 0xc088b74  jal         func_222DD0
label_39ed84:
    if (ctx->pc == 0x39ED84u) {
        ctx->pc = 0x39ED84u;
            // 0x39ed84: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x39ED88u;
        goto label_39ed88;
    }
    ctx->pc = 0x39ED80u;
    SET_GPR_U32(ctx, 31, 0x39ED88u);
    ctx->pc = 0x39ED84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED80u;
            // 0x39ed84: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED88u; }
        if (ctx->pc != 0x39ED88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ED88u; }
        if (ctx->pc != 0x39ED88u) { return; }
    }
    ctx->pc = 0x39ED88u;
label_39ed88:
    // 0x39ed88: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x39ed88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39ed8c:
    // 0x39ed8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39ed90:
    // 0x39ed90: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39ed90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39ed94:
    // 0x39ed94: 0x320f809  jalr        $t9
label_39ed98:
    if (ctx->pc == 0x39ED98u) {
        ctx->pc = 0x39ED98u;
            // 0x39ed98: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39ED9Cu;
        goto label_39ed9c;
    }
    ctx->pc = 0x39ED94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39ED9Cu);
        ctx->pc = 0x39ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39ED94u;
            // 0x39ed98: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39ED9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39ED9Cu; }
            if (ctx->pc != 0x39ED9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39ED9Cu;
label_39ed9c:
    // 0x39ed9c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x39ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39eda0:
    // 0x39eda0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x39eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39eda4:
    // 0x39eda4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x39eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39eda8:
    // 0x39eda8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x39eda8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_39edac:
    // 0x39edac: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x39edacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_39edb0:
    // 0x39edb0: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x39edb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_39edb4:
    // 0x39edb4: 0x46000004  c1          0x4
    ctx->pc = 0x39edb4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_39edb8:
    // 0x39edb8: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x39edb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_39edbc:
    // 0x39edbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39edc0:
    // 0x39edc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39edc4:
    // 0x39edc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39edc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39edc8:
    // 0x39edc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39edc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39edcc:
    // 0x39edcc: 0x3e00008  jr          $ra
label_39edd0:
    if (ctx->pc == 0x39EDD0u) {
        ctx->pc = 0x39EDD0u;
            // 0x39edd0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x39EDD4u;
        goto label_39edd4;
    }
    ctx->pc = 0x39EDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EDCCu;
            // 0x39edd0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EDD4u;
label_39edd4:
    // 0x39edd4: 0x0  nop
    ctx->pc = 0x39edd4u;
    // NOP
label_39edd8:
    // 0x39edd8: 0x0  nop
    ctx->pc = 0x39edd8u;
    // NOP
label_39eddc:
    // 0x39eddc: 0x0  nop
    ctx->pc = 0x39eddcu;
    // NOP
}

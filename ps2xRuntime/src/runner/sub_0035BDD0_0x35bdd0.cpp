#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035BDD0
// Address: 0x35bdd0 - 0x35bf20
void sub_0035BDD0_0x35bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BDD0_0x35bdd0");
#endif

    switch (ctx->pc) {
        case 0x35bdd0u: goto label_35bdd0;
        case 0x35bdd4u: goto label_35bdd4;
        case 0x35bdd8u: goto label_35bdd8;
        case 0x35bddcu: goto label_35bddc;
        case 0x35bde0u: goto label_35bde0;
        case 0x35bde4u: goto label_35bde4;
        case 0x35bde8u: goto label_35bde8;
        case 0x35bdecu: goto label_35bdec;
        case 0x35bdf0u: goto label_35bdf0;
        case 0x35bdf4u: goto label_35bdf4;
        case 0x35bdf8u: goto label_35bdf8;
        case 0x35bdfcu: goto label_35bdfc;
        case 0x35be00u: goto label_35be00;
        case 0x35be04u: goto label_35be04;
        case 0x35be08u: goto label_35be08;
        case 0x35be0cu: goto label_35be0c;
        case 0x35be10u: goto label_35be10;
        case 0x35be14u: goto label_35be14;
        case 0x35be18u: goto label_35be18;
        case 0x35be1cu: goto label_35be1c;
        case 0x35be20u: goto label_35be20;
        case 0x35be24u: goto label_35be24;
        case 0x35be28u: goto label_35be28;
        case 0x35be2cu: goto label_35be2c;
        case 0x35be30u: goto label_35be30;
        case 0x35be34u: goto label_35be34;
        case 0x35be38u: goto label_35be38;
        case 0x35be3cu: goto label_35be3c;
        case 0x35be40u: goto label_35be40;
        case 0x35be44u: goto label_35be44;
        case 0x35be48u: goto label_35be48;
        case 0x35be4cu: goto label_35be4c;
        case 0x35be50u: goto label_35be50;
        case 0x35be54u: goto label_35be54;
        case 0x35be58u: goto label_35be58;
        case 0x35be5cu: goto label_35be5c;
        case 0x35be60u: goto label_35be60;
        case 0x35be64u: goto label_35be64;
        case 0x35be68u: goto label_35be68;
        case 0x35be6cu: goto label_35be6c;
        case 0x35be70u: goto label_35be70;
        case 0x35be74u: goto label_35be74;
        case 0x35be78u: goto label_35be78;
        case 0x35be7cu: goto label_35be7c;
        case 0x35be80u: goto label_35be80;
        case 0x35be84u: goto label_35be84;
        case 0x35be88u: goto label_35be88;
        case 0x35be8cu: goto label_35be8c;
        case 0x35be90u: goto label_35be90;
        case 0x35be94u: goto label_35be94;
        case 0x35be98u: goto label_35be98;
        case 0x35be9cu: goto label_35be9c;
        case 0x35bea0u: goto label_35bea0;
        case 0x35bea4u: goto label_35bea4;
        case 0x35bea8u: goto label_35bea8;
        case 0x35beacu: goto label_35beac;
        case 0x35beb0u: goto label_35beb0;
        case 0x35beb4u: goto label_35beb4;
        case 0x35beb8u: goto label_35beb8;
        case 0x35bebcu: goto label_35bebc;
        case 0x35bec0u: goto label_35bec0;
        case 0x35bec4u: goto label_35bec4;
        case 0x35bec8u: goto label_35bec8;
        case 0x35beccu: goto label_35becc;
        case 0x35bed0u: goto label_35bed0;
        case 0x35bed4u: goto label_35bed4;
        case 0x35bed8u: goto label_35bed8;
        case 0x35bedcu: goto label_35bedc;
        case 0x35bee0u: goto label_35bee0;
        case 0x35bee4u: goto label_35bee4;
        case 0x35bee8u: goto label_35bee8;
        case 0x35beecu: goto label_35beec;
        case 0x35bef0u: goto label_35bef0;
        case 0x35bef4u: goto label_35bef4;
        case 0x35bef8u: goto label_35bef8;
        case 0x35befcu: goto label_35befc;
        case 0x35bf00u: goto label_35bf00;
        case 0x35bf04u: goto label_35bf04;
        case 0x35bf08u: goto label_35bf08;
        case 0x35bf0cu: goto label_35bf0c;
        case 0x35bf10u: goto label_35bf10;
        case 0x35bf14u: goto label_35bf14;
        case 0x35bf18u: goto label_35bf18;
        case 0x35bf1cu: goto label_35bf1c;
        default: break;
    }

    ctx->pc = 0x35bdd0u;

label_35bdd0:
    // 0x35bdd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x35bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_35bdd4:
    // 0x35bdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bdd8:
    // 0x35bdd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35bddc:
    // 0x35bddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35bde0:
    // 0x35bde0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35bde4:
    // 0x35bde4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35bde4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bde8:
    // 0x35bde8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35bdec:
    // 0x35bdec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35bdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35bdf0:
    // 0x35bdf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35bdf4:
    // 0x35bdf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35bdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35bdf8:
    // 0x35bdf8: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x35bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_35bdfc:
    // 0x35bdfc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x35bdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_35be00:
    // 0x35be00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35be04:
    // 0x35be04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35be04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35be08:
    // 0x35be08: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x35be08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_35be0c:
    // 0x35be0c: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x35be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35be10:
    // 0x35be10: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x35be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_35be14:
    // 0x35be14: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x35be14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_35be18:
    // 0x35be18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35be1c:
    // 0x35be1c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x35be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_35be20:
    // 0x35be20: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35be24:
    // 0x35be24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35be24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35be28:
    // 0x35be28: 0xc08bff0  jal         func_22FFC0
label_35be2c:
    if (ctx->pc == 0x35BE2Cu) {
        ctx->pc = 0x35BE2Cu;
            // 0x35be2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BE30u;
        goto label_35be30;
    }
    ctx->pc = 0x35BE28u;
    SET_GPR_U32(ctx, 31, 0x35BE30u);
    ctx->pc = 0x35BE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE28u;
            // 0x35be2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE30u; }
        if (ctx->pc != 0x35BE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE30u; }
        if (ctx->pc != 0x35BE30u) { return; }
    }
    ctx->pc = 0x35BE30u;
label_35be30:
    // 0x35be30: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x35be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_35be34:
    // 0x35be34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35be38:
    // 0x35be38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35be38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35be3c:
    // 0x35be3c: 0xc08914c  jal         func_224530
label_35be40:
    if (ctx->pc == 0x35BE40u) {
        ctx->pc = 0x35BE40u;
            // 0x35be40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BE44u;
        goto label_35be44;
    }
    ctx->pc = 0x35BE3Cu;
    SET_GPR_U32(ctx, 31, 0x35BE44u);
    ctx->pc = 0x35BE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE3Cu;
            // 0x35be40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE44u; }
        if (ctx->pc != 0x35BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE44u; }
        if (ctx->pc != 0x35BE44u) { return; }
    }
    ctx->pc = 0x35BE44u;
label_35be44:
    // 0x35be44: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x35be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_35be48:
    // 0x35be48: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x35be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35be4c:
    // 0x35be4c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x35be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35be50:
    // 0x35be50: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x35be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35be54:
    // 0x35be54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x35be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35be58:
    // 0x35be58: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x35be58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35be5c:
    // 0x35be5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x35be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_35be60:
    // 0x35be60: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35be60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_35be64:
    // 0x35be64: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x35be64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_35be68:
    // 0x35be68: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x35be68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_35be6c:
    // 0x35be6c: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x35be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35be70:
    // 0x35be70: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x35be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35be74:
    // 0x35be74: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x35be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35be78:
    // 0x35be78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x35be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35be7c:
    // 0x35be7c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x35be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35be80:
    // 0x35be80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x35be80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_35be84:
    // 0x35be84: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x35be84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_35be88:
    // 0x35be88: 0xc0892b0  jal         func_224AC0
label_35be8c:
    if (ctx->pc == 0x35BE8Cu) {
        ctx->pc = 0x35BE8Cu;
            // 0x35be8c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x35BE90u;
        goto label_35be90;
    }
    ctx->pc = 0x35BE88u;
    SET_GPR_U32(ctx, 31, 0x35BE90u);
    ctx->pc = 0x35BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE88u;
            // 0x35be8c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE90u; }
        if (ctx->pc != 0x35BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BE90u; }
        if (ctx->pc != 0x35BE90u) { return; }
    }
    ctx->pc = 0x35BE90u;
label_35be90:
    // 0x35be90: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x35be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35be94:
    // 0x35be94: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x35be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35be98:
    // 0x35be98: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x35be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35be9c:
    // 0x35be9c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x35be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_35bea0:
    // 0x35bea0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x35bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_35bea4:
    // 0x35bea4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x35bea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_35bea8:
    // 0x35bea8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x35bea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_35beac:
    // 0x35beac: 0x8e700060  lw          $s0, 0x60($s3)
    ctx->pc = 0x35beacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_35beb0:
    // 0x35beb0: 0xc088b74  jal         func_222DD0
label_35beb4:
    if (ctx->pc == 0x35BEB4u) {
        ctx->pc = 0x35BEB4u;
            // 0x35beb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BEB8u;
        goto label_35beb8;
    }
    ctx->pc = 0x35BEB0u;
    SET_GPR_U32(ctx, 31, 0x35BEB8u);
    ctx->pc = 0x35BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BEB0u;
            // 0x35beb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BEB8u; }
        if (ctx->pc != 0x35BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BEB8u; }
        if (ctx->pc != 0x35BEB8u) { return; }
    }
    ctx->pc = 0x35BEB8u;
label_35beb8:
    // 0x35beb8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x35beb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_35bebc:
    // 0x35bebc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x35bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_35bec0:
    // 0x35bec0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x35bec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_35bec4:
    // 0x35bec4: 0x320f809  jalr        $t9
label_35bec8:
    if (ctx->pc == 0x35BEC8u) {
        ctx->pc = 0x35BEC8u;
            // 0x35bec8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x35BECCu;
        goto label_35becc;
    }
    ctx->pc = 0x35BEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BECCu);
        ctx->pc = 0x35BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BEC4u;
            // 0x35bec8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BECCu; }
            if (ctx->pc != 0x35BECCu) { return; }
        }
        }
    }
    ctx->pc = 0x35BECCu;
label_35becc:
    // 0x35becc: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x35beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
label_35bed0:
    // 0x35bed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bed4:
    // 0x35bed4: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x35bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_35bed8:
    // 0x35bed8: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x35bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_35bedc:
    // 0x35bedc: 0x8c430e48  lw          $v1, 0xE48($v0)
    ctx->pc = 0x35bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35bee0:
    // 0x35bee0: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x35bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_35bee4:
    // 0x35bee4: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x35bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_35bee8:
    // 0x35bee8: 0xafb3008c  sw          $s3, 0x8C($sp)
    ctx->pc = 0x35bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 19));
label_35beec:
    // 0x35beec: 0x24626ab0  addiu       $v0, $v1, 0x6AB0
    ctx->pc = 0x35beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_35bef0:
    // 0x35bef0: 0x24656aa4  addiu       $a1, $v1, 0x6AA4
    ctx->pc = 0x35bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27300));
label_35bef4:
    // 0x35bef4: 0xc0582cc  jal         func_160B30
label_35bef8:
    if (ctx->pc == 0x35BEF8u) {
        ctx->pc = 0x35BEF8u;
            // 0x35bef8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x35BEFCu;
        goto label_35befc;
    }
    ctx->pc = 0x35BEF4u;
    SET_GPR_U32(ctx, 31, 0x35BEFCu);
    ctx->pc = 0x35BEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BEF4u;
            // 0x35bef8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BEFCu; }
        if (ctx->pc != 0x35BEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BEFCu; }
        if (ctx->pc != 0x35BEFCu) { return; }
    }
    ctx->pc = 0x35BEFCu;
label_35befc:
    // 0x35befc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35bf00:
    // 0x35bf00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35bf00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35bf04:
    // 0x35bf04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35bf04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35bf08:
    // 0x35bf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35bf0c:
    // 0x35bf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bf10:
    // 0x35bf10: 0x3e00008  jr          $ra
label_35bf14:
    if (ctx->pc == 0x35BF14u) {
        ctx->pc = 0x35BF14u;
            // 0x35bf14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35BF18u;
        goto label_35bf18;
    }
    ctx->pc = 0x35BF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF10u;
            // 0x35bf14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BF18u;
label_35bf18:
    // 0x35bf18: 0x0  nop
    ctx->pc = 0x35bf18u;
    // NOP
label_35bf1c:
    // 0x35bf1c: 0x0  nop
    ctx->pc = 0x35bf1cu;
    // NOP
}

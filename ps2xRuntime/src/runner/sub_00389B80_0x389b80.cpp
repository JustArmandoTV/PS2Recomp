#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00389B80
// Address: 0x389b80 - 0x38a0e0
void sub_00389B80_0x389b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389B80_0x389b80");
#endif

    switch (ctx->pc) {
        case 0x389bc4u: goto label_389bc4;
        case 0x389bd0u: goto label_389bd0;
        case 0x389bfcu: goto label_389bfc;
        case 0x389c18u: goto label_389c18;
        case 0x389c28u: goto label_389c28;
        case 0x389c34u: goto label_389c34;
        case 0x389c5cu: goto label_389c5c;
        case 0x389c6cu: goto label_389c6c;
        case 0x389c7cu: goto label_389c7c;
        case 0x389c88u: goto label_389c88;
        case 0x389d14u: goto label_389d14;
        case 0x389df8u: goto label_389df8;
        case 0x389e0cu: goto label_389e0c;
        case 0x389e18u: goto label_389e18;
        case 0x389ec0u: goto label_389ec0;
        case 0x389ed0u: goto label_389ed0;
        case 0x389ee4u: goto label_389ee4;
        case 0x389f40u: goto label_389f40;
        case 0x389f68u: goto label_389f68;
        case 0x389f90u: goto label_389f90;
        default: break;
    }

    ctx->pc = 0x389b80u;

    // 0x389b80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x389b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x389b84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x389b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x389b88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x389b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x389b8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x389b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x389b90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x389b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x389b94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x389b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x389b98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x389b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x389ba0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x389ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ba4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x389ba4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x389ba8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x389ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x389bac: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x389bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x389bb0: 0xc4ad0014  lwc1        $f13, 0x14($a1)
    ctx->pc = 0x389bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x389bb4: 0xc4ae0018  lwc1        $f14, 0x18($a1)
    ctx->pc = 0x389bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x389bb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x389bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x389bbc: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x389BBCu;
    SET_GPR_U32(ctx, 31, 0x389BC4u);
    ctx->pc = 0x389BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389BBCu;
            // 0x389bc0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BC4u; }
        if (ctx->pc != 0x389BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BC4u; }
        if (ctx->pc != 0x389BC4u) { return; }
    }
    ctx->pc = 0x389BC4u;
label_389bc4:
    // 0x389bc4: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x389bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x389bc8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x389BC8u;
    SET_GPR_U32(ctx, 31, 0x389BD0u);
    ctx->pc = 0x389BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389BC8u;
            // 0x389bcc: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BD0u; }
        if (ctx->pc != 0x389BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BD0u; }
        if (ctx->pc != 0x389BD0u) { return; }
    }
    ctx->pc = 0x389BD0u;
label_389bd0:
    // 0x389bd0: 0x8e330d74  lw          $s3, 0xD74($s1)
    ctx->pc = 0x389bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
    // 0x389bd4: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x389bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x389bd8: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x389bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389bdc: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x389bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389be0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x389be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x389be4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x389be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x389be8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x389be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x389bec: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x389becu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x389bf0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x389bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x389bf4: 0xc0a5444  jal         func_295110
    ctx->pc = 0x389BF4u;
    SET_GPR_U32(ctx, 31, 0x389BFCu);
    ctx->pc = 0x389BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389BF4u;
            // 0x389bf8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BFCu; }
        if (ctx->pc != 0x389BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389BFCu; }
        if (ctx->pc != 0x389BFCu) { return; }
    }
    ctx->pc = 0x389BFCu;
label_389bfc:
    // 0x389bfc: 0xae6002d0  sw          $zero, 0x2D0($s3)
    ctx->pc = 0x389bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 720), GPR_U32(ctx, 0));
    // 0x389c00: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x389c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x389c04: 0xae6002d4  sw          $zero, 0x2D4($s3)
    ctx->pc = 0x389c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 724), GPR_U32(ctx, 0));
    // 0x389c08: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x389c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x389c0c: 0xae6002d8  sw          $zero, 0x2D8($s3)
    ctx->pc = 0x389c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 0));
    // 0x389c10: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x389C10u;
    SET_GPR_U32(ctx, 31, 0x389C18u);
    ctx->pc = 0x389C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C10u;
            // 0x389c14: 0xae6002dc  sw          $zero, 0x2DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C18u; }
        if (ctx->pc != 0x389C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C18u; }
        if (ctx->pc != 0x389C18u) { return; }
    }
    ctx->pc = 0x389C18u;
label_389c18:
    // 0x389c18: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x389c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x389c1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x389c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x389c20: 0xc04cca0  jal         func_133280
    ctx->pc = 0x389C20u;
    SET_GPR_U32(ctx, 31, 0x389C28u);
    ctx->pc = 0x389C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C20u;
            // 0x389c24: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C28u; }
        if (ctx->pc != 0x389C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C28u; }
        if (ctx->pc != 0x389C28u) { return; }
    }
    ctx->pc = 0x389C28u;
label_389c28:
    // 0x389c28: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x389c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x389c2c: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x389C2Cu;
    SET_GPR_U32(ctx, 31, 0x389C34u);
    ctx->pc = 0x389C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C2Cu;
            // 0x389c30: 0xafa00114  sw          $zero, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C34u; }
        if (ctx->pc != 0x389C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C34u; }
        if (ctx->pc != 0x389C34u) { return; }
    }
    ctx->pc = 0x389C34u;
label_389c34:
    // 0x389c34: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x389c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x389c38: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x389c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x389c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x389c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389c40: 0x0  nop
    ctx->pc = 0x389c40u;
    // NOP
    // 0x389c44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x389c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389c48: 0x45030071  bc1tl       . + 4 + (0x71 << 2)
    ctx->pc = 0x389C48u;
    {
        const bool branch_taken_0x389c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389c48) {
            ctx->pc = 0x389C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389C48u;
            // 0x389c4c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389E10u;
            goto label_389e10;
        }
    }
    ctx->pc = 0x389C50u;
    // 0x389c50: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x389c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x389c54: 0xc04cc44  jal         func_133110
    ctx->pc = 0x389C54u;
    SET_GPR_U32(ctx, 31, 0x389C5Cu);
    ctx->pc = 0x389C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C54u;
            // 0x389c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C5Cu; }
        if (ctx->pc != 0x389C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C5Cu; }
        if (ctx->pc != 0x389C5Cu) { return; }
    }
    ctx->pc = 0x389C5Cu;
label_389c5c:
    // 0x389c5c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x389c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x389c60: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x389c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x389c64: 0xc04cc08  jal         func_133020
    ctx->pc = 0x389C64u;
    SET_GPR_U32(ctx, 31, 0x389C6Cu);
    ctx->pc = 0x389C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C64u;
            // 0x389c68: 0x24845ec0  addiu       $a0, $a0, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C6Cu; }
        if (ctx->pc != 0x389C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C6Cu; }
        if (ctx->pc != 0x389C6Cu) { return; }
    }
    ctx->pc = 0x389C6Cu;
label_389c6c:
    // 0x389c6c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x389c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x389c70: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x389c70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x389c74: 0xc04cc14  jal         func_133050
    ctx->pc = 0x389C74u;
    SET_GPR_U32(ctx, 31, 0x389C7Cu);
    ctx->pc = 0x389C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C74u;
            // 0x389c78: 0x24845ec0  addiu       $a0, $a0, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C7Cu; }
        if (ctx->pc != 0x389C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C7Cu; }
        if (ctx->pc != 0x389C7Cu) { return; }
    }
    ctx->pc = 0x389C7Cu;
label_389c7c:
    // 0x389c7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x389c7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x389c80: 0xc04cc14  jal         func_133050
    ctx->pc = 0x389C80u;
    SET_GPR_U32(ctx, 31, 0x389C88u);
    ctx->pc = 0x389C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389C80u;
            // 0x389c84: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C88u; }
        if (ctx->pc != 0x389C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389C88u; }
        if (ctx->pc != 0x389C88u) { return; }
    }
    ctx->pc = 0x389C88u;
label_389c88:
    // 0x389c88: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x389c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x389c8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x389c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x389c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389c94: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x389c94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x389c98: 0x0  nop
    ctx->pc = 0x389c98u;
    // NOP
    // 0x389c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ca0: 0x0  nop
    ctx->pc = 0x389ca0u;
    // NOP
    // 0x389ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x389ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389ca8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x389CA8u;
    {
        const bool branch_taken_0x389ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389ca8) {
            ctx->pc = 0x389CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389CA8u;
            // 0x389cac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389CB8u;
            goto label_389cb8;
        }
    }
    ctx->pc = 0x389CB0u;
    // 0x389cb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x389cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x389cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_389cb8:
    // 0x389cb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x389cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x389cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389cc0: 0x0  nop
    ctx->pc = 0x389cc0u;
    // NOP
    // 0x389cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x389cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389cc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389CC8u;
    {
        const bool branch_taken_0x389cc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389CC8u;
            // 0x389ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cc8) {
            ctx->pc = 0x389CD4u;
            goto label_389cd4;
        }
    }
    ctx->pc = 0x389CD0u;
    // 0x389cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389cd4:
    // 0x389cd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x389cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x389cd8: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x389cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x389cdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x389cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x389ce0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389ce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ce4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x389ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x389ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x389cec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x389cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x389cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389cf4: 0x0  nop
    ctx->pc = 0x389cf4u;
    // NOP
    // 0x389cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x389cfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x389cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x389d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389d04: 0x0  nop
    ctx->pc = 0x389d04u;
    // NOP
    // 0x389d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x389d0c: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x389D0Cu;
    SET_GPR_U32(ctx, 31, 0x389D14u);
    ctx->pc = 0x389D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389D0Cu;
            // 0x389d10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389D14u; }
        if (ctx->pc != 0x389D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389D14u; }
        if (ctx->pc != 0x389D14u) { return; }
    }
    ctx->pc = 0x389D14u;
label_389d14:
    // 0x389d14: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x389d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x389d18: 0x3c023e0f  lui         $v0, 0x3E0F
    ctx->pc = 0x389d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15887 << 16));
    // 0x389d1c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x389d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x389d20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x389d20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389d24: 0x34435c29  ori         $v1, $v0, 0x5C29
    ctx->pc = 0x389d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x389d28: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x389d28u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x389d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389d34: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x389d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389d38: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x389d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389d3c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x389d3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x389d40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x389d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389d44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389D44u;
    {
        const bool branch_taken_0x389d44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389D44u;
            // 0x389d48: 0x4614155c  madd.s      $f21, $f2, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d44) {
            ctx->pc = 0x389D50u;
            goto label_389d50;
        }
    }
    ctx->pc = 0x389D4Cu;
    // 0x389d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389d50:
    // 0x389d50: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389D50u;
    {
        const bool branch_taken_0x389d50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x389d50) {
            ctx->pc = 0x389D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389D50u;
            // 0x389d54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389D64u;
            goto label_389d64;
        }
    }
    ctx->pc = 0x389D58u;
    // 0x389d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389d5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x389D5Cu;
    {
        const bool branch_taken_0x389d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389D5Cu;
            // 0x389d60: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d5c) {
            ctx->pc = 0x389D7Cu;
            goto label_389d7c;
        }
    }
    ctx->pc = 0x389D64u;
label_389d64:
    // 0x389d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x389d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x389d68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x389d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x389d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389d70: 0x0  nop
    ctx->pc = 0x389d70u;
    // NOP
    // 0x389d74: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x389d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x389d78: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x389d78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_389d7c:
    // 0x389d7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x389d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x389d80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x389d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x389d84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x389d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389d88: 0x3c023fb2  lui         $v0, 0x3FB2
    ctx->pc = 0x389d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
    // 0x389d8c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x389d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x389d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389d94: 0x0  nop
    ctx->pc = 0x389d94u;
    // NOP
    // 0x389d98: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x389d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x389d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389da4: 0x0  nop
    ctx->pc = 0x389da4u;
    // NOP
    // 0x389da8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x389da8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x389dac: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x389dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x389db0: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x389db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x389db4: 0xc6200880  lwc1        $f0, 0x880($s1)
    ctx->pc = 0x389db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389db8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x389DB8u;
    {
        const bool branch_taken_0x389db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389DB8u;
            // 0x389dbc: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389db8) {
            ctx->pc = 0x389DDCu;
            goto label_389ddc;
        }
    }
    ctx->pc = 0x389DC0u;
    // 0x389dc0: 0x3c02bfb2  lui         $v0, 0xBFB2
    ctx->pc = 0x389dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49074 << 16));
    // 0x389dc4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x389dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x389dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389dcc: 0x0  nop
    ctx->pc = 0x389dccu;
    // NOP
    // 0x389dd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389dd4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x389DD4u;
    {
        const bool branch_taken_0x389dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389dd4) {
            ctx->pc = 0x389E0Cu;
            goto label_389e0c;
        }
    }
    ctx->pc = 0x389DDCu;
label_389ddc:
    // 0x389ddc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x389DDCu;
    {
        const bool branch_taken_0x389ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ddc) {
            ctx->pc = 0x389E0Cu;
            goto label_389e0c;
        }
    }
    ctx->pc = 0x389DE4u;
    // 0x389de4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x389de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x389de8: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x389de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
    // 0x389dec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x389decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x389df0: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x389DF0u;
    SET_GPR_U32(ctx, 31, 0x389DF8u);
    ctx->pc = 0x389DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389DF0u;
            // 0x389df4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389DF8u; }
        if (ctx->pc != 0x389DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389DF8u; }
        if (ctx->pc != 0x389DF8u) { return; }
    }
    ctx->pc = 0x389DF8u;
label_389df8:
    // 0x389df8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x389df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x389dfc: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x389dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
    // 0x389e00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x389e00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x389e04: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x389E04u;
    SET_GPR_U32(ctx, 31, 0x389E0Cu);
    ctx->pc = 0x389E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389E04u;
            // 0x389e08: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389E0Cu; }
        if (ctx->pc != 0x389E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389E0Cu; }
        if (ctx->pc != 0x389E0Cu) { return; }
    }
    ctx->pc = 0x389E0Cu;
label_389e0c:
    // 0x389e0c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x389e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_389e10:
    // 0x389e10: 0xc089a7c  jal         func_2269F0
    ctx->pc = 0x389E10u;
    SET_GPR_U32(ctx, 31, 0x389E18u);
    ctx->pc = 0x2269F0u;
    if (runtime->hasFunction(0x2269F0u)) {
        auto targetFn = runtime->lookupFunction(0x2269F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389E18u; }
        if (ctx->pc != 0x389E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002269F0_0x2269f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389E18u; }
        if (ctx->pc != 0x389E18u) { return; }
    }
    ctx->pc = 0x389E18u;
label_389e18:
    // 0x389e18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x389e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389e1c: 0x0  nop
    ctx->pc = 0x389e1cu;
    // NOP
    // 0x389e20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389e20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389e24: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x389E24u;
    {
        const bool branch_taken_0x389e24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389e24) {
            ctx->pc = 0x389E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389E24u;
            // 0x389e28: 0x3c024316  lui         $v0, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389E38u;
            goto label_389e38;
        }
    }
    ctx->pc = 0x389E2Cu;
    // 0x389e2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x389e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x389e30: 0xc440c918  lwc1        $f0, -0x36E8($v0)
    ctx->pc = 0x389e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389e34: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x389e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_389e38:
    // 0x389e38: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x389e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x389e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x389e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389e40: 0x0  nop
    ctx->pc = 0x389e40u;
    // NOP
    // 0x389e44: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x389e44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x389e48: 0x3c023b17  lui         $v0, 0x3B17
    ctx->pc = 0x389e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15127 << 16));
    // 0x389e4c: 0x3443b426  ori         $v1, $v0, 0xB426
    ctx->pc = 0x389e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
    // 0x389e50: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x389e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x389e54: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x389e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x389e58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389e58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389e5c: 0x0  nop
    ctx->pc = 0x389e5cu;
    // NOP
    // 0x389e60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x389e60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x389e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389e68: 0x0  nop
    ctx->pc = 0x389e68u;
    // NOP
    // 0x389e6c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x389e6cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x389e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389e74: 0x0  nop
    ctx->pc = 0x389e74u;
    // NOP
    // 0x389e78: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x389e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389e7c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x389E7Cu;
    {
        const bool branch_taken_0x389e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389e7c) {
            ctx->pc = 0x389E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389E7Cu;
            // 0x389e80: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389E8Cu;
            goto label_389e8c;
        }
    }
    ctx->pc = 0x389E84u;
    // 0x389e84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x389e84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x389e88: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x389e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_389e8c:
    // 0x389e8c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x389e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x389e90: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x389E90u;
    {
        const bool branch_taken_0x389e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389e90) {
            ctx->pc = 0x389EACu;
            goto label_389eac;
        }
    }
    ctx->pc = 0x389E98u;
    // 0x389e98: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x389e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x389e9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x389e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x389ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ea4: 0x0  nop
    ctx->pc = 0x389ea4u;
    // NOP
    // 0x389ea8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x389ea8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_389eac:
    // 0x389eac: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x389EACu;
    {
        const bool branch_taken_0x389eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x389eac) {
            ctx->pc = 0x389EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389EACu;
            // 0x389eb0: 0x3c033e0e  lui         $v1, 0x3E0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389F70u;
            goto label_389f70;
        }
    }
    ctx->pc = 0x389EB4u;
    // 0x389eb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x389eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x389eb8: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x389EB8u;
    SET_GPR_U32(ctx, 31, 0x389EC0u);
    ctx->pc = 0x389EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389EB8u;
            // 0x389ebc: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389EC0u; }
        if (ctx->pc != 0x389EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389EC0u; }
        if (ctx->pc != 0x389EC0u) { return; }
    }
    ctx->pc = 0x389EC0u;
label_389ec0:
    // 0x389ec0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x389ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389ec4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x389ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x389ec8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x389EC8u;
    SET_GPR_U32(ctx, 31, 0x389ED0u);
    ctx->pc = 0x389ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389EC8u;
            // 0x389ecc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389ED0u; }
        if (ctx->pc != 0x389ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389ED0u; }
        if (ctx->pc != 0x389ED0u) { return; }
    }
    ctx->pc = 0x389ED0u;
label_389ed0:
    // 0x389ed0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x389ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389ed4: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x389ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x389ed8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x389ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389edc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x389EDCu;
    SET_GPR_U32(ctx, 31, 0x389EE4u);
    ctx->pc = 0x389EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389EDCu;
            // 0x389ee0: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389EE4u; }
        if (ctx->pc != 0x389EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389EE4u; }
        if (ctx->pc != 0x389EE4u) { return; }
    }
    ctx->pc = 0x389EE4u;
label_389ee4:
    // 0x389ee4: 0x3c023fb2  lui         $v0, 0x3FB2
    ctx->pc = 0x389ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
    // 0x389ee8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x389ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x389eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ef0: 0x0  nop
    ctx->pc = 0x389ef0u;
    // NOP
    // 0x389ef4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x389ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389ef8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x389EF8u;
    {
        const bool branch_taken_0x389ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389ef8) {
            ctx->pc = 0x389EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389EF8u;
            // 0x389efc: 0x3c033eed  lui         $v1, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389F20u;
            goto label_389f20;
        }
    }
    ctx->pc = 0x389F00u;
    // 0x389f00: 0x3c02bfb2  lui         $v0, 0xBFB2
    ctx->pc = 0x389f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49074 << 16));
    // 0x389f04: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x389f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x389f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f0c: 0x0  nop
    ctx->pc = 0x389f0cu;
    // NOP
    // 0x389f10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389f14: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x389F14u;
    {
        const bool branch_taken_0x389f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389f14) {
            ctx->pc = 0x389F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389F14u;
            // 0x389f18: 0x3c033e0e  lui         $v1, 0x3E0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389F48u;
            goto label_389f48;
        }
    }
    ctx->pc = 0x389F1Cu;
    // 0x389f1c: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x389f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_389f20:
    // 0x389f20: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x389f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x389f24: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x389f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x389f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x389f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x389f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389f34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x389f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x389f38: 0xc0767f0  jal         func_1D9FC0
    ctx->pc = 0x389F38u;
    SET_GPR_U32(ctx, 31, 0x389F40u);
    ctx->pc = 0x389F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389F38u;
            // 0x389f3c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F40u; }
        if (ctx->pc != 0x389F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F40u; }
        if (ctx->pc != 0x389F40u) { return; }
    }
    ctx->pc = 0x389F40u;
label_389f40:
    // 0x389f40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x389F40u;
    {
        const bool branch_taken_0x389f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389F40u;
            // 0x389f44: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f40) {
            ctx->pc = 0x389F94u;
            goto label_389f94;
        }
    }
    ctx->pc = 0x389F48u;
label_389f48:
    // 0x389f48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x389f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x389f4c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x389f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x389f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x389f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f58: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x389f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389f5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x389f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x389f60: 0xc0767f0  jal         func_1D9FC0
    ctx->pc = 0x389F60u;
    SET_GPR_U32(ctx, 31, 0x389F68u);
    ctx->pc = 0x389F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389F60u;
            // 0x389f64: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F68u; }
        if (ctx->pc != 0x389F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F68u; }
        if (ctx->pc != 0x389F68u) { return; }
    }
    ctx->pc = 0x389F68u;
label_389f68:
    // 0x389f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x389F68u;
    {
        const bool branch_taken_0x389f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389f68) {
            ctx->pc = 0x389F90u;
            goto label_389f90;
        }
    }
    ctx->pc = 0x389F70u;
label_389f70:
    // 0x389f70: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x389f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x389f74: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x389f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x389f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x389f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f80: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x389f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x389f84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x389f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x389f88: 0xc0767f0  jal         func_1D9FC0
    ctx->pc = 0x389F88u;
    SET_GPR_U32(ctx, 31, 0x389F90u);
    ctx->pc = 0x389F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389F88u;
            // 0x389f8c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F90u; }
        if (ctx->pc != 0x389F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389F90u; }
        if (ctx->pc != 0x389F90u) { return; }
    }
    ctx->pc = 0x389F90u;
label_389f90:
    // 0x389f90: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x389f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_389f94:
    // 0x389f94: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x389f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x389f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389f9c: 0xc6260de4  lwc1        $f6, 0xDE4($s1)
    ctx->pc = 0x389f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x389fa0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x389fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389fa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x389FA4u;
    {
        const bool branch_taken_0x389fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389FA4u;
            // 0x389fa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fa4) {
            ctx->pc = 0x389FB0u;
            goto label_389fb0;
        }
    }
    ctx->pc = 0x389FACu;
    // 0x389fac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389fb0:
    // 0x389fb0: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x389FB0u;
    {
        const bool branch_taken_0x389fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x389fb0) {
            ctx->pc = 0x389FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389FB0u;
            // 0x389fb4: 0x3c033e6d  lui         $v1, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389FDCu;
            goto label_389fdc;
        }
    }
    ctx->pc = 0x389FB8u;
    // 0x389fb8: 0x3c03bfb2  lui         $v1, 0xBFB2
    ctx->pc = 0x389fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49074 << 16));
    // 0x389fbc: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x389fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x389fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389fc4: 0x0  nop
    ctx->pc = 0x389fc4u;
    // NOP
    // 0x389fc8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389fcc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389FCCu;
    {
        const bool branch_taken_0x389fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389FCCu;
            // 0x389fd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fcc) {
            ctx->pc = 0x389FD8u;
            goto label_389fd8;
        }
    }
    ctx->pc = 0x389FD4u;
    // 0x389fd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389fd8:
    // 0x389fd8: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x389fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_389fdc:
    // 0x389fdc: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x389fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x389fe0: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x389fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x389fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389fe8: 0x0  nop
    ctx->pc = 0x389fe8u;
    // NOP
    // 0x389fec: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x389fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389ff0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x389FF0u;
    {
        const bool branch_taken_0x389ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389FF0u;
            // 0x389ff4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ff0) {
            ctx->pc = 0x389FFCu;
            goto label_389ffc;
        }
    }
    ctx->pc = 0x389FF8u;
    // 0x389ff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389ffc:
    // 0x389ffc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x389ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x38a000: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x38a000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x38a004: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A004u;
    {
        const bool branch_taken_0x38a004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a004) {
            ctx->pc = 0x38A008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A004u;
            // 0x38a008: 0x3c043fc9  lui         $a0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A01Cu;
            goto label_38a01c;
        }
    }
    ctx->pc = 0x38A00Cu;
    // 0x38a00c: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x38a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
    // 0x38a010: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x38a010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
    // 0x38a014: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x38A014u;
    {
        const bool branch_taken_0x38a014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A014u;
            // 0x38a018: 0xae230de4  sw          $v1, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a014) {
            ctx->pc = 0x38A0BCu;
            goto label_38a0bc;
        }
    }
    ctx->pc = 0x38A01Cu;
label_38a01c:
    // 0x38a01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a020: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x38a020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x38a024: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38a024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a028: 0x0  nop
    ctx->pc = 0x38a028u;
    // NOP
    // 0x38a02c: 0x4600a143  div.s       $f5, $f20, $f0
    ctx->pc = 0x38a02cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[5] = ctx->f[20] / ctx->f[0];
    // 0x38a030: 0x0  nop
    ctx->pc = 0x38a030u;
    // NOP
    // 0x38a034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38a034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a038: 0x0  nop
    ctx->pc = 0x38a038u;
    // NOP
    // 0x38a03c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x38a03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38a040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x38A040u;
    {
        const bool branch_taken_0x38a040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a040) {
            ctx->pc = 0x38A04Cu;
            goto label_38a04c;
        }
    }
    ctx->pc = 0x38A048u;
    // 0x38a048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38a048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a04c:
    // 0x38a04c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A04Cu;
    {
        const bool branch_taken_0x38a04c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x38a04c) {
            ctx->pc = 0x38A050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38A04Cu;
            // 0x38a050: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38A060u;
            goto label_38a060;
        }
    }
    ctx->pc = 0x38A054u;
    // 0x38a054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38A058u;
    {
        const bool branch_taken_0x38a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A058u;
            // 0x38a05c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a058) {
            ctx->pc = 0x38A078u;
            goto label_38a078;
        }
    }
    ctx->pc = 0x38A060u;
label_38a060:
    // 0x38a060: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x38a060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38a064: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38a064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38a068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38a068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a06c: 0x0  nop
    ctx->pc = 0x38a06cu;
    // NOP
    // 0x38a070: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x38a070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x38a074: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x38a074u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_38a078:
    // 0x38a078: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x38a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x38a07c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x38a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x38a080: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x38a080u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38a084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38a084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a088: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38a088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38a08c: 0x0  nop
    ctx->pc = 0x38a08cu;
    // NOP
    // 0x38a090: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x38a090u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38a094: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x38a094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x38a098: 0x4604189d  msub.s      $f2, $f3, $f4
    ctx->pc = 0x38a098u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x38a09c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x38a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x38a0a0: 0x46060818  adda.s      $f1, $f6
    ctx->pc = 0x38a0a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x38a0a4: 0xc6210dec  lwc1        $f1, 0xDEC($s1)
    ctx->pc = 0x38a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a0ac: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x38a0acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x38a0b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38a0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x38a0b4: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x38a0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x38a0b8: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x38a0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_38a0bc:
    // 0x38a0bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38a0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38a0c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x38a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x38a0c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38a0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38a0c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38a0cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38a0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a0d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a0d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38a0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38A0D8u;
            // 0x38a0dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38A0E0u;
}

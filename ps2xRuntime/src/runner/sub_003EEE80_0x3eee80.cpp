#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EEE80
// Address: 0x3eee80 - 0x3eefe0
void sub_003EEE80_0x3eee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEE80_0x3eee80");
#endif

    switch (ctx->pc) {
        case 0x3eeec0u: goto label_3eeec0;
        case 0x3eeeecu: goto label_3eeeec;
        case 0x3eef00u: goto label_3eef00;
        case 0x3eef14u: goto label_3eef14;
        default: break;
    }

    ctx->pc = 0x3eee80u;

    // 0x3eee80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3eee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3eee84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3eee88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3eee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3eee8c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3eee8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3eee90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eee90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eee94: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3eee94u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3eee98: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3eee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3eee9c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3eee9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3eeea0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3eeea0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3eeea4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3eeea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3eeea8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3eeea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3eeeac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eeeb0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3eeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3eeeb4: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x3eeeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3eeeb8: 0xc089688  jal         func_225A20
    ctx->pc = 0x3EEEB8u;
    SET_GPR_U32(ctx, 31, 0x3EEEC0u);
    ctx->pc = 0x3EEEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEEB8u;
            // 0x3eeebc: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEEC0u; }
        if (ctx->pc != 0x3EEEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEEC0u; }
        if (ctx->pc != 0x3EEEC0u) { return; }
    }
    ctx->pc = 0x3EEEC0u;
label_3eeec0:
    // 0x3eeec0: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3eeec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3eeec4: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x3eeec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3eeec8: 0xc7ae0090  lwc1        $f14, 0x90($sp)
    ctx->pc = 0x3eeec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3eeecc: 0xc7b70094  lwc1        $f23, 0x94($sp)
    ctx->pc = 0x3eeeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3eeed0: 0xc7b80084  lwc1        $f24, 0x84($sp)
    ctx->pc = 0x3eeed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3eeed4: 0xc7b90074  lwc1        $f25, 0x74($sp)
    ctx->pc = 0x3eeed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3eeed8: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x3eeed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3eeedc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3eeedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3eeee0: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x3eeee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3eeee4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3EEEE4u;
    SET_GPR_U32(ctx, 31, 0x3EEEECu);
    ctx->pc = 0x3EEEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEEE4u;
            // 0x3eeee8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEEECu; }
        if (ctx->pc != 0x3EEEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEEECu; }
        if (ctx->pc != 0x3EEEECu) { return; }
    }
    ctx->pc = 0x3EEEECu;
label_3eeeec:
    // 0x3eeeec: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3eeeecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3eeef0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3eeef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3eeef4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3eeef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3eeef8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3EEEF8u;
    SET_GPR_U32(ctx, 31, 0x3EEF00u);
    ctx->pc = 0x3EEEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEEF8u;
            // 0x3eeefc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEF00u; }
        if (ctx->pc != 0x3EEF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEF00u; }
        if (ctx->pc != 0x3EEF00u) { return; }
    }
    ctx->pc = 0x3EEF00u;
label_3eef00:
    // 0x3eef00: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3eef00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3eef04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3eef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3eef08: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3eef08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3eef0c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3EEF0Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF14u);
    ctx->pc = 0x3EEF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEF0Cu;
            // 0x3eef10: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEF14u; }
        if (ctx->pc != 0x3EEF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEF14u; }
        if (ctx->pc != 0x3EEF14u) { return; }
    }
    ctx->pc = 0x3EEF14u;
label_3eef14:
    // 0x3eef14: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3eef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eef18: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3eef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3eef1c: 0xc463a270  lwc1        $f3, -0x5D90($v1)
    ctx->pc = 0x3eef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3eef20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3eef20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3eef24: 0xc481a278  lwc1        $f1, -0x5D88($a0)
    ctx->pc = 0x3eef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294943352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eef28: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3eef28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3eef2c: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x3eef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3eef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3eef34: 0xc462a274  lwc1        $f2, -0x5D8C($v1)
    ctx->pc = 0x3eef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eef38: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x3eef38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3eef3c: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x3eef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef40: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3eef40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3eef44: 0xc460a27c  lwc1        $f0, -0x5D84($v1)
    ctx->pc = 0x3eef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eef48: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x3eef48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3eef4c: 0xc7a4006c  lwc1        $f4, 0x6C($sp)
    ctx->pc = 0x3eef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef50: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x3eef50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3eef54: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x3eef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef58: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x3eef58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3eef5c: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x3eef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef60: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x3eef60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3eef64: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x3eef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef68: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x3eef68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3eef6c: 0xc7a4005c  lwc1        $f4, 0x5C($sp)
    ctx->pc = 0x3eef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef70: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x3eef70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x3eef74: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x3eef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef78: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x3eef78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3eef7c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x3eef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef80: 0xe6040024  swc1        $f4, 0x24($s0)
    ctx->pc = 0x3eef80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3eef84: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x3eef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef88: 0xe6040028  swc1        $f4, 0x28($s0)
    ctx->pc = 0x3eef88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x3eef8c: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x3eef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eef90: 0xe604002c  swc1        $f4, 0x2C($s0)
    ctx->pc = 0x3eef90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x3eef94: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x3eef94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x3eef98: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x3eef98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3eef9c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x3eef9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3eefa0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3eefa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3eefa4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3eefa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3eefa8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3eefa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3eefac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3eefacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3eefb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eefb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eefb4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3eefb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3eefb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eefb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eefbc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3eefbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3eefc0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3eefc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3eefc4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3eefc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3eefc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3eefc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3eefcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3eefccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3eefd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEFD0u;
            // 0x3eefd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EEFD8u;
    // 0x3eefd8: 0x0  nop
    ctx->pc = 0x3eefd8u;
    // NOP
    // 0x3eefdc: 0x0  nop
    ctx->pc = 0x3eefdcu;
    // NOP
}

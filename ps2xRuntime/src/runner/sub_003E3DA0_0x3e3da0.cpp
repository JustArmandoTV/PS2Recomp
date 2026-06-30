#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3DA0
// Address: 0x3e3da0 - 0x3e3ee0
void sub_003E3DA0_0x3e3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3DA0_0x3e3da0");
#endif

    switch (ctx->pc) {
        case 0x3e3dbcu: goto label_3e3dbc;
        case 0x3e3dc8u: goto label_3e3dc8;
        case 0x3e3de0u: goto label_3e3de0;
        case 0x3e3decu: goto label_3e3dec;
        case 0x3e3dfcu: goto label_3e3dfc;
        case 0x3e3e08u: goto label_3e3e08;
        case 0x3e3ea8u: goto label_3e3ea8;
        case 0x3e3ebcu: goto label_3e3ebc;
        case 0x3e3ec8u: goto label_3e3ec8;
        default: break;
    }

    ctx->pc = 0x3e3da0u;

    // 0x3e3da0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e3da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3e3da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3da8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e3db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e3db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3db4: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x3E3DB4u;
    SET_GPR_U32(ctx, 31, 0x3E3DBCu);
    ctx->pc = 0x3E3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3DB4u;
            // 0x3e3db8: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DBCu; }
        if (ctx->pc != 0x3E3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DBCu; }
        if (ctx->pc != 0x3E3DBCu) { return; }
    }
    ctx->pc = 0x3E3DBCu;
label_3e3dbc:
    // 0x3e3dbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e3dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e3dc0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3E3DC0u;
    SET_GPR_U32(ctx, 31, 0x3E3DC8u);
    ctx->pc = 0x3E3DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3DC0u;
            // 0x3e3dc4: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DC8u; }
        if (ctx->pc != 0x3E3DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DC8u; }
        if (ctx->pc != 0x3E3DC8u) { return; }
    }
    ctx->pc = 0x3E3DC8u;
label_3e3dc8:
    // 0x3e3dc8: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x3e3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x3e3dcc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e3dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e3dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3dd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e3dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3dd8: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3E3DD8u;
    SET_GPR_U32(ctx, 31, 0x3E3DE0u);
    ctx->pc = 0x3E3DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3DD8u;
            // 0x3e3ddc: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DE0u; }
        if (ctx->pc != 0x3E3DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DE0u; }
        if (ctx->pc != 0x3E3DE0u) { return; }
    }
    ctx->pc = 0x3E3DE0u;
label_3e3de0:
    // 0x3e3de0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3e3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3e3de4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3E3DE4u;
    SET_GPR_U32(ctx, 31, 0x3E3DECu);
    ctx->pc = 0x3E3DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3DE4u;
            // 0x3e3de8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DECu; }
        if (ctx->pc != 0x3E3DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DECu; }
        if (ctx->pc != 0x3E3DECu) { return; }
    }
    ctx->pc = 0x3E3DECu;
label_3e3dec:
    // 0x3e3dec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e3df0: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x3e3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x3e3df4: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3E3DF4u;
    SET_GPR_U32(ctx, 31, 0x3E3DFCu);
    ctx->pc = 0x3E3DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3DF4u;
            // 0x3e3df8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DFCu; }
        if (ctx->pc != 0x3E3DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3DFCu; }
        if (ctx->pc != 0x3E3DFCu) { return; }
    }
    ctx->pc = 0x3E3DFCu;
label_3e3dfc:
    // 0x3e3dfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e3e00: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3E3E00u;
    SET_GPR_U32(ctx, 31, 0x3E3E08u);
    ctx->pc = 0x3E3E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3E00u;
            // 0x3e3e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3E08u; }
        if (ctx->pc != 0x3E3E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3E08u; }
        if (ctx->pc != 0x3E3E08u) { return; }
    }
    ctx->pc = 0x3E3E08u;
label_3e3e08:
    // 0x3e3e08: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x3e3e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3e0c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3e10: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3e3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3e14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e3e18: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3e3e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3e1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3e3e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e3e20: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x3e3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e24: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3e3e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3e3e28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3e3e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3e3e2c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3e3e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3e3e30: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x3e3e30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3e3e34: 0xc6040140  lwc1        $f4, 0x140($s0)
    ctx->pc = 0x3e3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e38: 0xc443a080  lwc1        $f3, -0x5F80($v0)
    ctx->pc = 0x3e3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e3e3c: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3e3e3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3e3e40: 0xc6040144  lwc1        $f4, 0x144($s0)
    ctx->pc = 0x3e3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e44: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3e48: 0xc442a084  lwc1        $f2, -0x5F7C($v0)
    ctx->pc = 0x3e3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3e4c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3e3e4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3e3e50: 0xc6040148  lwc1        $f4, 0x148($s0)
    ctx->pc = 0x3e3e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e54: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3e58: 0xc441a088  lwc1        $f1, -0x5F78($v0)
    ctx->pc = 0x3e3e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3e5c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x3e3e5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3e3e60: 0xc604014c  lwc1        $f4, 0x14C($s0)
    ctx->pc = 0x3e3e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3e68: 0xc440a08c  lwc1        $f0, -0x5F74($v0)
    ctx->pc = 0x3e3e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3e6c: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x3e3e6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3e3e70: 0xc6040150  lwc1        $f4, 0x150($s0)
    ctx->pc = 0x3e3e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e74: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x3e3e74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3e3e78: 0xc6040154  lwc1        $f4, 0x154($s0)
    ctx->pc = 0x3e3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e7c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3e3e7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3e3e80: 0xc6040158  lwc1        $f4, 0x158($s0)
    ctx->pc = 0x3e3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e3e84: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x3e3e84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3e3e88: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3e3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3e3e8c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x3e3e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3e3e90: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3e3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3e3e94: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3e3e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3e3e98: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3e3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x3e3e9c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3e3e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3e3ea0: 0xc04c994  jal         func_132650
    ctx->pc = 0x3E3EA0u;
    SET_GPR_U32(ctx, 31, 0x3E3EA8u);
    ctx->pc = 0x3E3EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3EA0u;
            // 0x3e3ea4: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EA8u; }
        if (ctx->pc != 0x3E3EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EA8u; }
        if (ctx->pc != 0x3E3EA8u) { return; }
    }
    ctx->pc = 0x3E3EA8u;
label_3e3ea8:
    // 0x3e3ea8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e3eac: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3e3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x3e3eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e3eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e3eb4: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3E3EB4u;
    SET_GPR_U32(ctx, 31, 0x3E3EBCu);
    ctx->pc = 0x3E3EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3EB4u;
            // 0x3e3eb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EBCu; }
        if (ctx->pc != 0x3E3EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EBCu; }
        if (ctx->pc != 0x3E3EBCu) { return; }
    }
    ctx->pc = 0x3E3EBCu;
label_3e3ebc:
    // 0x3e3ebc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3e3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3e3ec0: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3E3EC0u;
    SET_GPR_U32(ctx, 31, 0x3E3EC8u);
    ctx->pc = 0x3E3EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3EC0u;
            // 0x3e3ec4: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EC8u; }
        if (ctx->pc != 0x3E3EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3EC8u; }
        if (ctx->pc != 0x3E3EC8u) { return; }
    }
    ctx->pc = 0x3E3EC8u;
label_3e3ec8:
    // 0x3e3ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e3eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3ED0u;
            // 0x3e3ed4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3ED8u;
    // 0x3e3ed8: 0x0  nop
    ctx->pc = 0x3e3ed8u;
    // NOP
    // 0x3e3edc: 0x0  nop
    ctx->pc = 0x3e3edcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE800
// Address: 0x1ee800 - 0x1eec20
void sub_001EE800_0x1ee800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE800_0x1ee800");
#endif

    switch (ctx->pc) {
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee96cu: goto label_1ee96c;
        case 0x1ee9c8u: goto label_1ee9c8;
        case 0x1eea18u: goto label_1eea18;
        case 0x1eea60u: goto label_1eea60;
        case 0x1eeab0u: goto label_1eeab0;
        case 0x1eebc4u: goto label_1eebc4;
        case 0x1eebecu: goto label_1eebec;
        default: break;
    }

    ctx->pc = 0x1ee800u;

    // 0x1ee800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee804: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ee804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee80c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee810: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1ee810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1ee814: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1ee818: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee81c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee820: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ee820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee824: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1ee824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ee828: 0xc07d778  jal         func_1F5DE0
    ctx->pc = 0x1EE828u;
    SET_GPR_U32(ctx, 31, 0x1EE830u);
    ctx->pc = 0x1EE82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE828u;
            // 0x1ee82c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DE0u;
    if (runtime->hasFunction(0x1F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE830u; }
        if (ctx->pc != 0x1EE830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5DE0_0x1f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE830u; }
        if (ctx->pc != 0x1EE830u) { return; }
    }
    ctx->pc = 0x1EE830u;
label_1ee830:
    // 0x1ee830: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee834: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1ee834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1ee838: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ee838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1ee83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee840: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE840u;
            // 0x1ee844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE848u;
    // 0x1ee848: 0x0  nop
    ctx->pc = 0x1ee848u;
    // NOP
    // 0x1ee84c: 0x0  nop
    ctx->pc = 0x1ee84cu;
    // NOP
    // 0x1ee850: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ee850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ee854: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ee854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ee858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee85c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ee85cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee860: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ee860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ee864: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ee864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ee868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee86c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1ee86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1ee870: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1ee870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1ee874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee878: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1ee878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee87c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1ee87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ee880: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ee884: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1ee884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1ee888: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1ee888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ee88c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1ee88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x1ee890: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1ee890u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1ee894: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1ee894u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee898: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1ee898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1ee89c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1ee89cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ee8a0: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1ee8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1ee8a4: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1ee8a4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x1ee8a8: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1ee8a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ee8ac: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1ee8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ee8b0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1ee8b0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x1ee8b4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1ee8b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ee8b8: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1ee8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ee8bc: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1ee8bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1ee8c0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1ee8c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ee8c4: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1ee8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ee8c8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1ee8c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1ee8cc: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1ee8ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ee8d0: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1ee8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ee8d4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1ee8d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ee8d8: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1ee8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1ee8dc: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1ee8e0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1ee8e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ee8e4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1ee8e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ee8e8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1ee8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1ee8ec: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ee8ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ee8f0: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1ee8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1ee8f4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1ee8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ee8f8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ee8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ee8fc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1ee8fcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ee900: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1ee900u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ee904: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1ee904u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ee908: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE908u;
    {
        const bool branch_taken_0x1ee908 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE908u;
            // 0x1ee90c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee908) {
            ctx->pc = 0x1EE954u;
            goto label_1ee954;
        }
    }
    ctx->pc = 0x1EE910u;
    // 0x1ee910: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee914: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1ee914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1ee918: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ee918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ee91c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee920: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ee920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee924: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ee928: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1ee928u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ee92c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ee930: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1ee930u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ee934: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ee938: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1ee938u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ee93c: 0xc07b40c  jal         func_1ED030
    ctx->pc = 0x1EE93Cu;
    SET_GPR_U32(ctx, 31, 0x1EE944u);
    ctx->pc = 0x1EE940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE93Cu;
            // 0x1ee940: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED030u;
    if (runtime->hasFunction(0x1ED030u)) {
        auto targetFn = runtime->lookupFunction(0x1ED030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE944u; }
        if (ctx->pc != 0x1EE944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED030_0x1ed030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE944u; }
        if (ctx->pc != 0x1EE944u) { return; }
    }
    ctx->pc = 0x1EE944u;
label_1ee944:
    // 0x1ee944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee948: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee94c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE94Cu;
    {
        const bool branch_taken_0x1ee94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE94Cu;
            // 0x1ee950: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee94c) {
            ctx->pc = 0x1EE96Cu;
            goto label_1ee96c;
        }
    }
    ctx->pc = 0x1EE954u;
label_1ee954:
    // 0x1ee954: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee958: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ee95c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ee95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee960: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1ee960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ee964: 0xc07b40c  jal         func_1ED030
    ctx->pc = 0x1EE964u;
    SET_GPR_U32(ctx, 31, 0x1EE96Cu);
    ctx->pc = 0x1EE968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE964u;
            // 0x1ee968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED030u;
    if (runtime->hasFunction(0x1ED030u)) {
        auto targetFn = runtime->lookupFunction(0x1ED030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE96Cu; }
        if (ctx->pc != 0x1EE96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED030_0x1ed030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE96Cu; }
        if (ctx->pc != 0x1EE96Cu) { return; }
    }
    ctx->pc = 0x1EE96Cu;
label_1ee96c:
    // 0x1ee96c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee970: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee974: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1ee974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1ee978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE97Cu;
            // 0x1ee980: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE984u;
    // 0x1ee984: 0x0  nop
    ctx->pc = 0x1ee984u;
    // NOP
    // 0x1ee988: 0x0  nop
    ctx->pc = 0x1ee988u;
    // NOP
    // 0x1ee98c: 0x0  nop
    ctx->pc = 0x1ee98cu;
    // NOP
    // 0x1ee990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee994: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ee998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee99c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ee99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ee9a0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1ee9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1ee9a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee9a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ee9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9ac: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1ee9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1ee9b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9b4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1ee9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1ee9b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ee9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee9c0: 0xc07b2c4  jal         func_1ECB10
    ctx->pc = 0x1EE9C0u;
    SET_GPR_U32(ctx, 31, 0x1EE9C8u);
    ctx->pc = 0x1EE9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9C0u;
            // 0x1ee9c4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB10u;
    if (runtime->hasFunction(0x1ECB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ECB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9C8u; }
        if (ctx->pc != 0x1EE9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECB10_0x1ecb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9C8u; }
        if (ctx->pc != 0x1EE9C8u) { return; }
    }
    ctx->pc = 0x1EE9C8u;
label_1ee9c8:
    // 0x1ee9c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee9cc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee9d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ee9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1ee9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9D8u;
            // 0x1ee9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE9E0u;
    // 0x1ee9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee9e4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ee9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee9ec: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ee9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ee9f0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1ee9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1ee9f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee9f8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ee9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9fc: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1eea00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eea00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea04: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1eea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1eea08: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1eea08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea0c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1eea10: 0xc07b394  jal         func_1ECE50
    ctx->pc = 0x1EEA10u;
    SET_GPR_U32(ctx, 31, 0x1EEA18u);
    ctx->pc = 0x1EEA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA10u;
            // 0x1eea14: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE50u;
    if (runtime->hasFunction(0x1ECE50u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA18u; }
        if (ctx->pc != 0x1EEA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE50_0x1ece50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA18u; }
        if (ctx->pc != 0x1EEA18u) { return; }
    }
    ctx->pc = 0x1EEA18u;
label_1eea18:
    // 0x1eea18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eea1c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1eea20: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1eea24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eea24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA28u;
            // 0x1eea2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEA30u;
    // 0x1eea30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eea34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1eea34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eea3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eea40: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1eea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1eea44: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1eea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1eea48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1eea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1eea50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1eea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea54: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1eea54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eea58: 0xc07b3a0  jal         func_1ECE80
    ctx->pc = 0x1EEA58u;
    SET_GPR_U32(ctx, 31, 0x1EEA60u);
    ctx->pc = 0x1EEA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA58u;
            // 0x1eea5c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE80u;
    if (runtime->hasFunction(0x1ECE80u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA60u; }
        if (ctx->pc != 0x1EEA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE80_0x1ece80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA60u; }
        if (ctx->pc != 0x1EEA60u) { return; }
    }
    ctx->pc = 0x1EEA60u;
label_1eea60:
    // 0x1eea60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eea60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eea64: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1eea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1eea68: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1eea6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eea6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA70u;
            // 0x1eea74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEA78u;
    // 0x1eea78: 0x0  nop
    ctx->pc = 0x1eea78u;
    // NOP
    // 0x1eea7c: 0x0  nop
    ctx->pc = 0x1eea7cu;
    // NOP
    // 0x1eea80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eea84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1eea84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eea8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eea90: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1eea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1eea94: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1eea98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea9c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1eeaa0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1eeaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeaa4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1eeaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eeaa8: 0xc07b400  jal         func_1ED000
    ctx->pc = 0x1EEAA8u;
    SET_GPR_U32(ctx, 31, 0x1EEAB0u);
    ctx->pc = 0x1EEAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAA8u;
            // 0x1eeaac: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED000u;
    if (runtime->hasFunction(0x1ED000u)) {
        auto targetFn = runtime->lookupFunction(0x1ED000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAB0u; }
        if (ctx->pc != 0x1EEAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED000_0x1ed000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAB0u; }
        if (ctx->pc != 0x1EEAB0u) { return; }
    }
    ctx->pc = 0x1EEAB0u;
label_1eeab0:
    // 0x1eeab0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eeab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eeab4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1eeab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1eeab8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1eeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1eeabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eeabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eeac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAC0u;
            // 0x1eeac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEAC8u;
    // 0x1eeac8: 0x0  nop
    ctx->pc = 0x1eeac8u;
    // NOP
    // 0x1eeacc: 0x0  nop
    ctx->pc = 0x1eeaccu;
    // NOP
    // 0x1eead0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1eead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1eead4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1eead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1eead8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eeadc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1eeadcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeae0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eeae4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1eeae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1eeae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eeaec: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1eeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1eeaf0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1eeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1eeaf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eeaf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeaf8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1eeaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeafc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1eeafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1eeb00: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1eeb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1eeb04: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1eeb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x1eeb08: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1eeb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1eeb0c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1eeb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x1eeb10: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1eeb10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1eeb14: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1eeb14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eeb18: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1eeb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1eeb1c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1eeb1cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1eeb20: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1eeb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1eeb24: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1eeb24u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x1eeb28: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1eeb28u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1eeb2c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1eeb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1eeb30: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1eeb30u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x1eeb34: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1eeb34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1eeb38: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1eeb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1eeb3c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1eeb3cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1eeb40: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1eeb40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1eeb44: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1eeb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1eeb48: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1eeb48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1eeb4c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1eeb4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1eeb50: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1eeb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1eeb54: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1eeb54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1eeb58: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1eeb5c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1eeb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x1eeb60: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1eeb60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1eeb64: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1eeb64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1eeb68: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1eeb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1eeb6c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1eeb6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1eeb70: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1eeb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x1eeb74: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1eeb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1eeb78: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1eeb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1eeb7c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1eeb7cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1eeb80: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1eeb80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1eeb84: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1eeb84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1eeb88: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEB88u;
    {
        const bool branch_taken_0x1eeb88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB88u;
            // 0x1eeb8c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb88) {
            ctx->pc = 0x1EEBD4u;
            goto label_1eebd4;
        }
    }
    ctx->pc = 0x1EEB90u;
    // 0x1eeb90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eeb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb94: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1eeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x1eeb98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1eeb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1eeb9c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1eeb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1eeba0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1eeba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeba4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1eeba8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1eeba8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1eebac: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eebb0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1eebb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1eebb4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eebb8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1eebb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1eebbc: 0xc07b474  jal         func_1ED1D0
    ctx->pc = 0x1EEBBCu;
    SET_GPR_U32(ctx, 31, 0x1EEBC4u);
    ctx->pc = 0x1EEBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBBCu;
            // 0x1eebc0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED1D0u;
    if (runtime->hasFunction(0x1ED1D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBC4u; }
        if (ctx->pc != 0x1EEBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED1D0_0x1ed1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBC4u; }
        if (ctx->pc != 0x1EEBC4u) { return; }
    }
    ctx->pc = 0x1EEBC4u;
label_1eebc4:
    // 0x1eebc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eebc8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1eebcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEBCCu;
    {
        const bool branch_taken_0x1eebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBCCu;
            // 0x1eebd0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebcc) {
            ctx->pc = 0x1EEBECu;
            goto label_1eebec;
        }
    }
    ctx->pc = 0x1EEBD4u;
label_1eebd4:
    // 0x1eebd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1eebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebd8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1eebd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1eebdc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1eebdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebe0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1eebe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eebe4: 0xc07b474  jal         func_1ED1D0
    ctx->pc = 0x1EEBE4u;
    SET_GPR_U32(ctx, 31, 0x1EEBECu);
    ctx->pc = 0x1EEBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBE4u;
            // 0x1eebe8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED1D0u;
    if (runtime->hasFunction(0x1ED1D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBECu; }
        if (ctx->pc != 0x1EEBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED1D0_0x1ed1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBECu; }
        if (ctx->pc != 0x1EEBECu) { return; }
    }
    ctx->pc = 0x1EEBECu;
label_1eebec:
    // 0x1eebec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eebf0: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1eebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1eebf4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1eebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1eebf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eebf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBFCu;
            // 0x1eec00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEC04u;
    // 0x1eec04: 0x0  nop
    ctx->pc = 0x1eec04u;
    // NOP
    // 0x1eec08: 0x0  nop
    ctx->pc = 0x1eec08u;
    // NOP
    // 0x1eec0c: 0x0  nop
    ctx->pc = 0x1eec0cu;
    // NOP
    // 0x1eec10: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEC18u;
    // 0x1eec18: 0x0  nop
    ctx->pc = 0x1eec18u;
    // NOP
    // 0x1eec1c: 0x0  nop
    ctx->pc = 0x1eec1cu;
    // NOP
}

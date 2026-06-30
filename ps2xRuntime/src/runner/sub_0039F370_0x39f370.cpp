#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039F370
// Address: 0x39f370 - 0x39f490
void sub_0039F370_0x39f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F370_0x39f370");
#endif

    switch (ctx->pc) {
        case 0x39f3ecu: goto label_39f3ec;
        case 0x39f444u: goto label_39f444;
        default: break;
    }

    ctx->pc = 0x39f370u;

    // 0x39f370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39f374: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x39f374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x39f378: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x39f37c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x39f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x39f380: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x39f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x39f384: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39f384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f388: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x39f38c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39f38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x39f394: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39f394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f398: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39f398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39f39c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x39f39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3a0: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x39f3a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x39f3a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39f3a8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x39f3a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x39f3ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x39f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3b0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x39f3b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x39f3b4: 0x3445f76f  ori         $a1, $v0, 0xF76F
    ctx->pc = 0x39f3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63343);
    // 0x39f3b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x39f3b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x39f3bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x39f3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x39f3c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x39f3c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x39f3c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x39f3c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39f3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x39f3cc: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x39f3ccu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x39f3d0: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x39f3d0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x39f3d4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x39f3d4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x39f3d8: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x39f3d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x39f3dc: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x39f3dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x39f3e0: 0x46008d46  mov.s       $f21, $f17
    ctx->pc = 0x39f3e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[17]);
    // 0x39f3e4: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x39F3E4u;
    SET_GPR_U32(ctx, 31, 0x39F3ECu);
    ctx->pc = 0x39F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F3E4u;
            // 0x39f3e8: 0x46009506  mov.s       $f20, $f18 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F3ECu; }
        if (ctx->pc != 0x39F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F3ECu; }
        if (ctx->pc != 0x39F3ECu) { return; }
    }
    ctx->pc = 0x39F3ECu;
label_39f3ec:
    // 0x39f3ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x39f3f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x39f3f4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x39f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x39f3f8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x39f3fc: 0x24428600  addiu       $v0, $v0, -0x7A00
    ctx->pc = 0x39f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936064));
    // 0x39f400: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x39f400u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x39f404: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x39f404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x39f408: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x39f408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x39f40c: 0xae930054  sw          $s3, 0x54($s4)
    ctx->pc = 0x39f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 19));
    // 0x39f410: 0x24a57360  addiu       $a1, $a1, 0x7360
    ctx->pc = 0x39f410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29536));
    // 0x39f414: 0xae920058  sw          $s2, 0x58($s4)
    ctx->pc = 0x39f414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 18));
    // 0x39f418: 0xae91005c  sw          $s1, 0x5C($s4)
    ctx->pc = 0x39f418u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 17));
    // 0x39f41c: 0xae900060  sw          $s0, 0x60($s4)
    ctx->pc = 0x39f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 16));
    // 0x39f420: 0xe6970070  swc1        $f23, 0x70($s4)
    ctx->pc = 0x39f420u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x39f424: 0xae800074  sw          $zero, 0x74($s4)
    ctx->pc = 0x39f424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 0));
    // 0x39f428: 0xe6960078  swc1        $f22, 0x78($s4)
    ctx->pc = 0x39f428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    // 0x39f42c: 0xe695007c  swc1        $f21, 0x7C($s4)
    ctx->pc = 0x39f42cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x39f430: 0xe6940080  swc1        $f20, 0x80($s4)
    ctx->pc = 0x39f430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    // 0x39f434: 0xe69a0064  swc1        $f26, 0x64($s4)
    ctx->pc = 0x39f434u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 100), bits); }
    // 0x39f438: 0xe6990068  swc1        $f25, 0x68($s4)
    ctx->pc = 0x39f438u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
    // 0x39f43c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x39F43Cu;
    SET_GPR_U32(ctx, 31, 0x39F444u);
    ctx->pc = 0x39F440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F43Cu;
            // 0x39f440: 0xe698006c  swc1        $f24, 0x6C($s4) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F444u; }
        if (ctx->pc != 0x39F444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F444u; }
        if (ctx->pc != 0x39F444u) { return; }
    }
    ctx->pc = 0x39F444u;
label_39f444:
    // 0x39f444: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39f444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f448: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39f448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39f44c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x39f44cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39f450: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x39f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x39f454: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x39f454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39f458: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x39f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x39f45c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39f45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39f460: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x39f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x39f464: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39f464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f468: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x39f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x39f46c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39f46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f470: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x39f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x39f474: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x39f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x39f478: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39f47c: 0x3e00008  jr          $ra
    ctx->pc = 0x39F47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F47Cu;
            // 0x39f480: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F484u;
    // 0x39f484: 0x0  nop
    ctx->pc = 0x39f484u;
    // NOP
    // 0x39f488: 0x0  nop
    ctx->pc = 0x39f488u;
    // NOP
    // 0x39f48c: 0x0  nop
    ctx->pc = 0x39f48cu;
    // NOP
}

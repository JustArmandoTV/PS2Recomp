#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D450
// Address: 0x28d450 - 0x28d5c0
void sub_0028D450_0x28d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D450_0x28d450");
#endif

    switch (ctx->pc) {
        case 0x28d484u: goto label_28d484;
        case 0x28d490u: goto label_28d490;
        case 0x28d4a0u: goto label_28d4a0;
        case 0x28d4b0u: goto label_28d4b0;
        default: break;
    }

    ctx->pc = 0x28d450u;

    // 0x28d450: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28d454: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28d458: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28d45c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d460: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28d460u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d468: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28d468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d474: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d47c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28d47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28d484:
    // 0x28d484: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d488: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x28d488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d48c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x28d48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d490:
    // 0x28d490: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28d494: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d498: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x28D498u;
    SET_GPR_U32(ctx, 31, 0x28D4A0u);
    ctx->pc = 0x28D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D498u;
            // 0x28d49c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4A0u; }
        if (ctx->pc != 0x28D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4A0u; }
        if (ctx->pc != 0x28D4A0u) { return; }
    }
    ctx->pc = 0x28D4A0u;
label_28d4a0:
    // 0x28d4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4a4: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x28d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x28d4a8: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x28D4A8u;
    SET_GPR_U32(ctx, 31, 0x28D4B0u);
    ctx->pc = 0x28D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4A8u;
            // 0x28d4ac: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4B0u; }
        if (ctx->pc != 0x28D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4B0u; }
        if (ctx->pc != 0x28D4B0u) { return; }
    }
    ctx->pc = 0x28D4B0u;
label_28d4b0:
    // 0x28d4b0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d4b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d4b8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x28d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d4bc: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x28d4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28d4c0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28d4c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d4c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d4c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28d4cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x28d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d4d0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x28d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d4d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d4d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x28d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28d4dc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x28d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d4e0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x28d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d4e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d4e8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28d4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28d4ec: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x28d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d4f0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x28d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d4f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d4f8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28d4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28d4fc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x28d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d500: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x28d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d504: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d508: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x28d508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x28d50c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x28d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d510: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x28d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d518: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x28d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x28d51c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x28d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d520: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x28d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d524: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d528: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x28d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x28d52c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x28d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d530: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x28d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d538: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x28d538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x28d53c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x28d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d540: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x28d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d544: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d548: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x28d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x28d54c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x28d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d550: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x28d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d554: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d558: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x28d558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x28d55c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x28d55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d560: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x28d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d568: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x28d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x28d56c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x28d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d570: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x28d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d574: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d578: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x28d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x28d57c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x28D57Cu;
    {
        const bool branch_taken_0x28d57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D57Cu;
            // 0x28d580: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d57c) {
            ctx->pc = 0x28D490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d490;
        }
    }
    ctx->pc = 0x28D584u;
    // 0x28d584: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d588: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x28d588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x28d58c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x28d58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28d590: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x28D590u;
    {
        const bool branch_taken_0x28d590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D590u;
            // 0x28d594: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d590) {
            ctx->pc = 0x28D484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d484;
        }
    }
    ctx->pc = 0x28D598u;
    // 0x28d598: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28d598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28d59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5B8u;
            // 0x28d5bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D5C0u;
}

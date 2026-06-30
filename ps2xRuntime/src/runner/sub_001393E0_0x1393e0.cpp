#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001393E0
// Address: 0x1393e0 - 0x139540
void sub_001393E0_0x1393e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001393E0_0x1393e0");
#endif

    switch (ctx->pc) {
        case 0x139420u: goto label_139420;
        case 0x139450u: goto label_139450;
        case 0x139484u: goto label_139484;
        case 0x139490u: goto label_139490;
        case 0x13949cu: goto label_13949c;
        case 0x1394a8u: goto label_1394a8;
        case 0x139528u: goto label_139528;
        default: break;
    }

    ctx->pc = 0x1393e0u;

    // 0x1393e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1393e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1393e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1393e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1393ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1393ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1393f0: 0x8f828110  lw          $v0, -0x7EF0($gp)
    ctx->pc = 0x1393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x1393f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1393f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1393fc: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1393fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139400: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x139400u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x139404: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x139404u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x139408: 0x7ca00030  sq          $zero, 0x30($a1)
    ctx->pc = 0x139408u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 0));
    // 0x13940c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x13940cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x139410: 0x7ca90010  sq          $t1, 0x10($a1)
    ctx->pc = 0x139410u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 9));
    // 0x139414: 0x7caa0020  sq          $t2, 0x20($a1)
    ctx->pc = 0x139414u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 10));
    // 0x139418: 0xc04cd60  jal         func_133580
    ctx->pc = 0x139418u;
    SET_GPR_U32(ctx, 31, 0x139420u);
    ctx->pc = 0x13941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139418u;
            // 0x13941c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139420u; }
        if (ctx->pc != 0x139420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139420u; }
        if (ctx->pc != 0x139420u) { return; }
    }
    ctx->pc = 0x139420u;
label_139420:
    // 0x139420: 0x8f828110  lw          $v0, -0x7EF0($gp)
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x139424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139428: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x139428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13942c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x13942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139430: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x139430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x139434: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x139434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139438: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x139438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x13943c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x13943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139440: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x139440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x139444: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x139444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139448: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x139448u;
    SET_GPR_U32(ctx, 31, 0x139450u);
    ctx->pc = 0x13944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139448u;
            // 0x13944c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139450u; }
        if (ctx->pc != 0x139450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139450u; }
        if (ctx->pc != 0x139450u) { return; }
    }
    ctx->pc = 0x139450u;
label_139450:
    // 0x139450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139458: 0x3e00008  jr          $ra
    ctx->pc = 0x139458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139458u;
            // 0x13945c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139460u;
    // 0x139460: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x139464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13946c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139478: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x13947c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x13947Cu;
    SET_GPR_U32(ctx, 31, 0x139484u);
    ctx->pc = 0x139480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13947Cu;
            // 0x139480: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139484u; }
        if (ctx->pc != 0x139484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139484u; }
        if (ctx->pc != 0x139484u) { return; }
    }
    ctx->pc = 0x139484u;
label_139484:
    // 0x139484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139488: 0xc057268  jal         func_15C9A0
    ctx->pc = 0x139488u;
    SET_GPR_U32(ctx, 31, 0x139490u);
    ctx->pc = 0x13948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139488u;
            // 0x13948c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C9A0u;
    if (runtime->hasFunction(0x15C9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139490u; }
        if (ctx->pc != 0x139490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C9A0_0x15c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139490u; }
        if (ctx->pc != 0x139490u) { return; }
    }
    ctx->pc = 0x139490u;
label_139490:
    // 0x139490: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x139490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x139494: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x139494u;
    SET_GPR_U32(ctx, 31, 0x13949Cu);
    ctx->pc = 0x139498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139494u;
            // 0x139498: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    }
    ctx->pc = 0x13949Cu;
label_13949c:
    // 0x13949c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1394a0: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x1394A0u;
    SET_GPR_U32(ctx, 31, 0x1394A8u);
    ctx->pc = 0x1394A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1394A0u;
            // 0x1394a4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394A8u; }
        if (ctx->pc != 0x1394A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1394A8u; }
        if (ctx->pc != 0x1394A8u) { return; }
    }
    ctx->pc = 0x1394A8u;
label_1394a8:
    // 0x1394a8: 0x8f828110  lw          $v0, -0x7EF0($gp)
    ctx->pc = 0x1394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x1394ac: 0xc7a80070  lwc1        $f8, 0x70($sp)
    ctx->pc = 0x1394acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1394b0: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x1394b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1394b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1394b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394b8: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1394b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1394bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1394bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1394c0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1394c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1394c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1394c8: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x1394c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1394cc: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x1394ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1394d0: 0x4607101c  madd.s      $f0, $f2, $f7
    ctx->pc = 0x1394d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1394d4: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1394d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1394d8: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x1394d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1394dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1394dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1394e0: 0x4606081a  mula.s      $f1, $f6
    ctx->pc = 0x1394e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1394e4: 0x4605101c  madd.s      $f0, $f2, $f5
    ctx->pc = 0x1394e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1394e8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1394e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1394ec: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1394ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1394f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1394f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1394f4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1394f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1394f8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1394f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394fc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1394fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139500: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x139500u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x139504: 0x4607101c  madd.s      $f0, $f2, $f7
    ctx->pc = 0x139504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x139508: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x139508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x13950c: 0x4606081a  mula.s      $f1, $f6
    ctx->pc = 0x13950cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x139510: 0x4605101c  madd.s      $f0, $f2, $f5
    ctx->pc = 0x139510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x139514: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x139514u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x139518: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x139518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13951c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13951cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x139520: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x139520u;
    SET_GPR_U32(ctx, 31, 0x139528u);
    ctx->pc = 0x139524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139520u;
            // 0x139524: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139528u; }
        if (ctx->pc != 0x139528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139528u; }
        if (ctx->pc != 0x139528u) { return; }
    }
    ctx->pc = 0x139528u;
label_139528:
    // 0x139528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13952c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13952cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139534: 0x3e00008  jr          $ra
    ctx->pc = 0x139534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139534u;
            // 0x139538: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13953Cu;
    // 0x13953c: 0x0  nop
    ctx->pc = 0x13953cu;
    // NOP
}

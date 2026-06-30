#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266520
// Address: 0x266520 - 0x2666c0
void sub_00266520_0x266520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266520_0x266520");
#endif

    switch (ctx->pc) {
        case 0x266588u: goto label_266588;
        case 0x266598u: goto label_266598;
        default: break;
    }

    ctx->pc = 0x266520u;

    // 0x266520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x266520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x266524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x266524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x266528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26652c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266530: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x266530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266534: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266538: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x266538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26653c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266540: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x266540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266548: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x266548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26654c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266550: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x266550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266554: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x266554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266558: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266558u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26655c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x26655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x266560: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x266560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266564: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266564u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x266568: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x266568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x26656c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266570: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266570u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x266574: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x266574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x266578: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x266578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26657c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26657cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x266580: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x266580u;
    SET_GPR_U32(ctx, 31, 0x266588u);
    ctx->pc = 0x266584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266580u;
            // 0x266584: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266588u; }
        if (ctx->pc != 0x266588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266588u; }
        if (ctx->pc != 0x266588u) { return; }
    }
    ctx->pc = 0x266588u;
label_266588:
    // 0x266588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x266588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26658c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x266590: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x266590u;
    SET_GPR_U32(ctx, 31, 0x266598u);
    ctx->pc = 0x266594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266590u;
            // 0x266594: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266598u; }
        if (ctx->pc != 0x266598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266598u; }
        if (ctx->pc != 0x266598u) { return; }
    }
    ctx->pc = 0x266598u;
label_266598:
    // 0x266598: 0xc64e0004  lwc1        $f14, 0x4($s2)
    ctx->pc = 0x266598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26659c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x26659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2665a0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2665a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2665a4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2665a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2665a8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2665a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2665ac: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2665acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2665b0: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x2665b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2665b4: 0xc7a90060  lwc1        $f9, 0x60($sp)
    ctx->pc = 0x2665b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2665b8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2665b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2665bc: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x2665bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x2665c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2665c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2665c4: 0x460e0841  sub.s       $f1, $f1, $f14
    ctx->pc = 0x2665c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x2665c8: 0x46000a82  mul.s       $f10, $f1, $f0
    ctx->pc = 0x2665c8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2665cc: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x2665ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2665d0: 0x460d48c1  sub.s       $f3, $f9, $f13
    ctx->pc = 0x2665d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
    // 0x2665d4: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x2665d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2665d8: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2665d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2665dc: 0x460a1818  adda.s      $f3, $f10
    ctx->pc = 0x2665dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2665e0: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2665e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2665e4: 0x460d28c1  sub.s       $f3, $f5, $f13
    ctx->pc = 0x2665e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x2665e8: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2665e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2665ec: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2665ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2665f0: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2665f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2665f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2665f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2665f8: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x2665f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2665fc: 0x460c3901  sub.s       $f4, $f7, $f12
    ctx->pc = 0x2665fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x266600: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x266600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266604: 0x4606211c  madd.s      $f4, $f4, $f6
    ctx->pc = 0x266604u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x266608: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x266608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x26660c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x26660cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x266610: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x266610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x266614: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x266614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266618: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x266618u;
    {
        const bool branch_taken_0x266618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266618u;
            // 0x26661c: 0xc7ab0060  lwc1        $f11, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266618) {
            ctx->pc = 0x266690u;
            goto label_266690;
        }
    }
    ctx->pc = 0x266620u;
    // 0x266620: 0xe62b0000  swc1        $f11, 0x0($s1)
    ctx->pc = 0x266620u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x266624: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x266624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x266628: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x266628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26662c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x26662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x266630: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x266630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266634: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x266634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x266638: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x266638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26663c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x26663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x266640: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x266640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266644: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x266644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x266648: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x266648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26664c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x26664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x266650: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x266650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266654: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x266654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x266658: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x266658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26665c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x26665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x266660: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x266660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266664: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x266664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x266668: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x266668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26666c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x26666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x266670: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x266670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266674: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x266674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x266678: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x266678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26667c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x26667cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x266680: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x266680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266684: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x266684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x266688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266688u;
    {
        const bool branch_taken_0x266688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266688u;
            // 0x26668c: 0xe6040000  swc1        $f4, 0x0($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266688) {
            ctx->pc = 0x266698u;
            goto label_266698;
        }
    }
    ctx->pc = 0x266690u;
label_266690:
    // 0x266690: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x266690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x266694: 0x0  nop
    ctx->pc = 0x266694u;
    // NOP
label_266698:
    // 0x266698: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x266698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26669c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26669cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2666a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2666a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2666a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2666a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2666a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2666a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2666ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2666acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2666b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2666B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2666B0u;
            // 0x2666b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2666B8u;
    // 0x2666b8: 0x0  nop
    ctx->pc = 0x2666b8u;
    // NOP
    // 0x2666bc: 0x0  nop
    ctx->pc = 0x2666bcu;
    // NOP
}

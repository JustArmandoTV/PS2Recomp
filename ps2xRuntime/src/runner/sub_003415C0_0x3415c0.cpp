#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003415C0
// Address: 0x3415c0 - 0x341760
void sub_003415C0_0x3415c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003415C0_0x3415c0");
#endif

    switch (ctx->pc) {
        case 0x34166cu: goto label_34166c;
        case 0x3416f0u: goto label_3416f0;
        case 0x341700u: goto label_341700;
        case 0x341730u: goto label_341730;
        default: break;
    }

    ctx->pc = 0x3415c0u;

    // 0x3415c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3415c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3415c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3415c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3415c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3415cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3415ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3415d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3415d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3415d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3415d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3415d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3415d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3415dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3415dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3415e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3415e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3415e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3415e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3415e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3415ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3415ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3415f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3415f4: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x3415f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x3415f8: 0x8c4a0e80  lw          $t2, 0xE80($v0)
    ctx->pc = 0x3415f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3415fc: 0x26310210  addiu       $s1, $s1, 0x210
    ctx->pc = 0x3415fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x341600: 0x8c700eac  lw          $s0, 0xEAC($v1)
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
    // 0x341604: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x341608: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x34160c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34160cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x341610: 0xc4610824  lwc1        $f1, 0x824($v1)
    ctx->pc = 0x341610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341614: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x341614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x341618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x341618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34161c: 0xc4400820  lwc1        $f0, 0x820($v0)
    ctx->pc = 0x34161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341620: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x341620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x341624: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x341624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x341628: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x34162c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x34162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x341630: 0xc4400828  lwc1        $f0, 0x828($v0)
    ctx->pc = 0x341630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341634: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x341634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x341638: 0x8d460968  lw          $a2, 0x968($t2)
    ctx->pc = 0x341638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 2408)));
    // 0x34163c: 0x8d420cc4  lw          $v0, 0xCC4($t2)
    ctx->pc = 0x34163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3268)));
    // 0x341640: 0x8e540010  lw          $s4, 0x10($s2)
    ctx->pc = 0x341640u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x341644: 0x24cbffff  addiu       $t3, $a2, -0x1
    ctx->pc = 0x341644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x341648: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x341648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x34164c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x341650: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x341650u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x341654: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x341654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x341658: 0x24c30071  addiu       $v1, $a2, 0x71
    ctx->pc = 0x341658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 113));
    // 0x34165c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34165cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341660: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x341660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341664: 0xc0ee398  jal         func_3B8E60
    ctx->pc = 0x341664u;
    SET_GPR_U32(ctx, 31, 0x34166Cu);
    ctx->pc = 0x341668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341664u;
            // 0x341668: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34166Cu; }
        if (ctx->pc != 0x34166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34166Cu; }
        if (ctx->pc != 0x34166Cu) { return; }
    }
    ctx->pc = 0x34166Cu;
label_34166c:
    // 0x34166c: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x34166cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x341670: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x341674: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x341674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341678: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x341678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34167c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34167cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x341680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341688: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x341688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34168c: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x34168cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x341690: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x341690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341694: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x341694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x341698: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x341698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34169c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34169cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3416a0: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x3416a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x3416a4: 0x46002bc0  add.s       $f15, $f5, $f0
    ctx->pc = 0x3416a4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x3416a8: 0x460f1800  add.s       $f0, $f3, $f15
    ctx->pc = 0x3416a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
    // 0x3416ac: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3416acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3416b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3416b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3416b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3416b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3416b8: 0x46060341  sub.s       $f13, $f0, $f6
    ctx->pc = 0x3416b8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x3416bc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3416bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3416c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3416c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3416c4: 0xc7a70068  lwc1        $f7, 0x68($sp)
    ctx->pc = 0x3416c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3416c8: 0xc6280008  lwc1        $f8, 0x8($s1)
    ctx->pc = 0x3416c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3416cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3416ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3416d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3416d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3416d4: 0x4607101d  msub.s      $f0, $f2, $f7
    ctx->pc = 0x3416d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x3416d8: 0x46080301  sub.s       $f12, $f0, $f8
    ctx->pc = 0x3416d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3416dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3416dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3416e0: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x3416e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x3416e4: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x3416e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x3416e8: 0xc129cb4  jal         func_4A72D0
    ctx->pc = 0x3416E8u;
    SET_GPR_U32(ctx, 31, 0x3416F0u);
    ctx->pc = 0x3416ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3416E8u;
            // 0x3416ec: 0x46003b80  add.s       $f14, $f7, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A72D0u;
    if (runtime->hasFunction(0x4A72D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3416F0u; }
        if (ctx->pc != 0x3416F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A72D0_0x4a72d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3416F0u; }
        if (ctx->pc != 0x3416F0u) { return; }
    }
    ctx->pc = 0x3416F0u;
label_3416f0:
    // 0x3416f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3416f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3416f4: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x3416f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
    // 0x3416f8: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x3416F8u;
    SET_GPR_U32(ctx, 31, 0x341700u);
    ctx->pc = 0x3416FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3416F8u;
            // 0x3416fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341700u; }
        if (ctx->pc != 0x341700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341700u; }
        if (ctx->pc != 0x341700u) { return; }
    }
    ctx->pc = 0x341700u;
label_341700:
    // 0x341700: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x341700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x341704: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x341704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x341708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34170c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341710: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x341710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x341714: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x341714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x341718: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x341718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x34171c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34171cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x341724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341728: 0xc0ee334  jal         func_3B8CD0
    ctx->pc = 0x341728u;
    SET_GPR_U32(ctx, 31, 0x341730u);
    ctx->pc = 0x34172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341728u;
            // 0x34172c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341730u; }
        if (ctx->pc != 0x341730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341730u; }
        if (ctx->pc != 0x341730u) { return; }
    }
    ctx->pc = 0x341730u;
label_341730:
    // 0x341730: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x341730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x341734: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x341734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x341738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34173c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34173cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34174c: 0x3e00008  jr          $ra
    ctx->pc = 0x34174Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34174Cu;
            // 0x341750: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341754u;
    // 0x341754: 0x0  nop
    ctx->pc = 0x341754u;
    // NOP
    // 0x341758: 0x0  nop
    ctx->pc = 0x341758u;
    // NOP
    // 0x34175c: 0x0  nop
    ctx->pc = 0x34175cu;
    // NOP
}

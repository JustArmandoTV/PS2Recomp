#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E84E0
// Address: 0x4e84e0 - 0x4e86f0
void sub_004E84E0_0x4e84e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E84E0_0x4e84e0");
#endif

    switch (ctx->pc) {
        case 0x4e85a0u: goto label_4e85a0;
        case 0x4e86bcu: goto label_4e86bc;
        default: break;
    }

    ctx->pc = 0x4e84e0u;

    // 0x4e84e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4e84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4e84e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4e84e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4e84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4e84ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e84f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e84f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4e84f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4e84f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e84f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e84fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4e8500: 0xa263c  dsll32      $a0, $t2, 24
    ctx->pc = 0x4e8500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 24));
    // 0x4e8504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e8504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4e8508: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e8508u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x4e850c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4e8510: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e8510u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x4e8514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4e8518: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4e8518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e851c: 0x84718388  lh          $s1, -0x7C78($v1)
    ctx->pc = 0x4e851cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294935432)));
    // 0x4e8520: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e8520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4e8524: 0x8450838a  lh          $s0, -0x7C76($v0)
    ctx->pc = 0x4e8524u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935434)));
    // 0x4e8528: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e8528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4e852c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4e852cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8530: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8530u;
    {
        const bool branch_taken_0x4e8530 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4E8534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8530u;
            // 0x4e8534: 0x26528da0  addiu       $s2, $s2, -0x7260 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8530) {
            ctx->pc = 0x4E854Cu;
            goto label_4e854c;
        }
    }
    ctx->pc = 0x4E8538u;
    // 0x4e8538: 0x82a2019e  lb          $v0, 0x19E($s5)
    ctx->pc = 0x4e8538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 414)));
    // 0x4e853c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x4e853cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e8540: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E8540u;
    {
        const bool branch_taken_0x4e8540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8540) {
            ctx->pc = 0x4E854Cu;
            goto label_4e854c;
        }
    }
    ctx->pc = 0x4E8548u;
    // 0x4e8548: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x4e8548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_4e854c:
    // 0x4e854c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4e854cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8550: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4e8550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4e8554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e8554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e8558: 0x92a30194  lbu         $v1, 0x194($s5)
    ctx->pc = 0x4e8558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x4e855c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e855cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e8560: 0x0  nop
    ctx->pc = 0x4e8560u;
    // NOP
    // 0x4e8564: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x4e8564u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4e8568: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4e856c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4e856cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e8570: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4e8570u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8574: 0x0  nop
    ctx->pc = 0x4e8574u;
    // NOP
    // 0x4e8578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e8578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4e857c: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E857Cu;
    {
        const bool branch_taken_0x4e857c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E857Cu;
            // 0x4e8580: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e857c) {
            ctx->pc = 0x4E8590u;
            goto label_4e8590;
        }
    }
    ctx->pc = 0x4E8584u;
    // 0x4e8584: 0x3c025a5a  lui         $v0, 0x5A5A
    ctx->pc = 0x4e8584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23130 << 16));
    // 0x4e8588: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x4e8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x4e858c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4e858cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8590:
    // 0x4e8590: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4E8590u;
    {
        const bool branch_taken_0x4e8590 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x4e8590) {
            ctx->pc = 0x4E8644u;
            goto label_4e8644;
        }
    }
    ctx->pc = 0x4E8598u;
    // 0x4e8598: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x4E8598u;
    SET_GPR_U32(ctx, 31, 0x4E85A0u);
    ctx->pc = 0x4E859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8598u;
            // 0x4e859c: 0xc6ac0130  lwc1        $f12, 0x130($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E85A0u; }
        if (ctx->pc != 0x4E85A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E85A0u; }
        if (ctx->pc != 0x4E85A0u) { return; }
    }
    ctx->pc = 0x4E85A0u;
label_4e85a0:
    // 0x4e85a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4e85a4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x4e85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x4e85a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4e85a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e85ac: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x4e85acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
    // 0x4e85b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4e85b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4e85b4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x4e85b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x4e85b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4e85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4e85bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4e85bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e85c0: 0x0  nop
    ctx->pc = 0x4e85c0u;
    // NOP
    // 0x4e85c4: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x4e85c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x4e85c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4e85c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4e85cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4e85ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4e85d0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x4e85d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4e85d4: 0x0  nop
    ctx->pc = 0x4e85d4u;
    // NOP
    // 0x4e85d8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4e85d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4e85dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e85dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e85e0: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x4e85e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x4e85e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4e85e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e85e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4E85E8u;
    {
        const bool branch_taken_0x4e85e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e85e8) {
            ctx->pc = 0x4E85ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E85E8u;
            // 0x4e85ec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8600u;
            goto label_4e8600;
        }
    }
    ctx->pc = 0x4E85F0u;
    // 0x4e85f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e85f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4e85f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4e85f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4e85f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4E85F8u;
    {
        const bool branch_taken_0x4e85f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E85FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E85F8u;
            // 0x4e85fc: 0xc6a00134  lwc1        $f0, 0x134($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e85f8) {
            ctx->pc = 0x4E8618u;
            goto label_4e8618;
        }
    }
    ctx->pc = 0x4E8600u;
label_4e8600:
    // 0x4e8600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4e8600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4e8604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e8604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4e8608: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4e8608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4e860c: 0x0  nop
    ctx->pc = 0x4e860cu;
    // NOP
    // 0x4e8610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e8614: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e8614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e8618:
    // 0x4e8618: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4e8618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4e861c: 0x92a20194  lbu         $v0, 0x194($s5)
    ctx->pc = 0x4e861cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x4e8620: 0x32e00  sll         $a1, $v1, 24
    ctx->pc = 0x4e8620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x4e8624: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4e8624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e8628: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4e8628u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x4e862c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4e862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4e8630: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x4e8630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4e8634: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e8634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e8638: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x4e8638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4e863c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4E863Cu;
    {
        const bool branch_taken_0x4e863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E863Cu;
            // 0x4e8640: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e863c) {
            ctx->pc = 0x4E8668u;
            goto label_4e8668;
        }
    }
    ctx->pc = 0x4E8644u;
label_4e8644:
    // 0x4e8644: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8644u;
    {
        const bool branch_taken_0x4e8644 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4e8644) {
            ctx->pc = 0x4E8668u;
            goto label_4e8668;
        }
    }
    ctx->pc = 0x4E864Cu;
    // 0x4e864c: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4e8650: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x4e8654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e8654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8658: 0x0  nop
    ctx->pc = 0x4e8658u;
    // NOP
    // 0x4e865c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e865cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4e8660: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4e8660u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x4e8664: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x4e8664u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4e8668:
    // 0x4e8668: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4e8668u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e866c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4e8670: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4e8670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4e8674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e8674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8678: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e8678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e867c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e867cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8680: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4e8680u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8684: 0x0  nop
    ctx->pc = 0x4e8684u;
    // NOP
    // 0x4e8688: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4e8688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4e868c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4e868cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e8690: 0x0  nop
    ctx->pc = 0x4e8690u;
    // NOP
    // 0x4e8694: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e8694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x4e8698: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4e8698u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e869c: 0x0  nop
    ctx->pc = 0x4e869cu;
    // NOP
    // 0x4e86a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e86a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x4e86a4: 0x46151301  sub.s       $f12, $f2, $f21
    ctx->pc = 0x4e86a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x4e86a8: 0x46151380  add.s       $f14, $f2, $f21
    ctx->pc = 0x4e86a8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x4e86ac: 0x46140b41  sub.s       $f13, $f1, $f20
    ctx->pc = 0x4e86acu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x4e86b0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e86b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x4e86b4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x4E86B4u;
    SET_GPR_U32(ctx, 31, 0x4E86BCu);
    ctx->pc = 0x4E86B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E86B4u;
            // 0x4e86b8: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E86BCu; }
        if (ctx->pc != 0x4E86BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E86BCu; }
        if (ctx->pc != 0x4E86BCu) { return; }
    }
    ctx->pc = 0x4E86BCu;
label_4e86bc:
    // 0x4e86bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4e86bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e86c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4e86c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e86c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e86c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e86c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e86cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e86ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e86d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e86d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e86d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e86d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e86d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e86d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e86dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e86dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e86e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E86E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E86E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E86E0u;
            // 0x4e86e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E86E8u;
    // 0x4e86e8: 0x0  nop
    ctx->pc = 0x4e86e8u;
    // NOP
    // 0x4e86ec: 0x0  nop
    ctx->pc = 0x4e86ecu;
    // NOP
}

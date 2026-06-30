#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0090
// Address: 0x2e0090 - 0x2e0210
void sub_002E0090_0x2e0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0090_0x2e0090");
#endif

    switch (ctx->pc) {
        case 0x2e0118u: goto label_2e0118;
        case 0x2e0164u: goto label_2e0164;
        case 0x2e0190u: goto label_2e0190;
        case 0x2e01e4u: goto label_2e01e4;
        case 0x2e01f0u: goto label_2e01f0;
        case 0x2e01fcu: goto label_2e01fc;
        default: break;
    }

    ctx->pc = 0x2e0090u;

    // 0x2e0090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e009c: 0x94820050  lhu         $v0, 0x50($a0)
    ctx->pc = 0x2e009cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2e00a0: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x2e00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e00a4: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2e00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e00a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e00a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00ac: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2e00acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2e00b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e00b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e00b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2e00b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e00bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e00c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e00c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e00c4: 0x0  nop
    ctx->pc = 0x2e00c4u;
    // NOP
    // 0x2e00c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e00c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e00cc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2e00ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2e00d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2e00d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x2e00d4: 0x0  nop
    ctx->pc = 0x2e00d4u;
    // NOP
    // 0x2e00d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e00d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e00dc: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E00DCu;
    {
        const bool branch_taken_0x2e00dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E00E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E00DCu;
            // 0x2e00e0: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00dc) {
            ctx->pc = 0x2E0120u;
            goto label_2e0120;
        }
    }
    ctx->pc = 0x2E00E4u;
    // 0x2e00e4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2e00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e00e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e00e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00ec: 0x0  nop
    ctx->pc = 0x2e00ecu;
    // NOP
    // 0x2e00f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e00f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e00f4: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2E00F4u;
    {
        const bool branch_taken_0x2e00f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e00f4) {
            ctx->pc = 0x2E00F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E00F4u;
            // 0x2e00f8: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0170u;
            goto label_2e0170;
        }
    }
    ctx->pc = 0x2E00FCu;
    // 0x2e00fc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2e00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0100: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x2e0100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e0104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0108: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2e0108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e010c: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x2e010cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e0110: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E0110u;
    SET_GPR_U32(ctx, 31, 0x2E0118u);
    ctx->pc = 0x2E0114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0110u;
            // 0x2e0114: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0118u; }
        if (ctx->pc != 0x2E0118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0118u; }
        if (ctx->pc != 0x2E0118u) { return; }
    }
    ctx->pc = 0x2E0118u;
label_2e0118:
    // 0x2e0118: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2E0118u;
    {
        const bool branch_taken_0x2e0118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0118u;
            // 0x2e011c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0118) {
            ctx->pc = 0x2E0200u;
            goto label_2e0200;
        }
    }
    ctx->pc = 0x2E0120u;
label_2e0120:
    // 0x2e0120: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2e0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e012c: 0x0  nop
    ctx->pc = 0x2e012cu;
    // NOP
    // 0x2e0130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0134: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2E0134u;
    {
        const bool branch_taken_0x2e0134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0134) {
            ctx->pc = 0x2E016Cu;
            goto label_2e016c;
        }
    }
    ctx->pc = 0x2E013Cu;
    // 0x2e013c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e0140: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2e0140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0144: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0148: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2e0148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e014c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0150: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x2e0150u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e0154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0158: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x2e0158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e015c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2E015Cu;
    SET_GPR_U32(ctx, 31, 0x2E0164u);
    ctx->pc = 0x2E0160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E015Cu;
            // 0x2e0160: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0164u; }
        if (ctx->pc != 0x2E0164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0164u; }
        if (ctx->pc != 0x2E0164u) { return; }
    }
    ctx->pc = 0x2E0164u;
label_2e0164:
    // 0x2e0164: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E0164u;
    {
        const bool branch_taken_0x2e0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0164) {
            ctx->pc = 0x2E01FCu;
            goto label_2e01fc;
        }
    }
    ctx->pc = 0x2E016Cu;
label_2e016c:
    // 0x2e016c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2e0170:
    // 0x2e0170: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2e0170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2e0174: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e017c: 0x9448001c  lhu         $t0, 0x1C($v0)
    ctx->pc = 0x2e017cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e0180: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2e0180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0184: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2e0184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e0188: 0xc0bc2a8  jal         func_2F0AA0
    ctx->pc = 0x2E0188u;
    SET_GPR_U32(ctx, 31, 0x2E0190u);
    ctx->pc = 0x2E018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0188u;
            // 0x2e018c: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AA0u;
    if (runtime->hasFunction(0x2F0AA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0190u; }
        if (ctx->pc != 0x2E0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0AA0_0x2f0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0190u; }
        if (ctx->pc != 0x2E0190u) { return; }
    }
    ctx->pc = 0x2E0190u;
label_2e0190:
    // 0x2e0190: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e0190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e0194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e0194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0198: 0x0  nop
    ctx->pc = 0x2e0198u;
    // NOP
    // 0x2e019c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e019cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e01a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E01A0u;
    {
        const bool branch_taken_0x2e01a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e01a0) {
            ctx->pc = 0x2E01A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01A0u;
            // 0x2e01a4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E01B8u;
            goto label_2e01b8;
        }
    }
    ctx->pc = 0x2E01A8u;
    // 0x2e01a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e01a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e01ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e01acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e01b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E01B0u;
    {
        const bool branch_taken_0x2e01b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E01B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01B0u;
            // 0x2e01b4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e01b0) {
            ctx->pc = 0x2E01D0u;
            goto label_2e01d0;
        }
    }
    ctx->pc = 0x2E01B8u;
label_2e01b8:
    // 0x2e01b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e01bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e01bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e01c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e01c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e01c4: 0x0  nop
    ctx->pc = 0x2e01c4u;
    // NOP
    // 0x2e01c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e01cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e01ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e01d0:
    // 0x2e01d0: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x2e01d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e01d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e01d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e01d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e01dc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E01DCu;
    SET_GPR_U32(ctx, 31, 0x2E01E4u);
    ctx->pc = 0x2E01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01DCu;
            // 0x2e01e0: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01E4u; }
        if (ctx->pc != 0x2E01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01E4u; }
        if (ctx->pc != 0x2E01E4u) { return; }
    }
    ctx->pc = 0x2E01E4u;
label_2e01e4:
    // 0x2e01e4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e01e8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E01E8u;
    SET_GPR_U32(ctx, 31, 0x2E01F0u);
    ctx->pc = 0x2E01ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01E8u;
            // 0x2e01ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01F0u; }
        if (ctx->pc != 0x2E01F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01F0u; }
        if (ctx->pc != 0x2E01F0u) { return; }
    }
    ctx->pc = 0x2E01F0u;
label_2e01f0:
    // 0x2e01f0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e01f4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E01F4u;
    SET_GPR_U32(ctx, 31, 0x2E01FCu);
    ctx->pc = 0x2E01F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01F4u;
            // 0x2e01f8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01FCu; }
        if (ctx->pc != 0x2E01FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E01FCu; }
        if (ctx->pc != 0x2E01FCu) { return; }
    }
    ctx->pc = 0x2E01FCu;
label_2e01fc:
    // 0x2e01fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e01fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e0200:
    // 0x2e0200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0204: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0204u;
            // 0x2e0208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E020Cu;
    // 0x2e020c: 0x0  nop
    ctx->pc = 0x2e020cu;
    // NOP
}

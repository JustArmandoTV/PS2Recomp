#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001382C0
// Address: 0x1382c0 - 0x138420
void sub_001382C0_0x1382c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001382C0_0x1382c0");
#endif

    switch (ctx->pc) {
        case 0x1382d4u: goto label_1382d4;
        default: break;
    }

    ctx->pc = 0x1382c0u;

    // 0x1382c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1382c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382c4: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x1382c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1382c8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1382C8u;
    {
        const bool branch_taken_0x1382c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1382CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1382C8u;
            // 0x1382cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382c8) {
            ctx->pc = 0x138310u;
            goto label_138310;
        }
    }
    ctx->pc = 0x1382D0u;
    // 0x1382d0: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x1382d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1382d4:
    // 0x1382d4: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1382d8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1382dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1382dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1382e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1382e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1382e4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1382e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1382e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1382E8u;
    {
        const bool branch_taken_0x1382e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1382e8) {
            ctx->pc = 0x1382F8u;
            goto label_1382f8;
        }
    }
    ctx->pc = 0x1382F0u;
    // 0x1382f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1382F0u;
    {
        const bool branch_taken_0x1382f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1382F0u;
            // 0x1382f4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382f0) {
            ctx->pc = 0x138300u;
            goto label_138300;
        }
    }
    ctx->pc = 0x1382F8u;
label_1382f8:
    // 0x1382f8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1382f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382fc: 0x0  nop
    ctx->pc = 0x1382fcu;
    // NOP
label_138300:
    // 0x138300: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x138304: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x138304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138308: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x138308u;
    {
        const bool branch_taken_0x138308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138308) {
            ctx->pc = 0x13830Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138308u;
            // 0x13830c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1382D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1382d4;
        }
    }
    ctx->pc = 0x138310u;
label_138310:
    // 0x138310: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x138310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x138314: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x138314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x138318: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x138318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13831c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13831Cu;
    {
        const bool branch_taken_0x13831c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13831Cu;
            // 0x138320: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13831c) {
            ctx->pc = 0x138330u;
            goto label_138330;
        }
    }
    ctx->pc = 0x138324u;
    // 0x138324: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x138324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x138328: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x138328u;
    {
        const bool branch_taken_0x138328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138328u;
            // 0x13832c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138328) {
            ctx->pc = 0x13840Cu;
            goto label_13840c;
        }
    }
    ctx->pc = 0x138330u;
label_138330:
    // 0x138330: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x138330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138334: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x138334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x138338: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x138338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13833c: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x13833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x138340: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x138340u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x138344: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x138344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x138348: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x138348u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x13834c: 0x0  nop
    ctx->pc = 0x13834cu;
    // NOP
    // 0x138350: 0x0  nop
    ctx->pc = 0x138350u;
    // NOP
    // 0x138354: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138354u;
    {
        const bool branch_taken_0x138354 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x138354) {
            ctx->pc = 0x138368u;
            goto label_138368;
        }
    }
    ctx->pc = 0x13835Cu;
    // 0x13835c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13835cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138360u;
    {
        const bool branch_taken_0x138360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138360u;
            // 0x138364: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138360) {
            ctx->pc = 0x138384u;
            goto label_138384;
        }
    }
    ctx->pc = 0x138368u;
label_138368:
    // 0x138368: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x138368u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13836c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x138370: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x138370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x138374: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x138374u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138378: 0x0  nop
    ctx->pc = 0x138378u;
    // NOP
    // 0x13837c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x13837cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x138380: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x138380u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_138384:
    // 0x138384: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x138388: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138388u;
    {
        const bool branch_taken_0x138388 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x138388) {
            ctx->pc = 0x13838Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138388u;
            // 0x13838c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13839Cu;
            goto label_13839c;
        }
    }
    ctx->pc = 0x138390u;
    // 0x138390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138394: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138394u;
    {
        const bool branch_taken_0x138394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138394u;
            // 0x138398: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138394) {
            ctx->pc = 0x1383B4u;
            goto label_1383b4;
        }
    }
    ctx->pc = 0x13839Cu;
label_13839c:
    // 0x13839c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1383a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1383a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1383a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1383a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1383a8: 0x0  nop
    ctx->pc = 0x1383a8u;
    // NOP
    // 0x1383ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1383acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1383b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1383b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1383b4:
    // 0x1383b4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1383b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1383bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1383bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1383c0: 0x0  nop
    ctx->pc = 0x1383c0u;
    // NOP
    // 0x1383c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1383c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1383c8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1383c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1383cc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1383ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1383d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1383d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1383d4: 0x0  nop
    ctx->pc = 0x1383d4u;
    // NOP
    // 0x1383d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1383d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1383dc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1383DCu;
    {
        const bool branch_taken_0x1383dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1383dc) {
            ctx->pc = 0x1383E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1383DCu;
            // 0x1383e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1383F4u;
            goto label_1383f4;
        }
    }
    ctx->pc = 0x1383E4u;
    // 0x1383e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1383e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1383e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1383e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1383ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1383ECu;
    {
        const bool branch_taken_0x1383ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1383ECu;
            // 0x1383f0: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383ec) {
            ctx->pc = 0x13840Cu;
            goto label_13840c;
        }
    }
    ctx->pc = 0x1383F4u;
label_1383f4:
    // 0x1383f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1383f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1383f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1383f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1383fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1383fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x138400: 0x0  nop
    ctx->pc = 0x138400u;
    // NOP
    // 0x138404: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x138404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x138408: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x138408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_13840c:
    // 0x13840c: 0x3e00008  jr          $ra
    ctx->pc = 0x13840Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138414u;
    // 0x138414: 0x0  nop
    ctx->pc = 0x138414u;
    // NOP
    // 0x138418: 0x0  nop
    ctx->pc = 0x138418u;
    // NOP
    // 0x13841c: 0x0  nop
    ctx->pc = 0x13841cu;
    // NOP
}

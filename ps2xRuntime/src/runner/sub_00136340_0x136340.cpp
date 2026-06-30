#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136340
// Address: 0x136340 - 0x136400
void sub_00136340_0x136340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136340_0x136340");
#endif

    switch (ctx->pc) {
        case 0x136354u: goto label_136354;
        default: break;
    }

    ctx->pc = 0x136340u;

    // 0x136340: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x136340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136344: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x136344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136348: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x136348u;
    {
        const bool branch_taken_0x136348 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136348u;
            // 0x13634c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136348) {
            ctx->pc = 0x136390u;
            goto label_136390;
        }
    }
    ctx->pc = 0x136350u;
    // 0x136350: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x136350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_136354:
    // 0x136354: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136354u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136358: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x136358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13635c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136360: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136364: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136368: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136368u;
    {
        const bool branch_taken_0x136368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136368) {
            ctx->pc = 0x136378u;
            goto label_136378;
        }
    }
    ctx->pc = 0x136370u;
    // 0x136370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136370u;
    {
        const bool branch_taken_0x136370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136370u;
            // 0x136374: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136370) {
            ctx->pc = 0x136380u;
            goto label_136380;
        }
    }
    ctx->pc = 0x136378u;
label_136378:
    // 0x136378: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x136378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13637c: 0x0  nop
    ctx->pc = 0x13637cu;
    // NOP
label_136380:
    // 0x136380: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x136384: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136388: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136388u;
    {
        const bool branch_taken_0x136388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136388) {
            ctx->pc = 0x13638Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136388u;
            // 0x13638c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136354;
        }
    }
    ctx->pc = 0x136390u;
label_136390:
    // 0x136390: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x136390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136394: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x136394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x136398: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x136398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13639c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13639Cu;
    {
        const bool branch_taken_0x13639c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13639Cu;
            // 0x1363a0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13639c) {
            ctx->pc = 0x1363B0u;
            goto label_1363b0;
        }
    }
    ctx->pc = 0x1363A4u;
    // 0x1363a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1363a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1363a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1363A8u;
    {
        const bool branch_taken_0x1363a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1363ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1363A8u;
            // 0x1363ac: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363a8) {
            ctx->pc = 0x1363F8u;
            goto label_1363f8;
        }
    }
    ctx->pc = 0x1363B0u;
label_1363b0:
    // 0x1363b0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1363b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1363b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1363b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1363b8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1363b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1363bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1363c0: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x1363c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1363c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1363c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1363c8: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1363c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1363cc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1363ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363d0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1363d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1363d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1363d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1363d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1363d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1363dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1363dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1363e0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1363e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1363e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1363e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1363e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1363e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1363ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1363ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1363f0: 0x0  nop
    ctx->pc = 0x1363f0u;
    // NOP
    // 0x1363f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1363f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1363f8:
    // 0x1363f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1363F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136400u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C440
// Address: 0x20c440 - 0x20c630
void sub_0020C440_0x20c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C440_0x20c440");
#endif

    switch (ctx->pc) {
        case 0x20c494u: goto label_20c494;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4c8u: goto label_20c4c8;
        default: break;
    }

    ctx->pc = 0x20c440u;

    // 0x20c440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20c444: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x20c448: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20c44c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20c44cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c450: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20c454: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20c458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20c45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c468: 0x18a00067  blez        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x20C468u;
    {
        const bool branch_taken_0x20c468 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x20C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C468u;
            // 0x20c46c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c468) {
            ctx->pc = 0x20C608u;
            goto label_20c608;
        }
    }
    ctx->pc = 0x20C470u;
    // 0x20c470: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x20c470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x20c474: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20c474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c478: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x20c478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x20c47c: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x20c47cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c480: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20c480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20c484: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x20c484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c488: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c48c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c490: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x20c490u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_20c494:
    // 0x20c494: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20c494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c498: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20c498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c49c: 0x0  nop
    ctx->pc = 0x20c49cu;
    // NOP
label_20c4a0:
    // 0x20c4a0: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x20c4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20c4a4: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x20c4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x20c4a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20c4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4ac: 0x1b200036  blez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x20C4ACu;
    {
        const bool branch_taken_0x20c4ac = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x20C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4ACu;
            // 0x20c4b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4ac) {
            ctx->pc = 0x20C588u;
            goto label_20c588;
        }
    }
    ctx->pc = 0x20C4B4u;
    // 0x20c4b4: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x20c4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20c4b8: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x20c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20c4bc: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x20c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20c4c0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x20c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20c4c4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x20c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c4c8:
    // 0x20c4c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c4cc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x20c4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x20c4d0: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x20c4d0u;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x20c4d4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20c4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c4d8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x20c4d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x20c4dc: 0x460001c5  abs.s       $f7, $f0
    ctx->pc = 0x20c4dcu;
    ctx->f[7] = FPU_ABS_S(ctx->f[0]);
    // 0x20c4e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20c4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c4e4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x20c4e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x20c4e8: 0x46000185  abs.s       $f6, $f0
    ctx->pc = 0x20c4e8u;
    ctx->f[6] = FPU_ABS_S(ctx->f[0]);
    // 0x20c4ec: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c4f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x20c4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x20c4f4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20c4f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20c4f8: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x20c4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c4fc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20C4FCu;
    {
        const bool branch_taken_0x20c4fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c4fc) {
            ctx->pc = 0x20C500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4FCu;
            // 0x20c500: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C508u;
            goto label_20c508;
        }
    }
    ctx->pc = 0x20C504u;
    // 0x20c504: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x20c504u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_20c508:
    // 0x20c508: 0x46014036  c.le.s      $f8, $f1
    ctx->pc = 0x20c508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c50c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20C50Cu;
    {
        const bool branch_taken_0x20c50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c50c) {
            ctx->pc = 0x20C510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C50Cu;
            // 0x20c510: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C518u;
            goto label_20c518;
        }
    }
    ctx->pc = 0x20C514u;
    // 0x20c514: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x20c514u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_20c518:
    // 0x20c518: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x20c518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c51c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x20C51Cu;
    {
        const bool branch_taken_0x20c51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c51c) {
            ctx->pc = 0x20C520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C51Cu;
            // 0x20c520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C528u;
            goto label_20c528;
        }
    }
    ctx->pc = 0x20C524u;
    // 0x20c524: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x20c524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_20c528:
    // 0x20c528: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20c528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c52c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20C52Cu;
    {
        const bool branch_taken_0x20c52c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C52Cu;
            // 0x20c530: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c52c) {
            ctx->pc = 0x20C538u;
            goto label_20c538;
        }
    }
    ctx->pc = 0x20C534u;
    // 0x20c534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20c534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c538:
    // 0x20c538: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x20c538u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x20c53c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x20c53cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x20c540: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x20c540u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x20c544: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x20c544u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x20c548: 0x314a000e  andi        $t2, $t2, 0xE
    ctx->pc = 0x20c548u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)14);
    // 0x20c54c: 0x394a000e  xori        $t2, $t2, 0xE
    ctx->pc = 0x20c54cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)14);
    // 0x20c550: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x20c550u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20c554: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C554u;
    {
        const bool branch_taken_0x20c554 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c554) {
            ctx->pc = 0x20C578u;
            goto label_20c578;
        }
    }
    ctx->pc = 0x20C55Cu;
    // 0x20c55c: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x20c55cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20c560: 0x2765821  addu        $t3, $s3, $s6
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x20c564: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x20c564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c568: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x20c56c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C56Cu;
            // 0x20c570: 0xa1540000  sb          $s4, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C588u;
            goto label_20c588;
        }
    }
    ctx->pc = 0x20C574u;
    // 0x20c574: 0x0  nop
    ctx->pc = 0x20c574u;
    // NOP
label_20c578:
    // 0x20c578: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20c578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20c57c: 0x299502a  slt         $t2, $s4, $t9
    ctx->pc = 0x20c57cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x20c580: 0x1540ffd1  bnez        $t2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20C580u;
    {
        const bool branch_taken_0x20c580 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C580u;
            // 0x20c584: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c580) {
            ctx->pc = 0x20C4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c4c8;
        }
    }
    ctx->pc = 0x20C588u;
label_20c588:
    // 0x20c588: 0x16a00015  bnez        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C588u;
    {
        const bool branch_taken_0x20c588 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c588) {
            ctx->pc = 0x20C5E0u;
            goto label_20c5e0;
        }
    }
    ctx->pc = 0x20C590u;
    // 0x20c590: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20c594: 0x2765821  addu        $t3, $s3, $s6
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x20c598: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x20c598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20c59c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x20c59cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x20c5a0: 0xa14d0000  sb          $t5, 0x0($t2)
    ctx->pc = 0x20c5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x20c5a4: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20c5a8: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x20c5ac: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x20c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x20c5b0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20c5b4: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20c5b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c5bc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x20c5c0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x20c5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x20c5c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c5c8: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x20c5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x20c5cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c5d0: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x20c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x20c5d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20c5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c5d8: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x20c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x20c5dc: 0x0  nop
    ctx->pc = 0x20c5dcu;
    // NOP
label_20c5e0:
    // 0x20c5e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x20c5e4: 0x2aca0003  slti        $t2, $s6, 0x3
    ctx->pc = 0x20c5e4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20c5e8: 0x1540ffad  bnez        $t2, . + 4 + (-0x53 << 2)
    ctx->pc = 0x20C5E8u;
    {
        const bool branch_taken_0x20c5e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5E8u;
            // 0x20c5ec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5e8) {
            ctx->pc = 0x20C4A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c4a0;
        }
    }
    ctx->pc = 0x20C5F0u;
    // 0x20c5f0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x20c5f4: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x20c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x20c5f8: 0x2e5502a  slt         $t2, $s7, $a1
    ctx->pc = 0x20c5f8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20c5fc: 0x1540ffa5  bnez        $t2, . + 4 + (-0x5B << 2)
    ctx->pc = 0x20C5FCu;
    {
        const bool branch_taken_0x20c5fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5FCu;
            // 0x20c600: 0x26730003  addiu       $s3, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5fc) {
            ctx->pc = 0x20C494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c494;
        }
    }
    ctx->pc = 0x20C604u;
    // 0x20c604: 0x0  nop
    ctx->pc = 0x20c604u;
    // NOP
label_20c608:
    // 0x20c608: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20c608u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20c60c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20c60cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20c610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20c610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20c614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20c618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c61c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c628: 0x3e00008  jr          $ra
    ctx->pc = 0x20C628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C628u;
            // 0x20c62c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C630u;
}

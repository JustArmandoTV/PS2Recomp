#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B390
// Address: 0x28b390 - 0x28b500
void sub_0028B390_0x28b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B390_0x28b390");
#endif

    switch (ctx->pc) {
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b448u: goto label_28b448;
        default: break;
    }

    ctx->pc = 0x28b390u;

    // 0x28b390: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x28b390u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b394: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28b394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b398: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x28B398u;
    {
        const bool branch_taken_0x28b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B398u;
            // 0x28b39c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b398) {
            ctx->pc = 0x28B4D8u;
            goto label_28b4d8;
        }
    }
    ctx->pc = 0x28B3A0u;
label_28b3a0:
    // 0x28b3a0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b3a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b3a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28B3A4u;
    {
        const bool branch_taken_0x28b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3A4u;
            // 0x28b3a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a4) {
            ctx->pc = 0x28B418u;
            goto label_28b418;
        }
    }
    ctx->pc = 0x28B3ACu;
    // 0x28b3ac: 0x0  nop
    ctx->pc = 0x28b3acu;
    // NOP
label_28b3b0:
    // 0x28b3b0: 0x9402b  sltu        $t0, $zero, $t1
    ctx->pc = 0x28b3b0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x28b3b4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x28b3b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b3b8: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x28b3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b3bc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x28b3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x28b3c0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x28b3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x28b3c4: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x28b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28b3c8: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x28b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28b3cc: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x28b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b3d0: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x28b3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28b3d4: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x28b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b3d8: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x28b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b3dc: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x28b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b3e0: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x28b3e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x28b3e4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28b3e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28b3e8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x28b3e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x28b3ec: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x28b3ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x28b3f0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B3F0u;
    {
        const bool branch_taken_0x28b3f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3F0u;
            // 0x28b3f4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3f0) {
            ctx->pc = 0x28B408u;
            goto label_28b408;
        }
    }
    ctx->pc = 0x28B3F8u;
    // 0x28b3f8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x28b3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b3fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B3FCu;
    {
        const bool branch_taken_0x28b3fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3FCu;
            // 0x28b400: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3fc) {
            ctx->pc = 0x28B408u;
            goto label_28b408;
        }
    }
    ctx->pc = 0x28B404u;
    // 0x28b404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28b404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b408:
    // 0x28b408: 0x86e3c  dsll32      $t5, $t0, 24
    ctx->pc = 0x28b408u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 24));
    // 0x28b40c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x28b40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x28b410: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x28b410u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x28b414: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x28b414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_28b418:
    // 0x28b418: 0xd4e3c  dsll32      $t1, $t5, 24
    ctx->pc = 0x28b418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) << (32 + 24));
    // 0x28b41c: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x28b41cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x28b420: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B420u;
    {
        const bool branch_taken_0x28b420 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b420) {
            ctx->pc = 0x28B438u;
            goto label_28b438;
        }
    }
    ctx->pc = 0x28B428u;
    // 0x28b428: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x28b428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28b42c: 0x1c8402a  slt         $t0, $t6, $t0
    ctx->pc = 0x28b42cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28b430: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x28B430u;
    {
        const bool branch_taken_0x28b430 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b430) {
            ctx->pc = 0x28B3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B438u;
label_28b438:
    // 0x28b438: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b438u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b43c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28B43Cu;
    {
        const bool branch_taken_0x28b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B43Cu;
            // 0x28b440: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b43c) {
            ctx->pc = 0x28B4B0u;
            goto label_28b4b0;
        }
    }
    ctx->pc = 0x28B444u;
    // 0x28b444: 0x0  nop
    ctx->pc = 0x28b444u;
    // NOP
label_28b448:
    // 0x28b448: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B448u;
    {
        const bool branch_taken_0x28b448 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B448u;
            // 0x28b44c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b448) {
            ctx->pc = 0x28B4A0u;
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B450u;
    // 0x28b450: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x28b450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b454: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x28b454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b458: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x28b458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x28b45c: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x28b45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x28b460: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x28b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28b464: 0xc5060004  lwc1        $f6, 0x4($t0)
    ctx->pc = 0x28b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28b468: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x28b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b46c: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x28b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28b470: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x28b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b474: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x28b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b478: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x28b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b47c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x28b47cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x28b480: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28b480u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28b484: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x28b484u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x28b488: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x28b488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x28b48c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b48cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b490: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x28b490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b494: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B494u;
    {
        const bool branch_taken_0x28b494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b494) {
            ctx->pc = 0x28B4A0u;
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B49Cu;
    // 0x28b49c: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x28b49cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_28b4a0:
    // 0x28b4a0: 0xb6e3c  dsll32      $t5, $t3, 24
    ctx->pc = 0x28b4a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 24));
    // 0x28b4a4: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x28b4a4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x28b4a8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x28b4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x28b4ac: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_28b4b0:
    // 0x28b4b0: 0xd4e3c  dsll32      $t1, $t5, 24
    ctx->pc = 0x28b4b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) << (32 + 24));
    // 0x28b4b4: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x28b4b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x28b4b8: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B4B8u;
    {
        const bool branch_taken_0x28b4b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4b8) {
            ctx->pc = 0x28B4D0u;
            goto label_28b4d0;
        }
    }
    ctx->pc = 0x28B4C0u;
    // 0x28b4c0: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x28b4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28b4c4: 0x1c8402a  slt         $t0, $t6, $t0
    ctx->pc = 0x28b4c4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28b4c8: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x28B4C8u;
    {
        const bool branch_taken_0x28b4c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b4c8) {
            ctx->pc = 0x28B448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b448;
        }
    }
    ctx->pc = 0x28B4D0u;
label_28b4d0:
    // 0x28b4d0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x28b4d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x28b4d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28b4d8:
    // 0x28b4d8: 0xd463c  dsll32      $t0, $t5, 24
    ctx->pc = 0x28b4d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 24));
    // 0x28b4dc: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x28b4dcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x28b4e0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B4E0u;
    {
        const bool branch_taken_0x28b4e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4e0) {
            ctx->pc = 0x28B4F8u;
            goto label_28b4f8;
        }
    }
    ctx->pc = 0x28B4E8u;
    // 0x28b4e8: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x28b4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28b4ec: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x28b4ecu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x28b4f0: 0x1500ffab  bnez        $t0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x28B4F0u;
    {
        const bool branch_taken_0x28b4f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b4f0) {
            ctx->pc = 0x28B3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b3a0;
        }
    }
    ctx->pc = 0x28B4F8u;
label_28b4f8:
    // 0x28b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4F8u;
            // 0x28b4fc: 0xa08d0000  sb          $t5, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B500u;
}

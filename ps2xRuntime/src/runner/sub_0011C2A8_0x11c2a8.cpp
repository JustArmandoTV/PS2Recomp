#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C2A8
// Address: 0x11c2a8 - 0x11cac8
void sub_0011C2A8_0x11c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C2A8_0x11c2a8");
#endif

    switch (ctx->pc) {
        case 0x11c348u: goto label_11c348;
        case 0x11c390u: goto label_11c390;
        case 0x11c3a4u: goto label_11c3a4;
        case 0x11c3e0u: goto label_11c3e0;
        case 0x11c414u: goto label_11c414;
        case 0x11c464u: goto label_11c464;
        case 0x11c47cu: goto label_11c47c;
        case 0x11c4d8u: goto label_11c4d8;
        case 0x11c4fcu: goto label_11c4fc;
        case 0x11c540u: goto label_11c540;
        case 0x11c568u: goto label_11c568;
        case 0x11c594u: goto label_11c594;
        case 0x11c5e0u: goto label_11c5e0;
        case 0x11c64cu: goto label_11c64c;
        case 0x11c66cu: goto label_11c66c;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6f8u: goto label_11c6f8;
        case 0x11c70cu: goto label_11c70c;
        case 0x11c72cu: goto label_11c72c;
        case 0x11c764u: goto label_11c764;
        case 0x11c78cu: goto label_11c78c;
        case 0x11c7b8u: goto label_11c7b8;
        case 0x11c7f0u: goto label_11c7f0;
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c83cu: goto label_11c83c;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8dcu: goto label_11c8dc;
        case 0x11c8fcu: goto label_11c8fc;
        case 0x11c938u: goto label_11c938;
        case 0x11c980u: goto label_11c980;
        case 0x11c9f4u: goto label_11c9f4;
        case 0x11ca80u: goto label_11ca80;
        default: break;
    }

    ctx->pc = 0x11c2a8u;

    // 0x11c2a8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x11c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x11c2ac: 0x24cffffd  addiu       $t7, $a2, -0x3
    ctx->pc = 0x11c2acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11c2b0: 0x24cd0004  addiu       $t5, $a2, 0x4
    ctx->pc = 0x11c2b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11c2b4: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x11c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x11c2b8: 0x29ee0000  slti        $t6, $t7, 0x0
    ctx->pc = 0x11c2b8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c2bc: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x11c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x11c2c0: 0x1ae780b  movn        $t7, $t5, $t6
    ctx->pc = 0x11c2c0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x11c2c4: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x11c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x11c2c8: 0xfa8c3  sra         $s5, $t7, 3
    ctx->pc = 0x11c2c8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 15), 3));
    // 0x11c2cc: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x11c2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x11c2d0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c2d4: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x11c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x11c2d8: 0x2aad0000  slti        $t5, $s5, 0x0
    ctx->pc = 0x11c2d8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c2dc: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x11c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x11c2e0: 0x25effde8  addiu       $t7, $t7, -0x218
    ctx->pc = 0x11c2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966760));
    // 0x11c2e4: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x11c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x11c2e8: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x11c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x11c2ec: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x11c2ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11c2f0: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x11c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x11c2f4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11c2f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11c2f8: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x11c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x11c2fc: 0xda80b  movn        $s5, $zero, $t5
    ctx->pc = 0x11c2fcu;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x11c300: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11c300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x11c304: 0x1578c0  sll         $t7, $s5, 3
    ctx->pc = 0x11c304u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x11c308: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x11c308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c30c: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x11c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x11c310: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11c314: 0xcf3023  subu        $a2, $a2, $t7
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x11c318: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x11c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x11c31c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11c31cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c320: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x11c320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
    // 0x11c324: 0x24d3fff8  addiu       $s3, $a2, -0x8
    ctx->pc = 0x11c324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x11c328: 0x2306821  addu        $t5, $s1, $s0
    ctx->pc = 0x11c328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11c32c: 0x5a00010  bltz        $t5, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C32Cu;
    {
        const bool branch_taken_0x11c32c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x11C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C32Cu;
            // 0x11c330: 0x2b17023  subu        $t6, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c32c) {
            ctx->pc = 0x11C370u;
            goto label_11c370;
        }
    }
    ctx->pc = 0x11C334u;
    // 0x11c334: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x11c334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11c338: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x11c338u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c33c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x11c33cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x11c340: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x11c340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x11c344: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x11c344u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11c348:
    // 0x11c348: 0x5800003  bltz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C348u;
    {
        const bool branch_taken_0x11c348 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x11C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C348u;
            // 0x11c34c: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c348) {
            ctx->pc = 0x11C358u;
            goto label_11c358;
        }
    }
    ctx->pc = 0x11C350u;
    // 0x11c350: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11c354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11c358:
    // 0x11c358: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11c358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11c35c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x11c35cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x11c360: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11c360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11c364: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11c364u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11c368: 0x15a0fff7  bnez        $t5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C368u;
    {
        const bool branch_taken_0x11c368 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C368u;
            // 0x11c36c: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c368) {
            ctx->pc = 0x11C348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c348;
        }
    }
    ctx->pc = 0x11C370u;
label_11c370:
    // 0x11c370: 0x2a0e0000  slti        $t6, $s0, 0x0
    ctx->pc = 0x11c370u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c378: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x11C378u;
    {
        const bool branch_taken_0x11c378 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C378u;
            // 0x11c37c: 0xafae014c  sw          $t6, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c378) {
            ctx->pc = 0x11C3DCu;
            goto label_11c3dc;
        }
    }
    ctx->pc = 0x11C380u;
    // 0x11c380: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11c384: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x11c384u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c388: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11c388u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c38c: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x11c38cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_11c390:
    // 0x11c390: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x11C390u;
    {
        const bool branch_taken_0x11c390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C390u;
            // 0x11c394: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c390) {
            ctx->pc = 0x11C3C4u;
            goto label_11c3c4;
        }
    }
    ctx->pc = 0x11C398u;
    // 0x11c398: 0x258e0050  addiu       $t6, $t4, 0x50
    ctx->pc = 0x11c398u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x11c39c: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x11c39cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3a0: 0x262d0001  addiu       $t5, $s1, 0x1
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11c3a4:
    // 0x11c3a4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c3a8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x11c3ac: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c3b0: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11c3b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c3b8: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11c3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11c3bc: 0x15a0fff9  bnez        $t5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C3BCu;
    {
        const bool branch_taken_0x11c3bc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3BCu;
            // 0x11c3c0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3bc) {
            ctx->pc = 0x11C3A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c3a4;
        }
    }
    ctx->pc = 0x11C3C4u;
label_11c3c4:
    // 0x11c3c4: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x11c3c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x11c3c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11c3cc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x11c3ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x11c3d0: 0x209782a  slt         $t7, $s0, $t1
    ctx->pc = 0x11c3d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11c3d4: 0x11e0ffee  beqz        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11C3D4u;
    {
        const bool branch_taken_0x11c3d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3D4u;
            // 0x11c3d8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3d4) {
            ctx->pc = 0x11C390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C3DCu;
label_11c3dc:
    // 0x11c3dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x11c3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c3e0:
    // 0x11c3e0: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x11c3e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c3e4: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11c3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11c3e8: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C3E8u;
    {
        const bool branch_taken_0x11c3e8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3E8u;
            // 0x11c3ec: 0xc5f400f0  lwc1        $f20, 0xF0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3e8) {
            ctx->pc = 0x11C454u;
            goto label_11c454;
        }
    }
    ctx->pc = 0x11C3F0u;
    // 0x11c3f0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11c3f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11c3f4: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x11c3f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3f8: 0x25cefe34  addiu       $t6, $t6, -0x1CC
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966836));
    // 0x11c3fc: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11c3fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c400: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x11c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11c404: 0x25ee00ec  addiu       $t6, $t7, 0xEC
    ctx->pc = 0x11c404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 236));
    // 0x11c408: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c408u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c40c: 0x25effe38  addiu       $t7, $t7, -0x1C8
    ctx->pc = 0x11c40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966840));
    // 0x11c410: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11c414:
    // 0x11c414: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x11c414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x11c418: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11c41c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c420: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11c420u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11c424: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11c428: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11c428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11c42c: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11c42cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c430: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11c430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11c434: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x11c434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11c438: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11c438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c43c: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x11c440: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x11c440u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11c444: 0x440f2800  mfc1        $t7, $f5
    ctx->pc = 0x11c444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11c448: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11c448u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11c44c: 0x1d80fff1  bgtz        $t4, . + 4 + (-0xF << 2)
    ctx->pc = 0x11C44Cu;
    {
        const bool branch_taken_0x11c44c = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x11C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C44Cu;
            // 0x11c450: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c44c) {
            ctx->pc = 0x11C414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c414;
        }
    }
    ctx->pc = 0x11C454u;
label_11c454:
    // 0x11c454: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c45c: 0xc04777c  jal         func_11DDF0
    ctx->pc = 0x11C45Cu;
    SET_GPR_U32(ctx, 31, 0x11C464u);
    ctx->pc = 0x11C460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C45Cu;
            // 0x11c460: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDF0u;
    if (runtime->hasFunction(0x11DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C464u; }
        if (ctx->pc != 0x11C464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDF0_0x11ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C464u; }
        if (ctx->pc != 0x11C464u) { return; }
    }
    ctx->pc = 0x11C464u;
label_11c464:
    // 0x11c464: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11c468: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11c468u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11c46c: 0x25cefe3c  addiu       $t6, $t6, -0x1C4
    ctx->pc = 0x11c46cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966844));
    // 0x11c470: 0xc5cc0000  lwc1        $f12, 0x0($t6)
    ctx->pc = 0x11c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11c474: 0xc047746  jal         func_11DD18
    ctx->pc = 0x11C474u;
    SET_GPR_U32(ctx, 31, 0x11C47Cu);
    ctx->pc = 0x11C478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C474u;
            // 0x11c478: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD18u;
    if (runtime->hasFunction(0x11DD18u)) {
        auto targetFn = runtime->lookupFunction(0x11DD18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C47Cu; }
        if (ctx->pc != 0x11C47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD18_0x11dd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C47Cu; }
        if (ctx->pc != 0x11C47Cu) { return; }
    }
    ctx->pc = 0x11C47Cu;
label_11c47c:
    // 0x11c47c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c480: 0x25effe40  addiu       $t7, $t7, -0x1C0
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966848));
    // 0x11c484: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c48c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11c48cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c490: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11c494: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x11c494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x11c498: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x11c498u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c49c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11c49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11c4a0: 0x1a60017c  blez        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4A0u;
            // 0x11c4a4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11CA94u;
            goto label_11ca94;
        }
    }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x29d6021  addu        $t4, $s4, $sp
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11c4ac: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c4b0: 0x8d8dfffc  lw          $t5, -0x4($t4)
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x11c4b4: 0x1f37823  subu        $t7, $t7, $s3
    ctx->pc = 0x11c4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x11c4b8: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c4bc: 0x1ed4807  srav        $t1, $t5, $t7
    ctx->pc = 0x11c4bcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x11c4c0: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x11c4c4: 0x1e97804  sllv        $t7, $t1, $t7
    ctx->pc = 0x11c4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 15) & 0x1F));
    // 0x11c4c8: 0x2e9b821  addu        $s7, $s7, $t1
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x11c4cc: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x11c4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11c4d0: 0xad8dfffc  sw          $t5, -0x4($t4)
    ctx->pc = 0x11c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 13));
    // 0x11c4d4: 0x1cdf007  srav        $fp, $t5, $t6
    ctx->pc = 0x11c4d4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 13), GPR_U32(ctx, 14) & 0x1F));
label_11c4d8:
    // 0x11c4d8: 0x5bc00025  blezl       $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x11C4D8u;
    {
        const bool branch_taken_0x11c4d8 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x11c4d8) {
            ctx->pc = 0x11C4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4D8u;
            // 0x11c4dc: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C570u;
            goto label_11c570;
        }
    }
    ctx->pc = 0x11C4E0u;
    // 0x11c4e0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11c4e4: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11C4E4u;
    {
        const bool branch_taken_0x11c4e4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11C4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4E4u;
            // 0x11c4e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4e4) {
            ctx->pc = 0x11C524u;
            goto label_11c524;
        }
    }
    ctx->pc = 0x11C4ECu;
    // 0x11c4ec: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c4f0: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x11c4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11c4f4: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11c4f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f8: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x11c4f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c4fc:
    // 0x11c4fc: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11c500: 0x15600004  bnez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C500u;
    {
        const bool branch_taken_0x11c500 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C500u;
            // 0x11c504: 0x14e7823  subu        $t7, $t2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c500) {
            ctx->pc = 0x11C514u;
            goto label_11c514;
        }
    }
    ctx->pc = 0x11C508u;
    // 0x11c508: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C508u;
    {
        const bool branch_taken_0x11c508 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C508u;
            // 0x11c50c: 0x12e7823  subu        $t7, $t1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c508) {
            ctx->pc = 0x11C518u;
            goto label_11c518;
        }
    }
    ctx->pc = 0x11C510u;
    // 0x11c510: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x11c510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c514:
    // 0x11c514: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11c514u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_11c518:
    // 0x11c518: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11c51c: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C51Cu;
    {
        const bool branch_taken_0x11c51c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C51Cu;
            // 0x11c520: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c51c) {
            ctx->pc = 0x11C4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C524u;
label_11c524:
    // 0x11c524: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C524u;
    {
        const bool branch_taken_0x11c524 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C524u;
            // 0x11c528: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c524) {
            ctx->pc = 0x11C540u;
            goto label_11c540;
        }
    }
    ctx->pc = 0x11C52Cu;
    // 0x11c52c: 0x526f0156  beql        $s3, $t7, . + 4 + (0x156 << 2)
    ctx->pc = 0x11C52Cu;
    {
        const bool branch_taken_0x11c52c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11c52c) {
            ctx->pc = 0x11C530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C52Cu;
            // 0x11c530: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CA88u;
            goto label_11ca88;
        }
    }
    ctx->pc = 0x11C534u;
    // 0x11c534: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11c534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c538: 0x526f014f  beql        $s3, $t7, . + 4 + (0x14F << 2)
    ctx->pc = 0x11C538u;
    {
        const bool branch_taken_0x11c538 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x11c538) {
            ctx->pc = 0x11C53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C538u;
            // 0x11c53c: 0x29d7021  addu        $t6, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CA78u;
            goto label_11ca78;
        }
    }
    ctx->pc = 0x11C540u;
label_11c540:
    // 0x11c540: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c544: 0x17cf000a  bne         $fp, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11C544u;
    {
        const bool branch_taken_0x11c544 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 15));
        ctx->pc = 0x11C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C544u;
            // 0x11c548: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c544) {
            ctx->pc = 0x11C570u;
            goto label_11c570;
        }
    }
    ctx->pc = 0x11C54Cu;
    // 0x11c54c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c550: 0x25effe48  addiu       $t7, $t7, -0x1B8
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966856));
    // 0x11c554: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x11c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11c558: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C558u;
    {
        const bool branch_taken_0x11c558 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C558u;
            // 0x11c55c: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c558) {
            ctx->pc = 0x11C570u;
            goto label_11c570;
        }
    }
    ctx->pc = 0x11C560u;
    // 0x11c560: 0xc04777c  jal         func_11DDF0
    ctx->pc = 0x11C560u;
    SET_GPR_U32(ctx, 31, 0x11C568u);
    ctx->pc = 0x11C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C560u;
            // 0x11c564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDF0u;
    if (runtime->hasFunction(0x11DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C568u; }
        if (ctx->pc != 0x11C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDF0_0x11ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C568u; }
        if (ctx->pc != 0x11C568u) { return; }
    }
    ctx->pc = 0x11C568u;
label_11c568:
    // 0x11c568: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x11c568u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11c56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11c570:
    // 0x11c570: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11c570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c574: 0x4500011c  bc1f        . + 4 + (0x11C << 2)
    ctx->pc = 0x11C574u;
    {
        const bool branch_taken_0x11c574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C574u;
            // 0x11c578: 0x2649ffff  addiu       $t1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c574) {
            ctx->pc = 0x11C9E8u;
            goto label_11c9e8;
        }
    }
    ctx->pc = 0x11C57Cu;
    // 0x11c57c: 0x130782a  slt         $t7, $t1, $s0
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11c580: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C580u;
            // 0x11c584: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C5B4u;
            goto label_11c5b4;
        }
    }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x97880  sll         $t7, $t1, 2
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11c58c: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x11c58cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c590: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11c590u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11c594:
    // 0x11c594: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x11c594u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11c598: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c59c: 0x130702a  slt         $t6, $t1, $s0
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11c5a0: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x11c5a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11c5a4: 0x0  nop
    ctx->pc = 0x11c5a4u;
    // NOP
    // 0x11c5a8: 0x11c0fffa  beqz        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C5A8u;
    {
        const bool branch_taken_0x11c5a8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5A8u;
            // 0x11c5ac: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5a8) {
            ctx->pc = 0x11C594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c594;
        }
    }
    ctx->pc = 0x11C5B0u;
    // 0x11c5b0: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x11c5b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_11c5b4:
    // 0x11c5b4: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
    ctx->pc = 0x11C5B4u;
    {
        const bool branch_taken_0x11c5b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5B4u;
            // 0x11c5b8: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5b4) {
            ctx->pc = 0x11C6B4u;
            goto label_11c6b4;
        }
    }
    ctx->pc = 0x11C5BCu;
    // 0x11c5bc: 0x260fffff  addiu       $t7, $s0, -0x1
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11c5c0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11c5c4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c5c8: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11c5cc: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11C5CCu;
    {
        const bool branch_taken_0x11c5cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5CCu;
            // 0x11c5d0: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5cc) {
            ctx->pc = 0x11C5FCu;
            goto label_11c5fc;
        }
    }
    ctx->pc = 0x11C5D4u;
    // 0x11c5d4: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11c5d8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c5dc: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x11c5dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
label_11c5e0:
    // 0x11c5e0: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11c5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11c5e4: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11c5e8: 0x0  nop
    ctx->pc = 0x11c5e8u;
    // NOP
    // 0x11c5ec: 0x0  nop
    ctx->pc = 0x11c5ecu;
    // NOP
    // 0x11c5f0: 0x0  nop
    ctx->pc = 0x11c5f0u;
    // NOP
    // 0x11c5f4: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C5F4u;
    {
        const bool branch_taken_0x11c5f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5F4u;
            // 0x11c5f8: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5f4) {
            ctx->pc = 0x11C5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c5e0;
        }
    }
    ctx->pc = 0x11C5FCu;
label_11c5fc:
    // 0x11c5fc: 0x24c3021  addu        $a2, $s2, $t4
    ctx->pc = 0x11c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x11c600: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11c604: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11c604u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11c608: 0x15e0ff75  bnez        $t7, . + 4 + (-0x8B << 2)
    ctx->pc = 0x11C608u;
    {
        const bool branch_taken_0x11c608 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C608u;
            // 0x11c60c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c608) {
            ctx->pc = 0x11C3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c3e0;
        }
    }
    ctx->pc = 0x11C610u;
    // 0x11c610: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x11c610u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11c614: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x11c614u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11c618: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11c618u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11c61c: 0x2a96821  addu        $t5, $s5, $t1
    ctx->pc = 0x11c61cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x11c620: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c620u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c624: 0x2296021  addu        $t4, $s1, $t1
    ctx->pc = 0x11c624u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x11c628: 0x25e80050  addiu       $t0, $t7, 0x50
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x11c62c: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x11c62cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x11c630: 0x8faf0148  lw          $t7, 0x148($sp)
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x11c634: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11c638: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11c638u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11c63c: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x11c640: 0x25ce00f0  addiu       $t6, $t6, 0xF0
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11c644: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11c648: 0x2a270000  slti        $a3, $s1, 0x0
    ctx->pc = 0x11c648u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_11c64c:
    // 0x11c64c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c650: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11c650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11c654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11c658: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x11C658u;
    {
        const bool branch_taken_0x11c658 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C658u;
            // 0x11c65c: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c658) {
            ctx->pc = 0x11C68Cu;
            goto label_11c68c;
        }
    }
    ctx->pc = 0x11C660u;
    // 0x11c660: 0x258b0050  addiu       $t3, $t4, 0x50
    ctx->pc = 0x11c660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x11c664: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x11c664u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c668: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x11c668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11c66c:
    // 0x11c66c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c670: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11c670u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11c674: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c678: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x11c67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c680: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x11c684: 0x1540fff9  bnez        $t2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C684u;
    {
        const bool branch_taken_0x11c684 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C684u;
            // 0x11c688: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c684) {
            ctx->pc = 0x11C66Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c66c;
        }
    }
    ctx->pc = 0x11C68Cu;
label_11c68c:
    // 0x11c68c: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x11c68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11c690: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11c694: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11c694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11c698: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11c69c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x11c6a0: 0xc9782a  slt         $t7, $a2, $t1
    ctx->pc = 0x11c6a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11c6a4: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11C6A4u;
    {
        const bool branch_taken_0x11c6a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6A4u;
            // 0x11c6a8: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6a4) {
            ctx->pc = 0x11C64Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c64c;
        }
    }
    ctx->pc = 0x11C6ACu;
    // 0x11c6ac: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x11C6ACu;
    {
        const bool branch_taken_0x11c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6ACu;
            // 0x11c6b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6ac) {
            ctx->pc = 0x11C3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c3e0;
        }
    }
    ctx->pc = 0x11C6B4u;
label_11c6b4:
    // 0x11c6b4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x11c6b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11c6b8: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x11C6B8u;
    {
        const bool branch_taken_0x11c6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6B8u;
            // 0x11c6bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6b8) {
            ctx->pc = 0x11C9ECu;
            goto label_11c9ec;
        }
    }
    ctx->pc = 0x11C6C0u;
    // 0x11c6c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11c6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11c6c4: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c6c8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c6cc: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11c6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11c6d0: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C6D0u;
    {
        const bool branch_taken_0x11c6d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6D0u;
            // 0x11c6d4: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d0) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6D8u;
    // 0x11c6d8: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x11c6d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_11c6dc:
    // 0x11c6dc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11c6dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11c6e0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11c6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11c6e4: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11c6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11c6e8: 0x0  nop
    ctx->pc = 0x11c6e8u;
    // NOP
    // 0x11c6ec: 0x0  nop
    ctx->pc = 0x11c6ecu;
    // NOP
    // 0x11c6f0: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C6F0u;
    {
        const bool branch_taken_0x11c6f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6F0u;
            // 0x11c6f4: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6f0) {
            ctx->pc = 0x11C6DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c6dc;
        }
    }
    ctx->pc = 0x11C6F8u;
label_11c6f8:
    // 0x11c6f8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11c6fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c700: 0x25cefe48  addiu       $t6, $t6, -0x1B8
    ctx->pc = 0x11c700u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966856));
    // 0x11c704: 0xc04777c  jal         func_11DDF0
    ctx->pc = 0x11C704u;
    SET_GPR_U32(ctx, 31, 0x11C70Cu);
    ctx->pc = 0x11C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C704u;
            // 0x11c708: 0xc5cc0000  lwc1        $f12, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDF0u;
    if (runtime->hasFunction(0x11DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C70Cu; }
        if (ctx->pc != 0x11C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDF0_0x11ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C70Cu; }
        if (ctx->pc != 0x11C70Cu) { return; }
    }
    ctx->pc = 0x11C70Cu;
label_11c70c:
    // 0x11c70c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11c70cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x11c710: 0x640002f  bltz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x11C710u;
    {
        const bool branch_taken_0x11c710 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C710u;
            // 0x11c714: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c710) {
            ctx->pc = 0x11C7D0u;
            goto label_11c7d0;
        }
    }
    ctx->pc = 0x11C718u;
    // 0x11c718: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11c718u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11c71c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c71cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c720: 0x25cefe34  addiu       $t6, $t6, -0x1CC
    ctx->pc = 0x11c720u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966836));
    // 0x11c724: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c728: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11c72c:
    // 0x11c72c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c730: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11c734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11c738: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11c738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11c73c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11c73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11c740: 0xe5e000f0  swc1        $f0, 0xF0($t7)
    ctx->pc = 0x11c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 240), bits); }
    // 0x11c744: 0x521fff9  bgez        $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C744u;
    {
        const bool branch_taken_0x11c744 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C744u;
            // 0x11c748: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c744) {
            ctx->pc = 0x11C72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c72c;
        }
    }
    ctx->pc = 0x11C74Cu;
    // 0x11c74c: 0x6400020  bltz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C74Cu;
    {
        const bool branch_taken_0x11c74c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11C750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C74Cu;
            // 0x11c750: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c74c) {
            ctx->pc = 0x11C7D0u;
            goto label_11c7d0;
        }
    }
    ctx->pc = 0x11C754u;
    // 0x11c754: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11c754u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c758: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c75c: 0x25e6fdf8  addiu       $a2, $t7, -0x208
    ctx->pc = 0x11c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966776));
    // 0x11c760: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11c760u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
label_11c764:
    // 0x11c764: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11c764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c768: 0x8faf014c  lw          $t7, 0x14C($sp)
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11c76c: 0x15e0009c  bnez        $t7, . + 4 + (0x9C << 2)
    ctx->pc = 0x11C76Cu;
    {
        const bool branch_taken_0x11c76c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C76Cu;
            // 0x11c770: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c76c) {
            ctx->pc = 0x11C9E0u;
            goto label_11c9e0;
        }
    }
    ctx->pc = 0x11C774u;
    // 0x11c774: 0x2494023  subu        $t0, $s2, $t1
    ctx->pc = 0x11c774u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x11c778: 0x500000f  bltz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x11C778u;
    {
        const bool branch_taken_0x11c778 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x11C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C778u;
            // 0x11c77c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c778) {
            ctx->pc = 0x11C7B8u;
            goto label_11c7b8;
        }
    }
    ctx->pc = 0x11C780u;
    // 0x11c780: 0x25cb00f0  addiu       $t3, $t6, 0xF0
    ctx->pc = 0x11c780u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
    // 0x11c784: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x11c784u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c788: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11c78c:
    // 0x11c78c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x11c78cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x11c790: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x11c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c794: 0xec502a  slt         $t2, $a3, $t4
    ctx->pc = 0x11c794u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11c798: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x11c798u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x11c79c: 0x20c782a  slt         $t7, $s0, $t4
    ctx->pc = 0x11c79cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11c7a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c7a4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x11c7a8: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C7A8u;
    {
        const bool branch_taken_0x11c7a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7A8u;
            // 0x11c7ac: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7a8) {
            ctx->pc = 0x11C7B8u;
            goto label_11c7b8;
        }
    }
    ctx->pc = 0x11C7B0u;
    // 0x11c7b0: 0x5140fff6  beql        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x11C7B0u;
    {
        const bool branch_taken_0x11c7b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7b0) {
            ctx->pc = 0x11C7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7B0u;
            // 0x11c7b4: 0xc5a00000  lwc1        $f0, 0x0($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C78Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c78c;
        }
    }
    ctx->pc = 0x11C7B8u;
label_11c7b8:
    // 0x11c7b8: 0x87880  sll         $t7, $t0, 2
    ctx->pc = 0x11c7b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11c7bc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11c7bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11c7c0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c7c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c7c8: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7C8u;
            // 0x11c7cc: 0xe5e200a0  swc1        $f2, 0xA0($t7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11C764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c764;
        }
    }
    ctx->pc = 0x11C7D0u;
label_11c7d0:
    // 0x11c7d0: 0x8fae0144  lw          $t6, 0x144($sp)
    ctx->pc = 0x11c7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11c7d4: 0x29cf0003  slti        $t7, $t6, 0x3
    ctx->pc = 0x11c7d4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11c7d8: 0x51e00042  beql        $t7, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x11C7D8u;
    {
        const bool branch_taken_0x11c7d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7d8) {
            ctx->pc = 0x11C7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7D8u;
            // 0x11c7dc: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C8E4u;
            goto label_11c8e4;
        }
    }
    ctx->pc = 0x11C7E0u;
    // 0x11c7e0: 0x5dc00021  bgtzl       $t6, . + 4 + (0x21 << 2)
    ctx->pc = 0x11C7E0u;
    {
        const bool branch_taken_0x11c7e0 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x11c7e0) {
            ctx->pc = 0x11C7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7E0u;
            // 0x11c7e4: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C868u;
            goto label_11c868;
        }
    }
    ctx->pc = 0x11C7E8u;
    // 0x11c7e8: 0x51c0000f  beql        $t6, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C7E8u;
            // 0x11c7ec: 0x44801000  mtc1        $zero, $f2 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C828u;
            goto label_11c828;
        }
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x32e20007  andi        $v0, $s7, 0x7
    ctx->pc = 0x11c7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
label_11c7f4:
    // 0x11c7f4: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11c7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11c7f8: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11c7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11c7fc: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11c800: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11c800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11c804: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11c804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11c808: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11c808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11c80c: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11c810: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11c810u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11c814: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x11c814u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11c818: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x11c818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x11c81c: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x11c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c820: 0x3e00008  jr          $ra
    ctx->pc = 0x11C820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C820u;
            // 0x11c824: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C828u;
label_11c828:
    // 0x11c828: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C828u;
    {
        const bool branch_taken_0x11c828 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C828u;
            // 0x11c82c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c828) {
            ctx->pc = 0x11C850u;
            goto label_11c850;
        }
    }
    ctx->pc = 0x11C830u;
    // 0x11c830: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c834: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c838: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11c83c:
    // 0x11c83c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c840: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c844: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11c844u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11c848: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11C848u;
    {
        const bool branch_taken_0x11c848 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11C84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C848u;
            // 0x11c84c: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c848) {
            ctx->pc = 0x11C83Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c83c;
        }
    }
    ctx->pc = 0x11C850u;
label_11c850:
    // 0x11c850: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C850u;
    {
        const bool branch_taken_0x11c850 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C850u;
            // 0x11c854: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c850) {
            ctx->pc = 0x11C85Cu;
            goto label_11c85c;
        }
    }
    ctx->pc = 0x11C858u;
    // 0x11c858: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11c858u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11c85c:
    // 0x11c85c: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11c860: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11C860u;
    {
        const bool branch_taken_0x11c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C860u;
            // 0x11c864: 0xe5e00000  swc1        $f0, 0x0($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c860) {
            ctx->pc = 0x11C7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C868u;
label_11c868:
    // 0x11c868: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C868u;
    {
        const bool branch_taken_0x11c868 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C868u;
            // 0x11c86c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c868) {
            ctx->pc = 0x11C890u;
            goto label_11c890;
        }
    }
    ctx->pc = 0x11C870u;
    // 0x11c870: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c870u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c874: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c874u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c878: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x11c878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11c87c:
    // 0x11c87c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c880: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c884: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11c884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11c888: 0x521fffc  bgez        $t1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11C888u;
    {
        const bool branch_taken_0x11c888 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x11C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C888u;
            // 0x11c88c: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c888) {
            ctx->pc = 0x11C87Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c87c;
        }
    }
    ctx->pc = 0x11C890u;
label_11c890:
    // 0x11c890: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C890u;
    {
        const bool branch_taken_0x11c890 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C890u;
            // 0x11c894: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c890) {
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C898u;
    // 0x11c898: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11c898u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11c89c:
    // 0x11c89c: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11c89cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11c8a0: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11c8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11c8a4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c8a8: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C8A8u;
    {
        const bool branch_taken_0x11c8a8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11C8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8A8u;
            // 0x11c8ac: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8a8) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C8B0u;
    // 0x11c8b0: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x11c8b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8b4: 0x27ad00a4  addiu       $t5, $sp, 0xA4
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_11c8b8:
    // 0x11c8b8: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c8bc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x11c8bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x11c8c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11c8c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11c8c4: 0x15c0fffc  bnez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11C8C4u;
    {
        const bool branch_taken_0x11c8c4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8C4u;
            // 0x11c8c8: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8c4) {
            ctx->pc = 0x11C8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c8b8;
        }
    }
    ctx->pc = 0x11C8CCu;
label_11c8cc:
    // 0x11c8cc: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C8CCu;
    {
        const bool branch_taken_0x11c8cc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8CCu;
            // 0x11c8d0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8cc) {
            ctx->pc = 0x11C8D8u;
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8D4u;
    // 0x11c8d4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x11c8d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_11c8d8:
    // 0x11c8d8: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_11c8dc:
    // 0x11c8dc: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x11C8DCu;
    {
        const bool branch_taken_0x11c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8DCu;
            // 0x11c8e0: 0xe5e00004  swc1        $f0, 0x4($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8dc) {
            ctx->pc = 0x11C7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C8E4u;
label_11c8e4:
    // 0x11c8e4: 0x15cfffc3  bne         $t6, $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x11C8E4u;
    {
        const bool branch_taken_0x11c8e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x11C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8E4u;
            // 0x11c8e8: 0x32e20007  andi        $v0, $s7, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8e4) {
            ctx->pc = 0x11C7F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c7f4;
        }
    }
    ctx->pc = 0x11C8ECu;
    // 0x11c8ec: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11C8ECu;
    {
        const bool branch_taken_0x11c8ec = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11C8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C8ECu;
            // 0x11c8f0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8ec) {
            ctx->pc = 0x11C924u;
            goto label_11c924;
        }
    }
    ctx->pc = 0x11C8F4u;
    // 0x11c8f4: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c8f8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11c8fc:
    // 0x11c8fc: 0xc5e0009c  lwc1        $f0, 0x9C($t7)
    ctx->pc = 0x11c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c900: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c904: 0xc5e100a0  lwc1        $f1, 0xA0($t7)
    ctx->pc = 0x11c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c908: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x11c908u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c90c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11c90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11c910: 0xe5e2009c  swc1        $f2, 0x9C($t7)
    ctx->pc = 0x11c910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 156), bits); }
    // 0x11c914: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11c914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11c918: 0xe5e100a0  swc1        $f1, 0xA0($t7)
    ctx->pc = 0x11c918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 160), bits); }
    // 0x11c91c: 0x1d20fff7  bgtz        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C91Cu;
    {
        const bool branch_taken_0x11c91c = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x11C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C91Cu;
            // 0x11c920: 0x25effffc  addiu       $t7, $t7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c91c) {
            ctx->pc = 0x11C8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c8fc;
        }
    }
    ctx->pc = 0x11C924u;
label_11c924:
    // 0x11c924: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11c924u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c928: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11C928u;
    {
        const bool branch_taken_0x11c928 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C928u;
            // 0x11c92c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c928) {
            ctx->pc = 0x11C964u;
            goto label_11c964;
        }
    }
    ctx->pc = 0x11C930u;
    // 0x11c930: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c930u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c934: 0x1fd6021  addu        $t4, $t7, $sp
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11c938:
    // 0x11c938: 0xc581009c  lwc1        $f1, 0x9C($t4)
    ctx->pc = 0x11c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c93c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c940: 0xc58000a0  lwc1        $f0, 0xA0($t4)
    ctx->pc = 0x11c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c944: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c948: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x11c948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11c94c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11c94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11c950: 0xe582009c  swc1        $f2, 0x9C($t4)
    ctx->pc = 0x11c950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 156), bits); }
    // 0x11c954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11c954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11c958: 0xe58000a0  swc1        $f0, 0xA0($t4)
    ctx->pc = 0x11c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 160), bits); }
    // 0x11c95c: 0x11e0fff6  beqz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x11C95Cu;
    {
        const bool branch_taken_0x11c95c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C95Cu;
            // 0x11c960: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c95c) {
            ctx->pc = 0x11C938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c938;
        }
    }
    ctx->pc = 0x11C964u;
label_11c964:
    // 0x11c964: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11c964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c968: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x11c968u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c96c: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11C96Cu;
    {
        const bool branch_taken_0x11c96c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C96Cu;
            // 0x11c970: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c96c) {
            ctx->pc = 0x11C998u;
            goto label_11c998;
        }
    }
    ctx->pc = 0x11C974u;
    // 0x11c974: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c978: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c97c: 0x25ec00a0  addiu       $t4, $t7, 0xA0
    ctx->pc = 0x11c97cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_11c980:
    // 0x11c980: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x11c980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c984: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11c984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11c988: 0x292f0002  slti        $t7, $t1, 0x2
    ctx->pc = 0x11c988u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c98c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11c98cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11c990: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11C990u;
    {
        const bool branch_taken_0x11c990 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C990u;
            // 0x11c994: 0x258cfffc  addiu       $t4, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c990) {
            ctx->pc = 0x11C980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c980;
        }
    }
    ctx->pc = 0x11C998u;
label_11c998:
    // 0x11c998: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C998u;
    {
        const bool branch_taken_0x11c998 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C998u;
            // 0x11c99c: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c998) {
            ctx->pc = 0x11C9BCu;
            goto label_11c9bc;
        }
    }
    ctx->pc = 0x11C9A0u;
    // 0x11c9a0: 0x8fae0140  lw          $t6, 0x140($sp)
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11c9a4: 0xe5c20008  swc1        $f2, 0x8($t6)
    ctx->pc = 0x11c9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x11c9a8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c9ac: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x11c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x11c9b0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x11c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c9b4: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x11C9B4u;
    {
        const bool branch_taken_0x11c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9B4u;
            // 0x11c9b8: 0xe5c10004  swc1        $f1, 0x4($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9b4) {
            ctx->pc = 0x11C7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C9BCu;
label_11c9bc:
    // 0x11c9bc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x11c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c9c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11c9c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11c9c4: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x11c9c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11c9c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11c9c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11c9cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11c9ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11c9d0: 0xe5e20008  swc1        $f2, 0x8($t7)
    ctx->pc = 0x11c9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x11c9d4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x11C9D4u;
    {
        const bool branch_taken_0x11c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9D4u;
            // 0x11c9d8: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9d4) {
            ctx->pc = 0x11C8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c8dc;
        }
    }
    ctx->pc = 0x11C9DCu;
    // 0x11c9dc: 0x0  nop
    ctx->pc = 0x11c9dcu;
    // NOP
label_11c9e0:
    // 0x11c9e0: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x11C9E0u;
    {
        const bool branch_taken_0x11c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9E0u;
            // 0x11c9e4: 0x2494023  subu        $t0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9e0) {
            ctx->pc = 0x11C7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c7b8;
        }
    }
    ctx->pc = 0x11C9E8u;
label_11c9e8:
    // 0x11c9e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c9e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11c9ec:
    // 0x11c9ec: 0xc04777c  jal         func_11DDF0
    ctx->pc = 0x11C9ECu;
    SET_GPR_U32(ctx, 31, 0x11C9F4u);
    ctx->pc = 0x11C9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C9ECu;
            // 0x11c9f0: 0x132023  negu        $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DDF0u;
    if (runtime->hasFunction(0x11DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x11DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9F4u; }
        if (ctx->pc != 0x11C9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DDF0_0x11ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9F4u; }
        if (ctx->pc != 0x11C9F4u) { return; }
    }
    ctx->pc = 0x11C9F4u;
label_11c9f4:
    // 0x11c9f4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11c9f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11c9f8: 0x25cefe38  addiu       $t6, $t6, -0x1C8
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966840));
    // 0x11c9fc: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ca00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ca04: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x11CA04u;
    {
        const bool branch_taken_0x11ca04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA04u;
            // 0x11ca08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca04) {
            ctx->pc = 0x11CA64u;
            goto label_11ca64;
        }
    }
    ctx->pc = 0x11CA0Cu;
    // 0x11ca0c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11ca0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11ca10: 0x29d6821  addu        $t5, $s4, $sp
    ctx->pc = 0x11ca10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11ca14: 0x25effe34  addiu       $t7, $t7, -0x1CC
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966836));
    // 0x11ca18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11ca18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11ca1c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ca20: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11ca24: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11ca24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11ca28: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11ca2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11ca2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11ca30: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ca30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11ca34: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11ca34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ca38: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11ca38u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ca3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ca3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ca40: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x11ca40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11ca44: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11ca44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11ca48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ca48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ca4c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ca4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11ca50: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x11ca50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ca54: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x11ca58: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11ca58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ca5c: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x11CA5Cu;
    {
        const bool branch_taken_0x11ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA5Cu;
            // 0x11ca60: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca5c) {
            ctx->pc = 0x11C6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11CA64u;
label_11ca64:
    // 0x11ca64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ca64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11ca68: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11ca68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11ca6c: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11ca6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11ca70: 0x1000ff21  b           . + 4 + (-0xDF << 2)
    ctx->pc = 0x11CA70u;
    {
        const bool branch_taken_0x11ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA70u;
            // 0x11ca74: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca70) {
            ctx->pc = 0x11C6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11CA78u;
label_11ca78:
    // 0x11ca78: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11ca7c: 0x31ef003f  andi        $t7, $t7, 0x3F
    ctx->pc = 0x11ca7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
label_11ca80:
    // 0x11ca80: 0x1000feaf  b           . + 4 + (-0x151 << 2)
    ctx->pc = 0x11CA80u;
    {
        const bool branch_taken_0x11ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA80u;
            // 0x11ca84: 0xadcffffc  sw          $t7, -0x4($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294967292), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca80) {
            ctx->pc = 0x11C540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c540;
        }
    }
    ctx->pc = 0x11CA88u;
label_11ca88:
    // 0x11ca88: 0x8dcffffc  lw          $t7, -0x4($t6)
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x11ca8c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11CA8Cu;
    {
        const bool branch_taken_0x11ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA8Cu;
            // 0x11ca90: 0x31ef007f  andi        $t7, $t7, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca8c) {
            ctx->pc = 0x11CA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ca80;
        }
    }
    ctx->pc = 0x11CA94u;
label_11ca94:
    // 0x11ca94: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CA94u;
    {
        const bool branch_taken_0x11ca94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA94u;
            // 0x11ca98: 0x3c0e0063  lui         $t6, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca94) {
            ctx->pc = 0x11CAACu;
            goto label_11caac;
        }
    }
    ctx->pc = 0x11CA9Cu;
    // 0x11ca9c: 0x29d7821  addu        $t7, $s4, $sp
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x11caa0: 0x8deefffc  lw          $t6, -0x4($t7)
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11caa4: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x11CAA4u;
    {
        const bool branch_taken_0x11caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAA4u;
            // 0x11caa8: 0xef203  sra         $fp, $t6, 8 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caa4) {
            ctx->pc = 0x11C4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c4d8;
        }
    }
    ctx->pc = 0x11CAACu;
label_11caac:
    // 0x11caac: 0x25cefe44  addiu       $t6, $t6, -0x1BC
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966852));
    // 0x11cab0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cab4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11cab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cab8: 0x4503fe87  bc1tl       . + 4 + (-0x179 << 2)
    ctx->pc = 0x11CAB8u;
    {
        const bool branch_taken_0x11cab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11cab8) {
            ctx->pc = 0x11CABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAB8u;
            // 0x11cabc: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c4d8;
        }
    }
    ctx->pc = 0x11CAC0u;
    // 0x11cac0: 0x1000fe85  b           . + 4 + (-0x17B << 2)
    ctx->pc = 0x11CAC0u;
    {
        const bool branch_taken_0x11cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cac0) {
            ctx->pc = 0x11C4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c4d8;
        }
    }
    ctx->pc = 0x11CAC8u;
}

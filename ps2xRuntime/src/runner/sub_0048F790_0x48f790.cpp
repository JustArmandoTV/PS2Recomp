#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048F790
// Address: 0x48f790 - 0x48fae0
void sub_0048F790_0x48f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F790_0x48f790");
#endif

    switch (ctx->pc) {
        case 0x48f7bcu: goto label_48f7bc;
        case 0x48f800u: goto label_48f800;
        case 0x48f870u: goto label_48f870;
        case 0x48f8f0u: goto label_48f8f0;
        case 0x48f960u: goto label_48f960;
        case 0x48fa1cu: goto label_48fa1c;
        case 0x48fa24u: goto label_48fa24;
        case 0x48fa84u: goto label_48fa84;
        case 0x48fa8cu: goto label_48fa8c;
        default: break;
    }

    ctx->pc = 0x48f790u;

    // 0x48f790: 0x248a0020  addiu       $t2, $a0, 0x20
    ctx->pc = 0x48f790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x48f794: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48f794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48f798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48f79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f7a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x48f7a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48f7a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x48f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48f7a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48f7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48f7ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x48f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48f7b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x48f7b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48f7b4: 0x0  nop
    ctx->pc = 0x48f7b4u;
    // NOP
    // 0x48f7b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48f7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48f7bc:
    // 0x48f7bc: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x48f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48f7c0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x48f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x48f7c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x48f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48f7c8: 0x10a40041  beq         $a1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x48F7C8u;
    {
        const bool branch_taken_0x48f7c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x48f7c8) {
            ctx->pc = 0x48F8D0u;
            goto label_48f8d0;
        }
    }
    ctx->pc = 0x48F7D0u;
    // 0x48f7d0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48F7D0u;
    {
        const bool branch_taken_0x48f7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48f7d0) {
            ctx->pc = 0x48F7E0u;
            goto label_48f7e0;
        }
    }
    ctx->pc = 0x48F7D8u;
    // 0x48f7d8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x48F7D8u;
    {
        const bool branch_taken_0x48f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f7d8) {
            ctx->pc = 0x48F9C0u;
            goto label_48f9c0;
        }
    }
    ctx->pc = 0x48F7E0u;
label_48f7e0:
    // 0x48f7e0: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x48f7e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x48f7e4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x48F7E4u;
    {
        const bool branch_taken_0x48f7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f7e4) {
            ctx->pc = 0x48F858u;
            goto label_48f858;
        }
    }
    ctx->pc = 0x48F7ECu;
    // 0x48f7ec: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x48f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x48f7f0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48f7f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f7f4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x48f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x48f7f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x48f7f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f7fc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x48f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48f800:
    // 0x48f800: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x48f800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x48f804: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x48f804u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x48f808: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f80c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x48f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x48f810: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f814: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48f814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48f818: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x48f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x48f81c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x48f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x48f820: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f824: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x48f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x48f828: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f82c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48f830: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x48f830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x48f834: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x48f834u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48f838: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x48f838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x48f83c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f840: 0x1a5282b  sltu        $a1, $t5, $a1
    ctx->pc = 0x48f840u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48f844: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48F844u;
    {
        const bool branch_taken_0x48f844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F844u;
            // 0x48f848: 0x256b0014  addiu       $t3, $t3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f844) {
            ctx->pc = 0x48F800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f800;
        }
    }
    ctx->pc = 0x48F84Cu;
    // 0x48f84c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48F84Cu;
    {
        const bool branch_taken_0x48f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f84c) {
            ctx->pc = 0x48F8C0u;
            goto label_48f8c0;
        }
    }
    ctx->pc = 0x48F854u;
    // 0x48f854: 0x0  nop
    ctx->pc = 0x48f854u;
    // NOP
label_48f858:
    // 0x48f858: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x48f858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x48f85c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x48f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x48f860: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x48f860u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f864: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48f864u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f868: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x48f868u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48f86c: 0x0  nop
    ctx->pc = 0x48f86cu;
    // NOP
label_48f870:
    // 0x48f870: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x48f870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x48f874: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x48f874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x48f878: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f87c: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f880: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f884: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48f884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48f888: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x48f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x48f88c: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x48f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x48f890: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f894: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f898: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f89c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48f8a0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x48f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x48f8a4: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x48f8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48f8a8: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x48f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x48f8ac: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f8b0: 0x165282b  sltu        $a1, $t3, $a1
    ctx->pc = 0x48f8b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48f8b4: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48F8B4u;
    {
        const bool branch_taken_0x48f8b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F8B4u;
            // 0x48f8b8: 0x25ad000c  addiu       $t5, $t5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f8b4) {
            ctx->pc = 0x48F870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f870;
        }
    }
    ctx->pc = 0x48F8BCu;
    // 0x48f8bc: 0x0  nop
    ctx->pc = 0x48f8bcu;
    // NOP
label_48f8c0:
    // 0x48f8c0: 0x1872821  addu        $a1, $t4, $a3
    ctx->pc = 0x48f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x48f8c4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f8c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x48F8C8u;
    {
        const bool branch_taken_0x48f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F8C8u;
            // 0x48f8cc: 0x1054021  addu        $t0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f8c8) {
            ctx->pc = 0x48F9C0u;
            goto label_48f9c0;
        }
    }
    ctx->pc = 0x48F8D0u;
label_48f8d0:
    // 0x48f8d0: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x48f8d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x48f8d4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x48F8D4u;
    {
        const bool branch_taken_0x48f8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f8d4) {
            ctx->pc = 0x48F948u;
            goto label_48f948;
        }
    }
    ctx->pc = 0x48F8DCu;
    // 0x48f8dc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x48f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x48f8e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x48f8e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f8e4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x48f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x48f8e8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48f8e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f8ec: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x48f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48f8f0:
    // 0x48f8f0: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x48f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x48f8f4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x48f8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x48f8f8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f8fc: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f900: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f904: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48f904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48f908: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x48f908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x48f90c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x48f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x48f910: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f914: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f918: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f91c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48f920: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x48f920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x48f924: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x48f924u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48f928: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x48f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x48f92c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f930: 0x165282b  sltu        $a1, $t3, $a1
    ctx->pc = 0x48f930u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48f934: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48F934u;
    {
        const bool branch_taken_0x48f934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F934u;
            // 0x48f938: 0x25ad0014  addiu       $t5, $t5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f934) {
            ctx->pc = 0x48F8F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f8f0;
        }
    }
    ctx->pc = 0x48F93Cu;
    // 0x48f93c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48F93Cu;
    {
        const bool branch_taken_0x48f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f93c) {
            ctx->pc = 0x48F9B0u;
            goto label_48f9b0;
        }
    }
    ctx->pc = 0x48F944u;
    // 0x48f944: 0x0  nop
    ctx->pc = 0x48f944u;
    // NOP
label_48f948:
    // 0x48f948: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x48f948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x48f94c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x48f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x48f950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x48f950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f954: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x48f954u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f958: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x48f958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48f95c: 0x0  nop
    ctx->pc = 0x48f95cu;
    // NOP
label_48f960:
    // 0x48f960: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x48f960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x48f964: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x48f964u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x48f968: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f96c: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f970: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f974: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48f974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48f978: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x48f978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x48f97c: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x48f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x48f980: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x48f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x48f984: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x48f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x48f988: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48f98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48f98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48f990: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x48f990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x48f994: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x48f994u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x48f998: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x48f998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x48f99c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f9a0: 0x165282b  sltu        $a1, $t3, $a1
    ctx->pc = 0x48f9a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48f9a4: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48F9A4u;
    {
        const bool branch_taken_0x48f9a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F9A4u;
            // 0x48f9a8: 0x25ad000c  addiu       $t5, $t5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f9a4) {
            ctx->pc = 0x48F960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f960;
        }
    }
    ctx->pc = 0x48F9ACu;
    // 0x48f9ac: 0x0  nop
    ctx->pc = 0x48f9acu;
    // NOP
label_48f9b0:
    // 0x48f9b0: 0x1872821  addu        $a1, $t4, $a3
    ctx->pc = 0x48f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x48f9b4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x48f9b8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x48f9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x48f9bc: 0x0  nop
    ctx->pc = 0x48f9bcu;
    // NOP
label_48f9c0:
    // 0x48f9c0: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x48f9c0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48f9c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x48f9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x48f9c8: 0x125282b  sltu        $a1, $t1, $a1
    ctx->pc = 0x48f9c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x48f9cc: 0x14a0ff7b  bnez        $a1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x48F9CCu;
    {
        const bool branch_taken_0x48f9cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F9CCu;
            // 0x48f9d0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f9cc) {
            ctx->pc = 0x48F7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48f7bc;
        }
    }
    ctx->pc = 0x48F9D4u;
    // 0x48f9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x48F9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48F9DCu;
    // 0x48f9dc: 0x0  nop
    ctx->pc = 0x48f9dcu;
    // NOP
    // 0x48f9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48f9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48f9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48f9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48f9ec: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x48f9ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x48f9f0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x48F9F0u;
    {
        const bool branch_taken_0x48f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48F9F0u;
            // 0x48f9f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f9f0) {
            ctx->pc = 0x48FA60u;
            goto label_48fa60;
        }
    }
    ctx->pc = 0x48F9F8u;
    // 0x48f9f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48f9fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x48f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x48fa00: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x48fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48fa04: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x48fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x48fa08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48fa0c: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x48fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x48fa10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48fa14: 0xc04a508  jal         func_129420
    ctx->pc = 0x48FA14u;
    SET_GPR_U32(ctx, 31, 0x48FA1Cu);
    ctx->pc = 0x48FA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FA14u;
            // 0x48fa18: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FA1Cu; }
        if (ctx->pc != 0x48FA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FA1Cu; }
        if (ctx->pc != 0x48FA1Cu) { return; }
    }
    ctx->pc = 0x48FA1Cu;
label_48fa1c:
    // 0x48fa1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48fa1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fa20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48fa24:
    // 0x48fa24: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x48fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48fa28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x48fa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48fa2c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x48fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x48fa30: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fa34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x48fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x48fa38: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x48fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x48fa3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x48fa40: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48fa44: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x48fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x48fa48: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x48fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x48fa4c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x48fa4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48fa50: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x48FA50u;
    {
        const bool branch_taken_0x48fa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FA50u;
            // 0x48fa54: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fa50) {
            ctx->pc = 0x48FA24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48fa24;
        }
    }
    ctx->pc = 0x48FA58u;
    // 0x48fa58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x48FA58u;
    {
        const bool branch_taken_0x48fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fa58) {
            ctx->pc = 0x48FAC0u;
            goto label_48fac0;
        }
    }
    ctx->pc = 0x48FA60u;
label_48fa60:
    // 0x48fa60: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x48fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48fa64: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x48fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x48fa68: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x48fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48fa6c: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x48fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x48fa70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x48fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x48fa74: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x48fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x48fa78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48fa7c: 0xc04a508  jal         func_129420
    ctx->pc = 0x48FA7Cu;
    SET_GPR_U32(ctx, 31, 0x48FA84u);
    ctx->pc = 0x48FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FA7Cu;
            // 0x48fa80: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FA84u; }
        if (ctx->pc != 0x48FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FA84u; }
        if (ctx->pc != 0x48FA84u) { return; }
    }
    ctx->pc = 0x48FA84u;
label_48fa84:
    // 0x48fa84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48fa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fa88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48fa8c:
    // 0x48fa8c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x48fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x48fa90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x48fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48fa94: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x48fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x48fa98: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x48fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x48fa9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x48fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x48faa0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48faa4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x48faa8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x48faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48faac: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x48faacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x48fab0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x48fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x48fab4: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x48fab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48fab8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x48FAB8u;
    {
        const bool branch_taken_0x48fab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FAB8u;
            // 0x48fabc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fab8) {
            ctx->pc = 0x48FA8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48fa8c;
        }
    }
    ctx->pc = 0x48FAC0u;
label_48fac0:
    // 0x48fac0: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x48fac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x48fac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48facc: 0x3e00008  jr          $ra
    ctx->pc = 0x48FACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FACCu;
            // 0x48fad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48FAD4u;
    // 0x48fad4: 0x0  nop
    ctx->pc = 0x48fad4u;
    // NOP
    // 0x48fad8: 0x0  nop
    ctx->pc = 0x48fad8u;
    // NOP
    // 0x48fadc: 0x0  nop
    ctx->pc = 0x48fadcu;
    // NOP
}

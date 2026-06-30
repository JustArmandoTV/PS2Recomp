#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037F3E0
// Address: 0x37f3e0 - 0x37f550
void sub_0037F3E0_0x37f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F3E0_0x37f3e0");
#endif

    switch (ctx->pc) {
        case 0x37f464u: goto label_37f464;
        case 0x37f498u: goto label_37f498;
        case 0x37f524u: goto label_37f524;
        default: break;
    }

    ctx->pc = 0x37f3e0u;

    // 0x37f3e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37f3e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37f3e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x37f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x37f3ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37f3f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37f3f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37f3f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37f3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f3fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37f400: 0x241303e8  addiu       $s3, $zero, 0x3E8
    ctx->pc = 0x37f400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x37f404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37f408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37f40c: 0x8c9100dc  lw          $s1, 0xDC($a0)
    ctx->pc = 0x37f40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x37f410: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37F410u;
    {
        const bool branch_taken_0x37f410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F410u;
            // 0x37f414: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f410) {
            ctx->pc = 0x37F440u;
            goto label_37f440;
        }
    }
    ctx->pc = 0x37F418u;
    // 0x37f418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f41c: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37F41Cu;
    {
        const bool branch_taken_0x37f41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x37f41c) {
            ctx->pc = 0x37F420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37F41Cu;
            // 0x37f420: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37F43Cu;
            goto label_37f43c;
        }
    }
    ctx->pc = 0x37F424u;
    // 0x37f424: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F424u;
    {
        const bool branch_taken_0x37f424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f424) {
            ctx->pc = 0x37F428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37F424u;
            // 0x37f428: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37F434u;
            goto label_37f434;
        }
    }
    ctx->pc = 0x37F42Cu;
    // 0x37f42c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37F42Cu;
    {
        const bool branch_taken_0x37f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f42c) {
            ctx->pc = 0x37F440u;
            goto label_37f440;
        }
    }
    ctx->pc = 0x37F434u;
label_37f434:
    // 0x37f434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37F434u;
    {
        const bool branch_taken_0x37f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F434u;
            // 0x37f438: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f434) {
            ctx->pc = 0x37F440u;
            goto label_37f440;
        }
    }
    ctx->pc = 0x37F43Cu;
label_37f43c:
    // 0x37f43c: 0x24130064  addiu       $s3, $zero, 0x64
    ctx->pc = 0x37f43cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_37f440:
    // 0x37f440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x37f444: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x37f444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x37f448: 0x8c450eac  lw          $a1, 0xEAC($v0)
    ctx->pc = 0x37f448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x37f44c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f450: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x37f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37f454: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x37f454u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f458: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x37f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x37f45c: 0xc157054  jal         func_55C150
    ctx->pc = 0x37F45Cu;
    SET_GPR_U32(ctx, 31, 0x37F464u);
    ctx->pc = 0x37F460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F45Cu;
            // 0x37f460: 0x50a823  subu        $s5, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F464u; }
        if (ctx->pc != 0x37F464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F464u; }
        if (ctx->pc != 0x37F464u) { return; }
    }
    ctx->pc = 0x37F464u;
label_37f464:
    // 0x37f464: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x37f464u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f468: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x37f46c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37f470: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x37f470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x37f474: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37f478: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37f47c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37f47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37f480: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f484: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37f488: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37f48c: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x37f48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x37f490: 0xc156fc8  jal         func_55BF20
    ctx->pc = 0x37F490u;
    SET_GPR_U32(ctx, 31, 0x37F498u);
    ctx->pc = 0x37F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F490u;
            // 0x37f494: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F498u; }
        if (ctx->pc != 0x37F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F498u; }
        if (ctx->pc != 0x37F498u) { return; }
    }
    ctx->pc = 0x37F498u;
label_37f498:
    // 0x37f498: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x37f498u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f49c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x37f4a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37f4a4: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x37f4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
    // 0x37f4a8: 0x3c0323ff  lui         $v1, 0x23FF
    ctx->pc = 0x37f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9215 << 16));
    // 0x37f4ac: 0x3c0941c0  lui         $t1, 0x41C0
    ctx->pc = 0x37f4acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16832 << 16));
    // 0x37f4b0: 0x8e8400a0  lw          $a0, 0xA0($s4)
    ctx->pc = 0x37f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x37f4b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x37f4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f4b8: 0x346623ff  ori         $a2, $v1, 0x23FF
    ctx->pc = 0x37f4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9215);
    // 0x37f4bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f4c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37f4c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f4c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37f4c8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x37f4c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f4cc: 0x0  nop
    ctx->pc = 0x37f4ccu;
    // NOP
    // 0x37f4d0: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x37f4d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x37f4d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37f4d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f4d8: 0x0  nop
    ctx->pc = 0x37f4d8u;
    // NOP
    // 0x37f4dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37f4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37f4e0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x37f4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x37f4e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x37f4e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f4e8: 0x0  nop
    ctx->pc = 0x37f4e8u;
    // NOP
    // 0x37f4ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37f4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37f4f0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x37f4f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f4f4: 0x0  nop
    ctx->pc = 0x37f4f4u;
    // NOP
    // 0x37f4f8: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x37f4f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37f4fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37f4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f500: 0xc4459c98  lwc1        $f5, -0x6368($v0)
    ctx->pc = 0x37f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x37f504: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x37f504u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x37f508: 0xc68e00bc  lwc1        $f14, 0xBC($s4)
    ctx->pc = 0x37f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x37f50c: 0x4604281d  msub.s      $f0, $f5, $f4
    ctx->pc = 0x37f50cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x37f510: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37f514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37f514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37f518: 0x44887800  mtc1        $t0, $f15
    ctx->pc = 0x37f518u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x37f51c: 0xc15706c  jal         func_55C1B0
    ctx->pc = 0x37F51Cu;
    SET_GPR_U32(ctx, 31, 0x37F524u);
    ctx->pc = 0x37F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F51Cu;
            // 0x37f520: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F524u; }
        if (ctx->pc != 0x37F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F524u; }
        if (ctx->pc != 0x37F524u) { return; }
    }
    ctx->pc = 0x37F524u;
label_37f524:
    // 0x37f524: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x37f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37f528: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37f528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37f52c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37f52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37f530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37f534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37f538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37f53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f540: 0x3e00008  jr          $ra
    ctx->pc = 0x37F540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F540u;
            // 0x37f544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37F548u;
    // 0x37f548: 0x0  nop
    ctx->pc = 0x37f548u;
    // NOP
    // 0x37f54c: 0x0  nop
    ctx->pc = 0x37f54cu;
    // NOP
}

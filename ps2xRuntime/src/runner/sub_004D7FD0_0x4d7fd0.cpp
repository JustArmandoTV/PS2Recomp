#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7FD0
// Address: 0x4d7fd0 - 0x4d8790
void sub_004D7FD0_0x4d7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7FD0_0x4d7fd0");
#endif

    switch (ctx->pc) {
        case 0x4d7ff4u: goto label_4d7ff4;
        case 0x4d811cu: goto label_4d811c;
        case 0x4d8164u: goto label_4d8164;
        case 0x4d81d4u: goto label_4d81d4;
        case 0x4d820cu: goto label_4d820c;
        case 0x4d8290u: goto label_4d8290;
        case 0x4d82d0u: goto label_4d82d0;
        case 0x4d835cu: goto label_4d835c;
        case 0x4d8400u: goto label_4d8400;
        case 0x4d84a8u: goto label_4d84a8;
        case 0x4d8504u: goto label_4d8504;
        case 0x4d854cu: goto label_4d854c;
        case 0x4d85ecu: goto label_4d85ec;
        case 0x4d8684u: goto label_4d8684;
        case 0x4d875cu: goto label_4d875c;
        default: break;
    }

    ctx->pc = 0x4d7fd0u;

    // 0x4d7fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7fd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d7fd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d7fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d7fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d7fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7fe8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x4d7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x4d7fec: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4D7FECu;
    SET_GPR_U32(ctx, 31, 0x4D7FF4u);
    ctx->pc = 0x4D7FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7FECu;
            // 0x4d7ff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7FF4u; }
        if (ctx->pc != 0x4D7FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7FF4u; }
        if (ctx->pc != 0x4D7FF4u) { return; }
    }
    ctx->pc = 0x4D7FF4u;
label_4d7ff4:
    // 0x4d7ff4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x4d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4d7ff8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4d7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d7ffc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4d7ffcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4d8000: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4d8000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d8004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8008: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4d8008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d800c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4d8010: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4d8014: 0x1810  mfhi        $v1
    ctx->pc = 0x4d8014u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d8018: 0x8c460084  lw          $a2, 0x84($v0)
    ctx->pc = 0x4d8018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x4d801c: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D801Cu;
    {
        const bool branch_taken_0x4d801c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x4D8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D801Cu;
            // 0x4d8020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d801c) {
            ctx->pc = 0x4D8034u;
            goto label_4d8034;
        }
    }
    ctx->pc = 0x4D8024u;
    // 0x4d8024: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4d8024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x4d8028: 0x8ca80e80  lw          $t0, 0xE80($a1)
    ctx->pc = 0x4d8028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
    // 0x4d802c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4D802Cu;
    {
        const bool branch_taken_0x4d802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D802Cu;
            // 0x4d8030: 0x8d070cc4  lw          $a3, 0xCC4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d802c) {
            ctx->pc = 0x4D8098u;
            goto label_4d8098;
        }
    }
    ctx->pc = 0x4D8034u;
label_4d8034:
    // 0x4d8034: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4d8034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d8038: 0x14c50017  bne         $a2, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4D8038u;
    {
        const bool branch_taken_0x4d8038 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4d8038) {
            ctx->pc = 0x4D8098u;
            goto label_4d8098;
        }
    }
    ctx->pc = 0x4D8040u;
    // 0x4d8040: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8044: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d8044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d8048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d8048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d804c: 0x0  nop
    ctx->pc = 0x4d804cu;
    // NOP
    // 0x4d8050: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d8050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8054: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8054u;
    {
        const bool branch_taken_0x4d8054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8054) {
            ctx->pc = 0x4D8058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8054u;
            // 0x4d8058: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D806Cu;
            goto label_4d806c;
        }
    }
    ctx->pc = 0x4D805Cu;
    // 0x4d805c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d805cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8060: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d8060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d8064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8064u;
    {
        const bool branch_taken_0x4d8064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8064u;
            // 0x4d8068: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8064) {
            ctx->pc = 0x4D8084u;
            goto label_4d8084;
        }
    }
    ctx->pc = 0x4D806Cu;
label_4d806c:
    // 0x4d806c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d8070: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d8070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8074: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d8074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d8078: 0x0  nop
    ctx->pc = 0x4d8078u;
    // NOP
    // 0x4d807c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d8080: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d8080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4d8084:
    // 0x4d8084: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8084u;
    {
        const bool branch_taken_0x4d8084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8084) {
            ctx->pc = 0x4D8088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8084u;
            // 0x4d8088: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8090u;
            goto label_4d8090;
        }
    }
    ctx->pc = 0x4D808Cu;
    // 0x4d808c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d8090:
    // 0x4d8090: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x4D8090u;
    {
        const bool branch_taken_0x4d8090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8090u;
            // 0x4d8094: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8090) {
            ctx->pc = 0x4D818Cu;
            goto label_4d818c;
        }
    }
    ctx->pc = 0x4D8098u;
label_4d8098:
    // 0x4d8098: 0x5100002b  beql        $t0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x4D8098u;
    {
        const bool branch_taken_0x4d8098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8098) {
            ctx->pc = 0x4D809Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8098u;
            // 0x4d809c: 0x103040  sll         $a2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8148u;
            goto label_4d8148;
        }
    }
    ctx->pc = 0x4D80A0u;
    // 0x4d80a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d80a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4d80a4: 0x54e50016  bnel        $a3, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D80A4u;
    {
        const bool branch_taken_0x4d80a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x4d80a4) {
            ctx->pc = 0x4D80A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D80A4u;
            // 0x4d80a8: 0x73040  sll         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8100u;
            goto label_4d8100;
        }
    }
    ctx->pc = 0x4D80ACu;
    // 0x4d80ac: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4d80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d80b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d80b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d80b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d80b8: 0x0  nop
    ctx->pc = 0x4d80b8u;
    // NOP
    // 0x4d80bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d80bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d80c0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D80C0u;
    {
        const bool branch_taken_0x4d80c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d80c0) {
            ctx->pc = 0x4D80C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D80C0u;
            // 0x4d80c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D80D8u;
            goto label_4d80d8;
        }
    }
    ctx->pc = 0x4D80C8u;
    // 0x4d80c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d80c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d80cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d80ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d80d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D80D0u;
    {
        const bool branch_taken_0x4d80d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D80D0u;
            // 0x4d80d4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d80d0) {
            ctx->pc = 0x4D80F0u;
            goto label_4d80f0;
        }
    }
    ctx->pc = 0x4D80D8u;
label_4d80d8:
    // 0x4d80d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d80dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d80dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d80e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d80e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d80e4: 0x0  nop
    ctx->pc = 0x4d80e4u;
    // NOP
    // 0x4d80e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d80e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d80ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d80ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4d80f0:
    // 0x4d80f0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D80F0u;
    {
        const bool branch_taken_0x4d80f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d80f0) {
            ctx->pc = 0x4D80F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D80F0u;
            // 0x4d80f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8140u;
            goto label_4d8140;
        }
    }
    ctx->pc = 0x4D80F8u;
    // 0x4d80f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D80F8u;
    {
        const bool branch_taken_0x4d80f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D80F8u;
            // 0x4d80fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d80f8) {
            ctx->pc = 0x4D8140u;
            goto label_4d8140;
        }
    }
    ctx->pc = 0x4D8100u;
label_4d8100:
    // 0x4d8100: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4d8100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4d8104: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4d8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4d8108: 0x24a57ee0  addiu       $a1, $a1, 0x7EE0
    ctx->pc = 0x4d8108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32480));
    // 0x4d810c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d810cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d8110: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4d8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4d8114: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4d8114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4d8118: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x4d8118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4d811c:
    // 0x4d811c: 0x90c5fff3  lbu         $a1, -0xD($a2)
    ctx->pc = 0x4d811cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967283)));
    // 0x4d8120: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d8120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d8124: 0x64282b  sltu        $a1, $v1, $a0
    ctx->pc = 0x4d8124u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d8128: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8128u;
    {
        const bool branch_taken_0x4d8128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8128) {
            ctx->pc = 0x4D8140u;
            goto label_4d8140;
        }
    }
    ctx->pc = 0x4D8130u;
    // 0x4d8130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d8130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d8134: 0x2c45000d  sltiu       $a1, $v0, 0xD
    ctx->pc = 0x4d8134u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4d8138: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D8138u;
    {
        const bool branch_taken_0x4d8138 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8138u;
            // 0x4d813c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8138) {
            ctx->pc = 0x4D811Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d811c;
        }
    }
    ctx->pc = 0x4D8140u;
label_4d8140:
    // 0x4d8140: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D8140u;
    {
        const bool branch_taken_0x4d8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8140) {
            ctx->pc = 0x4D8188u;
            goto label_4d8188;
        }
    }
    ctx->pc = 0x4D8148u;
label_4d8148:
    // 0x4d8148: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4d8148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4d814c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d814cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d8150: 0x24a57e70  addiu       $a1, $a1, 0x7E70
    ctx->pc = 0x4d8150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32368));
    // 0x4d8154: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d8154u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d8158: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d8158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d815c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4d815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4d8160: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x4d8160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4d8164:
    // 0x4d8164: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x4d8164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d8168: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d8168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d816c: 0x64282b  sltu        $a1, $v1, $a0
    ctx->pc = 0x4d816cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d8170: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8170u;
    {
        const bool branch_taken_0x4d8170 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8170) {
            ctx->pc = 0x4D8188u;
            goto label_4d8188;
        }
    }
    ctx->pc = 0x4D8178u;
    // 0x4d8178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d817c: 0x2c45000d  sltiu       $a1, $v0, 0xD
    ctx->pc = 0x4d817cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4d8180: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D8180u;
    {
        const bool branch_taken_0x4d8180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8180u;
            // 0x4d8184: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8180) {
            ctx->pc = 0x4D8164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8164;
        }
    }
    ctx->pc = 0x4D8188u;
label_4d8188:
    // 0x4d8188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d8188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d818c:
    // 0x4d818c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d8190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8194: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8194u;
            // 0x4d8198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D819Cu;
    // 0x4d819c: 0x0  nop
    ctx->pc = 0x4d819cu;
    // NOP
    // 0x4d81a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4d81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4d81a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4d81a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4d81a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4d81ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4d81b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4d81b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d81b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d81b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4d81b8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4d81b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d81bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d81bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4d81c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4d81c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d81c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4d81c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d81c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d81cc: 0xc4940030  lwc1        $f20, 0x30($a0)
    ctx->pc = 0x4d81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d81d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4d81d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d81d4:
    // 0x4d81d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d81d8: 0xac6000f8  sw          $zero, 0xF8($v1)
    ctx->pc = 0x4d81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
    // 0x4d81dc: 0x2c82001f  sltiu       $v0, $a0, 0x1F
    ctx->pc = 0x4d81dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x4d81e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d81e4: 0x0  nop
    ctx->pc = 0x4d81e4u;
    // NOP
    // 0x4d81e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4D81E8u;
    {
        const bool branch_taken_0x4d81e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d81e8) {
            ctx->pc = 0x4D81D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d81d4;
        }
    }
    ctx->pc = 0x4D81F0u;
    // 0x4d81f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d81f4: 0x8c4265b0  lw          $v0, 0x65B0($v0)
    ctx->pc = 0x4d81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26032)));
    // 0x4d81f8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4D81F8u;
    {
        const bool branch_taken_0x4d81f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D81FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D81F8u;
            // 0x4d81fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d81f8) {
            ctx->pc = 0x4D82A8u;
            goto label_4d82a8;
        }
    }
    ctx->pc = 0x4D8200u;
    // 0x4d8200: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x4d8200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d8204: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x4d8204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d8208: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d8208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d820c:
    // 0x4d820c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8210: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x4d8210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x4d8214: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8214u;
    {
        const bool branch_taken_0x4d8214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d8214) {
            ctx->pc = 0x4D8218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8214u;
            // 0x4d8218: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8228u;
            goto label_4d8228;
        }
    }
    ctx->pc = 0x4D821Cu;
    // 0x4d821c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d821cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8220: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8220u;
    {
        const bool branch_taken_0x4d8220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8220u;
            // 0x4d8224: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8220) {
            ctx->pc = 0x4D8240u;
            goto label_4d8240;
        }
    }
    ctx->pc = 0x4D8228u;
label_4d8228:
    // 0x4d8228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d822c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d822cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d8230: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d8230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8234: 0x0  nop
    ctx->pc = 0x4d8234u;
    // NOP
    // 0x4d8238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d8238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d823c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4d823cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4d8240:
    // 0x4d8240: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d8240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8244: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x4D8244u;
    {
        const bool branch_taken_0x4d8244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8244) {
            ctx->pc = 0x4D8248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8244u;
            // 0x4d8248: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8298u;
            goto label_4d8298;
        }
    }
    ctx->pc = 0x4D824Cu;
    // 0x4d824c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d824cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d8250: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d8250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4d8254: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4d8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4d8258: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d825c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8260: 0xaea400f8  sw          $a0, 0xF8($s5)
    ctx->pc = 0x4d8260u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 248), GPR_U32(ctx, 4));
    // 0x4d8264: 0x8c6365b0  lw          $v1, 0x65B0($v1)
    ctx->pc = 0x4d8264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26032)));
    // 0x4d8268: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4d8268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4d826c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4d826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4d8270: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4d8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d8274: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x4d8274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8278: 0x8c4265b0  lw          $v0, 0x65B0($v0)
    ctx->pc = 0x4d8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26032)));
    // 0x4d827c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d8280: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d8284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d8284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d8288: 0xc0f2918  jal         func_3CA460
    ctx->pc = 0x4D8288u;
    SET_GPR_U32(ctx, 31, 0x4D8290u);
    ctx->pc = 0x4D828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8288u;
            // 0x4d828c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA460u;
    if (runtime->hasFunction(0x3CA460u)) {
        auto targetFn = runtime->lookupFunction(0x3CA460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8290u; }
        if (ctx->pc != 0x4D8290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA460_0x3ca460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8290u; }
        if (ctx->pc != 0x4D8290u) { return; }
    }
    ctx->pc = 0x4D8290u;
label_4d8290:
    // 0x4d8290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8290u;
    {
        const bool branch_taken_0x4d8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8290) {
            ctx->pc = 0x4D82A8u;
            goto label_4d82a8;
        }
    }
    ctx->pc = 0x4D8298u;
label_4d8298:
    // 0x4d8298: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x4d8298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4d829c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4D829Cu;
    {
        const bool branch_taken_0x4d829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D82A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D829Cu;
            // 0x4d82a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d829c) {
            ctx->pc = 0x4D820Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d820c;
        }
    }
    ctx->pc = 0x4D82A4u;
    // 0x4d82a4: 0x0  nop
    ctx->pc = 0x4d82a4u;
    // NOP
label_4d82a8:
    // 0x4d82a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d82ac: 0x8c420e40  lw          $v0, 0xE40($v0)
    ctx->pc = 0x4d82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3648)));
    // 0x4d82b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4D82B0u;
    {
        const bool branch_taken_0x4d82b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D82B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D82B0u;
            // 0x4d82b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d82b0) {
            ctx->pc = 0x4D8328u;
            goto label_4d8328;
        }
    }
    ctx->pc = 0x4D82B8u;
    // 0x4d82b8: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x4d82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d82bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d82bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d82c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d82c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d82c4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4d82c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d82c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4d82cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d82d0:
    // 0x4d82d0: 0x8c640e40  lw          $a0, 0xE40($v1)
    ctx->pc = 0x4d82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3648)));
    // 0x4d82d4: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4d82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4d82d8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4d82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4d82dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d82e0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x4d82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d82e4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d82e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d82e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x4D82E8u;
    {
        const bool branch_taken_0x4d82e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d82e8) {
            ctx->pc = 0x4D8318u;
            goto label_4d8318;
        }
    }
    ctx->pc = 0x4D82F0u;
    // 0x4d82f0: 0xace400fc  sw          $a0, 0xFC($a3)
    ctx->pc = 0x4d82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 4));
    // 0x4d82f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d82f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d82f8: 0x8c440e40  lw          $a0, 0xE40($v0)
    ctx->pc = 0x4d82f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3648)));
    // 0x4d82fc: 0x2d210003  sltiu       $at, $t1, 0x3
    ctx->pc = 0x4d82fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4d8300: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4d8300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4d8304: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4d8304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4d8308: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4d8308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4d830c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8310: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8310u;
    {
        const bool branch_taken_0x4d8310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8310u;
            // 0x4d8314: 0xa080004e  sb          $zero, 0x4E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8310) {
            ctx->pc = 0x4D8328u;
            goto label_4d8328;
        }
    }
    ctx->pc = 0x4D8318u;
label_4d8318:
    // 0x4d8318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4d8318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d831c: 0xc5202b  sltu        $a0, $a2, $a1
    ctx->pc = 0x4d831cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4d8320: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4D8320u;
    {
        const bool branch_taken_0x4d8320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8320u;
            // 0x4d8324: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8320) {
            ctx->pc = 0x4D82D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d82d0;
        }
    }
    ctx->pc = 0x4D8328u;
label_4d8328:
    // 0x4d8328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d832c: 0x8c420e30  lw          $v0, 0xE30($v0)
    ctx->pc = 0x4d832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
    // 0x4d8330: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4D8330u;
    {
        const bool branch_taken_0x4d8330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8330u;
            // 0x4d8334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8330) {
            ctx->pc = 0x4D83D8u;
            goto label_4d83d8;
        }
    }
    ctx->pc = 0x4D8338u;
    // 0x4d8338: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x4d8338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d833c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4d833cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x4d8340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d8340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8344: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4d8344u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8348: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x4d8348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d834c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4d8350: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8354: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4d8354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x4d8358: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4d8358u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d835c:
    // 0x4d835c: 0x8c850e30  lw          $a1, 0xE30($a0)
    ctx->pc = 0x4d835cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
    // 0x4d8360: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x4d8360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x4d8364: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d8364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d8368: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4d8368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d836c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x4d836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8370: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x4d8370u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8374: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x4D8374u;
    {
        const bool branch_taken_0x4d8374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8374) {
            ctx->pc = 0x4D83C8u;
            goto label_4d83c8;
        }
    }
    ctx->pc = 0x4D837Cu;
    // 0x4d837c: 0xad250104  sw          $a1, 0x104($t1)
    ctx->pc = 0x4d837cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 260), GPR_U32(ctx, 5));
    // 0x4d8380: 0x8c650e30  lw          $a1, 0xE30($v1)
    ctx->pc = 0x4d8380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3632)));
    // 0x4d8384: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x4d8384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x4d8388: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d8388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d838c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4d838cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8390: 0xa0a0004e  sb          $zero, 0x4E($a1)
    ctx->pc = 0x4d8390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8394: 0x8c450e30  lw          $a1, 0xE30($v0)
    ctx->pc = 0x4d8394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
    // 0x4d8398: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x4d8398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x4d839c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d83a0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4d83a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d83a4: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x4d83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d83a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d83a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d83ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4D83ACu;
    {
        const bool branch_taken_0x4d83ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d83ac) {
            ctx->pc = 0x4D83B8u;
            goto label_4d83b8;
        }
    }
    ctx->pc = 0x4D83B4u;
    // 0x4d83b4: 0xacb500a8  sw          $s5, 0xA8($a1)
    ctx->pc = 0x4d83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 21));
label_4d83b8:
    // 0x4d83b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4d83b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4d83bc: 0x2ce10005  sltiu       $at, $a3, 0x5
    ctx->pc = 0x4d83bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d83c0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D83C0u;
    {
        const bool branch_taken_0x4d83c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D83C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D83C0u;
            // 0x4d83c4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d83c0) {
            ctx->pc = 0x4D83D8u;
            goto label_4d83d8;
        }
    }
    ctx->pc = 0x4D83C8u;
label_4d83c8:
    // 0x4d83c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4d83c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4d83cc: 0x106282b  sltu        $a1, $t0, $a2
    ctx->pc = 0x4d83ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d83d0: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4D83D0u;
    {
        const bool branch_taken_0x4d83d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D83D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D83D0u;
            // 0x4d83d4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d83d0) {
            ctx->pc = 0x4D835Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d835c;
        }
    }
    ctx->pc = 0x4D83D8u;
label_4d83d8:
    // 0x4d83d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d83dc: 0x8c423ff0  lw          $v0, 0x3FF0($v0)
    ctx->pc = 0x4d83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
    // 0x4d83e0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4D83E0u;
    {
        const bool branch_taken_0x4d83e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D83E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D83E0u;
            // 0x4d83e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d83e0) {
            ctx->pc = 0x4D8488u;
            goto label_4d8488;
        }
    }
    ctx->pc = 0x4D83E8u;
    // 0x4d83e8: 0x8c470070  lw          $a3, 0x70($v0)
    ctx->pc = 0x4d83e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d83ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d83ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d83f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4d83f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d83f4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4d83f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d83f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4d83fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d8400:
    // 0x4d8400: 0x8c643ff0  lw          $a0, 0x3FF0($v1)
    ctx->pc = 0x4d8400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16368)));
    // 0x4d8404: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4d8404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4d8408: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d8408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d840c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4d840cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8410: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x4d8410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x4d8414: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8414u;
    {
        const bool branch_taken_0x4d8414 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4d8414) {
            ctx->pc = 0x4D8418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8414u;
            // 0x4d8418: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8428u;
            goto label_4d8428;
        }
    }
    ctx->pc = 0x4D841Cu;
    // 0x4d841c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d841cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8420u;
    {
        const bool branch_taken_0x4d8420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8420u;
            // 0x4d8424: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8420) {
            ctx->pc = 0x4D8440u;
            goto label_4d8440;
        }
    }
    ctx->pc = 0x4D8428u;
label_4d8428:
    // 0x4d8428: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4d8428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d842c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4d842cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4d8430: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4d8430u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8434: 0x0  nop
    ctx->pc = 0x4d8434u;
    // NOP
    // 0x4d8438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d8438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d843c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4d843cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4d8440:
    // 0x4d8440: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d8440u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8444: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4D8444u;
    {
        const bool branch_taken_0x4d8444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8444) {
            ctx->pc = 0x4D8478u;
            goto label_4d8478;
        }
    }
    ctx->pc = 0x4D844Cu;
    // 0x4d844c: 0xad460118  sw          $a2, 0x118($t2)
    ctx->pc = 0x4d844cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 280), GPR_U32(ctx, 6));
    // 0x4d8450: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4d8450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4d8454: 0x8c443ff0  lw          $a0, 0x3FF0($v0)
    ctx->pc = 0x4d8454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
    // 0x4d8458: 0x2d01000c  sltiu       $at, $t0, 0xC
    ctx->pc = 0x4d8458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d845c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x4d845cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x4d8460: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4d8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4d8464: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d8464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d8468: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d8468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d846c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D846Cu;
    {
        const bool branch_taken_0x4d846c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D846Cu;
            // 0x4d8470: 0xa080004e  sb          $zero, 0x4E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d846c) {
            ctx->pc = 0x4D8488u;
            goto label_4d8488;
        }
    }
    ctx->pc = 0x4D8474u;
    // 0x4d8474: 0x0  nop
    ctx->pc = 0x4d8474u;
    // NOP
label_4d8478:
    // 0x4d8478: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d8478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d847c: 0x127202b  sltu        $a0, $t1, $a3
    ctx->pc = 0x4d847cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d8480: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4D8480u;
    {
        const bool branch_taken_0x4d8480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8480u;
            // 0x4d8484: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8480) {
            ctx->pc = 0x4D8400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8400;
        }
    }
    ctx->pc = 0x4D8488u;
label_4d8488:
    // 0x4d8488: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d8488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d848c: 0x8c42aa58  lw          $v0, -0x55A8($v0)
    ctx->pc = 0x4d848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
    // 0x4d8490: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4D8490u;
    {
        const bool branch_taken_0x4d8490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8490u;
            // 0x4d8494: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8490) {
            ctx->pc = 0x4D8528u;
            goto label_4d8528;
        }
    }
    ctx->pc = 0x4D8498u;
    // 0x4d8498: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x4d8498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d849c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d849cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d84a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4d84a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d84a4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x4d84a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4d84a8:
    // 0x4d84a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d84ac: 0x8c42aa58  lw          $v0, -0x55A8($v0)
    ctx->pc = 0x4d84acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
    // 0x4d84b0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d84b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4d84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4d84b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d84bc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x4d84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d84c0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d84c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d84c4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x4D84C4u;
    {
        const bool branch_taken_0x4d84c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d84c4) {
            ctx->pc = 0x4D8518u;
            goto label_4d8518;
        }
    }
    ctx->pc = 0x4D84CCu;
    // 0x4d84cc: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x4d84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
    // 0x4d84d0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d84d4: 0x8c43aa58  lw          $v1, -0x55A8($v0)
    ctx->pc = 0x4d84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
    // 0x4d84d8: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4d84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4d84dc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d84e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4d84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4d84e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4d84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d84e8: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x4d84e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d84ec: 0x8c42aa58  lw          $v0, -0x55A8($v0)
    ctx->pc = 0x4d84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
    // 0x4d84f0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d84f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4d84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4d84f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d84fc: 0xc13c78c  jal         func_4F1E30
    ctx->pc = 0x4D84FCu;
    SET_GPR_U32(ctx, 31, 0x4D8504u);
    ctx->pc = 0x4D8500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D84FCu;
            // 0x4d8500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1E30u;
    if (runtime->hasFunction(0x4F1E30u)) {
        auto targetFn = runtime->lookupFunction(0x4F1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8504u; }
        if (ctx->pc != 0x4D8504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1E30_0x4f1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8504u; }
        if (ctx->pc != 0x4D8504u) { return; }
    }
    ctx->pc = 0x4D8504u;
label_4d8504:
    // 0x4d8504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d8504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d8508: 0x2e210004  sltiu       $at, $s1, 0x4
    ctx->pc = 0x4d8508u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d850c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D850Cu;
    {
        const bool branch_taken_0x4d850c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D850Cu;
            // 0x4d8510: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d850c) {
            ctx->pc = 0x4D8528u;
            goto label_4d8528;
        }
    }
    ctx->pc = 0x4D8514u;
    // 0x4d8514: 0x0  nop
    ctx->pc = 0x4d8514u;
    // NOP
label_4d8518:
    // 0x4d8518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d8518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d851c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d851cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4d8520: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4D8520u;
    {
        const bool branch_taken_0x4d8520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8520u;
            // 0x4d8524: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8520) {
            ctx->pc = 0x4D84A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d84a8;
        }
    }
    ctx->pc = 0x4D8528u;
label_4d8528:
    // 0x4d8528: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d852c: 0x8c420e38  lw          $v0, 0xE38($v0)
    ctx->pc = 0x4d852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x4d8530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d8530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d8534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8538: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4d8538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d853c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x4d853cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8540: 0x8c47007c  lw          $a3, 0x7C($v0)
    ctx->pc = 0x4d8540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x4d8544: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8548: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d8548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4d854c:
    // 0x4d854c: 0x8c640e38  lw          $a0, 0xE38($v1)
    ctx->pc = 0x4d854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
    // 0x4d8550: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x4d8550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4d8554: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d8554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d8558: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4d8558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d855c: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x4d855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x4d8560: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8560u;
    {
        const bool branch_taken_0x4d8560 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4d8560) {
            ctx->pc = 0x4D8564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8560u;
            // 0x4d8564: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8574u;
            goto label_4d8574;
        }
    }
    ctx->pc = 0x4D8568u;
    // 0x4d8568: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d856c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D856Cu;
    {
        const bool branch_taken_0x4d856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D856Cu;
            // 0x4d8570: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d856c) {
            ctx->pc = 0x4D858Cu;
            goto label_4d858c;
        }
    }
    ctx->pc = 0x4D8574u;
label_4d8574:
    // 0x4d8574: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4d8574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d8578: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4d8578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4d857c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4d857cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8580: 0x0  nop
    ctx->pc = 0x4d8580u;
    // NOP
    // 0x4d8584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d8584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d8588: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4d8588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4d858c:
    // 0x4d858c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d858cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8590: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x4D8590u;
    {
        const bool branch_taken_0x4d8590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8590) {
            ctx->pc = 0x4D85C0u;
            goto label_4d85c0;
        }
    }
    ctx->pc = 0x4D8598u;
    // 0x4d8598: 0xad460158  sw          $a2, 0x158($t2)
    ctx->pc = 0x4d8598u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 344), GPR_U32(ctx, 6));
    // 0x4d859c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4d859cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4d85a0: 0x8c440e38  lw          $a0, 0xE38($v0)
    ctx->pc = 0x4d85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x4d85a4: 0x2d010005  sltiu       $at, $t0, 0x5
    ctx->pc = 0x4d85a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d85a8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x4d85a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x4d85ac: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x4d85acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4d85b0: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x4d85b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4d85b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d85b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D85B8u;
    {
        const bool branch_taken_0x4d85b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D85BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D85B8u;
            // 0x4d85bc: 0xa080004e  sb          $zero, 0x4E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85b8) {
            ctx->pc = 0x4D85D0u;
            goto label_4d85d0;
        }
    }
    ctx->pc = 0x4D85C0u;
label_4d85c0:
    // 0x4d85c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d85c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d85c4: 0x127202b  sltu        $a0, $t1, $a3
    ctx->pc = 0x4d85c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d85c8: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4D85C8u;
    {
        const bool branch_taken_0x4d85c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D85CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D85C8u;
            // 0x4d85cc: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85c8) {
            ctx->pc = 0x4D854Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d854c;
        }
    }
    ctx->pc = 0x4D85D0u;
label_4d85d0:
    // 0x4d85d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d85d4: 0x8c420da8  lw          $v0, 0xDA8($v0)
    ctx->pc = 0x4d85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3496)));
    // 0x4d85d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D85D8u;
    {
        const bool branch_taken_0x4d85d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D85DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D85D8u;
            // 0x4d85dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85d8) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D85E0u;
    // 0x4d85e0: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x4d85e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d85e4: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x4d85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d85e8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4d85e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d85ec:
    // 0x4d85ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d85f0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x4d85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x4d85f4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D85F4u;
    {
        const bool branch_taken_0x4d85f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d85f4) {
            ctx->pc = 0x4D85F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D85F4u;
            // 0x4d85f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8608u;
            goto label_4d8608;
        }
    }
    ctx->pc = 0x4D85FCu;
    // 0x4d85fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d85fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8600u;
    {
        const bool branch_taken_0x4d8600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8600u;
            // 0x4d8604: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8600) {
            ctx->pc = 0x4D8620u;
            goto label_4d8620;
        }
    }
    ctx->pc = 0x4D8608u;
label_4d8608:
    // 0x4d8608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d8608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d860c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d860cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d8610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d8610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8614: 0x0  nop
    ctx->pc = 0x4d8614u;
    // NOP
    // 0x4d8618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d8618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d861c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4d861cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4d8620:
    // 0x4d8620: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d8620u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8624: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x4D8624u;
    {
        const bool branch_taken_0x4d8624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8624) {
            ctx->pc = 0x4D8628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8624u;
            // 0x4d8628: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8658u;
            goto label_4d8658;
        }
    }
    ctx->pc = 0x4D862Cu;
    // 0x4d862c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4d862cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d8630: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8634: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x4d8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4d8638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4d8638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d863c: 0xaea3016c  sw          $v1, 0x16C($s5)
    ctx->pc = 0x4d863cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 3));
    // 0x4d8640: 0x8c420da8  lw          $v0, 0xDA8($v0)
    ctx->pc = 0x4d8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3496)));
    // 0x4d8644: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d8648: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d864c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d8650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8650u;
    {
        const bool branch_taken_0x4d8650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8650u;
            // 0x4d8654: 0xa040004e  sb          $zero, 0x4E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8650) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8658u;
label_4d8658:
    // 0x4d8658: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4d8658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d865c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4D865Cu;
    {
        const bool branch_taken_0x4d865c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D865Cu;
            // 0x4d8660: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d865c) {
            ctx->pc = 0x4D85ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d85ec;
        }
    }
    ctx->pc = 0x4D8664u;
    // 0x4d8664: 0x0  nop
    ctx->pc = 0x4d8664u;
    // NOP
label_4d8668:
    // 0x4d8668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d866c: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x4d866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4d8670: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D8670u;
    {
        const bool branch_taken_0x4d8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8670u;
            // 0x4d8674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8670) {
            ctx->pc = 0x4D8700u;
            goto label_4d8700;
        }
    }
    ctx->pc = 0x4D8678u;
    // 0x4d8678: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x4d8678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d867c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x4d867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x4d8680: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4d8680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d8684:
    // 0x4d8684: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8688: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x4d8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x4d868c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D868Cu;
    {
        const bool branch_taken_0x4d868c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d868c) {
            ctx->pc = 0x4D8690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D868Cu;
            // 0x4d8690: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D86A0u;
            goto label_4d86a0;
        }
    }
    ctx->pc = 0x4D8694u;
    // 0x4d8694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d8694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8698u;
    {
        const bool branch_taken_0x4d8698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8698u;
            // 0x4d869c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8698) {
            ctx->pc = 0x4D86B8u;
            goto label_4d86b8;
        }
    }
    ctx->pc = 0x4D86A0u;
label_4d86a0:
    // 0x4d86a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d86a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d86a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d86a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d86a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d86a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d86ac: 0x0  nop
    ctx->pc = 0x4d86acu;
    // NOP
    // 0x4d86b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d86b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d86b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4d86b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4d86b8:
    // 0x4d86b8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4d86b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d86bc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x4D86BCu;
    {
        const bool branch_taken_0x4d86bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d86bc) {
            ctx->pc = 0x4D86C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D86BCu;
            // 0x4d86c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D86F0u;
            goto label_4d86f0;
        }
    }
    ctx->pc = 0x4D86C4u;
    // 0x4d86c4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4d86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d86c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d86cc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x4d86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4d86d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4d86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d86d4: 0xaea30170  sw          $v1, 0x170($s5)
    ctx->pc = 0x4d86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 368), GPR_U32(ctx, 3));
    // 0x4d86d8: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x4d86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4d86dc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4d86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4d86e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d86e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d86e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D86E8u;
    {
        const bool branch_taken_0x4d86e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D86ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D86E8u;
            // 0x4d86ec: 0xa040004e  sb          $zero, 0x4E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d86e8) {
            ctx->pc = 0x4D8700u;
            goto label_4d8700;
        }
    }
    ctx->pc = 0x4D86F0u;
label_4d86f0:
    // 0x4d86f0: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4d86f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d86f4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4D86F4u;
    {
        const bool branch_taken_0x4d86f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D86F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D86F4u;
            // 0x4d86f8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d86f4) {
            ctx->pc = 0x4D8684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8684;
        }
    }
    ctx->pc = 0x4D86FCu;
    // 0x4d86fc: 0x0  nop
    ctx->pc = 0x4d86fcu;
    // NOP
label_4d8700:
    // 0x4d8700: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4d8700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4d8704: 0xc6a20034  lwc1        $f2, 0x34($s5)
    ctx->pc = 0x4d8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d8708: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d870c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4d870cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d8710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d8710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d8714: 0x0  nop
    ctx->pc = 0x4d8714u;
    // NOP
    // 0x4d8718: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d8718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d871c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d871cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8720: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8720u;
    {
        const bool branch_taken_0x4d8720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8720) {
            ctx->pc = 0x4D8724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8720u;
            // 0x4d8724: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D8738u;
            goto label_4d8738;
        }
    }
    ctx->pc = 0x4D8728u;
    // 0x4d8728: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d8728u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d872c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d872cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D8730u;
    {
        const bool branch_taken_0x4d8730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8730) {
            ctx->pc = 0x4D874Cu;
            goto label_4d874c;
        }
    }
    ctx->pc = 0x4D8738u;
label_4d8738:
    // 0x4d8738: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d8738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d873c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d873cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8740: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d8740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8744: 0x0  nop
    ctx->pc = 0x4d8744u;
    // NOP
    // 0x4d8748: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d8748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4d874c:
    // 0x4d874c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8750: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d8750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4d8754: 0xc0c2bcc  jal         func_30AF30
    ctx->pc = 0x4D8754u;
    SET_GPR_U32(ctx, 31, 0x4D875Cu);
    ctx->pc = 0x4D8758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8754u;
            // 0x4d8758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF30u;
    if (runtime->hasFunction(0x30AF30u)) {
        auto targetFn = runtime->lookupFunction(0x30AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D875Cu; }
        if (ctx->pc != 0x4D875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AF30_0x30af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D875Cu; }
        if (ctx->pc != 0x4D875Cu) { return; }
    }
    ctx->pc = 0x4D875Cu;
label_4d875c:
    // 0x4d875c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4d875cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d8760: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d8764: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d8764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d8768: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d8768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d876c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d876cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d8770: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d8770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d8774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d8778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d877c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D877Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D877Cu;
            // 0x4d8780: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D8784u;
    // 0x4d8784: 0x0  nop
    ctx->pc = 0x4d8784u;
    // NOP
    // 0x4d8788: 0x0  nop
    ctx->pc = 0x4d8788u;
    // NOP
    // 0x4d878c: 0x0  nop
    ctx->pc = 0x4d878cu;
    // NOP
}

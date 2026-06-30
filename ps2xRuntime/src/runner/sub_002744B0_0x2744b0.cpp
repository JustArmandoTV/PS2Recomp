#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002744B0
// Address: 0x2744b0 - 0x274680
void sub_002744B0_0x2744b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002744B0_0x2744b0");
#endif

    switch (ctx->pc) {
        case 0x2744e0u: goto label_2744e0;
        default: break;
    }

    ctx->pc = 0x2744b0u;

    // 0x2744b0: 0x10a00067  beqz        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2744B0u;
    {
        const bool branch_taken_0x2744b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744B0u;
            // 0x2744b4: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744b0) {
            ctx->pc = 0x274650u;
            goto label_274650;
        }
    }
    ctx->pc = 0x2744B8u;
    // 0x2744b8: 0x8c880034  lw          $t0, 0x34($a0)
    ctx->pc = 0x2744b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2744bc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2744bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2744c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2744c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2744c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744c8: 0x27a90000  addiu       $t1, $sp, 0x0
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2744cc: 0x8ca40060  lw          $a0, 0x60($a1)
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2744d0: 0x3c033f28  lui         $v1, 0x3F28
    ctx->pc = 0x2744d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16168 << 16));
    // 0x2744d4: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x2744d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x2744d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2744d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2744dc: 0x0  nop
    ctx->pc = 0x2744dcu;
    // NOP
label_2744e0:
    // 0x2744e0: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2744e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2744e4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2744e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2744e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2744e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2744ec: 0x14880004  bne         $a0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2744ECu;
    {
        const bool branch_taken_0x2744ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x2744F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744ECu;
            // 0x2744f0: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744ec) {
            ctx->pc = 0x274500u;
            goto label_274500;
        }
    }
    ctx->pc = 0x2744F4u;
    // 0x2744f4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2744f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2744f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2744f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2744fc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2744fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_274500:
    // 0x274500: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x274500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274504: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x274504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274508: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x274508u;
    {
        const bool branch_taken_0x274508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x274508) {
            ctx->pc = 0x274518u;
            goto label_274518;
        }
    }
    ctx->pc = 0x274510u;
    // 0x274510: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x274510u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x274514: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x274514u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_274518:
    // 0x274518: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x274518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x27451c: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x27451cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274520: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x274524: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x274528: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x274528u;
    {
        const bool branch_taken_0x274528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274528u;
            // 0x27452c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274528) {
            ctx->pc = 0x2744E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2744e0;
        }
    }
    ctx->pc = 0x274530u;
    // 0x274530: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x274534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274538: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x274538u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27453c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x27453cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x274540: 0x25630002  addiu       $v1, $t3, 0x2
    ctx->pc = 0x274540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x274544: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x274544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x274548: 0x4810  mfhi        $t1
    ctx->pc = 0x274548u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x27454c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x27454cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x274550: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x274554: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x274558: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x274558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x27455c: 0x4010  mfhi        $t0
    ctx->pc = 0x27455cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x274560: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x274560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274564: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x274564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x274568: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x27456c: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x274570: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x274570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274578: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x274578u;
    {
        const bool branch_taken_0x274578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274578) {
            ctx->pc = 0x2745E8u;
            goto label_2745e8;
        }
    }
    ctx->pc = 0x274580u;
    // 0x274580: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x274580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x274584: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x274588: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x274588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27458c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27458cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274590: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x274590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x274594: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x274598: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27459c: 0x0  nop
    ctx->pc = 0x27459cu;
    // NOP
    // 0x2745a0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2745a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2745a4: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x2745a4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
    // 0x2745a8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2745a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2745ac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2745acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2745b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2745b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2745b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2745b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2745b8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2745b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2745bc: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x2745bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x2745c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2745c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2745c4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2745c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2745c8: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x2745c8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
    // 0x2745cc: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2745ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2745d0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2745d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2745d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2745d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2745d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2745d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2745dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2745DCu;
    {
        const bool branch_taken_0x2745dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745DCu;
            // 0x2745e0: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745dc) {
            ctx->pc = 0x274670u;
            goto label_274670;
        }
    }
    ctx->pc = 0x2745E4u;
    // 0x2745e4: 0x0  nop
    ctx->pc = 0x2745e4u;
    // NOP
label_2745e8:
    // 0x2745e8: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x2745e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x2745ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2745ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2745f0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2745f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2745f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2745f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2745f8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2745fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2745fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x274600: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274604: 0x0  nop
    ctx->pc = 0x274604u;
    // NOP
    // 0x274608: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x274608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x27460c: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x27460cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
    // 0x274610: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x274610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x274614: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x274614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x274618: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x274618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27461c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27461cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274620: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x274620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x274624: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x274624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x274628: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x274628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27462c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x27462cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x274630: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x274630u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
    // 0x274634: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x274634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x274638: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x274638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27463c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27463cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x274640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274644: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x274644u;
    {
        const bool branch_taken_0x274644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274644u;
            // 0x274648: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274644) {
            ctx->pc = 0x274670u;
            goto label_274670;
        }
    }
    ctx->pc = 0x27464Cu;
    // 0x27464c: 0x0  nop
    ctx->pc = 0x27464cu;
    // NOP
label_274650:
    // 0x274650: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x274650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x274654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274658: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27465c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x27465cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x274660: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x274660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x274664: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x274664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x274668: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x274668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x27466c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x27466cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_274670:
    // 0x274670: 0x3e00008  jr          $ra
    ctx->pc = 0x274670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274670u;
            // 0x274674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274678u;
    // 0x274678: 0x0  nop
    ctx->pc = 0x274678u;
    // NOP
    // 0x27467c: 0x0  nop
    ctx->pc = 0x27467cu;
    // NOP
}

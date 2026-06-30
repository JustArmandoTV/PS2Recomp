#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B520
// Address: 0x14b520 - 0x14b680
void sub_0014B520_0x14b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B520_0x14b520");
#endif

    ctx->pc = 0x14b520u;

    // 0x14b520: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14b524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b528: 0x0  nop
    ctx->pc = 0x14b528u;
    // NOP
    // 0x14b52c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x14b52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14b530: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b538: 0x0  nop
    ctx->pc = 0x14b538u;
    // NOP
    // 0x14b53c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b540: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14B540u;
    {
        const bool branch_taken_0x14b540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b540) {
            ctx->pc = 0x14B544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B540u;
            // 0x14b544: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B558u;
            goto label_14b558;
        }
    }
    ctx->pc = 0x14B548u;
    // 0x14b548: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b54c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b550: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B550u;
    {
        const bool branch_taken_0x14b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B550u;
            // 0x14b554: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b550) {
            ctx->pc = 0x14B570u;
            goto label_14b570;
        }
    }
    ctx->pc = 0x14B558u;
label_14b558:
    // 0x14b558: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b55c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b55cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b560: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b564: 0x0  nop
    ctx->pc = 0x14b564u;
    // NOP
    // 0x14b568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b56c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b570:
    // 0x14b570: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14b574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b578: 0x0  nop
    ctx->pc = 0x14b578u;
    // NOP
    // 0x14b57c: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x14b57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x14b580: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b588: 0x0  nop
    ctx->pc = 0x14b588u;
    // NOP
    // 0x14b58c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b58cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B590u;
    {
        const bool branch_taken_0x14b590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B590u;
            // 0x14b594: 0xa3838068  sb          $v1, -0x7F98($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b590) {
            ctx->pc = 0x14B5A8u;
            goto label_14b5a8;
        }
    }
    ctx->pc = 0x14B598u;
    // 0x14b598: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b59c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b59cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b5a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B5A0u;
    {
        const bool branch_taken_0x14b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5A0u;
            // 0x14b5a4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5a0) {
            ctx->pc = 0x14B5C4u;
            goto label_14b5c4;
        }
    }
    ctx->pc = 0x14B5A8u;
label_14b5a8:
    // 0x14b5a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b5a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b5ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b5b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b5b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b5b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b5b8: 0x0  nop
    ctx->pc = 0x14b5b8u;
    // NOP
    // 0x14b5bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b5c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b5c4:
    // 0x14b5c4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14b5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b5cc: 0x0  nop
    ctx->pc = 0x14b5ccu;
    // NOP
    // 0x14b5d0: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x14b5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x14b5d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b5dc: 0x0  nop
    ctx->pc = 0x14b5dcu;
    // NOP
    // 0x14b5e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b5e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B5E4u;
    {
        const bool branch_taken_0x14b5e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5E4u;
            // 0x14b5e8: 0xa3838069  sb          $v1, -0x7F97($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934633), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5e4) {
            ctx->pc = 0x14B5FCu;
            goto label_14b5fc;
        }
    }
    ctx->pc = 0x14B5ECu;
    // 0x14b5ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b5ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b5f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b5f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B5F4u;
    {
        const bool branch_taken_0x14b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5F4u;
            // 0x14b5f8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5f4) {
            ctx->pc = 0x14B618u;
            goto label_14b618;
        }
    }
    ctx->pc = 0x14B5FCu;
label_14b5fc:
    // 0x14b5fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b5fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b608: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b60c: 0x0  nop
    ctx->pc = 0x14b60cu;
    // NOP
    // 0x14b610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b614: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b618:
    // 0x14b618: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14b61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b620: 0x0  nop
    ctx->pc = 0x14b620u;
    // NOP
    // 0x14b624: 0x460f0042  mul.s       $f1, $f0, $f15
    ctx->pc = 0x14b624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x14b628: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b630: 0x0  nop
    ctx->pc = 0x14b630u;
    // NOP
    // 0x14b634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b638: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B638u;
    {
        const bool branch_taken_0x14b638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B638u;
            // 0x14b63c: 0xa383806a  sb          $v1, -0x7F96($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934634), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b638) {
            ctx->pc = 0x14B650u;
            goto label_14b650;
        }
    }
    ctx->pc = 0x14B640u;
    // 0x14b640: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b644: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B648u;
    {
        const bool branch_taken_0x14b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B648u;
            // 0x14b64c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b648) {
            ctx->pc = 0x14B66Cu;
            goto label_14b66c;
        }
    }
    ctx->pc = 0x14B650u;
label_14b650:
    // 0x14b650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b654: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b658: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b65c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b65cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b660: 0x0  nop
    ctx->pc = 0x14b660u;
    // NOP
    // 0x14b664: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b66c:
    // 0x14b66c: 0x8052e14  j           func_14B850
    ctx->pc = 0x14B66Cu;
    ctx->pc = 0x14B670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B66Cu;
            // 0x14b670: 0xa383806b  sb          $v1, -0x7F95($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934635), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B850u;
    if (runtime->hasFunction(0x14B850u)) {
        auto targetFn = runtime->lookupFunction(0x14B850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0014B850_0x14b850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14B674u;
    // 0x14b674: 0x0  nop
    ctx->pc = 0x14b674u;
    // NOP
    // 0x14b678: 0x0  nop
    ctx->pc = 0x14b678u;
    // NOP
    // 0x14b67c: 0x0  nop
    ctx->pc = 0x14b67cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B680
// Address: 0x14b680 - 0x14b850
void sub_0014B680_0x14b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B680_0x14b680");
#endif

    switch (ctx->pc) {
        case 0x14b694u: goto label_14b694;
        case 0x14b69cu: goto label_14b69c;
        case 0x14b70cu: goto label_14b70c;
        case 0x14b77cu: goto label_14b77c;
        case 0x14b840u: goto label_14b840;
        default: break;
    }

    ctx->pc = 0x14b680u;

    // 0x14b680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b684: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14b688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b68c: 0xc04ab60  jal         func_12AD80
    ctx->pc = 0x14B68Cu;
    SET_GPR_U32(ctx, 31, 0x14B694u);
    ctx->pc = 0x14B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B68Cu;
            // 0x14b690: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD80u;
    if (runtime->hasFunction(0x12AD80u)) {
        auto targetFn = runtime->lookupFunction(0x12AD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B694u; }
        if (ctx->pc != 0x14B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD80_0x12ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B694u; }
        if (ctx->pc != 0x14B694u) { return; }
    }
    ctx->pc = 0x14B694u;
label_14b694:
    // 0x14b694: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14B694u;
    SET_GPR_U32(ctx, 31, 0x14B69Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B69Cu; }
        if (ctx->pc != 0x14B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B69Cu; }
        if (ctx->pc != 0x14B69Cu) { return; }
    }
    ctx->pc = 0x14B69Cu;
label_14b69c:
    // 0x14b69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b6a0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14b6a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14b6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b6a8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14b6ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b6b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14b6b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b6b4: 0x0  nop
    ctx->pc = 0x14b6b4u;
    // NOP
    // 0x14b6b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14b6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b6c0: 0x0  nop
    ctx->pc = 0x14b6c0u;
    // NOP
    // 0x14b6c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b6cc: 0x0  nop
    ctx->pc = 0x14b6ccu;
    // NOP
    // 0x14b6d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b6d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14B6D4u;
    {
        const bool branch_taken_0x14b6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b6d4) {
            ctx->pc = 0x14B6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6D4u;
            // 0x14b6d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B6ECu;
            goto label_14b6ec;
        }
    }
    ctx->pc = 0x14B6DCu;
    // 0x14b6dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b6dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b6e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b6e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b6e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B6E4u;
    {
        const bool branch_taken_0x14b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6E4u;
            // 0x14b6e8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6e4) {
            ctx->pc = 0x14B704u;
            goto label_14b704;
        }
    }
    ctx->pc = 0x14B6ECu;
label_14b6ec:
    // 0x14b6ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b6f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b6f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b6f8: 0x0  nop
    ctx->pc = 0x14b6f8u;
    // NOP
    // 0x14b6fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b704:
    // 0x14b704: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14B704u;
    SET_GPR_U32(ctx, 31, 0x14B70Cu);
    ctx->pc = 0x14B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B704u;
            // 0x14b708: 0xa3838068  sb          $v1, -0x7F98($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B70Cu; }
        if (ctx->pc != 0x14B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B70Cu; }
        if (ctx->pc != 0x14B70Cu) { return; }
    }
    ctx->pc = 0x14B70Cu;
label_14b70c:
    // 0x14b70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b710: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14b710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14b714: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14b714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b718: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14b718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14b71c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b720: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14b720u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b724: 0x0  nop
    ctx->pc = 0x14b724u;
    // NOP
    // 0x14b728: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14b72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b730: 0x0  nop
    ctx->pc = 0x14b730u;
    // NOP
    // 0x14b734: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b73c: 0x0  nop
    ctx->pc = 0x14b73cu;
    // NOP
    // 0x14b740: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b744: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14B744u;
    {
        const bool branch_taken_0x14b744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b744) {
            ctx->pc = 0x14B748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B744u;
            // 0x14b748: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B75Cu;
            goto label_14b75c;
        }
    }
    ctx->pc = 0x14B74Cu;
    // 0x14b74c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b74cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b750: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b754: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B754u;
    {
        const bool branch_taken_0x14b754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B754u;
            // 0x14b758: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b754) {
            ctx->pc = 0x14B774u;
            goto label_14b774;
        }
    }
    ctx->pc = 0x14B75Cu;
label_14b75c:
    // 0x14b75c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b760: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b764: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b768: 0x0  nop
    ctx->pc = 0x14b768u;
    // NOP
    // 0x14b76c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b770: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b774:
    // 0x14b774: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14B774u;
    SET_GPR_U32(ctx, 31, 0x14B77Cu);
    ctx->pc = 0x14B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B774u;
            // 0x14b778: 0xa3838069  sb          $v1, -0x7F97($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934633), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B77Cu; }
        if (ctx->pc != 0x14B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B77Cu; }
        if (ctx->pc != 0x14B77Cu) { return; }
    }
    ctx->pc = 0x14B77Cu;
label_14b77c:
    // 0x14b77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b780: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14b780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14b784: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14b784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b788: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14b78c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b790: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14b790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b794: 0x0  nop
    ctx->pc = 0x14b794u;
    // NOP
    // 0x14b798: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14b79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b7a0: 0x0  nop
    ctx->pc = 0x14b7a0u;
    // NOP
    // 0x14b7a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14b7a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14b7a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b7ac: 0x0  nop
    ctx->pc = 0x14b7acu;
    // NOP
    // 0x14b7b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b7b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14B7B4u;
    {
        const bool branch_taken_0x14b7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b7b4) {
            ctx->pc = 0x14B7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7B4u;
            // 0x14b7b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B7CCu;
            goto label_14b7cc;
        }
    }
    ctx->pc = 0x14B7BCu;
    // 0x14b7bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b7bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b7c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b7c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B7C4u;
    {
        const bool branch_taken_0x14b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7C4u;
            // 0x14b7c8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7c4) {
            ctx->pc = 0x14B7E4u;
            goto label_14b7e4;
        }
    }
    ctx->pc = 0x14B7CCu;
label_14b7cc:
    // 0x14b7cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b7d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b7d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b7d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b7d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b7d8: 0x0  nop
    ctx->pc = 0x14b7d8u;
    // NOP
    // 0x14b7dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b7e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b7e4:
    // 0x14b7e4: 0xc7818364  lwc1        $f1, -0x7C9C($gp)
    ctx->pc = 0x14b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b7e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14b7ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14b7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14b7f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14b7f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14b7f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14b7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b7fc: 0x0  nop
    ctx->pc = 0x14b7fcu;
    // NOP
    // 0x14b800: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b804: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B804u;
    {
        const bool branch_taken_0x14b804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B804u;
            // 0x14b808: 0xa383806a  sb          $v1, -0x7F96($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934634), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b804) {
            ctx->pc = 0x14B81Cu;
            goto label_14b81c;
        }
    }
    ctx->pc = 0x14B80Cu;
    // 0x14b80c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b810: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B814u;
    {
        const bool branch_taken_0x14b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B814u;
            // 0x14b818: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b814) {
            ctx->pc = 0x14B838u;
            goto label_14b838;
        }
    }
    ctx->pc = 0x14B81Cu;
label_14b81c:
    // 0x14b81c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b81cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b820: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14b820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14b824: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14b824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14b828: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14b828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14b82c: 0x0  nop
    ctx->pc = 0x14b82cu;
    // NOP
    // 0x14b830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14b830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14b834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14b834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b838:
    // 0x14b838: 0xc052e14  jal         func_14B850
    ctx->pc = 0x14B838u;
    SET_GPR_U32(ctx, 31, 0x14B840u);
    ctx->pc = 0x14B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B838u;
            // 0x14b83c: 0xa383806b  sb          $v1, -0x7F95($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934635), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B850u;
    if (runtime->hasFunction(0x14B850u)) {
        auto targetFn = runtime->lookupFunction(0x14B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B840u; }
        if (ctx->pc != 0x14B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B850_0x14b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B840u; }
        if (ctx->pc != 0x14B840u) { return; }
    }
    ctx->pc = 0x14B840u;
label_14b840:
    // 0x14b840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b844: 0x3e00008  jr          $ra
    ctx->pc = 0x14B844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B844u;
            // 0x14b848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B84Cu;
    // 0x14b84c: 0x0  nop
    ctx->pc = 0x14b84cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002690F0
// Address: 0x2690f0 - 0x2691f0
void sub_002690F0_0x2690f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002690F0_0x2690f0");
#endif

    switch (ctx->pc) {
        case 0x2691dcu: goto label_2691dc;
        default: break;
    }

    ctx->pc = 0x2690f0u;

    // 0x2690f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2690f4: 0x3c0233d6  lui         $v0, 0x33D6
    ctx->pc = 0x2690f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13270 << 16));
    // 0x2690f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2690f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2690fc: 0x3443bf95  ori         $v1, $v0, 0xBF95
    ctx->pc = 0x2690fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49045);
    // 0x269100: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x269100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x269104: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x269104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x269108: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x269108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x26910c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x26910cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x269110: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x269110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x269114: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x269114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x269118: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x269118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x26911c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x26911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x269120: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x269120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x269124: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x269124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269128: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x269128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26912c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x26912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269130: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x269130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269134: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x269134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269138: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x269138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26913c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x26913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269140: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x269140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269144: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x269144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x269148: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x269148u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x26914c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x26914cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x269150: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x269150u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x269154: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x269154u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x269158: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x269158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26915c: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x26915cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x269160: 0x4601005c  madd.s      $f1, $f0, $f1
    ctx->pc = 0x269160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x269164: 0x460a0836  c.le.s      $f1, $f10
    ctx->pc = 0x269164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269168: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x269168u;
    {
        const bool branch_taken_0x269168 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269168u;
            // 0x26916c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269168) {
            ctx->pc = 0x269188u;
            goto label_269188;
        }
    }
    ctx->pc = 0x269170u;
    // 0x269170: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x269170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x269174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269178: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x269178u;
    {
        const bool branch_taken_0x269178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269178) {
            ctx->pc = 0x2691A8u;
            goto label_2691a8;
        }
    }
    ctx->pc = 0x269180u;
    // 0x269180: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x269180u;
    {
        const bool branch_taken_0x269180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269180u;
            // 0x269184: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269180) {
            ctx->pc = 0x2691A8u;
            goto label_2691a8;
        }
    }
    ctx->pc = 0x269188u;
label_269188:
    // 0x269188: 0x46014800  add.s       $f0, $f9, $f1
    ctx->pc = 0x269188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x26918c: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x26918cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269190: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x269190u;
    {
        const bool branch_taken_0x269190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269190) {
            ctx->pc = 0x2691A0u;
            goto label_2691a0;
        }
    }
    ctx->pc = 0x269198u;
    // 0x269198: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x269198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26919c: 0x0  nop
    ctx->pc = 0x26919cu;
    // NOP
label_2691a0:
    // 0x2691a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2691a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2691a4: 0x0  nop
    ctx->pc = 0x2691a4u;
    // NOP
label_2691a8:
    // 0x2691a8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2691a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2691ac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2691acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2691b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2691b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2691b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2691B4u;
    {
        const bool branch_taken_0x2691b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2691b4) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x2691BCu;
    // 0x2691bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2691bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2691c0:
    // 0x2691c0: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x2691c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x2691c4: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x2691c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2691c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2691c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2691cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2691CCu;
    {
        const bool branch_taken_0x2691cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2691D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691CCu;
            // 0x2691d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691cc) {
            ctx->pc = 0x2691DCu;
            goto label_2691dc;
        }
    }
    ctx->pc = 0x2691D4u;
    // 0x2691d4: 0xc09a47c  jal         func_2691F0
    ctx->pc = 0x2691D4u;
    SET_GPR_U32(ctx, 31, 0x2691DCu);
    ctx->pc = 0x2691F0u;
    if (runtime->hasFunction(0x2691F0u)) {
        auto targetFn = runtime->lookupFunction(0x2691F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691DCu; }
        if (ctx->pc != 0x2691DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002691F0_0x2691f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691DCu; }
        if (ctx->pc != 0x2691DCu) { return; }
    }
    ctx->pc = 0x2691DCu;
label_2691dc:
    // 0x2691dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2691dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2691e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2691E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2691E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691E0u;
            // 0x2691e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2691E8u;
    // 0x2691e8: 0x0  nop
    ctx->pc = 0x2691e8u;
    // NOP
    // 0x2691ec: 0x0  nop
    ctx->pc = 0x2691ecu;
    // NOP
}

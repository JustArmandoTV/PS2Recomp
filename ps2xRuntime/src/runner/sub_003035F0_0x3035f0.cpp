#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003035F0
// Address: 0x3035f0 - 0x303680
void sub_003035F0_0x3035f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003035F0_0x3035f0");
#endif

    switch (ctx->pc) {
        case 0x30363cu: goto label_30363c;
        case 0x303654u: goto label_303654;
        case 0x303670u: goto label_303670;
        default: break;
    }

    ctx->pc = 0x3035f0u;

    // 0x3035f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3035f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3035f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3035f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3035f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3035fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3035fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303600: 0xc4820e28  lwc1        $f2, 0xE28($a0)
    ctx->pc = 0x303600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303604: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x303604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303608: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x303608u;
    {
        const bool branch_taken_0x303608 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303608u;
            // 0x30360c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303608) {
            ctx->pc = 0x303670u;
            goto label_303670;
        }
    }
    ctx->pc = 0x303610u;
    // 0x303610: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x303610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x303614: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x303618: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x303618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30361c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30361cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x303620: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x303620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303624: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x303624u;
    {
        const bool branch_taken_0x303624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303624u;
            // 0x303628: 0xe6000e28  swc1        $f0, 0xE28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303624) {
            ctx->pc = 0x303670u;
            goto label_303670;
        }
    }
    ctx->pc = 0x30362Cu;
    // 0x30362c: 0xe6010e28  swc1        $f1, 0xE28($s0)
    ctx->pc = 0x30362cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3624), bits); }
    // 0x303630: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x303634: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x303634u;
    SET_GPR_U32(ctx, 31, 0x30363Cu);
    ctx->pc = 0x303638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303634u;
            // 0x303638: 0xae000e10  sw          $zero, 0xE10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30363Cu; }
        if (ctx->pc != 0x30363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30363Cu; }
        if (ctx->pc != 0x30363Cu) { return; }
    }
    ctx->pc = 0x30363Cu;
label_30363c:
    // 0x30363c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x30363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x303640: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x303640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x303644: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x303644u;
    {
        const bool branch_taken_0x303644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303644) {
            ctx->pc = 0x303648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303644u;
            // 0x303648: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303674u;
            goto label_303674;
        }
    }
    ctx->pc = 0x30364Cu;
    // 0x30364c: 0xc040180  jal         func_100600
    ctx->pc = 0x30364Cu;
    SET_GPR_U32(ctx, 31, 0x303654u);
    ctx->pc = 0x303650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30364Cu;
            // 0x303650: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303654u; }
        if (ctx->pc != 0x303654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303654u; }
        if (ctx->pc != 0x303654u) { return; }
    }
    ctx->pc = 0x303654u;
label_303654:
    // 0x303654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303658: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303658u;
    {
        const bool branch_taken_0x303658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303658) {
            ctx->pc = 0x303670u;
            goto label_303670;
        }
    }
    ctx->pc = 0x303660u;
    // 0x303660: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x303660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x303664: 0xc60c0a80  lwc1        $f12, 0xA80($s0)
    ctx->pc = 0x303664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303668: 0xc11ebc4  jal         func_47AF10
    ctx->pc = 0x303668u;
    SET_GPR_U32(ctx, 31, 0x303670u);
    ctx->pc = 0x30366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303668u;
            // 0x30366c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303670u; }
        if (ctx->pc != 0x303670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303670u; }
        if (ctx->pc != 0x303670u) { return; }
    }
    ctx->pc = 0x303670u;
label_303670:
    // 0x303670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_303674:
    // 0x303674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303678: 0x3e00008  jr          $ra
    ctx->pc = 0x303678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303678u;
            // 0x30367c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303680u;
}

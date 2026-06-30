#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266C10
// Address: 0x266c10 - 0x266c70
void sub_00266C10_0x266c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C10_0x266c10");
#endif

    switch (ctx->pc) {
        case 0x266c30u: goto label_266c30;
        case 0x266c5cu: goto label_266c5c;
        default: break;
    }

    ctx->pc = 0x266c10u;

    // 0x266c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x266c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266c18: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x266c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266c20: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x266c24: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x266c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x266c28: 0xc099948  jal         func_266520
    ctx->pc = 0x266C28u;
    SET_GPR_U32(ctx, 31, 0x266C30u);
    ctx->pc = 0x266C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C28u;
            // 0x266c2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266520u;
    if (runtime->hasFunction(0x266520u)) {
        auto targetFn = runtime->lookupFunction(0x266520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C30u; }
        if (ctx->pc != 0x266C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266520_0x266520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C30u; }
        if (ctx->pc != 0x266C30u) { return; }
    }
    ctx->pc = 0x266C30u;
label_266c30:
    // 0x266c30: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x266c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266c34: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x266c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266c38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266c3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x266C3Cu;
    {
        const bool branch_taken_0x266c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266C3Cu;
            // 0x266c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c3c) {
            ctx->pc = 0x266C50u;
            goto label_266c50;
        }
    }
    ctx->pc = 0x266C44u;
    // 0x266c44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266C44u;
    {
        const bool branch_taken_0x266c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c44) {
            ctx->pc = 0x266C60u;
            goto label_266c60;
        }
    }
    ctx->pc = 0x266C4Cu;
    // 0x266c4c: 0x0  nop
    ctx->pc = 0x266c4cu;
    // NOP
label_266c50:
    // 0x266c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c54: 0xc099b88  jal         func_266E20
    ctx->pc = 0x266C54u;
    SET_GPR_U32(ctx, 31, 0x266C5Cu);
    ctx->pc = 0x266C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C54u;
            // 0x266c58: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C5Cu; }
        if (ctx->pc != 0x266C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C5Cu; }
        if (ctx->pc != 0x266C5Cu) { return; }
    }
    ctx->pc = 0x266C5Cu;
label_266c5c:
    // 0x266c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266c60:
    // 0x266c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266c68: 0x3e00008  jr          $ra
    ctx->pc = 0x266C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266C68u;
            // 0x266c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266C70u;
}

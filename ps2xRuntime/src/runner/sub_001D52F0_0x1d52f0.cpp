#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D52F0
// Address: 0x1d52f0 - 0x1d5380
void sub_001D52F0_0x1d52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D52F0_0x1d52f0");
#endif

    switch (ctx->pc) {
        case 0x1d5370u: goto label_1d5370;
        default: break;
    }

    ctx->pc = 0x1d52f0u;

    // 0x1d52f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d52f8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1d52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d52fc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d5300: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D5300u;
    {
        const bool branch_taken_0x1d5300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5300) {
            ctx->pc = 0x1D5304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5300u;
            // 0x1d5304: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5374u;
            goto label_1d5374;
        }
    }
    ctx->pc = 0x1D5308u;
    // 0x1d5308: 0xc4820104  lwc1        $f2, 0x104($a0)
    ctx->pc = 0x1d5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d530c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d530cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5310: 0x0  nop
    ctx->pc = 0x1d5310u;
    // NOP
    // 0x1d5314: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d5314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5318: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5318u;
    {
        const bool branch_taken_0x1d5318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5318) {
            ctx->pc = 0x1D5370u;
            goto label_1d5370;
        }
    }
    ctx->pc = 0x1D5320u;
    // 0x1d5320: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1d5324: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x1d5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x1d5328: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1d5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d532c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d532cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1d5330: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d5330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5334: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5334u;
            // 0x1d5338: 0xe4800104  swc1        $f0, 0x104($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D5370u;
            goto label_1d5370;
        }
    }
    ctx->pc = 0x1D533Cu;
    // 0x1d533c: 0x8c8700d8  lw          $a3, 0xD8($a0)
    ctx->pc = 0x1d533cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x1d5340: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1d5344: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x1d5344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x1d5348: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1d5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1d534c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x1d534cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1d5350: 0xac8600d8  sw          $a2, 0xD8($a0)
    ctx->pc = 0x1d5350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 6));
    // 0x1d5354: 0xac850104  sw          $a1, 0x104($a0)
    ctx->pc = 0x1d5354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
    // 0x1d5358: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1d535c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1d5360: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5360u;
    {
        const bool branch_taken_0x1d5360 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5360) {
            ctx->pc = 0x1D5370u;
            goto label_1d5370;
        }
    }
    ctx->pc = 0x1D5368u;
    // 0x1d5368: 0xc0bd6b0  jal         func_2F5AC0
    ctx->pc = 0x1D5368u;
    SET_GPR_U32(ctx, 31, 0x1D5370u);
    ctx->pc = 0x1D536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5368u;
            // 0x1d536c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5AC0u;
    if (runtime->hasFunction(0x2F5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5370u; }
        if (ctx->pc != 0x1D5370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5AC0_0x2f5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5370u; }
        if (ctx->pc != 0x1D5370u) { return; }
    }
    ctx->pc = 0x1D5370u;
label_1d5370:
    // 0x1d5370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5374:
    // 0x1d5374: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5374u;
            // 0x1d5378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D537Cu;
    // 0x1d537c: 0x0  nop
    ctx->pc = 0x1d537cu;
    // NOP
}

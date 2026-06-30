#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138420
// Address: 0x138420 - 0x1384b0
void sub_00138420_0x138420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138420_0x138420");
#endif

    switch (ctx->pc) {
        case 0x138430u: goto label_138430;
        default: break;
    }

    ctx->pc = 0x138420u;

    // 0x138420: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138424: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x138428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138424u;
            // 0x138428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138424) {
            ctx->pc = 0x138470u;
            goto label_138470;
        }
    }
    ctx->pc = 0x13842Cu;
    // 0x13842c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_138430:
    // 0x138430: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x138430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x138434: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x138434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138438: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13843c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138440: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x138440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138444: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x138444u;
    {
        const bool branch_taken_0x138444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138444) {
            ctx->pc = 0x138458u;
            goto label_138458;
        }
    }
    ctx->pc = 0x13844Cu;
    // 0x13844c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13844Cu;
    {
        const bool branch_taken_0x13844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13844Cu;
            // 0x138450: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13844c) {
            ctx->pc = 0x138460u;
            goto label_138460;
        }
    }
    ctx->pc = 0x138454u;
    // 0x138454: 0x0  nop
    ctx->pc = 0x138454u;
    // NOP
label_138458:
    // 0x138458: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x138458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13845c: 0x0  nop
    ctx->pc = 0x13845cu;
    // NOP
label_138460:
    // 0x138460: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x138460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x138464: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x138464u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138468: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x138468u;
    {
        const bool branch_taken_0x138468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138468) {
            ctx->pc = 0x13846Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138468u;
            // 0x13846c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138430;
        }
    }
    ctx->pc = 0x138470u;
label_138470:
    // 0x138470: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x138474: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x138478: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x138478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13847c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x13847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x138480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x138484: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x138484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138488: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x138488u;
    {
        const bool branch_taken_0x138488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138488) {
            ctx->pc = 0x13848Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138488u;
            // 0x13848c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13849Cu;
            goto label_13849c;
        }
    }
    ctx->pc = 0x138490u;
    // 0x138490: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x138490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x138494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138494u;
    {
        const bool branch_taken_0x138494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138494u;
            // 0x138498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138494) {
            ctx->pc = 0x1384A4u;
            goto label_1384a4;
        }
    }
    ctx->pc = 0x13849Cu;
label_13849c:
    // 0x13849c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1384a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1384a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1384a4:
    // 0x1384a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1384A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1384ACu;
    // 0x1384ac: 0x0  nop
    ctx->pc = 0x1384acu;
    // NOP
}

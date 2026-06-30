#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027EAF0
// Address: 0x27eaf0 - 0x27eb60
void sub_0027EAF0_0x27eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EAF0_0x27eaf0");
#endif

    switch (ctx->pc) {
        case 0x27eb28u: goto label_27eb28;
        default: break;
    }

    ctx->pc = 0x27eaf0u;

    // 0x27eaf0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27eaf4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x27eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eaf8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x27eaf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27eafc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27eb00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27eb00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb04: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27eb08: 0x80e7001c  lb          $a3, 0x1C($a3)
    ctx->pc = 0x27eb08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x27eb0c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x27eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x27eb10: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x27eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27eb14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27eb18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27eb1c: 0xc4601a80  lwc1        $f0, 0x1A80($v1)
    ctx->pc = 0x27eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb20: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x27EB20u;
    {
        const bool branch_taken_0x27eb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB20u;
            // 0x27eb24: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb20) {
            ctx->pc = 0x27EB58u;
            goto label_27eb58;
        }
    }
    ctx->pc = 0x27EB28u;
label_27eb28:
    // 0x27eb28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27eb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27eb2c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27eb2cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x27eb30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x27eb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27eb34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27eb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x27EB38u;
    {
        const bool branch_taken_0x27eb38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eb38) {
            ctx->pc = 0x27EB48u;
            goto label_27eb48;
        }
    }
    ctx->pc = 0x27EB40u;
    // 0x27eb40: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27eb40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27eb44: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x27eb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27eb48:
    // 0x27eb48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27eb48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27eb4c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27eb50: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x27EB50u;
    {
        const bool branch_taken_0x27eb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB50u;
            // 0x27eb54: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb50) {
            ctx->pc = 0x27EB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27eb28;
        }
    }
    ctx->pc = 0x27EB58u;
label_27eb58:
    // 0x27eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x27EB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EB60u;
}

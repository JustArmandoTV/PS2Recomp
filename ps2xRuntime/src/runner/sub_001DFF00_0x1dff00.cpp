#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFF00
// Address: 0x1dff00 - 0x1dff50
void sub_001DFF00_0x1dff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF00_0x1dff00");
#endif

    ctx->pc = 0x1dff00u;

    // 0x1dff00: 0x8c860da0  lw          $a2, 0xDA0($a0)
    ctx->pc = 0x1dff00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x1dff04: 0x30c30200  andi        $v1, $a2, 0x200
    ctx->pc = 0x1dff04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x1dff08: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DFF08u;
    {
        const bool branch_taken_0x1dff08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff08) {
            ctx->pc = 0x1DFF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF08u;
            // 0x1dff0c: 0xc51824  and         $v1, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFF3Cu;
            goto label_1dff3c;
        }
    }
    ctx->pc = 0x1DFF10u;
    // 0x1dff10: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x1dff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1dff14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFF14u;
    {
        const bool branch_taken_0x1dff14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff14) {
            ctx->pc = 0x1DFF38u;
            goto label_1dff38;
        }
    }
    ctx->pc = 0x1DFF1Cu;
    // 0x1dff1c: 0xc4810e48  lwc1        $f1, 0xE48($a0)
    ctx->pc = 0x1dff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dff20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dff20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dff24: 0x0  nop
    ctx->pc = 0x1dff24u;
    // NOP
    // 0x1dff28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1dff28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dff2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFF2Cu;
    {
        const bool branch_taken_0x1dff2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dff2c) {
            ctx->pc = 0x1DFF38u;
            goto label_1dff38;
        }
    }
    ctx->pc = 0x1DFF34u;
    // 0x1dff34: 0x0  nop
    ctx->pc = 0x1dff34u;
    // NOP
label_1dff38:
    // 0x1dff38: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1dff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1dff3c:
    // 0x1dff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF3Cu;
            // 0x1dff40: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFF44u;
    // 0x1dff44: 0x0  nop
    ctx->pc = 0x1dff44u;
    // NOP
    // 0x1dff48: 0x0  nop
    ctx->pc = 0x1dff48u;
    // NOP
    // 0x1dff4c: 0x0  nop
    ctx->pc = 0x1dff4cu;
    // NOP
}

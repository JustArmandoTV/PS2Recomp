#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161730
// Address: 0x161730 - 0x161788
void sub_00161730_0x161730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161730_0x161730");
#endif

    switch (ctx->pc) {
        case 0x161750u: goto label_161750;
        default: break;
    }

    ctx->pc = 0x161730u;

    // 0x161730: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x161734: 0x24665c70  addiu       $a2, $v1, 0x5C70
    ctx->pc = 0x161734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
    // 0x161738: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16173c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16173Cu;
    {
        const bool branch_taken_0x16173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16173Cu;
            // 0x161740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16173c) {
            ctx->pc = 0x161774u;
            goto label_161774;
        }
    }
    ctx->pc = 0x161744u;
    // 0x161744: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x161744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161748: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x161748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16174c: 0x0  nop
    ctx->pc = 0x16174cu;
    // NOP
label_161750:
    // 0x161750: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161754: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x161754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x161758: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161758u;
    {
        const bool branch_taken_0x161758 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x16175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161758u;
            // 0x16175c: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161758) {
            ctx->pc = 0x161774u;
            goto label_161774;
        }
    }
    ctx->pc = 0x161760u;
    // 0x161760: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161764: 0x0  nop
    ctx->pc = 0x161764u;
    // NOP
    // 0x161768: 0x0  nop
    ctx->pc = 0x161768u;
    // NOP
    // 0x16176c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16176Cu;
    {
        const bool branch_taken_0x16176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16176Cu;
            // 0x161770: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16176c) {
            ctx->pc = 0x161750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161750;
        }
    }
    ctx->pc = 0x161774u;
label_161774:
    // 0x161774: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x161774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x161778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16177c: 0x3e00008  jr          $ra
    ctx->pc = 0x16177Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16177Cu;
            // 0x161780: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161784u;
    // 0x161784: 0x0  nop
    ctx->pc = 0x161784u;
    // NOP
}

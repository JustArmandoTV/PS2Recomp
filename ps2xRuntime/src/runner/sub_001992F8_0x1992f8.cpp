#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001992F8
// Address: 0x1992f8 - 0x199348
void sub_001992F8_0x1992f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001992F8_0x1992f8");
#endif

    ctx->pc = 0x1992f8u;

    // 0x1992f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1992fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1992FCu;
    {
        const bool branch_taken_0x1992fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992FCu;
            // 0x199300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992fc) {
            ctx->pc = 0x199328u;
            goto label_199328;
        }
    }
    ctx->pc = 0x199304u;
    // 0x199304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x199308: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199308u;
    {
        const bool branch_taken_0x199308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199308u;
            // 0x19930c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199308) {
            ctx->pc = 0x19933Cu;
            goto label_19933c;
        }
    }
    ctx->pc = 0x199310u;
    // 0x199310: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x199314: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x199314u;
    {
        const bool branch_taken_0x199314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199314) {
            ctx->pc = 0x199318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199314u;
            // 0x199318: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199338u;
            goto label_199338;
        }
    }
    ctx->pc = 0x19931Cu;
    // 0x19931c: 0x3e00008  jr          $ra
    ctx->pc = 0x19931Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19931Cu;
            // 0x199320: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199324u;
    // 0x199324: 0x0  nop
    ctx->pc = 0x199324u;
    // NOP
label_199328:
    // 0x199328: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19932c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199330: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199334: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x199334u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_199338:
    // 0x199338: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19933c:
    // 0x19933c: 0x3e00008  jr          $ra
    ctx->pc = 0x19933Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199344u;
    // 0x199344: 0x0  nop
    ctx->pc = 0x199344u;
    // NOP
}

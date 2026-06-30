#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABD38
// Address: 0x1abd38 - 0x1abda0
void sub_001ABD38_0x1abd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABD38_0x1abd38");
#endif

    ctx->pc = 0x1abd38u;

    // 0x1abd38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1abd38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1abd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1abd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1abd44: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1abd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1abd48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABD48u;
    {
        const bool branch_taken_0x1abd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD48u;
            // 0x1abd4c: 0xc32023  subu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd48) {
            ctx->pc = 0x1ABD64u;
            goto label_1abd64;
        }
    }
    ctx->pc = 0x1ABD50u;
    // 0x1abd50: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1abd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1abd54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1abd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1abd58: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1abd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abd5c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ABD5Cu;
    {
        const bool branch_taken_0x1abd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd5c) {
            ctx->pc = 0x1ABD94u;
            goto label_1abd94;
        }
    }
    ctx->pc = 0x1ABD64u;
label_1abd64:
    // 0x1abd64: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1abd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1abd68: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1abd68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1abd6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABD6Cu;
    {
        const bool branch_taken_0x1abd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD6Cu;
            // 0x1abd70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd6c) {
            ctx->pc = 0x1ABD94u;
            goto label_1abd94;
        }
    }
    ctx->pc = 0x1ABD74u;
    // 0x1abd74: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1abd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1abd78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1abd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1abd7c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abd80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABD80u;
    {
        const bool branch_taken_0x1abd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd80) {
            ctx->pc = 0x1ABD94u;
            goto label_1abd94;
        }
    }
    ctx->pc = 0x1ABD88u;
    // 0x1abd88: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1abd8c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x1abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1abd90: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1abd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1abd94:
    // 0x1abd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD94u;
            // 0x1abd98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABD9Cu;
    // 0x1abd9c: 0x0  nop
    ctx->pc = 0x1abd9cu;
    // NOP
}

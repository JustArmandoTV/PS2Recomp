#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00406FF0
// Address: 0x406ff0 - 0x407020
void sub_00406FF0_0x406ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406FF0_0x406ff0");
#endif

    ctx->pc = 0x406ff0u;

    // 0x406ff0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x406FF0u;
    {
        const bool branch_taken_0x406ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x406ff0) {
            ctx->pc = 0x406FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406FF0u;
            // 0x406ff4: 0x90830084  lbu         $v1, 0x84($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407008u;
            goto label_407008;
        }
    }
    ctx->pc = 0x406FF8u;
    // 0x406ff8: 0x90830084  lbu         $v1, 0x84($a0)
    ctx->pc = 0x406ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x406ffc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x406ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x407000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x407000u;
    {
        const bool branch_taken_0x407000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407000u;
            // 0x407004: 0xa0830084  sb          $v1, 0x84($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407000) {
            ctx->pc = 0x407010u;
            goto label_407010;
        }
    }
    ctx->pc = 0x407008u;
label_407008:
    // 0x407008: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x407008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x40700c: 0xa0830084  sb          $v1, 0x84($a0)
    ctx->pc = 0x40700cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 3));
label_407010:
    // 0x407010: 0x3e00008  jr          $ra
    ctx->pc = 0x407010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407018u;
    // 0x407018: 0x0  nop
    ctx->pc = 0x407018u;
    // NOP
    // 0x40701c: 0x0  nop
    ctx->pc = 0x40701cu;
    // NOP
}

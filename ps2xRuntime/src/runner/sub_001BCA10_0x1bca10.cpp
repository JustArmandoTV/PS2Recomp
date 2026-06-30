#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCA10
// Address: 0x1bca10 - 0x1bca48
void sub_001BCA10_0x1bca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA10_0x1bca10");
#endif

    ctx->pc = 0x1bca10u;

    // 0x1bca10: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bca14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bca18: 0x90c300c4  lbu         $v1, 0xC4($a2)
    ctx->pc = 0x1bca18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x1bca1c: 0x90c400c5  lbu         $a0, 0xC5($a2)
    ctx->pc = 0x1bca1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 197)));
    // 0x1bca20: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca24: 0x90c700c6  lbu         $a3, 0xC6($a2)
    ctx->pc = 0x1bca24u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 198)));
    // 0x1bca28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bca2c: 0x90c800c7  lbu         $t0, 0xC7($a2)
    ctx->pc = 0x1bca2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 199)));
    // 0x1bca30: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bca38: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bca3c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bca40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA40u;
            // 0x1bca44: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCA48u;
}

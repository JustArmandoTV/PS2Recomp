#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167C30
// Address: 0x167c30 - 0x167ca0
void sub_00167C30_0x167c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167C30_0x167c30");
#endif

    ctx->pc = 0x167c30u;

    // 0x167c30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x167c34: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x167c34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x167c38: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x167c38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x167c3c: 0x8c437258  lw          $v1, 0x7258($v0)
    ctx->pc = 0x167c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29272)));
    // 0x167c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167c44: 0xa6403  sra         $t4, $t2, 16
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 16));
    // 0x167c48: 0xb6c03  sra         $t5, $t3, 16
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 11), 16));
    // 0x167c4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167c50: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x167c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c54: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x167c54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c58: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x167c58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167c5c: 0x87af0038  lh          $t7, 0x38($sp)
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167c60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x167C60u;
    {
        const bool branch_taken_0x167c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C60u;
            // 0x167c64: 0x87a20040  lh          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c60) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167C68u;
    // 0x167c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x167c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x167c70: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x167c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x167c74: 0x8059e3a  j           func_1678E8
    ctx->pc = 0x167C74u;
    ctx->pc = 0x167C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167C74u;
            // 0x167c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1678E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1678E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x167C7Cu;
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c84: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x167c84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c88: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x167c88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c8c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x167c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x167c90: 0xafae0030  sw          $t6, 0x30($sp)
    ctx->pc = 0x167c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
    // 0x167c94: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x167c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x167c98: 0x8059d48  j           func_167520
    ctx->pc = 0x167C98u;
    ctx->pc = 0x167C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167C98u;
            // 0x167c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167520u;
    {
        auto targetFn = runtime->lookupFunction(0x167520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x167CA0u;
}

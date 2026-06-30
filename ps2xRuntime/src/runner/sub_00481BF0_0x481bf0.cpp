#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481BF0
// Address: 0x481bf0 - 0x481c60
void sub_00481BF0_0x481bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481BF0_0x481bf0");
#endif

    switch (ctx->pc) {
        case 0x481c40u: goto label_481c40;
        default: break;
    }

    ctx->pc = 0x481bf0u;

    // 0x481bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x481bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x481bf4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x481bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x481bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481bfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x481bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x481c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481c04: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x481c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x481c08: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x481c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481c0c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x481c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x481c10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x481c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x481c14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x481c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x481c18: 0xa0c50428  sb          $a1, 0x428($a2)
    ctx->pc = 0x481c18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1064), (uint8_t)GPR_U32(ctx, 5));
    // 0x481c1c: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x481c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
    // 0x481c20: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x481c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x481c24: 0xa0c40429  sb          $a0, 0x429($a2)
    ctx->pc = 0x481c24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1065), (uint8_t)GPR_U32(ctx, 4));
    // 0x481c28: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x481c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x481c2c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x481c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x481c30: 0xa0c3042a  sb          $v1, 0x42A($a2)
    ctx->pc = 0x481c30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1066), (uint8_t)GPR_U32(ctx, 3));
    // 0x481c34: 0x8c44a140  lw          $a0, -0x5EC0($v0)
    ctx->pc = 0x481c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x481c38: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x481C38u;
    SET_GPR_U32(ctx, 31, 0x481C40u);
    ctx->pc = 0x481C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481C38u;
            // 0x481c3c: 0x24d00428  addiu       $s0, $a2, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C40u; }
        if (ctx->pc != 0x481C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C40u; }
        if (ctx->pc != 0x481C40u) { return; }
    }
    ctx->pc = 0x481C40u;
label_481c40:
    // 0x481c40: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x481c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x481c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x481C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481C4Cu;
            // 0x481c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481C54u;
    // 0x481c54: 0x0  nop
    ctx->pc = 0x481c54u;
    // NOP
    // 0x481c58: 0x0  nop
    ctx->pc = 0x481c58u;
    // NOP
    // 0x481c5c: 0x0  nop
    ctx->pc = 0x481c5cu;
    // NOP
}

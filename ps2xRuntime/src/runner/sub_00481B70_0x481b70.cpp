#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481B70
// Address: 0x481b70 - 0x481bf0
void sub_00481B70_0x481b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481B70_0x481b70");
#endif

    switch (ctx->pc) {
        case 0x481ba0u: goto label_481ba0;
        case 0x481bd4u: goto label_481bd4;
        default: break;
    }

    ctx->pc = 0x481b70u;

    // 0x481b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x481b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x481b74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x481b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x481b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481b80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x481b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481b84: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x481b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x481b88: 0x90640428  lbu         $a0, 0x428($v1)
    ctx->pc = 0x481b88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1064)));
    // 0x481b8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x481b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x481b90: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x481B90u;
    {
        const bool branch_taken_0x481b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x481B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481B90u;
            // 0x481b94: 0x24700428  addiu       $s0, $v1, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481b90) {
            ctx->pc = 0x481BA0u;
            goto label_481ba0;
        }
    }
    ctx->pc = 0x481B98u;
    // 0x481b98: 0xc12a328  jal         func_4A8CA0
    ctx->pc = 0x481B98u;
    SET_GPR_U32(ctx, 31, 0x481BA0u);
    ctx->pc = 0x4A8CA0u;
    if (runtime->hasFunction(0x4A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481BA0u; }
        if (ctx->pc != 0x481BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8CA0_0x4a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481BA0u; }
        if (ctx->pc != 0x481BA0u) { return; }
    }
    ctx->pc = 0x481BA0u;
label_481ba0:
    // 0x481ba0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x481ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x481ba4: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x481ba4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x481ba8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x481ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x481bac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x481bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x481bb0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x481bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x481bb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x481bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x481bb8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x481bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x481bbc: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x481bbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x481bc0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x481bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x481bc4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x481bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x481bc8: 0x8c44a140  lw          $a0, -0x5EC0($v0)
    ctx->pc = 0x481bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x481bcc: 0xc073e90  jal         func_1CFA40
    ctx->pc = 0x481BCCu;
    SET_GPR_U32(ctx, 31, 0x481BD4u);
    ctx->pc = 0x481BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481BCCu;
            // 0x481bd0: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA40u;
    if (runtime->hasFunction(0x1CFA40u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481BD4u; }
        if (ctx->pc != 0x481BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA40_0x1cfa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481BD4u; }
        if (ctx->pc != 0x481BD4u) { return; }
    }
    ctx->pc = 0x481BD4u;
label_481bd4:
    // 0x481bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x481BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481BDCu;
            // 0x481be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481BE4u;
    // 0x481be4: 0x0  nop
    ctx->pc = 0x481be4u;
    // NOP
    // 0x481be8: 0x0  nop
    ctx->pc = 0x481be8u;
    // NOP
    // 0x481bec: 0x0  nop
    ctx->pc = 0x481becu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502B80
// Address: 0x502b80 - 0x502bd0
void sub_00502B80_0x502b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502B80_0x502b80");
#endif

    switch (ctx->pc) {
        case 0x502bb8u: goto label_502bb8;
        default: break;
    }

    ctx->pc = 0x502b80u;

    // 0x502b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x502b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x502b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x502b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x502b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x502b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x502b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502b90: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x502B90u;
    {
        const bool branch_taken_0x502b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x502b90) {
            ctx->pc = 0x502B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502B90u;
            // 0x502b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502BBCu;
            goto label_502bbc;
        }
    }
    ctx->pc = 0x502B98u;
    // 0x502b98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x502b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x502b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x502ba0: 0x246347e0  addiu       $v1, $v1, 0x47E0
    ctx->pc = 0x502ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18400));
    // 0x502ba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x502ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x502ba8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x502BA8u;
    {
        const bool branch_taken_0x502ba8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x502BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502BA8u;
            // 0x502bac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502ba8) {
            ctx->pc = 0x502BB8u;
            goto label_502bb8;
        }
    }
    ctx->pc = 0x502BB0u;
    // 0x502bb0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x502BB0u;
    SET_GPR_U32(ctx, 31, 0x502BB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502BB8u; }
        if (ctx->pc != 0x502BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502BB8u; }
        if (ctx->pc != 0x502BB8u) { return; }
    }
    ctx->pc = 0x502BB8u;
label_502bb8:
    // 0x502bb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x502bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_502bbc:
    // 0x502bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x502bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x502bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x502bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x502BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502BC4u;
            // 0x502bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502BCCu;
    // 0x502bcc: 0x0  nop
    ctx->pc = 0x502bccu;
    // NOP
}

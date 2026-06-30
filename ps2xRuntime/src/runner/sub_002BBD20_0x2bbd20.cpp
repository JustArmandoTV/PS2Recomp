#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBD20
// Address: 0x2bbd20 - 0x2bbd80
void sub_002BBD20_0x2bbd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBD20_0x2bbd20");
#endif

    switch (ctx->pc) {
        case 0x2bbd60u: goto label_2bbd60;
        default: break;
    }

    ctx->pc = 0x2bbd20u;

    // 0x2bbd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BBD30u;
    {
        const bool branch_taken_0x2bbd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd30) {
            ctx->pc = 0x2BBD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD30u;
            // 0x2bbd34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBD64u;
            goto label_2bbd64;
        }
    }
    ctx->pc = 0x2BBD38u;
    // 0x2bbd38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbd3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bbd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bbd40: 0x24422128  addiu       $v0, $v0, 0x2128
    ctx->pc = 0x2bbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8488));
    // 0x2bbd44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bbd44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bbd48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bbd4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bbd50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBD50u;
    {
        const bool branch_taken_0x2bbd50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BBD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD50u;
            // 0x2bbd54: 0xac400d38  sw          $zero, 0xD38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd50) {
            ctx->pc = 0x2BBD60u;
            goto label_2bbd60;
        }
    }
    ctx->pc = 0x2BBD58u;
    // 0x2bbd58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BBD58u;
    SET_GPR_U32(ctx, 31, 0x2BBD60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD60u; }
        if (ctx->pc != 0x2BBD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD60u; }
        if (ctx->pc != 0x2BBD60u) { return; }
    }
    ctx->pc = 0x2BBD60u;
label_2bbd60:
    // 0x2bbd60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd64:
    // 0x2bbd64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD6Cu;
            // 0x2bbd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBD74u;
    // 0x2bbd74: 0x0  nop
    ctx->pc = 0x2bbd74u;
    // NOP
    // 0x2bbd78: 0x0  nop
    ctx->pc = 0x2bbd78u;
    // NOP
    // 0x2bbd7c: 0x0  nop
    ctx->pc = 0x2bbd7cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BBA0
// Address: 0x26bba0 - 0x26bc20
void sub_0026BBA0_0x26bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BBA0_0x26bba0");
#endif

    switch (ctx->pc) {
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbfcu: goto label_26bbfc;
        default: break;
    }

    ctx->pc = 0x26bba0u;

    // 0x26bba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26bba4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26bba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26bbac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26bbb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26bbb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bbb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26bbb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bbc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbc4: 0x80a2003a  lb          $v0, 0x3A($a1)
    ctx->pc = 0x26bbc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x26bbc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26bbcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26bbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26bbd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BBD0u;
    {
        const bool branch_taken_0x26bbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBD0u;
            // 0x26bbd4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbd0) {
            ctx->pc = 0x26BBE8u;
            goto label_26bbe8;
        }
    }
    ctx->pc = 0x26BBD8u;
    // 0x26bbd8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x26bbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26bbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbe0: 0xc09aadc  jal         func_26AB70
    ctx->pc = 0x26BBE0u;
    SET_GPR_U32(ctx, 31, 0x26BBE8u);
    ctx->pc = 0x26BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBE0u;
            // 0x26bbe4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AB70u;
    if (runtime->hasFunction(0x26AB70u)) {
        auto targetFn = runtime->lookupFunction(0x26AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBE8u; }
        if (ctx->pc != 0x26BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AB70_0x26ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBE8u; }
        if (ctx->pc != 0x26BBE8u) { return; }
    }
    ctx->pc = 0x26BBE8u;
label_26bbe8:
    // 0x26bbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26bbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26bbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbf4: 0xc09b6d8  jal         func_26DB60
    ctx->pc = 0x26BBF4u;
    SET_GPR_U32(ctx, 31, 0x26BBFCu);
    ctx->pc = 0x26BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBF4u;
            // 0x26bbf8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DB60u;
    if (runtime->hasFunction(0x26DB60u)) {
        auto targetFn = runtime->lookupFunction(0x26DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBFCu; }
        if (ctx->pc != 0x26BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DB60_0x26db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBFCu; }
        if (ctx->pc != 0x26BBFCu) { return; }
    }
    ctx->pc = 0x26BBFCu;
label_26bbfc:
    // 0x26bbfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26bbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bc00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26bc00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bc04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bc04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bc10: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC10u;
            // 0x26bc14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BC18u;
    // 0x26bc18: 0x0  nop
    ctx->pc = 0x26bc18u;
    // NOP
    // 0x26bc1c: 0x0  nop
    ctx->pc = 0x26bc1cu;
    // NOP
}

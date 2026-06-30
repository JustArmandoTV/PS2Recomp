#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCB30
// Address: 0x2bcb30 - 0x2bcb90
void sub_002BCB30_0x2bcb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB30_0x2bcb30");
#endif

    switch (ctx->pc) {
        case 0x2bcb70u: goto label_2bcb70;
        default: break;
    }

    ctx->pc = 0x2bcb30u;

    // 0x2bcb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bcb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bcb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bcb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb40: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BCB40u;
    {
        const bool branch_taken_0x2bcb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb40) {
            ctx->pc = 0x2BCB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB40u;
            // 0x2bcb44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB74u;
            goto label_2bcb74;
        }
    }
    ctx->pc = 0x2BCB48u;
    // 0x2bcb48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bcb4c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bcb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bcb50: 0x24421fd0  addiu       $v0, $v0, 0x1FD0
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
    // 0x2bcb54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bcb54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bcb58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bcb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bcb5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bcb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bcb60: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCB60u;
    {
        const bool branch_taken_0x2bcb60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BCB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB60u;
            // 0x2bcb64: 0xac400d48  sw          $zero, 0xD48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb60) {
            ctx->pc = 0x2BCB70u;
            goto label_2bcb70;
        }
    }
    ctx->pc = 0x2BCB68u;
    // 0x2bcb68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BCB68u;
    SET_GPR_U32(ctx, 31, 0x2BCB70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB70u; }
        if (ctx->pc != 0x2BCB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB70u; }
        if (ctx->pc != 0x2BCB70u) { return; }
    }
    ctx->pc = 0x2BCB70u;
label_2bcb70:
    // 0x2bcb70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bcb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb74:
    // 0x2bcb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bcb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCB7Cu;
            // 0x2bcb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCB84u;
    // 0x2bcb84: 0x0  nop
    ctx->pc = 0x2bcb84u;
    // NOP
    // 0x2bcb88: 0x0  nop
    ctx->pc = 0x2bcb88u;
    // NOP
    // 0x2bcb8c: 0x0  nop
    ctx->pc = 0x2bcb8cu;
    // NOP
}

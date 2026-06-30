#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D900
// Address: 0x36d900 - 0x36d9c0
void sub_0036D900_0x36d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D900_0x36d900");
#endif

    switch (ctx->pc) {
        case 0x36d930u: goto label_36d930;
        case 0x36d988u: goto label_36d988;
        case 0x36d9a0u: goto label_36d9a0;
        default: break;
    }

    ctx->pc = 0x36d900u;

    // 0x36d900: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x36d900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d904: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36d904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d908: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d90c: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x36d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36d910: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36d914: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x36d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x36d918: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x36d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x36d91c: 0x80c614c  j           func_318530
    ctx->pc = 0x36D91Cu;
    ctx->pc = 0x36D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D91Cu;
            // 0x36d920: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00318530_0x318530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36D924u;
    // 0x36d924: 0x0  nop
    ctx->pc = 0x36d924u;
    // NOP
    // 0x36d928: 0x0  nop
    ctx->pc = 0x36d928u;
    // NOP
    // 0x36d92c: 0x0  nop
    ctx->pc = 0x36d92cu;
    // NOP
label_36d930:
    // 0x36d930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36d938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36d940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d944: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36D944u;
    {
        const bool branch_taken_0x36d944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D944u;
            // 0x36d948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d944) {
            ctx->pc = 0x36D9A0u;
            goto label_36d9a0;
        }
    }
    ctx->pc = 0x36D94Cu;
    // 0x36d94c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36d950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36d954: 0x24636b60  addiu       $v1, $v1, 0x6B60
    ctx->pc = 0x36d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27488));
    // 0x36d958: 0x24426b98  addiu       $v0, $v0, 0x6B98
    ctx->pc = 0x36d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27544));
    // 0x36d95c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36d960: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D960u;
    {
        const bool branch_taken_0x36d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D960u;
            // 0x36d964: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d960) {
            ctx->pc = 0x36D988u;
            goto label_36d988;
        }
    }
    ctx->pc = 0x36D968u;
    // 0x36d968: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36d968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36d96c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36d970: 0x24636c10  addiu       $v1, $v1, 0x6C10
    ctx->pc = 0x36d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27664));
    // 0x36d974: 0x24426c48  addiu       $v0, $v0, 0x6C48
    ctx->pc = 0x36d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27720));
    // 0x36d978: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36d978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x36d97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d980: 0xc0db670  jal         func_36D9C0
    ctx->pc = 0x36D980u;
    SET_GPR_U32(ctx, 31, 0x36D988u);
    ctx->pc = 0x36D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D980u;
            // 0x36d984: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D9C0u;
    if (runtime->hasFunction(0x36D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x36D9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D988u; }
        if (ctx->pc != 0x36D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D9C0_0x36d9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D988u; }
        if (ctx->pc != 0x36D988u) { return; }
    }
    ctx->pc = 0x36D988u;
label_36d988:
    // 0x36d988: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x36d98c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36d98cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36d990: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D990u;
    {
        const bool branch_taken_0x36d990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36d990) {
            ctx->pc = 0x36D994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36D990u;
            // 0x36d994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D9A4u;
            goto label_36d9a4;
        }
    }
    ctx->pc = 0x36D998u;
    // 0x36d998: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36D998u;
    SET_GPR_U32(ctx, 31, 0x36D9A0u);
    ctx->pc = 0x36D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D998u;
            // 0x36d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D9A0u; }
        if (ctx->pc != 0x36D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D9A0u; }
        if (ctx->pc != 0x36D9A0u) { return; }
    }
    ctx->pc = 0x36D9A0u;
label_36d9a0:
    // 0x36d9a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36d9a4:
    // 0x36d9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D9B0u;
            // 0x36d9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D9B8u;
    // 0x36d9b8: 0x0  nop
    ctx->pc = 0x36d9b8u;
    // NOP
    // 0x36d9bc: 0x0  nop
    ctx->pc = 0x36d9bcu;
    // NOP
}

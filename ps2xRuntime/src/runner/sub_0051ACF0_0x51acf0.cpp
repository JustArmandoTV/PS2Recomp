#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051ACF0
// Address: 0x51acf0 - 0x51ad60
void sub_0051ACF0_0x51acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051ACF0_0x51acf0");
#endif

    switch (ctx->pc) {
        case 0x51ad1cu: goto label_51ad1c;
        case 0x51ad28u: goto label_51ad28;
        case 0x51ad40u: goto label_51ad40;
        default: break;
    }

    ctx->pc = 0x51acf0u;

    // 0x51acf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51acf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51acf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51acfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51ad00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51ad00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ad04: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x51AD04u;
    {
        const bool branch_taken_0x51ad04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD04u;
            // 0x51ad08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ad04) {
            ctx->pc = 0x51AD40u;
            goto label_51ad40;
        }
    }
    ctx->pc = 0x51AD0Cu;
    // 0x51ad0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51ad10: 0x24425a78  addiu       $v0, $v0, 0x5A78
    ctx->pc = 0x51ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23160));
    // 0x51ad14: 0xc0d1670  jal         func_3459C0
    ctx->pc = 0x51AD14u;
    SET_GPR_U32(ctx, 31, 0x51AD1Cu);
    ctx->pc = 0x51AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD14u;
            // 0x51ad18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3459C0u;
    if (runtime->hasFunction(0x3459C0u)) {
        auto targetFn = runtime->lookupFunction(0x3459C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD1Cu; }
        if (ctx->pc != 0x51AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003459C0_0x3459c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD1Cu; }
        if (ctx->pc != 0x51AD1Cu) { return; }
    }
    ctx->pc = 0x51AD1Cu;
label_51ad1c:
    // 0x51ad1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ad20: 0xc147230  jal         func_51C8C0
    ctx->pc = 0x51AD20u;
    SET_GPR_U32(ctx, 31, 0x51AD28u);
    ctx->pc = 0x51AD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD20u;
            // 0x51ad24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C8C0u;
    if (runtime->hasFunction(0x51C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x51C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD28u; }
        if (ctx->pc != 0x51AD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C8C0_0x51c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD28u; }
        if (ctx->pc != 0x51AD28u) { return; }
    }
    ctx->pc = 0x51AD28u;
label_51ad28:
    // 0x51ad28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x51ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x51ad2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51ad2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51ad30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51AD30u;
    {
        const bool branch_taken_0x51ad30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51ad30) {
            ctx->pc = 0x51AD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD30u;
            // 0x51ad34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51AD44u;
            goto label_51ad44;
        }
    }
    ctx->pc = 0x51AD38u;
    // 0x51ad38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51AD38u;
    SET_GPR_U32(ctx, 31, 0x51AD40u);
    ctx->pc = 0x51AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD38u;
            // 0x51ad3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD40u; }
        if (ctx->pc != 0x51AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AD40u; }
        if (ctx->pc != 0x51AD40u) { return; }
    }
    ctx->pc = 0x51AD40u;
label_51ad40:
    // 0x51ad40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x51ad40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51ad44:
    // 0x51ad44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51ad44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51ad48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ad48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51ad4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ad4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51ad50: 0x3e00008  jr          $ra
    ctx->pc = 0x51AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD50u;
            // 0x51ad54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51AD58u;
    // 0x51ad58: 0x0  nop
    ctx->pc = 0x51ad58u;
    // NOP
    // 0x51ad5c: 0x0  nop
    ctx->pc = 0x51ad5cu;
    // NOP
}

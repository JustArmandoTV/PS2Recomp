#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172B00
// Address: 0x172b00 - 0x172b58
void sub_00172B00_0x172b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172B00_0x172b00");
#endif

    switch (ctx->pc) {
        case 0x172b24u: goto label_172b24;
        case 0x172b3cu: goto label_172b3c;
        default: break;
    }

    ctx->pc = 0x172b00u;

    // 0x172b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172b04: 0x24a6fc00  addiu       $a2, $a1, -0x400
    ctx->pc = 0x172b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x172b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b10: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x172b14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172b1c: 0xc05c9e4  jal         func_172790
    ctx->pc = 0x172B1Cu;
    SET_GPR_U32(ctx, 31, 0x172B24u);
    ctx->pc = 0x172B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172B1Cu;
            // 0x172b20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172790u;
    if (runtime->hasFunction(0x172790u)) {
        auto targetFn = runtime->lookupFunction(0x172790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B24u; }
        if (ctx->pc != 0x172B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172790_0x172790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B24u; }
        if (ctx->pc != 0x172B24u) { return; }
    }
    ctx->pc = 0x172B24u;
label_172b24:
    // 0x172b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x172b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b28: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172B28u;
    {
        const bool branch_taken_0x172b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B28u;
            // 0x172b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b28) {
            ctx->pc = 0x172B40u;
            goto label_172b40;
        }
    }
    ctx->pc = 0x172B30u;
    // 0x172b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b34: 0xc060948  jal         func_182520
    ctx->pc = 0x172B34u;
    SET_GPR_U32(ctx, 31, 0x172B3Cu);
    ctx->pc = 0x172B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172B34u;
            // 0x172b38: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182520u;
    if (runtime->hasFunction(0x182520u)) {
        auto targetFn = runtime->lookupFunction(0x182520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B3Cu; }
        if (ctx->pc != 0x172B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B3Cu; }
        if (ctx->pc != 0x172B3Cu) { return; }
    }
    ctx->pc = 0x172B3Cu;
label_172b3c:
    // 0x172b3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172b40:
    // 0x172b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x172B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B4Cu;
            // 0x172b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172B54u;
    // 0x172b54: 0x0  nop
    ctx->pc = 0x172b54u;
    // NOP
}

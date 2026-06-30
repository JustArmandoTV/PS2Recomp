#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCDD0
// Address: 0x1bcdd0 - 0x1bce38
void sub_001BCDD0_0x1bcdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCDD0_0x1bcdd0");
#endif

    switch (ctx->pc) {
        case 0x1bcde8u: goto label_1bcde8;
        default: break;
    }

    ctx->pc = 0x1bcdd0u;

    // 0x1bcdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bcdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bcdd4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcdd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcddc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bcddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcde0: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCDE0u;
    SET_GPR_U32(ctx, 31, 0x1BCDE8u);
    ctx->pc = 0x1BCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDE0u;
            // 0x1bcde4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    }
    ctx->pc = 0x1BCDE8u;
label_1bcde8:
    // 0x1bcde8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdec: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1BCDECu;
    {
        const bool branch_taken_0x1bcdec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdec) {
            ctx->pc = 0x1BCDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDECu;
            // 0x1bcdf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCE28u;
            goto label_1bce28;
        }
    }
    ctx->pc = 0x1BCDF4u;
    // 0x1bcdf4: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x1bcdf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1bcdf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcdfc: 0x90c4000b  lbu         $a0, 0xB($a2)
    ctx->pc = 0x1bcdfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x1bce00: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bce00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bce04: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x1bce04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bce08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bce0c: 0x90c6000d  lbu         $a2, 0xD($a2)
    ctx->pc = 0x1bce0cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x1bce10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bce10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bce14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bce18: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bce18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bce1c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1bce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bce20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bce24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bce24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bce28:
    // 0x1bce28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE2Cu;
            // 0x1bce30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCE34u;
    // 0x1bce34: 0x0  nop
    ctx->pc = 0x1bce34u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCF90
// Address: 0x1bcf90 - 0x1bd008
void sub_001BCF90_0x1bcf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCF90_0x1bcf90");
#endif

    switch (ctx->pc) {
        case 0x1bcfb0u: goto label_1bcfb0;
        default: break;
    }

    ctx->pc = 0x1bcf90u;

    // 0x1bcf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bcf94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcf98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcf9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bcf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bcfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bcfa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bcfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bcfa8: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCFA8u;
    SET_GPR_U32(ctx, 31, 0x1BCFB0u);
    ctx->pc = 0x1BCFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFA8u;
            // 0x1bcfac: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFB0u; }
        if (ctx->pc != 0x1BCFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFB0u; }
        if (ctx->pc != 0x1BCFB0u) { return; }
    }
    ctx->pc = 0x1BCFB0u;
label_1bcfb0:
    // 0x1bcfb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bcfb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfb4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1BCFB4u;
    {
        const bool branch_taken_0x1bcfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfb4) {
            ctx->pc = 0x1BCFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFB4u;
            // 0x1bcfb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCFF4u;
            goto label_1bcff4;
        }
    }
    ctx->pc = 0x1BCFBCu;
    // 0x1bcfbc: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x1bcfbcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1bcfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcfc4: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x1bcfc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bcfc8: 0x90650005  lbu         $a1, 0x5($v1)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x1bcfcc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1bcfccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1bcfd0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bcfd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bcfd4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1bcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1bcfd8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bcfdc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bcfe0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1bcfe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1bcfe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1bcfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bcfe8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bcfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bcfec: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1bcfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1bcff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcff4:
    // 0x1bcff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bcff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFFCu;
            // 0x1bd000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD004u;
    // 0x1bd004: 0x0  nop
    ctx->pc = 0x1bd004u;
    // NOP
}

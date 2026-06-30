#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCD58
// Address: 0x1bcd58 - 0x1bcdd0
void sub_001BCD58_0x1bcd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCD58_0x1bcd58");
#endif

    switch (ctx->pc) {
        case 0x1bcd78u: goto label_1bcd78;
        default: break;
    }

    ctx->pc = 0x1bcd58u;

    // 0x1bcd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bcd5c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcd64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bcd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bcd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bcd6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bcd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bcd70: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCD70u;
    SET_GPR_U32(ctx, 31, 0x1BCD78u);
    ctx->pc = 0x1BCD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD70u;
            // 0x1bcd74: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD78u; }
        if (ctx->pc != 0x1BCD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD78u; }
        if (ctx->pc != 0x1BCD78u) { return; }
    }
    ctx->pc = 0x1BCD78u;
label_1bcd78:
    // 0x1bcd78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bcd78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd7c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BCD7Cu;
    {
        const bool branch_taken_0x1bcd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD7Cu;
            // 0x1bcd80: 0x24660005  addiu       $a2, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd7c) {
            ctx->pc = 0x1BCDBCu;
            goto label_1bcdbc;
        }
    }
    ctx->pc = 0x1BCD84u;
    // 0x1bcd84: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1bcd84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bcd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bcd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bcd90: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1bcd90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1bcd94: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x1bcd94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1bcd98: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcd9c: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x1bcd9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1bcda0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcda4: 0x90c60004  lbu         $a2, 0x4($a2)
    ctx->pc = 0x1bcda4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1bcda8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcdac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bcdb0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcdb4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1bcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bcdb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1bcdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1bcdbc:
    // 0x1bcdbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcdbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcdc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcdc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDC8u;
            // 0x1bcdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCDD0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DD98
// Address: 0x12dd98 - 0x12de48
void sub_0012DD98_0x12dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD98_0x12dd98");
#endif

    switch (ctx->pc) {
        case 0x12ddfcu: goto label_12ddfc;
        case 0x12de10u: goto label_12de10;
        default: break;
    }

    ctx->pc = 0x12dd98u;

    // 0x12dd98: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x12dd9c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12dda0: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x12dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x12dda4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12dda8: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x12dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x12ddac: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x12ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x12ddb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddb4: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x12ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x12ddb8: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x12ddb8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ddbc: 0x8c8c0054  lw          $t4, 0x54($a0)
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12ddc0: 0x960b000e  lhu         $t3, 0xE($s0)
    ctx->pc = 0x12ddc0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12ddc4: 0x31effffd  andi        $t7, $t7, 0xFFFD
    ctx->pc = 0x12ddc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65533);
    // 0x12ddc8: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x12ddc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12ddcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd0: 0x8e0d0024  lw          $t5, 0x24($s0)
    ctx->pc = 0x12ddd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12ddd4: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x12ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12ddd8: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12ddd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12dddc: 0xa7ab000e  sh          $t3, 0xE($sp)
    ctx->pc = 0x12dddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 11));
    // 0x12dde0: 0xafae001c  sw          $t6, 0x1C($sp)
    ctx->pc = 0x12dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 14));
    // 0x12dde4: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x12dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x12dde8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x12dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12ddec: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x12ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x12ddf0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x12ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x12ddf4: 0xc04b792  jal         func_12DE48
    ctx->pc = 0x12DDF4u;
    SET_GPR_U32(ctx, 31, 0x12DDFCu);
    ctx->pc = 0x12DDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DDF4u;
            // 0x12ddf8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (runtime->hasFunction(0x12DE48u)) {
        auto targetFn = runtime->lookupFunction(0x12DE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDFCu; }
        if (ctx->pc != 0x12DDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DE48_0x12de48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDFCu; }
        if (ctx->pc != 0x12DDFCu) { return; }
    }
    ctx->pc = 0x12DDFCu;
label_12ddfc:
    // 0x12ddfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de00: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DE00u;
    {
        const bool branch_taken_0x12de00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE00u;
            // 0x12de04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de00) {
            ctx->pc = 0x12DE18u;
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DE08u;
    // 0x12de08: 0xc049db4  jal         func_1276D0
    ctx->pc = 0x12DE08u;
    SET_GPR_U32(ctx, 31, 0x12DE10u);
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE10u; }
        if (ctx->pc != 0x12DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE10u; }
        if (ctx->pc != 0x12DE10u) { return; }
    }
    ctx->pc = 0x12DE10u;
label_12de10:
    // 0x12de10: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12de10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12de14: 0x1e2880b  movn        $s1, $t7, $v0
    ctx->pc = 0x12de14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
label_12de18:
    // 0x12de18: 0x97af000c  lhu         $t7, 0xC($sp)
    ctx->pc = 0x12de18u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12de1c: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x12de1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x12de20: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DE20u;
    {
        const bool branch_taken_0x12de20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE20u;
            // 0x12de24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de20) {
            ctx->pc = 0x12DE34u;
            goto label_12de34;
        }
    }
    ctx->pc = 0x12DE28u;
    // 0x12de28: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12de28u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12de2c: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x12de2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
    // 0x12de30: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12de30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12de34:
    // 0x12de34: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x12de34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x12de38: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x12de38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x12de3c: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x12de3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x12de40: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE40u;
            // 0x12de44: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DE48u;
}

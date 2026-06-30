#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FE70
// Address: 0x18fe70 - 0x18ff60
void sub_0018FE70_0x18fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FE70_0x18fe70");
#endif

    switch (ctx->pc) {
        case 0x18ff38u: goto label_18ff38;
        default: break;
    }

    ctx->pc = 0x18fe70u;

    // 0x18fe70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18fe74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fe78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18fe7c: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x18fe7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x18fe80: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x18fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x18fe84: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18fe88: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18fe8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18fe90: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18fe94: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x18fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x18fe98: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x18fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x18fe9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x18fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x18fea0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x18fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x18fea4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x18fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x18fea8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x18fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x18feac: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18feacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18feb0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x18feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x18feb4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x18feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x18feb8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x18feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x18febc: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x18febcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x18fec0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x18fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x18fec4: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x18fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x18fec8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x18fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x18fecc: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x18feccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x18fed0: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x18fed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x18fed4: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x18fed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x18fed8: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x18fed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fedc: 0xa0850055  sb          $a1, 0x55($a0)
    ctx->pc = 0x18fedcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x18fee0: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x18fee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fee4: 0xa0800057  sb          $zero, 0x57($a0)
    ctx->pc = 0x18fee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fee8: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x18fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x18feec: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x18feecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fef0: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x18fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fef4: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x18fef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x18fef8: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x18fef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x18fefc: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x18fefcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ff00: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x18ff00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ff04: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x18ff04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ff08: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x18ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x18ff0c: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x18ff0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ff10: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x18ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ff14: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x18ff14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ff18: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF18u;
            // 0x18ff1c: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF20u;
    // 0x18ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF28u;
    // 0x18ff28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ff2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ff30: 0xc063fd8  jal         func_18FF60
    ctx->pc = 0x18FF30u;
    SET_GPR_U32(ctx, 31, 0x18FF38u);
    ctx->pc = 0x18FF60u;
    if (runtime->hasFunction(0x18FF60u)) {
        auto targetFn = runtime->lookupFunction(0x18FF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF38u; }
        if (ctx->pc != 0x18FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FF60_0x18ff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF38u; }
        if (ctx->pc != 0x18FF38u) { return; }
    }
    ctx->pc = 0x18FF38u;
label_18ff38:
    // 0x18ff38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18ff38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF3Cu;
    {
        const bool branch_taken_0x18ff3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF3Cu;
            // 0x18ff40: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff3c) {
            ctx->pc = 0x18FF50u;
            goto label_18ff50;
        }
    }
    ctx->pc = 0x18FF44u;
    // 0x18ff44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff48: 0x8063fec  j           func_18FFB0
    ctx->pc = 0x18FF48u;
    ctx->pc = 0x18FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF48u;
            // 0x18ff4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18FF50u;
label_18ff50:
    // 0x18ff50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff54: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF54u;
            // 0x18ff58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF5Cu;
    // 0x18ff5c: 0x0  nop
    ctx->pc = 0x18ff5cu;
    // NOP
}

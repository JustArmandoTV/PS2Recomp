#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA7A8
// Address: 0x1aa7a8 - 0x1aa898
void sub_001AA7A8_0x1aa7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA7A8_0x1aa7a8");
#endif

    switch (ctx->pc) {
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa864u: goto label_1aa864;
        default: break;
    }

    ctx->pc = 0x1aa7a8u;

    // 0x1aa7a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1aa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1aa7ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1aa7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa7b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1aa7b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa7bc: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1aa7c0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1aa7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1aa7c4: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x1aa7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x1aa7c8: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa7cc: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x1aa7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x1aa7d0: 0x24a6014c  addiu       $a2, $a1, 0x14C
    ctx->pc = 0x1aa7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
    // 0x1aa7d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aa7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1aa7d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1aa7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1aa7dc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1aa7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1aa7e0: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x1aa7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x1aa7e4: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1aa7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1aa7e8: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1aa7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1aa7ec: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1aa7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1aa7f0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1aa7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1aa7f4: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1aa7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1aa7f8: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1aa7fc: 0x0  nop
    ctx->pc = 0x1aa7fcu;
    // NOP
label_1aa800:
    // 0x1aa800: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1aa804: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1aa804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1aa808: 0x0  nop
    ctx->pc = 0x1aa808u;
    // NOP
    // 0x1aa80c: 0x0  nop
    ctx->pc = 0x1aa80cu;
    // NOP
    // 0x1aa810: 0x0  nop
    ctx->pc = 0x1aa810u;
    // NOP
    // 0x1aa814: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA814u;
    {
        const bool branch_taken_0x1aa814 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1AA818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA814u;
            // 0x1aa818: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa814) {
            ctx->pc = 0x1AA800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa800;
        }
    }
    ctx->pc = 0x1AA81Cu;
    // 0x1aa81c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa820: 0xaca00150  sw          $zero, 0x150($a1)
    ctx->pc = 0x1aa820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 0));
    // 0x1aa824: 0xaca20158  sw          $v0, 0x158($a1)
    ctx->pc = 0x1aa824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 2));
    // 0x1aa828: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA828u;
            // 0x1aa82c: 0xaca00154  sw          $zero, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA830u;
    // 0x1aa830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa83c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA83Cu;
    ctx->pc = 0x1AA840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA83Cu;
            // 0x1aa840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA844u;
    // 0x1aa844: 0x0  nop
    ctx->pc = 0x1aa844u;
    // NOP
    // 0x1aa848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa84c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa854: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa858: 0x8e021fec  lw          $v0, 0x1FEC($s0)
    ctx->pc = 0x1aa858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8172)));
    // 0x1aa85c: 0xc06aa26  jal         func_1AA898
    ctx->pc = 0x1AA85Cu;
    SET_GPR_U32(ctx, 31, 0x1AA864u);
    ctx->pc = 0x1AA860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA85Cu;
            // 0x1aa860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA898u;
    if (runtime->hasFunction(0x1AA898u)) {
        auto targetFn = runtime->lookupFunction(0x1AA898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA898_0x1aa898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    }
    ctx->pc = 0x1AA864u;
label_1aa864:
    // 0x1aa864: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa868: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA868u;
    {
        const bool branch_taken_0x1aa868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA868u;
            // 0x1aa86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa868) {
            ctx->pc = 0x1AA888u;
            goto label_1aa888;
        }
    }
    ctx->pc = 0x1AA870u;
    // 0x1aa870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa874: 0x34a50d0a  ori         $a1, $a1, 0xD0A
    ctx->pc = 0x1aa874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3338);
    // 0x1aa878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa87c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA87Cu;
    ctx->pc = 0x1AA880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA87Cu;
            // 0x1aa880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA884u;
    // 0x1aa884: 0x0  nop
    ctx->pc = 0x1aa884u;
    // NOP
label_1aa888:
    // 0x1aa888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa88c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa890: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA890u;
            // 0x1aa894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA898u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA000
// Address: 0x1ba000 - 0x1ba110
void sub_001BA000_0x1ba000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA000_0x1ba000");
#endif

    switch (ctx->pc) {
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0f0u: goto label_1ba0f0;
        case 0x1ba100u: goto label_1ba100;
        default: break;
    }

    ctx->pc = 0x1ba000u;

    // 0x1ba000: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA000u;
            // 0x1ba004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA008u;
    // 0x1ba008: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA008u;
            // 0x1ba00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA010u;
    // 0x1ba010: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA010u;
            // 0x1ba014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA018u;
    // 0x1ba018: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA018u;
            // 0x1ba01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA020u;
    // 0x1ba020: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA020u;
            // 0x1ba024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA028u;
    // 0x1ba028: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA028u;
            // 0x1ba02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA030u;
    // 0x1ba030: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA030u;
            // 0x1ba034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA038u;
    // 0x1ba038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba03c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ba03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ba040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba044: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x1ba044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x1ba048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba04c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1BA04Cu;
    ctx->pc = 0x1BA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA04Cu;
            // 0x1ba050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BA054u;
    // 0x1ba054: 0x0  nop
    ctx->pc = 0x1ba054u;
    // NOP
    // 0x1ba058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba05c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ba060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba064: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x1ba064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x1ba068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba06c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1BA06Cu;
    ctx->pc = 0x1BA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA06Cu;
            // 0x1ba070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BA074u;
    // 0x1ba074: 0x0  nop
    ctx->pc = 0x1ba074u;
    // NOP
    // 0x1ba078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba07c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ba07cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba084: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ba084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba088: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1ba08c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1ba08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1ba090: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ba090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA094u;
    {
        const bool branch_taken_0x1ba094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA094u;
            // 0x1ba098: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba094) {
            ctx->pc = 0x1BA0A8u;
            goto label_1ba0a8;
        }
    }
    ctx->pc = 0x1BA09Cu;
    // 0x1ba09c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1ba09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1ba0a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA0A0u;
    {
        const bool branch_taken_0x1ba0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0A0u;
            // 0x1ba0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0a0) {
            ctx->pc = 0x1BA0B0u;
            goto label_1ba0b0;
        }
    }
    ctx->pc = 0x1BA0A8u;
label_1ba0a8:
    // 0x1ba0a8: 0xc069908  jal         func_1A6420
    ctx->pc = 0x1BA0A8u;
    SET_GPR_U32(ctx, 31, 0x1BA0B0u);
    ctx->pc = 0x1BA0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0A8u;
            // 0x1ba0ac: 0x8c652148  lw          $a1, 0x2148($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6420u;
    if (runtime->hasFunction(0x1A6420u)) {
        auto targetFn = runtime->lookupFunction(0x1A6420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0B0u; }
        if (ctx->pc != 0x1BA0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6420_0x1a6420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0B0u; }
        if (ctx->pc != 0x1BA0B0u) { return; }
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0B4u;
            // 0x1ba0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA0BCu;
    // 0x1ba0bc: 0x0  nop
    ctx->pc = 0x1ba0bcu;
    // NOP
    // 0x1ba0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba0c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ba0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba0cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ba0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ba0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0d4: 0x8c852148  lw          $a1, 0x2148($a0)
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8520)));
    // 0x1ba0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba0dc: 0x8069920  j           func_1A6480
    ctx->pc = 0x1BA0DCu;
    ctx->pc = 0x1BA0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0DCu;
            // 0x1ba0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6480u;
    {
        auto targetFn = runtime->lookupFunction(0x1A6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BA0E4u;
    // 0x1ba0e4: 0x0  nop
    ctx->pc = 0x1ba0e4u;
    // NOP
    // 0x1ba0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0E8u;
            // 0x1ba0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA0F0u;
label_1ba0f0:
    // 0x1ba0f0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ba0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ba0f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ba0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ba0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0F8u;
            // 0x1ba0fc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA100u;
label_1ba100:
    // 0x1ba100: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ba100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ba104: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ba104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ba108: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA108u;
            // 0x1ba10c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA110u;
}

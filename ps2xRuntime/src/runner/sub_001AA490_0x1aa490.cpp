#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA490
// Address: 0x1aa490 - 0x1aa528
void sub_001AA490_0x1aa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA490_0x1aa490");
#endif

    switch (ctx->pc) {
        case 0x1aa4bcu: goto label_1aa4bc;
        case 0x1aa4dcu: goto label_1aa4dc;
        default: break;
    }

    ctx->pc = 0x1aa490u;

    // 0x1aa490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aa494: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1aa494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1aa498: 0x2491090c  addiu       $s1, $a0, 0x90C
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x1aa49c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1aa49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1aa4a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1aa4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1aa4a8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1aa4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1aa4ac: 0x8c921fec  lw          $s2, 0x1FEC($a0)
    ctx->pc = 0x1aa4acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8172)));
    // 0x1aa4b0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aa4b4: 0xc06497a  jal         func_1925E8
    ctx->pc = 0x1AA4B4u;
    SET_GPR_U32(ctx, 31, 0x1AA4BCu);
    ctx->pc = 0x1AA4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4B4u;
            // 0x1aa4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1925E8u;
    if (runtime->hasFunction(0x1925E8u)) {
        auto targetFn = runtime->lookupFunction(0x1925E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4BCu; }
        if (ctx->pc != 0x1AA4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001925E8_0x1925e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4BCu; }
        if (ctx->pc != 0x1AA4BCu) { return; }
    }
    ctx->pc = 0x1AA4BCu;
label_1aa4bc:
    // 0x1aa4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1aa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1aa4c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1aa4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aa4c8: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA4C8u;
    {
        const bool branch_taken_0x1aa4c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AA4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4C8u;
            // 0x1aa4cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4c8) {
            ctx->pc = 0x1AA4D4u;
            goto label_1aa4d4;
        }
    }
    ctx->pc = 0x1AA4D0u;
    // 0x1aa4d0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1aa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1aa4d4:
    // 0x1aa4d4: 0xc064994  jal         func_192650
    ctx->pc = 0x1AA4D4u;
    SET_GPR_U32(ctx, 31, 0x1AA4DCu);
    ctx->pc = 0x192650u;
    if (runtime->hasFunction(0x192650u)) {
        auto targetFn = runtime->lookupFunction(0x192650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4DCu; }
        if (ctx->pc != 0x1AA4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192650_0x192650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4DCu; }
        if (ctx->pc != 0x1AA4DCu) { return; }
    }
    ctx->pc = 0x1AA4DCu;
label_1aa4dc:
    // 0x1aa4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa4e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa4e4: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA4E4u;
    {
        const bool branch_taken_0x1aa4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa4e4) {
            ctx->pc = 0x1AA4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4E4u;
            // 0x1aa4e8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA4ECu;
            goto label_1aa4ec;
        }
    }
    ctx->pc = 0x1AA4ECu;
label_1aa4ec:
    // 0x1aa4ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1aa4f0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA4F0u;
    {
        const bool branch_taken_0x1aa4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa4f0) {
            ctx->pc = 0x1AA4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4F0u;
            // 0x1aa4f4: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA504u;
            goto label_1aa504;
        }
    }
    ctx->pc = 0x1AA4F8u;
    // 0x1aa4f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1aa4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1aa4fc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1aa4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1aa500: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1aa500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1aa504:
    // 0x1aa504: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA504u;
    {
        const bool branch_taken_0x1aa504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA504u;
            // 0x1aa508: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa504) {
            ctx->pc = 0x1AA514u;
            goto label_1aa514;
        }
    }
    ctx->pc = 0x1AA50Cu;
    // 0x1aa50c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1aa50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1aa510: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1aa510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1aa514:
    // 0x1aa514: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1aa514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa518: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1aa518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa51c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1aa51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aa520: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA520u;
            // 0x1aa524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA528u;
}
